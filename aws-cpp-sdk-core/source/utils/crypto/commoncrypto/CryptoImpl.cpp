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

#include <aws/core/utils/crypto/commoncrypto/CryptoImpl.h>
#include <aws/core/utils/Outcome.h>
#include <CommonCrypto/CommonDigest.h>
#include <CommonCrypto/CommonHMAC.h>
#include <CommonCrypto/CommonCrypto.h>


using namespace Aws::Utils;
using namespace Aws::Utils::Crypto;

HashResult MD5CommonCryptoImpl::Calculate(const Aws::String& str)
{
    ByteBuffer hash(CC_MD5_DIGEST_LENGTH);
    CC_MD5(str.c_str(), str.length(), hash.GetUnderlyingData());

    return HashResult(std::move(hash));
}

HashResult MD5CommonCryptoImpl::Calculate(Aws::IStream& stream)
{
    CC_MD5_CTX md5;
    CC_MD5_Init(&md5);

    unsigned currentPos = stream.tellg();
    stream.seekg(0, stream.beg);

    char streamBuffer[Aws::Utils::Crypto::Hash::INTERNAL_HASH_STREAM_BUFFER_SIZE];
    while(stream.good())
    {
	    stream.read(streamBuffer, Aws::Utils::Crypto::Hash::INTERNAL_HASH_STREAM_BUFFER_SIZE);
	    auto bytesRead = stream.gcount();

	    if(bytesRead > 0)
	    {
	        CC_MD5_Update(&md5, streamBuffer, bytesRead);
	    }
    }

    stream.clear();
    stream.seekg(currentPos, stream.beg);

    ByteBuffer hash(CC_MD5_DIGEST_LENGTH);
    CC_MD5_Final(hash.GetUnderlyingData(), &md5);

    return HashResult(std::move(hash));
}

HashResult Sha256CommonCryptoImpl::Calculate(const Aws::String& str)
{
    ByteBuffer hash(CC_SHA256_DIGEST_LENGTH);
    CC_SHA256(str.c_str(), str.length(), hash.GetUnderlyingData());

    return HashResult(std::move(hash));
}

HashResult Sha256CommonCryptoImpl::Calculate(Aws::IStream& stream)
{
    CC_SHA256_CTX sha256;
    CC_SHA256_Init(&sha256);

    unsigned currentPos = stream.tellg();
    stream.seekg(0, stream.beg);

    char streamBuffer[Aws::Utils::Crypto::Hash::INTERNAL_HASH_STREAM_BUFFER_SIZE];
    while(stream.good())
    {
	    stream.read(streamBuffer, Aws::Utils::Crypto::Hash::INTERNAL_HASH_STREAM_BUFFER_SIZE);
	    auto bytesRead = stream.gcount();

	    if(bytesRead > 0)
	    {
	        CC_SHA256_Update(&sha256, streamBuffer, bytesRead);
	    }
    }

    stream.clear();
    stream.seekg(currentPos, stream.beg);

    ByteBuffer hash(CC_SHA256_DIGEST_LENGTH);
    CC_SHA256_Final(hash.GetUnderlyingData(), &sha256);

    return HashResult(std::move(hash));
}

HashResult Sha256HMACCommonCryptoImpl::Calculate(const ByteBuffer& toSign, const ByteBuffer& secret)
{
    unsigned int length = CC_SHA256_DIGEST_LENGTH;
    ByteBuffer digest(length);
    std::memset(digest.GetUnderlyingData(), 0, length);

    CCHmac(kCCHmacAlgSHA256, secret.GetUnderlyingData(), secret.GetLength(), toSign.GetUnderlyingData(), toSign.GetLength(), digest.GetUnderlyingData());

    return HashResult(std::move(digest));
}
