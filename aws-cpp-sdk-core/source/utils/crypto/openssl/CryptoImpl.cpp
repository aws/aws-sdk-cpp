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

#include <cstring>

#include <aws/core/utils/crypto/openssl/CryptoImpl.h>
#include <aws/core/utils/Outcome.h>
#include <openssl/md5.h>
#include <openssl/sha.h>
#include <openssl/hmac.h>
#include <openssl/err.h>
#include <atomic>
#include <mutex>
#include <aws/core/utils/logging/LogMacros.h>

using namespace Aws::Utils;
using namespace Aws::Utils::Crypto;

HashResult MD5OpenSSLImpl::Calculate(const Aws::String& str)
{
    MD5_CTX md5;
    MD5_Init(&md5);
    MD5_Update(&md5, str.c_str(), str.size());
 
    ByteBuffer hash(MD5_DIGEST_LENGTH);
    MD5_Final(hash.GetUnderlyingData(), &md5);

    return HashResult(std::move(hash));
}

HashResult MD5OpenSSLImpl::Calculate(Aws::IStream& stream)
{
    MD5_CTX md5;
    MD5_Init(&md5);

    unsigned currentPos = stream.tellg();
    stream.seekg(0, stream.beg);

    char streamBuffer[Aws::Utils::Crypto::Hash::INTERNAL_HASH_STREAM_BUFFER_SIZE];
    while(stream.good())
    {
	    stream.read(streamBuffer, Aws::Utils::Crypto::Hash::INTERNAL_HASH_STREAM_BUFFER_SIZE);
	    auto bytesRead = stream.gcount();

	    if(bytesRead > 0)
	    {
	        MD5_Update(&md5, streamBuffer, bytesRead);
	    }
    }

    stream.clear();
    stream.seekg(currentPos, stream.beg);

    ByteBuffer hash(MD5_DIGEST_LENGTH);
    MD5_Final(hash.GetUnderlyingData(), &md5);

    return HashResult(std::move(hash));
}

HashResult Sha256OpenSSLImpl::Calculate(const Aws::String& str)
{
    SHA256_CTX sha256;
    SHA256_Init(&sha256);
    SHA256_Update(&sha256, str.c_str(), str.size());

    ByteBuffer hash(SHA256_DIGEST_LENGTH);
    SHA256_Final(hash.GetUnderlyingData(), &sha256);

    return HashResult(std::move(hash));
}

HashResult Sha256OpenSSLImpl::Calculate(Aws::IStream& stream)
{
    SHA256_CTX sha256;
    SHA256_Init(&sha256);

    unsigned currentPos = stream.tellg();
    stream.seekg(0, stream.beg);

    char streamBuffer[Aws::Utils::Crypto::Hash::INTERNAL_HASH_STREAM_BUFFER_SIZE];
    while(stream.good())
    {
	    stream.read(streamBuffer, Aws::Utils::Crypto::Hash::INTERNAL_HASH_STREAM_BUFFER_SIZE);
	    auto bytesRead = stream.gcount();

	    if(bytesRead > 0)
	    {
	        SHA256_Update(&sha256, streamBuffer, bytesRead);
	    }
    }

    stream.clear();
    stream.seekg(currentPos, stream.beg);

    ByteBuffer hash(SHA256_DIGEST_LENGTH);
    SHA256_Final(hash.GetUnderlyingData(), &sha256);

    return HashResult(std::move(hash));
}

HashResult Sha256HMACOpenSSLImpl::Calculate(const ByteBuffer& toSign, const ByteBuffer& secret)
{
    unsigned int length = SHA256_DIGEST_LENGTH;
    ByteBuffer digest(length);
    memset(digest.GetUnderlyingData(), 0, length);

    HMAC_CTX ctx;
    HMAC_CTX_init(&ctx);

    HMAC_Init_ex(&ctx, secret.GetUnderlyingData(), secret.GetLength(), EVP_sha256(), NULL);
    HMAC_Update(&ctx, toSign.GetUnderlyingData(), toSign.GetLength());
    HMAC_Final(&ctx, digest.GetUnderlyingData(), &length);
    HMAC_CTX_cleanup(&ctx);

    return HashResult(std::move(digest));
}

static std::atomic<bool> openSSLEncryptionInit(false);
static std::mutex openSSLInitLock;
static const char* LOG_TAG = "OpenSSLCipher";

