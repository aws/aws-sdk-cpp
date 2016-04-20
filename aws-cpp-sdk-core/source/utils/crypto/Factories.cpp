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


#include <aws/core/utils/crypto/Factories.h>

#if ENABLE_BCRYPT_ENCRYPTION
    #include <aws/core/utils/crypto/bcrypt/CryptoImpl.h>
#elif ENABLE_OPENSSL_ENCRYPTION
    #include <aws/core/utils/crypto/openssl/CryptoImpl.h>
#elif ENABLE_COMMONCRYPTO_ENCRYPTION
    #include <aws/core/utils/crypto/commoncrypto/CryptoImpl.h>
#endif

using namespace Aws::Utils;
using namespace Aws::Utils::Crypto;

static const char *s_allocationTag = "CryptoFactory";

static std::shared_ptr<HashFactory> s_MD5Factory(nullptr);
static std::shared_ptr<HashFactory> s_Sha256Factory(nullptr);
static std::shared_ptr<HMACFactory> s_Sha256HMACFactory(nullptr);

static std::shared_ptr<SymmetricCipherFactory> s_AES_CBCFactory(nullptr);
static std::shared_ptr<SymmetricCipherFactory> s_AES_CTRFactory(nullptr);
static std::shared_ptr<SymmetricCipherFactory> s_AES_GCMFactory(nullptr);

void Aws::Utils::Crypto::SetMD5Factory(const std::shared_ptr<HashFactory>& factory)
{
    s_MD5Factory = factory;
}

void Aws::Utils::Crypto::SetSha256Factory(const std::shared_ptr<HashFactory>& factory)
{
    s_Sha256Factory = factory;
}

void Aws::Utils::Crypto::SetSha256HMACFactory(const std::shared_ptr<HMACFactory>& factory)
{
    s_Sha256HMACFactory = factory;
}

void Aws::Utils::Crypto::SetAES_CBCFactory(const std::shared_ptr<SymmetricCipherFactory>& factory)
{
    s_AES_CBCFactory = factory;
}

void Aws::Utils::Crypto::SetAES_CTRFactory(const std::shared_ptr<SymmetricCipherFactory>& factory)
{
    s_AES_CTRFactory = factory;
}

void Aws::Utils::Crypto::SetAES_GCMFactory(const std::shared_ptr<SymmetricCipherFactory>& factory)
{
    s_AES_GCMFactory = factory;
}

std::shared_ptr<Hash> Aws::Utils::Crypto::CreateMD5Implementation()
{
    if(s_MD5Factory)
    {
        return s_MD5Factory->CreateImplementation();
    }

#if ENABLE_BCRYPT_ENCRYPTION
    return Aws::MakeShared<MD5BcryptImpl>(s_allocationTag);
#elif ENABLE_OPENSSL_ENCRYPTION
    return Aws::MakeShared<MD5OpenSSLImpl>(s_allocationTag);
#elif ENABLE_COMMONCRYPTO_ENCRYPTION
    return Aws::MakeShared<MD5CommonCryptoImpl>(s_allocationTag);
#else
    return nullptr;
#endif
}

std::shared_ptr<Hash> Aws::Utils::Crypto::CreateSha256Implementation()
{
    if(s_Sha256Factory)
    {
        return s_Sha256Factory->CreateImplementation();
    }

#if ENABLE_BCRYPT_ENCRYPTION
    return Aws::MakeShared<Sha256BcryptImpl>(s_allocationTag);
#elif ENABLE_OPENSSL_ENCRYPTION
    return Aws::MakeShared<Sha256OpenSSLImpl>(s_allocationTag);
#elif ENABLE_COMMONCRYPTO_ENCRYPTION
   return Aws::MakeShared<Sha256CommonCryptoImpl>(s_allocationTag);
#else
    return nullptr;
#endif
}

