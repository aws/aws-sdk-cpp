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
