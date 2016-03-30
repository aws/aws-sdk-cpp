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
    if(!IsValid())
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
    if(!IsValid())
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
    while(stream.good())
    {
        stream.read(streamBuffer, Aws::Utils::Crypto::Hash::INTERNAL_HASH_STREAM_BUFFER_SIZE);
        std::streamsize bytesRead = stream.gcount();
        if(bytesRead > 0)
        {
            status = BCryptHashData(context.m_hashHandle, (PBYTE)streamBuffer, (ULONG) bytesRead, 0);
            if (!NT_SUCCESS(status))
            {
                AWS_LOG_ERROR(logTag, "Error computing hash.");
                return false;
            }
        }
    }

    if(!stream.eof())
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
    if(!IsValid())
    {
        return HashResult();
    }

    std::lock_guard<std::mutex> locker(m_algorithmMutex);

    auto startingPos = stream.tellg();

    bool success = HashStream(stream);
    if(success)
    {
        stream.clear();
    }

    stream.seekg(startingPos, stream.beg);

    if(!success)
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

static const char* CIPHER_TAG = "BCryptCipherImpl";

BCryptCipherProvider::BCryptCipherProvider(LPCWSTR algorithmName, LPCWSTR chainingMode) : 
    m_algHandle(nullptr), m_keyObjectSize(0), m_blockSize(0), m_isObjValid(true)
{
    NTSTATUS status = 0;
    if (!NT_SUCCESS(status = BCryptOpenAlgorithmProvider(&m_algHandle, algorithmName, nullptr, 0)))
    {
        m_isObjValid = false;
        AWS_LOGSTREAM_ERROR(CIPHER_TAG, "failed to initialize algorithm with error code " << status);
        return;
    }
    AWS_LOGSTREAM_DEBUG(CIPHER_TAG, "successfully initialized algorithm handle");

    if (!NT_SUCCESS(status = BCryptGetProperty(m_algHandle, BCRYPT_OBJECT_LENGTH, (PBYTE)&m_keyObjectSize, sizeof(DWORD), nullptr, 0)))
    {
        m_isObjValid = false;
        AWS_LOGSTREAM_ERROR(CIPHER_TAG, "property fetch for key length failed with error code " << status);
        return;
    }
    AWS_LOGSTREAM_DEBUG(CIPHER_TAG, "successfully fetched key length " << m_keyObjectSize);

    if (!NT_SUCCESS(status = BCryptGetProperty(m_algHandle, BCRYPT_BLOCK_LENGTH, (PBYTE)&m_blockSize, sizeof(DWORD), nullptr, 0)))
    {
        m_isObjValid = false;
        AWS_LOGSTREAM_ERROR(CIPHER_TAG, "property fetch for block length failed with error code " << status);
        return;
    }
    AWS_LOGSTREAM_DEBUG(CIPHER_TAG, "successfully fetched block length " << m_blockSize);

    if (chainingMode)
    {
        if (!NT_SUCCESS(status = BCryptSetProperty(m_algHandle, BCRYPT_CHAINING_MODE, (PBYTE)chainingMode, sizeof(chainingMode), 0)))
        {
            m_isObjValid = false;
            AWS_LOGSTREAM_ERROR(CIPHER_TAG, "property set for chaing mode failed with error code " << status);
        }
        AWS_LOGSTREAM_DEBUG(CIPHER_TAG, "successfully set chain mode. " << m_blockSize);
    }
}

BCryptCipherProvider::~BCryptCipherProvider()
{
    if (m_algHandle)
    {
        BCryptCloseAlgorithmProvider(m_algHandle, 0);
    }
}

static const char* BCRYPT_SYMETRIC_CIPHER_TAG = "BCryptCipherImpl";

BCryptSymetricCipher::BCryptSymetricCipher(const std::shared_ptr<BCryptCipherProvider>& ciperProvider, const ByteBuffer& key, unsigned long flags) :
    m_cipherProvider(ciperProvider), m_keyHandle(nullptr), m_symKey(m_cipherProvider->m_keyObjectSize), m_iv(nullptr, 0), m_flags(flags)
{
    Init(key);
}

BCryptSymetricCipher::BCryptSymetricCipher(const std::shared_ptr<BCryptCipherProvider>& ciperProvider, ByteBuffer&& key, unsigned long flags) :
    m_cipherProvider(ciperProvider), m_keyHandle(nullptr), m_symKey(m_cipherProvider->m_keyObjectSize), m_iv(nullptr, 0), m_flags(flags)
{
    Init(key);
}

BCryptSymetricCipher::BCryptSymetricCipher(const std::shared_ptr<BCryptCipherProvider>& ciperProvider, const ByteBuffer& key, const ByteBuffer& iv, unsigned long flags) :
    m_cipherProvider(ciperProvider), m_keyHandle(nullptr), m_symKey(m_cipherProvider->m_keyObjectSize), m_iv(iv), m_flags(flags)
{
    Init(key);
}