std::shared_ptr<HMAC> Aws::Utils::Crypto::CreateSha256HMACImplementation()
{
    if(s_Sha256HMACFactory)
    {
        return s_Sha256HMACFactory->CreateImplementation();
    }

#if ENABLE_BCRYPT_ENCRYPTION
    return Aws::MakeShared<Sha256HMACBcryptImpl>(s_allocationTag);
#elif ENABLE_OPENSSL_ENCRYPTION
    return Aws::MakeShared<Sha256HMACOpenSSLImpl>(s_allocationTag);
#elif ENABLE_COMMONCRYPTO_ENCRYPTION
    return Aws::MakeShared<Sha256HMACCommonCryptoImpl>(s_allocationTag);
#else
    return nullptr;
#endif
}

std::shared_ptr<SymmetricCipher> Aws::Utils::Crypto::CreateAES_CBCImplementation(const ByteBuffer& key)
{
    if(s_AES_CBCFactory)
    {
        return s_AES_CBCFactory->CreateImplementation(key);
    }

#if ENABLE_BCRYPT_ENCRYPTION
    return Aws::MakeShared<AES_CBC_BcryptImpl>(s_allocationTag, key);
#elif ENABLE_OPENSSL_ENCRYPTION
    return Aws::MakeShared<AES_CBC_Cipher_OpenSSL>(s_allocationTag, key);
#elif ENABLE_COMMONCRYPTO_ENCRYPTION
    return Aws::MakeShared<AES_CBC_Cipher_CommonCrypto>(s_allocationTag, key);
#else
    return nullptr;
#endif
}

std::shared_ptr<SymmetricCipher> Aws::Utils::Crypto::CreateAES_CBCImplementation(const ByteBuffer& key, const ByteBuffer& iv)
{
    if(s_AES_CBCFactory)
    {
        return s_AES_CBCFactory->CreateImplementation(key, iv);
    }

#if ENABLE_BCRYPT_ENCRYPTION
    return Aws::MakeShared<AES_CBC_BcryptImpl>(s_allocationTag, key, iv);
#elif ENABLE_OPENSSL_ENCRYPTION
    return Aws::MakeShared<AES_CBC_Cipher_OpenSSL>(s_allocationTag, key, iv);
#elif ENABLE_COMMONCRYPTO_ENCRYPTION
    return Aws::MakeShared<AES_CBC_Cipher_CommonCrypto>(s_allocationTag, key, iv);
#else
    return nullptr;
#endif
}

std::shared_ptr<SymmetricCipher> Aws::Utils::Crypto::CreateAES_CBCImplementation(ByteBuffer&& key, ByteBuffer&& iv)
{
    if(s_AES_CBCFactory)
    {
        return s_AES_CBCFactory->CreateImplementation(key, iv);
    }

#if ENABLE_BCRYPT_ENCRYPTION
    return Aws::MakeShared<AES_CBC_BcryptImpl>(s_allocationTag, key, iv);
#elif ENABLE_OPENSSL_ENCRYPTION
    return Aws::MakeShared<AES_CBC_Cipher_OpenSSL>(s_allocationTag, key, iv);
#elif ENABLE_COMMONCRYPTO_ENCRYPTION
    return Aws::MakeShared<AES_CBC_Cipher_CommonCrypto>(s_allocationTag, key, iv);
#else
    return nullptr;
#endif
}

std::shared_ptr<SymmetricCipher> Aws::Utils::Crypto::CreateAES_CTRImplementation(const ByteBuffer& key)
{
    if(s_AES_CTRFactory)
    {
        return s_AES_CTRFactory->CreateImplementation(key);
    }

#if ENABLE_BCRYPT_ENCRYPTION
    return Aws::MakeShared<AES_CTR_BcryptImpl>(s_allocationTag, key);
#elif ENABLE_OPENSSL_ENCRYPTION
    return Aws::MakeShared<AES_CTR_Cipher_OpenSSL>(s_allocationTag, key);
#elif ENABLE_COMMONCRYPTO_ENCRYPTION
    return Aws::MakeShared<AES_CTR_Cipher_CommonCrypto>(s_allocationTag, key);
#else
    return nullptr;
#endif
}

