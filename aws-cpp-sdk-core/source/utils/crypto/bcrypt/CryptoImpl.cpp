/*
  * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
  *
  * Licensed under the Apache License, Version 2.0 (the "License").
  * You may not use this file except in compliance with the License.
  * A copy of the License is located at
  *
  *  http://aws.amazon.com/apache2.0
  *
  * or in the "license" file accompanying this file. This file is distributed
  * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
  * express or implied. See the License for the specific language governing
  * permissions and limitations under the License.
  */


#include <aws/core/utils/crypto/bcrypt/CryptoImpl.h>

#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/crypto/Hash.h>
#include <aws/core/utils/HashingUtils.h>
#include <atomic>
#include <bcrypt.h> 
#include <winternl.h> 
#include <winerror.h> 

using namespace Aws::Utils;
using namespace Aws::Utils::Crypto;

namespace Aws
{
    namespace Utils
    {
        namespace Crypto
        {
            static const char* logTag = "CryptoHash";

            // RAII class for one-use-per-hash-call data used in Windows cryptographic hash implementations
            // Useful so we don't have to call a Cleanup function for every failure point
            class BCryptHashContext
            {
            public:

                BCryptHashContext(void* algorithmHandle, PBYTE hashObject, DWORD hashObjectLength) :
                    m_hashHandle(nullptr),
                    m_isValid(false)
                {
                    NTSTATUS status = BCryptCreateHash(algorithmHandle, &m_hashHandle, hashObject, hashObjectLength, nullptr, 0, 0);
                    m_isValid = NT_SUCCESS(status);
                }

                BCryptHashContext(void* algorithmHandle, PBYTE hashObject, DWORD hashObjectLength, const ByteBuffer& secret) :
                    m_hashHandle(nullptr),
                    m_isValid(false)
                {
                    NTSTATUS status = BCryptCreateHash(algorithmHandle, &m_hashHandle, hashObject, hashObjectLength, secret.GetUnderlyingData(), (ULONG)secret.GetLength(), 0);
                    m_isValid = NT_SUCCESS(status);
                }

                ~BCryptHashContext()
                {
                    if (m_hashHandle)
                    {
                        BCryptDestroyHash(m_hashHandle);
                    }
                }

                bool IsValid() const { return m_isValid; }

                BCRYPT_HASH_HANDLE m_hashHandle;
                bool m_isValid;
            };



            BCryptHashImpl::BCryptHashImpl(LPCWSTR algorithmName, bool isHMAC) :
                m_algorithmHandle(nullptr),
                m_hashBufferLength(0),
                m_hashBuffer(nullptr),
                m_hashObjectLength(0),
                m_hashObject(nullptr),
                m_algorithmMutex()
            {
                NTSTATUS status = BCryptOpenAlgorithmProvider(&m_algorithmHandle, algorithmName, MS_PRIMITIVE_PROVIDER, isHMAC ? BCRYPT_ALG_HANDLE_HMAC_FLAG : 0);
                if (!NT_SUCCESS(status))
                {
                    AWS_LOGSTREAM_ERROR(logTag, "Failed initializing BCryptOpenAlgorithmProvider for " << algorithmName);
                    return;
                }

                DWORD resultLength = 0;
                status = BCryptGetProperty(m_algorithmHandle, BCRYPT_HASH_LENGTH, (PBYTE)&m_hashBufferLength, sizeof(m_hashBufferLength), &resultLength, 0);
                if (!NT_SUCCESS(status) || m_hashBufferLength <= 0)
                {
                    AWS_LOG_ERROR(logTag, "Error computing hash buffer length.");
                    return;
                }

                m_hashBuffer = Aws::NewArray<BYTE>(m_hashBufferLength, logTag);
                if (!m_hashBuffer)
                {
                    AWS_LOG_ERROR(logTag, "Error allocating hash buffer.");
                    return;
                }

                resultLength = 0;
                status = BCryptGetProperty(m_algorithmHandle, BCRYPT_OBJECT_LENGTH, (PBYTE)&m_hashObjectLength, sizeof(m_hashObjectLength), &resultLength, 0);
                if (!NT_SUCCESS(status) || m_hashObjectLength <= 0)
                {
                    AWS_LOG_ERROR(logTag, "Error computing hash object length.");
                    return;
                }

                m_hashObject = Aws::NewArray<BYTE>(m_hashObjectLength, logTag);
                if (!m_hashObject)
                {
                    AWS_LOG_ERROR(logTag, "Error allocating hash object.");
                    return;
                }
            }

            BCryptHashImpl::~BCryptHashImpl()
            {
                Aws::DeleteArray(m_hashObject);
                Aws::DeleteArray(m_hashBuffer);

                if (m_algorithmHandle)
                {
                    BCryptCloseAlgorithmProvider(m_algorithmHandle, 0);
                }
            }

            HashResult BCryptHashImpl::HashData(const BCryptHashContext& context, PBYTE data, ULONG dataLength)
            {
                NTSTATUS status = BCryptHashData(context.m_hashHandle, data, dataLength, 0);
                if (!NT_SUCCESS(status))
                {
                    AWS_LOG_ERROR(logTag, "Error computing hash.");
                    return HashResult();
                }

                status = BCryptFinishHash(context.m_hashHandle, m_hashBuffer, m_hashBufferLength, 0);
                if (!NT_SUCCESS(status))
                {
                    AWS_LOG_ERROR(logTag, "Error obtaining computed hash");
                    return HashResult();
                }

                return HashResult(ByteBuffer(m_hashBuffer, m_hashBufferLength));
            }

            HashResult BCryptHashImpl::Calculate(const Aws::String& str)
            {
                if (!IsValid())
                {
                    return HashResult();
                }

                std::lock_guard<std::mutex> locker(m_algorithmMutex);

                BCryptHashContext context(m_algorithmHandle, m_hashObject, m_hashObjectLength);
                if (!context.IsValid())
                {
                    AWS_LOG_ERROR(logTag, "Error creating hash handle.");
                    return HashResult();
                }

                return HashData(context, (PBYTE)str.c_str(), static_cast<ULONG>(str.length()));
            }