void MakeSureOpenSSLIsInitialized()
{
    if(!openSSLEncryptionInit)
    {
        std::lock_guard<std::mutex> locker(openSSLInitLock);
        if(!openSSLEncryptionInit)
        {
            ERR_load_CRYPTO_strings();
            OPENSSL_add_all_algorithms_noconf();
            openSSLEncryptionInit = true;
        }
    }
}

void LogErrors(const char* logTag = LOG_TAG)
{
    long errorCode = ERR_get_error();
    char errStr[256];
    ERR_error_string_n(errorCode, errStr, 256);

    AWS_LOGSTREAM_ERROR(logTag, errStr);
}


OpenSSLCipher::OpenSSLCipher(const ByteBuffer &key, size_t blockSizeBytes, bool ctrMode) :
        SymmetricCipher(key, blockSizeBytes, ctrMode), m_encDecInitialized(false), m_encryptionMode(false), m_decryptionMode(false)
{
    Init();
}

OpenSSLCipher::OpenSSLCipher(OpenSSLCipher &&toMove) : SymmetricCipher(std::move(toMove)), m_encDecInitialized(false)
{
    m_ctx = toMove.m_ctx;
    m_encDecInitialized = toMove.m_encDecInitialized;
    m_encryptionMode = toMove.m_encryptionMode;
    m_decryptionMode = toMove.m_decryptionMode;
}

OpenSSLCipher::OpenSSLCipher(ByteBuffer&& key, ByteBuffer&& initializationVector, ByteBuffer&& tag) :
        SymmetricCipher(key, initializationVector, tag), m_encDecInitialized(false), m_encryptionMode(false), m_decryptionMode(false)
{
    Init();
}

OpenSSLCipher::OpenSSLCipher(const ByteBuffer &key, const ByteBuffer& initializationVector, const ByteBuffer& tag) :
        SymmetricCipher(key, initializationVector, tag), m_encDecInitialized(false), m_encryptionMode(false), m_decryptionMode(false)
{
    Init();
}

OpenSSLCipher::~OpenSSLCipher()
{
    EVP_CIPHER_CTX_cleanup(&m_ctx);
}

void OpenSSLCipher::Init()
{
    MakeSureOpenSSLIsInitialized();
    EVP_CIPHER_CTX_init(&m_ctx);
}

void OpenSSLCipher::CheckInitEncryptor()
{
    assert(!m_decryptionMode);
    if(!m_encDecInitialized)
    {
        InitEncryptor_Internal();
        m_encryptionMode = true;
        m_encDecInitialized = true;
    }
}

void OpenSSLCipher::CheckInitDecryptor()
{
    assert(!m_encryptionMode);
    if(!m_encDecInitialized)
    {
        InitDecryptor_Internal();
        m_decryptionMode = true;
        m_encDecInitialized = true;
    }
}

ByteBuffer OpenSSLCipher::EncryptBuffer( const ByteBuffer& unEncryptedData)
{
    CheckInitEncryptor();
    int lengthWritten = unEncryptedData.GetLength() - (unEncryptedData.GetLength() % GetBlockSizeBytes());
    ByteBuffer encryptedText(static_cast<size_t>( lengthWritten + (GetBlockSizeBytes() - 1)));

    if(!EVP_EncryptUpdate(&m_ctx, encryptedText.GetUnderlyingData(), &lengthWritten,
                      unEncryptedData.GetUnderlyingData(), static_cast<int>(unEncryptedData.GetLength())))
    {
        LogErrors();
    }

    if(static_cast<size_t>(lengthWritten) < encryptedText.GetLength())
    {
        return ByteBuffer(encryptedText.GetUnderlyingData(), static_cast<size_t>(lengthWritten));
    }

    return encryptedText;
}

ByteBuffer OpenSSLCipher::FinalizeEncryption ()
{
    ByteBuffer finalBlock(GetBlockSizeBytes());
    int writtenSize = 0;
    if(!EVP_EncryptFinal_ex(&m_ctx, finalBlock.GetUnderlyingData(), &writtenSize))
    {
        LogErrors();
    }
    return ByteBuffer(finalBlock.GetUnderlyingData(), writtenSize);
}