BCryptSymetricCipher::BCryptSymetricCipher(const std::shared_ptr<BCryptCipherProvider>& ciperProvider, ByteBuffer&& key, const ByteBuffer& iv, unsigned long flags) :
    m_cipherProvider(ciperProvider), m_keyHandle(nullptr), m_symKey(m_cipherProvider->m_keyObjectSize), m_iv(iv), m_flags(flags)
{
    Init(key);
}

BCryptSymetricCipher::BCryptSymetricCipher(const std::shared_ptr<BCryptCipherProvider>& ciperProvider, ByteBuffer&& key, ByteBuffer&& iv, unsigned long flags) :
    m_cipherProvider(ciperProvider), m_keyHandle(nullptr), m_symKey(m_cipherProvider->m_keyObjectSize), m_iv(iv), m_flags(flags)
{
    Init(key);
}

BCryptSymetricCipher::~BCryptSymetricCipher()
{
    if (m_keyHandle)
    {
        BCryptDestroyKey(m_keyHandle);
    }
}

ByteBuffer BCryptSymetricCipher::Encrypt(const ByteBuffer& unEncryptedData)
{
    NTSTATUS status = 0;
    ULONG bufferSize = 0;    
    status = BCryptEncrypt(m_keyHandle, unEncryptedData.GetUnderlyingData(), (ULONG)unEncryptedData.GetLength(),
        nullptr, m_iv.GetUnderlyingData(), (ULONG)m_iv.GetLength(), nullptr, 0, &bufferSize, m_flags);
    if (!NT_SUCCESS(status))
    {
        AWS_LOGSTREAM_ERROR(BCRYPT_SYMETRIC_CIPHER_TAG, "Failed to compute encrypted stream output length with error code " << status);
        return ByteBuffer();
    }
    AWS_LOGSTREAM_TRACE(BCRYPT_SYMETRIC_CIPHER_TAG, "Compute encrypted output length to be " << bufferSize);

    ByteBuffer encryptedData(static_cast<size_t>(bufferSize));
    status = BCryptEncrypt(m_keyHandle, unEncryptedData.GetUnderlyingData(), (ULONG)unEncryptedData.GetLength(),
        nullptr, m_iv.GetUnderlyingData(), (ULONG)m_iv.GetLength(), encryptedData.GetUnderlyingData(), (ULONG)encryptedData.GetLength(), &bufferSize, m_flags);
    if (!NT_SUCCESS(status))
    {
        AWS_LOGSTREAM_ERROR(BCRYPT_SYMETRIC_CIPHER_TAG, "Failed to compute encrypted output with error code " << status);
        return ByteBuffer();
    }

    return encryptedData;
}

ByteBuffer BCryptSymetricCipher::Decrypt(const ByteBuffer& encryptedData)
{
    NTSTATUS status = 0;
    ULONG bufferSize = 0;

    status = BCryptDecrypt(m_keyHandle, encryptedData.GetUnderlyingData(), (ULONG)encryptedData.GetLength(), nullptr,
        m_iv.GetUnderlyingData(), (ULONG)m_iv.GetLength(), nullptr, 0, &bufferSize, m_flags);
    if (!NTSTATUS(status))
    {
        AWS_LOGSTREAM_ERROR(BCRYPT_SYMETRIC_CIPHER_TAG, "Failed to compute decrypted stream output length with error code " << status);
        return ByteBuffer();
    }

    ByteBuffer decryptedBuffer(bufferSize);
    status = BCryptDecrypt(m_keyHandle, encryptedData.GetUnderlyingData(), (ULONG)encryptedData.GetLength(), nullptr,
        m_iv.GetUnderlyingData(), (ULONG)m_iv.GetLength(), decryptedBuffer.GetUnderlyingData(), (ULONG)decryptedBuffer.GetLength(), &bufferSize, m_flags);
    if (!NTSTATUS(status))
    {
        AWS_LOGSTREAM_ERROR(BCRYPT_SYMETRIC_CIPHER_TAG, "Failed to decrypt stream with error code " << status);
        return ByteBuffer();
    }

    return decryptedBuffer;
}

void BCryptSymetricCipher::Init(const ByteBuffer& key)
{
    NTSTATUS status = 0;
    status = BCryptGenerateSymmetricKey(m_cipherProvider->m_algHandle, &m_keyHandle, m_symKey.GetUnderlyingData(),
        (ULONG)m_symKey.GetLength(), key.GetUnderlyingData(), (ULONG)key.GetLength(), 0);
    if (!NT_SUCCESS(status))
    {
        AWS_LOGSTREAM_ERROR(BCRYPT_SYMETRIC_CIPHER_TAG, "Failed to initialized symetric key with status code " << status);
    }
}

std::shared_ptr<BCryptCipherProvider> BCryptSymetricCipher::CreateBCrypt_AES_CBC_CipherProvider()
{
    return Aws::MakeShared<BCryptCipherProvider>(BCRYPT_SYMETRIC_CIPHER_TAG, BCRYPT_AES_ALGORITHM, BCRYPT_CHAIN_MODE_CBC);
}