            HashResult BCryptHashImpl::Calculate(const ByteBuffer& toHash, const ByteBuffer& secret)
            {
                if (!IsValid())
                {
                    return HashResult();
                }

                std::lock_guard<std::mutex> locker(m_algorithmMutex);

                BCryptHashContext context(m_algorithmHandle, m_hashObject, m_hashObjectLength, secret);
                if (!context.IsValid())
                {
                    AWS_LOG_ERROR(logTag, "Error creating hash handle.");
                    return HashResult();
                }

                return HashData(context, static_cast<PBYTE>(toHash.GetUnderlyingData()), static_cast<ULONG>(toHash.GetLength()));
            }

            bool BCryptHashImpl::IsValid() const
            {
                return m_hashBuffer != nullptr && m_hashBufferLength > 0 && m_hashObject != nullptr && m_hashObjectLength > 0;
            }

            bool BCryptHashImpl::HashStream(Aws::IStream& stream)
            {
                BCryptHashContext context(m_algorithmHandle, m_hashObject, m_hashObjectLength);
                if (!context.IsValid())
                {
                    AWS_LOG_ERROR(logTag, "Error creating hash handle.");
                    return false;
                }

                char streamBuffer[Aws::Utils::Crypto::Hash::INTERNAL_HASH_STREAM_BUFFER_SIZE];
                NTSTATUS status = 0;
                stream.seekg(0, stream.beg);
                while (stream.good())
                {
                    stream.read(streamBuffer, Aws::Utils::Crypto::Hash::INTERNAL_HASH_STREAM_BUFFER_SIZE);
                    std::streamsize bytesRead = stream.gcount();
                    if (bytesRead > 0)
                    {
                        status = BCryptHashData(context.m_hashHandle, (PBYTE)streamBuffer, (ULONG)bytesRead, 0);
                        if (!NT_SUCCESS(status))
                        {
                            AWS_LOG_ERROR(logTag, "Error computing hash.");
                            return false;
                        }
                    }
                }

                if (!stream.eof())
                {
                    return false;
                }

                status = BCryptFinishHash(context.m_hashHandle, m_hashBuffer, m_hashBufferLength, 0);
                if (!NT_SUCCESS(status))
                {
                    AWS_LOG_ERROR(logTag, "Error obtaining computed hash");
                    return false;
                }

                return true;
            }

            HashResult BCryptHashImpl::Calculate(Aws::IStream& stream)
            {
                if (!IsValid())
                {
                    return HashResult();
                }

                std::lock_guard<std::mutex> locker(m_algorithmMutex);

                auto startingPos = stream.tellg();

                bool success = HashStream(stream);
                if (success)
                {
                    stream.clear();
                }

                stream.seekg(startingPos, stream.beg);

                if (!success)
                {
                    return HashResult();
                }

                return HashResult(ByteBuffer(m_hashBuffer, m_hashBufferLength));
            }

            MD5BcryptImpl::MD5BcryptImpl() :
                m_impl(BCRYPT_MD5_ALGORITHM, false)
            {
            }

            HashResult MD5BcryptImpl::Calculate(const Aws::String& str)
            {
                return m_impl.Calculate(str);
            }

            HashResult MD5BcryptImpl::Calculate(Aws::IStream& stream)
            {
                return m_impl.Calculate(stream);
            }

            Sha256BcryptImpl::Sha256BcryptImpl() :
                m_impl(BCRYPT_SHA256_ALGORITHM, false)
            {
            }

            HashResult Sha256BcryptImpl::Calculate(const Aws::String& str)
            {
                return m_impl.Calculate(str);
            }

            HashResult Sha256BcryptImpl::Calculate(Aws::IStream& stream)
            {
                return m_impl.Calculate(stream);
            }

            Sha256HMACBcryptImpl::Sha256HMACBcryptImpl() :
                m_impl(BCRYPT_SHA256_ALGORITHM, true)
            {
            }

            HashResult Sha256HMACBcryptImpl::Calculate(const ByteBuffer& toSign, const ByteBuffer& secret)
            {
                return m_impl.Calculate(toSign, secret);
            }

            static const char* SYM_CIPHER_TAG = "BCryptSymmetricCipherImpl";

            BCryptSymmetricCipher::BCryptSymmetricCipher(const CryptoBuffer& key, size_t blockSizeBytes, bool ctrMode) :
                SymmetricCipher(key, blockSizeBytes, ctrMode), m_encDecInitialized(false), m_encryptionMode(false),
                m_decryptionMode(false), m_authInfoPtr(nullptr)
            {
                Init();
            }

            BCryptSymmetricCipher::BCryptSymmetricCipher(BCryptSymmetricCipher&& toMove) : SymmetricCipher(std::move(toMove)),
                m_encDecInitialized(false), m_authInfoPtr(nullptr)
            {
                m_algHandle = toMove.m_algHandle;
                m_keyHandle = toMove.m_keyHandle;
                toMove.m_algHandle = nullptr;
                toMove.m_keyHandle = nullptr;

                m_encDecInitialized = toMove.m_encDecInitialized;
                m_encryptionMode = toMove.m_encryptionMode;
                m_decryptionMode = toMove.m_decryptionMode;
            }

            BCryptSymmetricCipher::BCryptSymmetricCipher(CryptoBuffer&& key, CryptoBuffer&& initializationVector, CryptoBuffer&& tag) :
                SymmetricCipher(std::move(key), std::move(initializationVector), std::move(tag)),
                m_encDecInitialized(false),
                m_encryptionMode(false), m_decryptionMode(false), m_authInfoPtr(nullptr)
            {
                Init();
            }

            BCryptSymmetricCipher::BCryptSymmetricCipher(const CryptoBuffer& key, const CryptoBuffer& initializationVector,
                const CryptoBuffer& tag) :
                SymmetricCipher(key, initializationVector, tag), m_encDecInitialized(false),
                m_encryptionMode(false), m_decryptionMode(false), m_authInfoPtr(nullptr)
            {
                Init();
            }

            BCryptSymmetricCipher::~BCryptSymmetricCipher()
            {
                if (m_keyHandle)
                {
                    BCryptDestroyKey(m_keyHandle);
                    m_keyHandle = nullptr;
                }

                if (m_algHandle)
                {
                    BCryptCloseAlgorithmProvider(m_algHandle, 0);
                    m_algHandle = nullptr;
                }
            }

            void BCryptSymmetricCipher::Init()
            {
                m_workingIv = m_initializationVector;
            }


