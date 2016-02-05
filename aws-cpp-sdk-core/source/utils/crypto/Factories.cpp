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