std::shared_ptr<SymmetricCipher> Aws::Utils::Crypto::CreateAES_CTRImplementation(const ByteBuffer& key, const ByteBuffer& iv)
{
    if(s_AES_CTRFactory)
    {
        return s_AES_CTRFactory->CreateImplementation(key, iv);
    }

#if ENABLE_BCRYPT_ENCRYPTION
    return Aws::MakeShared<AES_CTR_BcryptImpl>(s_allocationTag, key, iv);
#elif ENABLE_OPENSSL_ENCRYPTION
    return Aws::MakeShared<AES_CTR_Cipher_OpenSSL>(s_allocationTag, key, iv);
#elif ENABLE_COMMONCRYPTO_ENCRYPTION
    return Aws::MakeShared<AES_CTR_Cipher_CommonCrypto>(s_allocationTag, key, iv);
#else
    return nullptr;
#endif
}

std::shared_ptr<SymmetricCipher> Aws::Utils::Crypto::CreateAES_CTRImplementation(ByteBuffer&& key, ByteBuffer&& iv)
{
    if(s_AES_CTRFactory)
    {
        return s_AES_CTRFactory->CreateImplementation(key, iv);
    }

#if ENABLE_BCRYPT_ENCRYPTION
    return Aws::MakeShared<AES_CTR_BcryptImpl>(s_allocationTag, key, iv);
#elif ENABLE_OPENSSL_ENCRYPTION
    return Aws::MakeShared<AES_CTR_Cipher_OpenSSL>(s_allocationTag, key, iv);
#elif ENABLE_COMMONCRYPTO_ENCRYPTION
    return Aws::MakeShared<AES_CTR_Cipher_CommonCrypto>(s_allocationTag, key, iv);
#else
    return nullptr;
#endif
}

std::shared_ptr<SymmetricCipher> Aws::Utils::Crypto::CreateAES_GCMImplementation(const ByteBuffer& key)
{
    if(s_AES_GCMFactory)
    {
        return s_AES_GCMFactory->CreateImplementation(key);
    }

#if ENABLE_BCRYPT_ENCRYPTION
    return Aws::MakeShared<AES_GCM_BcryptImpl>(s_allocationTag, key);
#elif ENABLE_OPENSSL_ENCRYPTION
    return Aws::MakeShared<AES_GCM_Cipher_OpenSSL>(s_allocationTag, key);
#elif ENABLE_COMMONCRYPTO_ENCRYPTION
    return Aws::MakeShared<AES_GCM_Cipher_CommonCrypto>(s_allocationTag, key);
#else
    return nullptr;
#endif
}

std::shared_ptr<SymmetricCipher> Aws::Utils::Crypto::CreateAES_GCMImplementation(const ByteBuffer& key, const ByteBuffer& iv, const ByteBuffer& tag)
{
    if(s_AES_GCMFactory)
    {
        return s_AES_GCMFactory->CreateImplementation(key, iv, tag);
    }

#if ENABLE_BCRYPT_ENCRYPTION
    return Aws::MakeShared<AES_GCM_BcryptImpl>(s_allocationTag, key, iv, tag);
#elif ENABLE_OPENSSL_ENCRYPTION
    return Aws::MakeShared<AES_GCM_Cipher_OpenSSL>(s_allocationTag, key, iv, tag);
#elif ENABLE_COMMONCRYPTO_ENCRYPTION
    return Aws::MakeShared<AES_GCM_Cipher_CommonCrypto>(s_allocationTag, key, iv, tag);
#else
    return nullptr;
#endif
}

std::shared_ptr<SymmetricCipher> Aws::Utils::Crypto::CreateAES_GCMImplementation(ByteBuffer&& key, ByteBuffer&& iv, ByteBuffer&& tag)
{
    if(s_AES_GCMFactory)
    {
        return s_AES_GCMFactory->CreateImplementation(key, iv, tag);
    }

#if ENABLE_BCRYPT_ENCRYPTION
    return Aws::MakeShared<AES_GCM_BcryptImpl>(s_allocationTag, key, iv, tag);
#elif ENABLE_OPENSSL_ENCRYPTION
    return Aws::MakeShared<AES_GCM_Cipher_OpenSSL>(s_allocationTag, key, iv, tag);
#elif ENABLE_COMMONCRYPTO_ENCRYPTION
    return Aws::MakeShared<AES_GCM_Cipher_CommonCrypto>(s_allocationTag, key, iv, tag);
#else
    return nullptr;
#endif
}