            void BCryptSymmetricCipher::InitKey()
            {
                if (m_algHandle)
                {
                    NTSTATUS status = 0;

                    BCRYPT_KEY_DATA_BLOB_HEADER keyData;
                    keyData.dwMagic = BCRYPT_KEY_DATA_BLOB_MAGIC;
                    keyData.dwVersion = BCRYPT_KEY_DATA_BLOB_VERSION1;
                    keyData.cbKeyData = static_cast<ULONG>(m_key.GetLength());

                    CryptoBuffer pbInputBuffer(sizeof(keyData) + m_key.GetLength());
                    memcpy(pbInputBuffer.GetUnderlyingData(), &keyData, sizeof(keyData));
                    memcpy(pbInputBuffer.GetUnderlyingData() + sizeof(keyData), m_key.GetUnderlyingData(), m_key.GetLength());

                    status = BCryptImportKey(m_algHandle, nullptr, BCRYPT_KEY_DATA_BLOB, &m_keyHandle, nullptr, 0, pbInputBuffer.GetUnderlyingData(), static_cast<ULONG>(pbInputBuffer.GetLength()), 0);
                    if (!NT_SUCCESS(status))
                    {
                        m_failure = true;
                        AWS_LOGSTREAM_ERROR(SYM_CIPHER_TAG, "Failed to set symmetric key with status code " << status);
                        return;
                    }

                    if(!m_authInfoPtr)
                    {
                        status = BCryptSetProperty(m_keyHandle, BCRYPT_INITIALIZATION_VECTOR, m_initializationVector.GetUnderlyingData(), static_cast<ULONG>(m_initializationVector.GetLength()), 0);

                        if (!NT_SUCCESS(status))
                        {
                            m_failure = true;
                            AWS_LOGSTREAM_ERROR(SYM_CIPHER_TAG, "Failed to set symetric key initialization vector with status code " << status);
                            return;
                        }
                    }
                }
            }

            void BCryptSymmetricCipher::CheckInitEncryptor()
            {
                assert(!m_failure);
                assert(!m_decryptionMode);

                if (!m_encDecInitialized)
                {
                    InitEncryptor_Internal();
                    m_encryptionMode = true;
                    m_encDecInitialized = true;
                    InitKey();
                }
            }

            void BCryptSymmetricCipher::CheckInitDecryptor()
            {
                assert(!m_failure);
                assert(!m_encryptionMode);

                if (!m_encDecInitialized)
                {
                    InitDecryptor_Internal();
                    m_decryptionMode = true;
                    m_encDecInitialized = true;
                    InitKey();
                }
            }

            CryptoBuffer BCryptSymmetricCipher::EncryptBuffer(const CryptoBuffer& unEncryptedData)
            {
                CheckInitEncryptor();

                if (m_failure)
                {
                    AWS_LOGSTREAM_FATAL(SYM_CIPHER_TAG, "Cipher not properly initialized for encryption. Aborting");
                    return CryptoBuffer();
                }

                if (unEncryptedData.GetLength() == 0)
                {
                    return CryptoBuffer();
                }
                             
                ULONG lengthWritten = static_cast<ULONG>(unEncryptedData.GetLength() + GetBlockSizeBytes());
                CryptoBuffer encryptedText(static_cast<size_t>(lengthWritten));

                PUCHAR iv = nullptr;
                ULONG ivSize = 0;

                if (m_authInfoPtr)
                {
                    iv = m_workingIv.GetUnderlyingData();
                    ivSize = static_cast<ULONG>(m_workingIv.GetLength());
                }

                //iv was set on the key itself, so we don't need to pass it here.
                NTSTATUS status = BCryptEncrypt(m_keyHandle, unEncryptedData.GetUnderlyingData(), (ULONG)unEncryptedData.GetLength(),
                    m_authInfoPtr, iv, ivSize, encryptedText.GetUnderlyingData(), (ULONG)encryptedText.GetLength(), &lengthWritten, m_flags);

                if (!NT_SUCCESS(status))
                {
                    m_failure = true;
                    AWS_LOGSTREAM_ERROR(SYM_CIPHER_TAG, "Failed to compute encrypted output with error code " << status);
                    return CryptoBuffer();
                }

                if (static_cast<size_t>(lengthWritten) < encryptedText.GetLength())
                {
                    return CryptoBuffer(encryptedText.GetUnderlyingData(), static_cast<size_t>(lengthWritten));
                }

                return encryptedText;
            }

            CryptoBuffer BCryptSymmetricCipher::FinalizeEncryption()
            {
                return CryptoBuffer();
            }

            CryptoBuffer BCryptSymmetricCipher::DecryptBuffer(const CryptoBuffer& encryptedData)
            {
                CheckInitDecryptor();

                if (m_failure)
                {
                    AWS_LOGSTREAM_FATAL(SYM_CIPHER_TAG, "Cipher not properly initialized for decryption. Aborting");
                    return CryptoBuffer();
                }

                if (encryptedData.GetLength() == 0)
                {
                    return CryptoBuffer();
                }

                PUCHAR iv = nullptr;
                ULONG ivSize = 0;

                if (m_authInfoPtr)
                {
                    iv = m_workingIv.GetUnderlyingData();
                    ivSize = static_cast<ULONG>(m_workingIv.GetLength());
                }

                ULONG lengthWritten = static_cast<ULONG>(encryptedData.GetLength() + GetBlockSizeBytes());
                CryptoBuffer decryptedText(static_cast<size_t>(lengthWritten));

                //iv was set on the key itself, so we don't need to pass it here.
                NTSTATUS status = BCryptDecrypt(m_keyHandle, encryptedData.GetUnderlyingData(), (ULONG)encryptedData.GetLength(),
                    m_authInfoPtr, iv, ivSize, decryptedText.GetUnderlyingData(), (ULONG)decryptedText.GetLength(), &lengthWritten, m_flags);

                if (!NT_SUCCESS(status))
                {
                    m_failure = true;
                    AWS_LOGSTREAM_ERROR(SYM_CIPHER_TAG, "Failed to compute encrypted output with error code " << status);
                    return CryptoBuffer();
                }

                if (static_cast<size_t>(lengthWritten) < decryptedText.GetLength())
                {
                    return CryptoBuffer(decryptedText.GetUnderlyingData(), static_cast<size_t>(lengthWritten));
                }

                return decryptedText;
            }