ByteBuffer OpenSSLCipher::DecryptBuffer(const ByteBuffer& encryptedData)
{
    CheckInitDecryptor();
    int lengthWritten = encryptedData.GetLength() + (GetBlockSizeBytes() - 1);
    ByteBuffer decryptedText(static_cast<size_t>(lengthWritten + 100));

    if(!EVP_DecryptUpdate(&m_ctx, decryptedText.GetUnderlyingData(), &lengthWritten,
                      encryptedData.GetUnderlyingData(), static_cast<int>(encryptedData.GetLength())))
    {
        LogErrors();
    }

    if(static_cast<size_t>(lengthWritten) < decryptedText.GetLength())
    {
        return ByteBuffer(decryptedText.GetUnderlyingData(), static_cast<size_t>(lengthWritten));
    }

    return decryptedText;
}

ByteBuffer OpenSSLCipher::FinalizeDecryption ()
{
    ByteBuffer finalBlock(GetBlockSizeBytes());
    int writtenSize = finalBlock.GetLength();
    if(!EVP_DecryptFinal_ex(&m_ctx, finalBlock.GetUnderlyingData(), &writtenSize))
    {
        LogErrors();
    }
    return ByteBuffer(finalBlock.GetUnderlyingData(), writtenSize);
}

size_t AES_CBC_Cipher_OpenSSL::BlockSizeBytes = 16;
size_t AES_CBC_Cipher_OpenSSL::KeyLengthBits = 256;
static const char* CBC_LOG_TAG = "AES_CBC_Cipher_OpenSSL";

//this needs to be reworked for nonce and counter init
AES_CBC_Cipher_OpenSSL::AES_CBC_Cipher_OpenSSL(const ByteBuffer &key) : OpenSSLCipher(key, BlockSizeBytes) {}

AES_CBC_Cipher_OpenSSL::AES_CBC_Cipher_OpenSSL(ByteBuffer&& key, ByteBuffer&& initializationVector) :
        OpenSSLCipher(key, initializationVector) {}

AES_CBC_Cipher_OpenSSL::AES_CBC_Cipher_OpenSSL(const ByteBuffer& key, const ByteBuffer& initializationVector) :
        OpenSSLCipher(key, initializationVector) {}

void AES_CBC_Cipher_OpenSSL::InitEncryptor_Internal()
{
    if(!EVP_EncryptInit_ex(&m_ctx, EVP_aes_256_cbc(), nullptr, m_key.GetUnderlyingData(), m_initializationVector.GetUnderlyingData()))
    {
        LogErrors(CBC_LOG_TAG);
    }
}

void AES_CBC_Cipher_OpenSSL::InitDecryptor_Internal()
{
    if(!EVP_DecryptInit_ex(&m_ctx, EVP_aes_256_cbc(), nullptr, m_key.GetUnderlyingData(), m_initializationVector.GetUnderlyingData()))
    {
        LogErrors(CBC_LOG_TAG);
    }
}

size_t AES_CBC_Cipher_OpenSSL::GetBlockSizeBytes() const
{
    return BlockSizeBytes;
}

size_t AES_CBC_Cipher_OpenSSL::GetKeyLengthBits() const
{
    return KeyLengthBits;
}

size_t AES_CTR_Cipher_OpenSSL::BlockSizeBytes = 16;
size_t AES_CTR_Cipher_OpenSSL::KeyLengthBits = 256;
static const char* CTR_LOG_TAG = "AES_CTR_Cipher_OpenSSL";

AES_CTR_Cipher_OpenSSL::AES_CTR_Cipher_OpenSSL(const ByteBuffer &key) : OpenSSLCipher(key, BlockSizeBytes, true) {}

AES_CTR_Cipher_OpenSSL::AES_CTR_Cipher_OpenSSL(ByteBuffer &&key, ByteBuffer &&initializationVector) :
        OpenSSLCipher(key, initializationVector) {}

AES_CTR_Cipher_OpenSSL::AES_CTR_Cipher_OpenSSL(const ByteBuffer &key, const ByteBuffer &initializationVector) :
        OpenSSLCipher(key, initializationVector) {}

void AES_CTR_Cipher_OpenSSL::InitEncryptor_Internal()
{
    if(!(EVP_EncryptInit_ex(&m_ctx, EVP_aes_256_ctr(), nullptr, m_key.GetUnderlyingData(), m_initializationVector.GetUnderlyingData())
            && EVP_CIPHER_CTX_set_padding(&m_ctx, 0)))
    {
        LogErrors(CTR_LOG_TAG);
    }
}