std::shared_ptr<BCryptSymetricCipher> BCryptSymetricCipher::CreateBCrypt_AES_CBC_Cipher(const std::shared_ptr<BCryptCipherProvider>& provider, const ByteBuffer& key)
{
    return Aws::MakeShared<BCryptSymetricCipher>(BCRYPT_SYMETRIC_CIPHER_TAG, key, BCRYPT_BLOCK_PADDING);
}

std::shared_ptr<BCryptSymetricCipher> BCryptSymetricCipher::CreateBCrypt_AES_CBC_Cipher(const std::shared_ptr<BCryptCipherProvider>& provider, ByteBuffer&& key)
{
    return Aws::MakeShared<BCryptSymetricCipher>(BCRYPT_SYMETRIC_CIPHER_TAG, key, BCRYPT_BLOCK_PADDING);
}

std::shared_ptr<BCryptSymetricCipher> BCryptSymetricCipher::CreateBCrypt_AES_CBC_Cipher(const std::shared_ptr<BCryptCipherProvider>& provider, const ByteBuffer& key, const ByteBuffer& iv)
{
    return Aws::MakeShared<BCryptSymetricCipher>(BCRYPT_SYMETRIC_CIPHER_TAG, key, iv, BCRYPT_BLOCK_PADDING);
}

std::shared_ptr<BCryptSymetricCipher> BCryptSymetricCipher::CreateBCrypt_AES_CBC_Cipher(const std::shared_ptr<BCryptCipherProvider>& provider, ByteBuffer&& key, const ByteBuffer& iv)
{
    return Aws::MakeShared<BCryptSymetricCipher>(BCRYPT_SYMETRIC_CIPHER_TAG, key, iv, BCRYPT_BLOCK_PADDING);
}

std::shared_ptr<BCryptSymetricCipher> BCryptSymetricCipher::CreateBCrypt_AES_CBC_Cipher(const std::shared_ptr<BCryptCipherProvider>& provider, ByteBuffer&& key, ByteBuffer&& iv)
{
    return Aws::MakeShared<BCryptSymetricCipher>(BCRYPT_SYMETRIC_CIPHER_TAG, key, iv, BCRYPT_BLOCK_PADDING);
}

std::shared_ptr<BCryptCipherProvider> BCryptSymetricCipher::CreateBCrypt_AES_GCM_CipherProvider()
{
    return Aws::MakeShared<BCryptCipherProvider>(BCRYPT_SYMETRIC_CIPHER_TAG, BCRYPT_AES_GMAC_ALGORITHM, BCRYPT_CHAIN_MODE_GCM);
}

std::shared_ptr<BCryptSymetricCipher> BCryptSymetricCipher::CreateBCrypt_AES_GCM_Cipher(const std::shared_ptr<BCryptCipherProvider>& provider, const ByteBuffer& key)
{
    return Aws::MakeShared<BCryptSymetricCipher>(BCRYPT_SYMETRIC_CIPHER_TAG, key, BCRYPT_PAD_NONE);
}

std::shared_ptr<BCryptSymetricCipher> BCryptSymetricCipher::CreateBCrypt_AES_GCM_Cipher(const std::shared_ptr<BCryptCipherProvider>& provider, ByteBuffer&& key)
{
    return Aws::MakeShared<BCryptSymetricCipher>(BCRYPT_SYMETRIC_CIPHER_TAG, key, BCRYPT_PAD_NONE);
}

std::shared_ptr<BCryptSymetricCipher> BCryptSymetricCipher::CreateBCrypt_AES_GCM_Cipher(const std::shared_ptr<BCryptCipherProvider>& provider, const ByteBuffer& key, const ByteBuffer& iv)
{
    return Aws::MakeShared<BCryptSymetricCipher>(BCRYPT_SYMETRIC_CIPHER_TAG, key, iv, BCRYPT_PAD_NONE);
}

std::shared_ptr<BCryptSymetricCipher> BCryptSymetricCipher::CreateBCrypt_AES_GCM_Cipher(const std::shared_ptr<BCryptCipherProvider>& provider, ByteBuffer&& key, const ByteBuffer& iv)
{
    return Aws::MakeShared<BCryptSymetricCipher>(BCRYPT_SYMETRIC_CIPHER_TAG, key, iv, BCRYPT_PAD_NONE);
}

std::shared_ptr<BCryptSymetricCipher> BCryptSymetricCipher::CreateBCrypt_AES_GCM_Cipher(const std::shared_ptr<BCryptCipherProvider>& provider, ByteBuffer&& key, ByteBuffer&& iv)
{
    return Aws::MakeShared<BCryptSymetricCipher>(BCRYPT_SYMETRIC_CIPHER_TAG, key, iv, BCRYPT_PAD_NONE);
}

} // namespace Crypto
} // namespace Utils
} // namespace Amazon