            CryptoBuffer BCryptSymmetricCipher::FinalizeDecryption()
            {
                return CryptoBuffer();
            }

            size_t AES_CBC_Cipher_BCrypt::BlockSizeBytes = 16;
            size_t AES_CBC_Cipher_BCrypt::KeyLengthBits = 256;

            AES_CBC_Cipher_BCrypt::AES_CBC_Cipher_BCrypt(const CryptoBuffer& key) : BCryptSymmetricCipher(key, BlockSizeBytes)
            {
            }

            AES_CBC_Cipher_BCrypt::AES_CBC_Cipher_BCrypt(CryptoBuffer&& key, CryptoBuffer&& initializationVector) : BCryptSymmetricCipher(key, initializationVector)
            {
            }

            AES_CBC_Cipher_BCrypt::AES_CBC_Cipher_BCrypt(const CryptoBuffer& key, const CryptoBuffer& initializationVector) : BCryptSymmetricCipher(key, initializationVector)
            {
            }

            static const char* CBC_LOG_TAG = "BCrypt_AES_CBC_Cipher";
            static const unsigned char CBC_FINAL_BLOCK[16] = { 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10 };
            
            void AES_CBC_Cipher_BCrypt::InitEncryptor_Internal()
            {
                //due to odd BCrypt api behavior, we have to manually handle the padding, however we are producing padded output.
                m_flags = 0;
                NTSTATUS status = BCryptOpenAlgorithmProvider(&m_algHandle, BCRYPT_AES_ALGORITHM, nullptr, 0);

                if (!NT_SUCCESS(status))
                {
                    m_failure = true;
                    AWS_LOGSTREAM_ERROR(CBC_LOG_TAG, "Failed to initialize encryptor with status code " << status);
                }

                status = BCryptSetProperty(m_algHandle, BCRYPT_CHAINING_MODE, (PUCHAR)BCRYPT_CHAIN_MODE_CBC, static_cast<ULONG>(wcslen(BCRYPT_CHAIN_MODE_CBC) + 1), 0);
                if (!NT_SUCCESS(status))
                {
                    m_failure = true;
                    AWS_LOGSTREAM_ERROR(CBC_LOG_TAG, "Failed to initialize encryptor chaining mode with status code " << status);
                }
            }

            void AES_CBC_Cipher_BCrypt::InitDecryptor_Internal()
            {
                m_flags = 0;
                NTSTATUS status = BCryptOpenAlgorithmProvider(&m_algHandle, BCRYPT_AES_ALGORITHM, nullptr, 0);

                if (!NT_SUCCESS(status))
                {
                    m_failure = true;
                    AWS_LOGSTREAM_ERROR(CBC_LOG_TAG, "Failed to initialize decryptor with status code " << status);
                }

                status = BCryptSetProperty(m_algHandle, BCRYPT_CHAINING_MODE, (PUCHAR)BCRYPT_CHAIN_MODE_CBC, static_cast<ULONG>(wcslen(BCRYPT_CHAIN_MODE_CBC) + 1), 0);
                if (!NT_SUCCESS(status))
                {
                    m_failure = true;
                    AWS_LOGSTREAM_ERROR(CBC_LOG_TAG, "Failed to initialize decryptor chaining mode with status code " << status);
                }
            }

            /**
             * This is needlessly complicated due to the way BCrypt handles CBC mode. It assumes that you will only make one call to BCryptEncrypt and as a result
             * appends the padding to the output of every call. The simplest way around this is to have an extra 16 byte block sitting around. During EncryptBuffer calls
             * we don't use padding at all, we enforce that we only pass multiples of 16 bytes to BCryptEncrypt. Anything extra goes into either the next EncryptBuffer call
             * or is handled in the Finalize call.  On the very last call, we add the padding back. This is what the other Crypto APIs such as OpenSSL and CommonCrypto do under the hood anyways.
             */
            CryptoBuffer AES_CBC_Cipher_BCrypt::EncryptBuffer(const CryptoBuffer& unEncryptedData)
            {
                m_flags = 0;

                CryptoBuffer toEncrypt;

                if (m_blockOverflow.GetLength() > 0)
                {
                    toEncrypt = CryptoBuffer({ (ByteBuffer*)&m_blockOverflow, (ByteBuffer*)&unEncryptedData });
                    m_blockOverflow = CryptoBuffer();
                }
                else
                {
                    toEncrypt = unEncryptedData;
                }

                auto overflow = toEncrypt.GetLength() % BlockSizeBytes;
                if (overflow == 0)
                {
                    m_lastBlockNeedsPadding = true;
                    return BCryptSymmetricCipher::EncryptBuffer(toEncrypt);
                }
                else
                {
                    m_lastBlockNeedsPadding = false;
                    m_blockOverflow = CryptoBuffer(toEncrypt.GetUnderlyingData() + toEncrypt.GetLength() - overflow, overflow);
                    return BCryptSymmetricCipher::EncryptBuffer(CryptoBuffer(toEncrypt.GetUnderlyingData(), toEncrypt.GetLength() - overflow));
                }
            }

            /**
             * If we had actual data that overflowed a block left over from the packing, then let BCrypt handle the padding.
             * Otherwise, we have to manally encrypt the padding indicating that a full block is in the previous block.
             */
            CryptoBuffer AES_CBC_Cipher_BCrypt::FinalizeEncryption()
            {
                if (m_blockOverflow.GetLength() > 0)
                {
                    m_flags = BCRYPT_BLOCK_PADDING;
                    return BCryptSymmetricCipher::EncryptBuffer(m_blockOverflow);
                }

                if (m_lastBlockNeedsPadding)
                {
                    m_flags = 0;
                    return BCryptSymmetricCipher::EncryptBuffer(CryptoBuffer(CBC_FINAL_BLOCK, BlockSizeBytes));
                }

                return CryptoBuffer();
            }