void AES_CTR_Cipher_OpenSSL::InitDecryptor_Internal()
{
    if(!(EVP_DecryptInit_ex(&m_ctx, EVP_aes_256_ctr(), nullptr, m_key.GetUnderlyingData(), m_initializationVector.GetUnderlyingData())
            && EVP_CIPHER_CTX_set_padding(&m_ctx, 0)))
    {
        LogErrors(CTR_LOG_TAG);
    }
}

size_t AES_CTR_Cipher_OpenSSL::GetBlockSizeBytes() const
{
    return BlockSizeBytes;
}

size_t AES_CTR_Cipher_OpenSSL::GetKeyLengthBits() const
{
    return KeyLengthBits;
}

size_t AES_GCM_Cipher_OpenSSL::BlockSizeBytes = 16;
size_t AES_GCM_Cipher_OpenSSL::KeyLengthBits = 256;
size_t AES_GCM_Cipher_OpenSSL::IVLengthBytes = 12;
static const char* GCM_LOG_TAG = "AES_GCM_Cipher_OpenSSL";

AES_GCM_Cipher_OpenSSL::AES_GCM_Cipher_OpenSSL(const ByteBuffer &key) : OpenSSLCipher(key, IVLengthBytes) {}

AES_GCM_Cipher_OpenSSL::AES_GCM_Cipher_OpenSSL(ByteBuffer &&key, ByteBuffer &&initializationVector, ByteBuffer&& tag) :
        OpenSSLCipher(key, initializationVector, tag) {}

AES_GCM_Cipher_OpenSSL::AES_GCM_Cipher_OpenSSL(const ByteBuffer &key, const ByteBuffer &initializationVector, const ByteBuffer& tag) :
        OpenSSLCipher(key, initializationVector, tag) {}

ByteBuffer AES_GCM_Cipher_OpenSSL::FinalizeEncryption ()
{
    ByteBuffer&& finalBuffer = OpenSSLCipher::FinalizeEncryption();
    m_tag = ByteBuffer(BlockSizeBytes);
    if(!EVP_CIPHER_CTX_ctrl(&m_ctx, EVP_CTRL_CCM_GET_TAG, static_cast<int>(m_tag.GetLength()), m_tag.GetUnderlyingData()))
    {
        LogErrors(GCM_LOG_TAG);
    }

    return finalBuffer;
}
void AES_GCM_Cipher_OpenSSL::InitEncryptor_Internal()
{
    if(!(EVP_EncryptInit_ex(&m_ctx, EVP_aes_256_gcm(), nullptr, nullptr, nullptr) &&
            EVP_EncryptInit_ex(&m_ctx, nullptr, nullptr, m_key.GetUnderlyingData(), m_initializationVector.GetUnderlyingData()) &&
            EVP_CIPHER_CTX_set_padding(&m_ctx, 0)))
    {
        LogErrors(GCM_LOG_TAG);
    }
}

void AES_GCM_Cipher_OpenSSL::InitDecryptor_Internal()
{
    if(!(EVP_DecryptInit_ex(&m_ctx, EVP_aes_256_gcm(), nullptr, nullptr, nullptr) &&
            EVP_DecryptInit_ex(&m_ctx, nullptr, nullptr, m_key.GetUnderlyingData(), m_initializationVector.GetUnderlyingData()) &&
            EVP_CIPHER_CTX_set_padding(&m_ctx, 0)))
    {
        LogErrors(GCM_LOG_TAG);
    }

    //tag should always be set in GCM decrypt mode
    assert(m_tag.GetLength() > 0);

    if(m_tag.GetLength() < GetBlockSizeBytes())
    {
        AWS_LOGSTREAM_ERROR(GCM_LOG_TAG, "Illegal attempt to decrypt an AES GCM payload without a valid tag set: tag length=" << m_tag.GetLength());
    }

    if(!EVP_CIPHER_CTX_ctrl(&m_ctx, EVP_CTRL_GCM_SET_TAG, static_cast<int>(m_tag.GetLength()), m_tag.GetUnderlyingData()))
    {
        LogErrors(GCM_LOG_TAG);
    }
}

size_t AES_GCM_Cipher_OpenSSL::GetBlockSizeBytes() const
{
    return BlockSizeBytes;
}

size_t AES_GCM_Cipher_OpenSSL::GetKeyLengthBits() const
{
    return KeyLengthBits;
}