            /**
             * We have a similar compilication on decryption, but we can be certain that anything encrypted
             * with AES CBC is already block aligned. We'll check at the end if our left over buffer has any 
             * non-padded data in it and return it. We turn padding off and then handle the padding manually
             * at the end.           
             */
            CryptoBuffer AES_CBC_Cipher_BCrypt::DecryptBuffer(const CryptoBuffer& encryptedData)
            {
                m_flags = 0;
                CryptoBuffer toDecrypt;

                //if we've been called again, then the candidate for the final padding block is actually part of the message-- add it back
                //Also, add the overflow back
                //[ padding candidate ] [ overflow ] [ new encrypted data ]
                if (m_fullBlockPaddingCandidate.GetLength() > 0 || m_blockOverflow.GetLength() > 0)
                {
                    toDecrypt = CryptoBuffer({ (ByteBuffer*)&m_fullBlockPaddingCandidate, (ByteBuffer*)&m_blockOverflow, (ByteBuffer*)&encryptedData });                    
                    m_fullBlockPaddingCandidate = CryptoBuffer();
                    m_blockOverflow = CryptoBuffer();
                }               
                else
                {
                    toDecrypt = encryptedData;
                }               

                auto overflow = toDecrypt.GetLength() % BlockSizeBytes;
                //we need to trim to multiple of 16 bytes
                if (overflow != 0)
                {    
                    m_blockOverflow = CryptoBuffer(toDecrypt.GetUnderlyingData() + toDecrypt.GetLength() - overflow, overflow);
                    toDecrypt = CryptoBuffer(toDecrypt.GetUnderlyingData(), toDecrypt.GetLength() - overflow);
                }                           
                
                //we don't know if this is the last block or not, so treat it as if it is and come back to it in next run
                //or in the finalize call.
                if(toDecrypt.GetLength() == BlockSizeBytes)
                {
                    m_fullBlockPaddingCandidate = toDecrypt;
                    toDecrypt = CryptoBuffer();
                }
                //We have some data that we can be certain isn't the final padded block, trim the last 16 bytes off and set it aside
                //as potential padding. Decrypt the rest and return it.
                else if(toDecrypt.GetLength() > BlockSizeBytes)
                {
                    m_fullBlockPaddingCandidate = CryptoBuffer(toDecrypt.GetUnderlyingData() + (toDecrypt.GetLength() - BlockSizeBytes), BlockSizeBytes);
                    toDecrypt = CryptoBuffer(toDecrypt.GetUnderlyingData(), toDecrypt.GetLength() - BlockSizeBytes);
                }

                if(toDecrypt.GetLength() >= BlockSizeBytes)
                {
                    return BCryptSymmetricCipher::DecryptBuffer(toDecrypt);
                }

                return CryptoBuffer();               
            }

            CryptoBuffer AES_CBC_Cipher_BCrypt::FinalizeDecryption()
            {
                if (m_fullBlockPaddingCandidate.GetLength() > 0 )
                {                    
                    CryptoBuffer paddingBlock = BCryptSymmetricCipher::DecryptBuffer(m_fullBlockPaddingCandidate);
                    //on a pure padded block, the value will be CBC_FINAL_BLOCK, we can actually just throw that completely away.
                    //otherwise unpack the data.
                    if (paddingBlock != CryptoBuffer(CBC_FINAL_BLOCK, BlockSizeBytes))
                    {
                        //pkcs#7. look at the last character in the buffer. It will be the number of bytes of padding.
                        unsigned char lastChar = paddingBlock[BlockSizeBytes - 1];
                        if(static_cast<size_t>(lastChar) <= BlockSizeBytes)
                        {
                            return CryptoBuffer(paddingBlock.GetUnderlyingData(), BlockSizeBytes - static_cast<size_t>(lastChar));
                        }
                    }
                }
                return CryptoBuffer();
            }

            size_t AES_CBC_Cipher_BCrypt::GetBlockSizeBytes() const
            {
                return BlockSizeBytes;
            }

            size_t AES_CBC_Cipher_BCrypt::GetKeyLengthBits() const
            {
                return KeyLengthBits;
            }

            static const char* CTR_LOG_TAG = "BCrypt_AES_CTR_Cipher";
            size_t AES_CTR_Cipher_BCrypt::BlockSizeBytes = 16;
            size_t AES_CTR_Cipher_BCrypt::KeyLengthBits = 256;

            AES_CTR_Cipher_BCrypt::AES_CTR_Cipher_BCrypt(const CryptoBuffer& key) : BCryptSymmetricCipher(key, BlockSizeBytes, true)
            {
            }

            AES_CTR_Cipher_BCrypt::AES_CTR_Cipher_BCrypt(CryptoBuffer&& key, CryptoBuffer&& initializationVector) : BCryptSymmetricCipher(key, initializationVector)
            {
            }

            AES_CTR_Cipher_BCrypt::AES_CTR_Cipher_BCrypt(const CryptoBuffer& key, const CryptoBuffer& initializationVector) : BCryptSymmetricCipher(key, initializationVector)
            {
            }

            /**
             * Windows doesn't expose CTR mode. We can however, build it manually from ECB. Here, split each
             * buffer into 16 byte chunks, for each complete buffer encrypt the counter and xor it against the unencrypted
             * text. Save anything left over for the next run.
             */
            CryptoBuffer AES_CTR_Cipher_BCrypt::EncryptBuffer(const CryptoBuffer& unEncryptedData)
            {
                CheckInitEncryptor();

                if (m_failure)
                {
                    AWS_LOGSTREAM_FATAL(CTR_LOG_TAG, "Cipher not properly initialized for encryption. Aborting");
                    return CryptoBuffer();
                }

                size_t bytesWritten = 0;
                Aws::Vector<ByteBuffer*> finalBufferSet(0);

                CryptoBuffer bufferToEncrypt;

                if (m_blockOverflow.GetLength() > 0 && &m_blockOverflow != &unEncryptedData)
                {
                    bufferToEncrypt = CryptoBuffer({ (ByteBuffer*)&m_blockOverflow, (ByteBuffer*)&unEncryptedData });
                    m_blockOverflow = CryptoBuffer();
                }
                else
                {
                    bufferToEncrypt = unEncryptedData;
                }

                Aws::Utils::Array<CryptoBuffer> slicedBuffers;

                if (bufferToEncrypt.GetLength() > BlockSizeBytes)
                {
                    slicedBuffers = bufferToEncrypt.Slice(BlockSizeBytes);
                }
                else
                {
                    slicedBuffers = Aws::Utils::Array<CryptoBuffer>(1u);
                    slicedBuffers[0] = bufferToEncrypt;
                }

                finalBufferSet = Aws::Vector<ByteBuffer*>(slicedBuffers.GetLength());
                InitBuffersToNull(finalBufferSet);

                for (size_t i = 0; i < slicedBuffers.GetLength(); ++i)
                {
                    if (slicedBuffers[i].GetLength() == BlockSizeBytes || (m_blockOverflow.GetLength() > 0 && slicedBuffers.GetLength() == 1))
                    {
                        ULONG lengthWritten = static_cast<ULONG>(BlockSizeBytes);
                        CryptoBuffer encryptedText(BlockSizeBytes);

                        NTSTATUS status = BCryptEncrypt(m_keyHandle, m_workingIv.GetUnderlyingData(), (ULONG)m_workingIv.GetLength(),
                            nullptr, nullptr, 0, encryptedText.GetUnderlyingData(), (ULONG)encryptedText.GetLength(), &lengthWritten, m_flags);

                        if (!NT_SUCCESS(status))
                        {
                            m_failure = true;
                            AWS_LOGSTREAM_ERROR(CTR_LOG_TAG, "Failed to compute encrypted output with error code " << status);
                            CleanupBuffers(finalBufferSet);
                            return CryptoBuffer();
                        }

                        CryptoBuffer* newBuffer = Aws::New<CryptoBuffer>(CTR_LOG_TAG, BlockSizeBytes);
                        *newBuffer = slicedBuffers[i] ^ encryptedText;
                        finalBufferSet[i] = newBuffer;
                        IncrementCounter(m_workingIv);                        
                        bytesWritten += static_cast<size_t>(lengthWritten);
                    }
                    else
                    {
                        m_blockOverflow = slicedBuffers[i];
                        CryptoBuffer* newBuffer = Aws::New<CryptoBuffer>(CTR_LOG_TAG, 0);
                        finalBufferSet[i] = newBuffer;
                    }
                }

                CryptoBuffer returnBuffer(std::move(finalBufferSet));
                CleanupBuffers(finalBufferSet);

                return returnBuffer;
            }

            /**
             * In case we didn't have an even 16 byte multiple for the message, send the last 
             * remaining data.
             */
            CryptoBuffer AES_CTR_Cipher_BCrypt::FinalizeEncryption()
            {
                if (m_blockOverflow.GetLength())
                {
                    CryptoBuffer&& returnBuffer = EncryptBuffer(m_blockOverflow);
                    m_blockOverflow = CryptoBuffer();
                    return returnBuffer;
                }

                return CryptoBuffer();
            }

            /**
            * Windows doesn't expose CTR mode. We can however, build it manually from ECB. Here, split each
            * buffer into 16 byte chunks, for each complete buffer encrypt the counter and xor it against the encrypted
            * text. Save anything left over for the next run.
            */
            CryptoBuffer AES_CTR_Cipher_BCrypt::DecryptBuffer(const CryptoBuffer& encryptedData)
            {
                CheckInitDecryptor();

                if (m_failure)
                {
                    AWS_LOGSTREAM_FATAL(CTR_LOG_TAG, "Cipher not properly initialized for encryption. Aborting");
                    return CryptoBuffer();
                }

                size_t bytesWritten = 0;
                Aws::Vector<ByteBuffer*> finalBufferSet(0);

                CryptoBuffer bufferToDecrypt;

                if (m_blockOverflow.GetLength() > 0 && &m_blockOverflow != &encryptedData)
                {
                    bufferToDecrypt = CryptoBuffer({ (ByteBuffer*)&m_blockOverflow, (ByteBuffer*)&encryptedData });
                    m_blockOverflow = CryptoBuffer();
                }
                else
                {
                    bufferToDecrypt = encryptedData;
                }

                Aws::Utils::Array<CryptoBuffer> slicedBuffers;

                if (bufferToDecrypt.GetLength() > BlockSizeBytes)
                {
                    slicedBuffers = bufferToDecrypt.Slice(BlockSizeBytes);
                }
                else
                {
                    slicedBuffers = Aws::Utils::Array<CryptoBuffer>(1u);
                    slicedBuffers[0] = bufferToDecrypt;
                }

                finalBufferSet = Aws::Vector<ByteBuffer*>(slicedBuffers.GetLength());
                InitBuffersToNull(finalBufferSet);

                for (size_t i = 0; i < slicedBuffers.GetLength(); ++i)
                {
                    if (slicedBuffers[i].GetLength() == BlockSizeBytes || (m_blockOverflow.GetLength() > 0 && slicedBuffers.GetLength() == 1))
                    {
                        ULONG lengthWritten = static_cast<ULONG>(BlockSizeBytes);
                        CryptoBuffer encryptedText(static_cast<size_t>(lengthWritten));

                        NTSTATUS status = BCryptEncrypt(m_keyHandle, m_workingIv.GetUnderlyingData(), (ULONG)m_workingIv.GetLength(),
                            nullptr, nullptr, 0, encryptedText.GetUnderlyingData(), (ULONG)encryptedText.GetLength(), &lengthWritten, m_flags);

                        if (!NT_SUCCESS(status))
                        {
                            m_failure = true;
                            AWS_LOGSTREAM_ERROR(CTR_LOG_TAG, "Failed to compute encrypted output with error code " << status);
                            CleanupBuffers(finalBufferSet);
                            return CryptoBuffer();
                        }

                        CryptoBuffer* newBuffer = Aws::New<CryptoBuffer>(CTR_LOG_TAG, BlockSizeBytes);
                        *newBuffer = slicedBuffers[i] ^ encryptedText;
                        finalBufferSet[i] = newBuffer;
                        IncrementCounter(m_workingIv);
                        bytesWritten += static_cast<size_t>(lengthWritten);
                    }
                    else
                    {
                        m_blockOverflow = slicedBuffers[i];
                        CryptoBuffer* newBuffer = Aws::New<CryptoBuffer>(CTR_LOG_TAG, 0);
                        finalBufferSet[i] = newBuffer;
                    }
                }

                CryptoBuffer returnBuffer(std::move(finalBufferSet));
                CleanupBuffers(finalBufferSet);

                return returnBuffer;
            }

            /**
            * In case we didn't have an even 16 byte multiple for the message, send the last
            * remaining data.
            */
            CryptoBuffer AES_CTR_Cipher_BCrypt::FinalizeDecryption()
            {
                if (m_blockOverflow.GetLength())
                {
                    CryptoBuffer&& returnBuffer = DecryptBuffer(m_blockOverflow);
                    m_blockOverflow = CryptoBuffer();
                    return returnBuffer;
                }

                return CryptoBuffer();
            }

            void AES_CTR_Cipher_BCrypt::InitEncryptor_Internal()
            {
                m_flags = 0;
                NTSTATUS status = BCryptOpenAlgorithmProvider(&m_algHandle, BCRYPT_AES_ALGORITHM, nullptr, 0);

                if (!NT_SUCCESS(status))
                {
                    m_failure = true;
                    AWS_LOGSTREAM_ERROR(CTR_LOG_TAG, "Failed to initialize encryptor with status code " << status);
                }

                status = BCryptSetProperty(m_algHandle, BCRYPT_CHAINING_MODE, (PUCHAR)BCRYPT_CHAIN_MODE_ECB, static_cast<ULONG>(wcslen(BCRYPT_CHAIN_MODE_ECB) + 1), 0);
                if (!NT_SUCCESS(status))
                {
                    m_failure = true;
                    AWS_LOGSTREAM_ERROR(CTR_LOG_TAG, "Failed to initialize encryptor chaining mode with status code " << status);
                }
            }

            void AES_CTR_Cipher_BCrypt::InitDecryptor_Internal()
            {
                m_flags = 0;
                NTSTATUS status = BCryptOpenAlgorithmProvider(&m_algHandle, BCRYPT_AES_ALGORITHM, nullptr, 0);

                if (!NT_SUCCESS(status))
                {
                    m_failure = true;
                    AWS_LOGSTREAM_ERROR(CTR_LOG_TAG, "Failed to initialize decryptor with status code " << status);
                }

                status = BCryptSetProperty(m_algHandle, BCRYPT_CHAINING_MODE, (PUCHAR)BCRYPT_CHAIN_MODE_ECB, static_cast<ULONG>(wcslen(BCRYPT_CHAIN_MODE_ECB) + 1), 0);
                if (!NT_SUCCESS(status))
                {
                    m_failure = true;
                    AWS_LOGSTREAM_ERROR(CTR_LOG_TAG, "Failed to initialize decryptor chaining mode with status code " << status);
                }
            }

            size_t AES_CTR_Cipher_BCrypt::GetBlockSizeBytes() const
            {
                return BlockSizeBytes;
            }

            size_t AES_CTR_Cipher_BCrypt::GetKeyLengthBits() const
            {
                return KeyLengthBits;
            }

            void AES_CTR_Cipher_BCrypt::IncrementCounter(CryptoBuffer& buffer)
            {
                assert(buffer.GetLength() == BlockSizeBytes);

                int32_t ctr = 0;
                for (size_t i = BlockSizeBytes - 5; i < BlockSizeBytes; ++i)
                {
                    ctr <<= 8;
                    ctr |= buffer[i];
                }

                ctr += 1;

                for (size_t i = BlockSizeBytes - 1; i > BlockSizeBytes - 5; --i)
                {
                    buffer[i] = ctr & 0x000000FF;
                    ctr >>= 8;
                }
            }

            void AES_CTR_Cipher_BCrypt::InitBuffersToNull(Aws::Vector<ByteBuffer*>& initBuffers)
            {
                for (ByteBuffer*& buffer : initBuffers)
                {
                    buffer = nullptr;
                }
            }

            void AES_CTR_Cipher_BCrypt::CleanupBuffers(Aws::Vector<ByteBuffer*>& cleanupBuffers)
            {
                for (ByteBuffer* buffer : cleanupBuffers)
                {
                    if (buffer)
                    {
                        Aws::Delete(buffer);
                    }
                }
            }

            static const char* GCM_LOG_TAG = "BCrypt_AES_GCM_Cipher";
            size_t AES_GCM_Cipher_BCrypt::BlockSizeBytes = 12;
            size_t AES_GCM_Cipher_BCrypt::KeyLengthBits = 256;
            size_t AES_GCM_Cipher_BCrypt::TagLengthBytes = 16;

            AES_GCM_Cipher_BCrypt::AES_GCM_Cipher_BCrypt(const CryptoBuffer& key) : 
                    BCryptSymmetricCipher(key, BlockSizeBytes), m_macBuffer(TagLengthBytes)
            {
                m_tag = CryptoBuffer(TagLengthBytes);
            }

            AES_GCM_Cipher_BCrypt::AES_GCM_Cipher_BCrypt(CryptoBuffer&& key, CryptoBuffer&& initializationVector, CryptoBuffer&& tag) : 
                    BCryptSymmetricCipher(std::move(key), std::move(initializationVector), std::move(tag)), m_macBuffer(TagLengthBytes)
            {
                if (m_tag.GetLength() == 0)
                {
                    m_tag = CryptoBuffer(TagLengthBytes);
                }
            }

            AES_GCM_Cipher_BCrypt::AES_GCM_Cipher_BCrypt(const CryptoBuffer& key, const CryptoBuffer& initializationVector, const CryptoBuffer& tag) : 
                    BCryptSymmetricCipher(key, initializationVector, tag), m_macBuffer(TagLengthBytes)
            {
                if (m_tag.GetLength() == 0)
                {
                    m_tag = CryptoBuffer(TagLengthBytes);
                }
            }           

            /**
             * This will always return a buffer due to the way the windows api is written.
             * The chain flag has to be explicitly turned off and a buffer has to be passed in 
             * in order for the tag to compute properly. As a result, we have to hold a buffer until
             * the end to make sure the cipher computes the auth tag correctly.
             */
            CryptoBuffer AES_GCM_Cipher_BCrypt::FinalizeEncryption()
            {
                CheckInitEncryptor();
                m_authInfo.dwFlags &= ~BCRYPT_AUTH_MODE_CHAIN_CALLS_FLAG;
                return BCryptSymmetricCipher::EncryptBuffer(m_finalBuffer);                
            }   
            
            /**
             * Since we have to assume these calls are being chained, and due to the way the windows
             * api works, we have to make sure we hold a final buffer until the end so we can tell
             * windows to compute the auth tag. Also, prior to the last call, we have to pass the data
             * in multiples of 16 byte blocks. So, here we keep a buffer of the % 16 + 16 bytes.
             * That gets saved until the end where we will encrypt the last buffer and compute the tag.
             */
            CryptoBuffer AES_GCM_Cipher_BCrypt::EncryptBuffer(const CryptoBuffer& toEncrypt)
            {
                CryptoBuffer workingBuffer;

                if (m_finalBuffer.GetLength() > 0)
                {
                    workingBuffer = CryptoBuffer({(ByteBuffer*)&m_finalBuffer, (ByteBuffer*)&toEncrypt});
                    m_finalBuffer = CryptoBuffer();
                }
                else
                {
                    workingBuffer = toEncrypt;
                }

                if (workingBuffer.GetLength() > TagLengthBytes)
                {
                    auto offset = workingBuffer.GetLength() % TagLengthBytes;

                    m_finalBuffer = CryptoBuffer(workingBuffer.GetUnderlyingData() + workingBuffer.GetLength() - (TagLengthBytes +  offset), TagLengthBytes + offset);
                    workingBuffer = CryptoBuffer(workingBuffer.GetUnderlyingData(), workingBuffer.GetLength() - (TagLengthBytes + offset));
                    return BCryptSymmetricCipher::EncryptBuffer(workingBuffer);
                }
                else
                {
                    m_finalBuffer = workingBuffer;
                    return CryptoBuffer();
                }
            }

            /**
             * Since we have to assume these calls are being chained, and due to the way the windows
             * api works, we have to make sure we hold a final buffer until the end so we can tell
             * windows to compute the auth tag. Also, prior to the last call, we have to pass the data
             * in multiples of 16 byte blocks. So, here we keep a buffer of the % 16 + 16 bytes.
             * That gets saved until the end where we will decrypt the last buffer and compute the tag.
             */
            CryptoBuffer AES_GCM_Cipher_BCrypt::DecryptBuffer(const CryptoBuffer& toDecrypt)
            {
                CryptoBuffer workingBuffer;

                if (m_finalBuffer.GetLength() > 0)
                {
                    workingBuffer = CryptoBuffer({ (ByteBuffer*)&m_finalBuffer, (ByteBuffer*)&toDecrypt });
                    m_finalBuffer = CryptoBuffer();
                }
                else
                {
                    workingBuffer = toDecrypt;
                }

                if (workingBuffer.GetLength() > TagLengthBytes)
                {
                    auto offset = workingBuffer.GetLength() % TagLengthBytes;
                    m_finalBuffer = CryptoBuffer(workingBuffer.GetUnderlyingData() + workingBuffer.GetLength() - (TagLengthBytes + offset), TagLengthBytes + offset);
                    workingBuffer = CryptoBuffer(workingBuffer.GetUnderlyingData(), workingBuffer.GetLength() - (TagLengthBytes + offset));
                    return BCryptSymmetricCipher::DecryptBuffer(workingBuffer);
                }
                else
                {
                    m_finalBuffer = workingBuffer;
                    return CryptoBuffer();
                }
            }
           
            /**
             * This will always return a buffer due to the way the windows api is written.
             * The chain flag has to be explicitly turned off and a buffer has to be passed in
             * in order for the tag to compute properly. As a result, we have to hold a buffer until
             * the end to make sure the cipher computes the auth tag correctly.
             */
            CryptoBuffer AES_GCM_Cipher_BCrypt::FinalizeDecryption()
            { 
                CheckInitDecryptor();
                m_authInfo.dwFlags &= ~BCRYPT_AUTH_MODE_CHAIN_CALLS_FLAG;
               
                return BCryptSymmetricCipher::DecryptBuffer(m_finalBuffer);
            }

            /**
             * Encrypt and decrypt do the same exact thing here.
             * Summary:
             * No Padding, open AES alg, Set GCM as chain mode, create the auth struct, turn on chaining,
             *   initialize a buffer for bcrypt to use while running.
             */
            void AES_GCM_Cipher_BCrypt::InitCipher()
            {
                m_flags = 0;
                NTSTATUS status = BCryptOpenAlgorithmProvider(&m_algHandle, BCRYPT_AES_ALGORITHM, nullptr, 0);

                if (!NT_SUCCESS(status))
                {
                    m_failure = true;
                    AWS_LOGSTREAM_ERROR(GCM_LOG_TAG, "Failed to initialize encryptor with status code " << status);
                }

                status = BCryptSetProperty(m_algHandle, BCRYPT_CHAINING_MODE, (PUCHAR)BCRYPT_CHAIN_MODE_GCM, static_cast<ULONG>(wcslen(BCRYPT_CHAIN_MODE_GCM) + 1), 0);
                if (!NT_SUCCESS(status))
                {
                    m_failure = true;
                    AWS_LOGSTREAM_ERROR(GCM_LOG_TAG, "Failed to initialize encryptor chaining mode with status code " << status);
                }

                BCRYPT_INIT_AUTH_MODE_INFO(m_authInfo);
                m_authInfo.pbNonce = m_initializationVector.GetUnderlyingData();
                m_authInfo.cbNonce = static_cast<ULONG>(m_initializationVector.GetLength());
                m_authInfo.pbTag = m_tag.GetUnderlyingData();
                m_authInfo.cbTag = static_cast<ULONG>(m_tag.GetLength());
                m_authInfo.pbMacContext = m_macBuffer.GetUnderlyingData();
                m_authInfo.cbMacContext = static_cast<ULONG>(m_macBuffer.GetLength());
                m_authInfo.cbData = 0;
                m_authInfo.dwFlags = BCRYPT_AUTH_MODE_CHAIN_CALLS_FLAG;

                m_authInfoPtr = &m_authInfo;

                m_workingIv = CryptoBuffer(TagLengthBytes);
                m_workingIv.Zero();
            }

            void AES_GCM_Cipher_BCrypt::InitEncryptor_Internal()
            {
                InitCipher();
            }

            void AES_GCM_Cipher_BCrypt::InitDecryptor_Internal()
            {
                InitCipher();
            }

            size_t AES_GCM_Cipher_BCrypt::GetBlockSizeBytes() const
            {
                return BlockSizeBytes;
            }

            size_t AES_GCM_Cipher_BCrypt::GetKeyLengthBits() const
            {
                return KeyLengthBits;
            }

            size_t AES_GCM_Cipher_BCrypt::GetTagLengthBytes() const
            {
                return TagLengthBytes;
            }            

        } // namespace Crypto
    } // namespace Utils
} // namespace Amazon