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

#include <aws/core/utils/crypto/Sha256.h>

#include <aws/core/utils/Outcome.h>

#include <cstring>
#include <openssl/sha.h>

using namespace Aws::Utils;
using namespace Aws::Utils::Crypto;

Sha256::Sha256() 
{
}

Sha256::~Sha256() 
{
}


HashResult Sha256::Calculate(const Aws::String& str)
{
    SHA256_CTX sha256;
    SHA256_Init(&sha256);
    SHA256_Update(&sha256, str.c_str(), str.size());

    ByteBuffer hash(SHA256_DIGEST_LENGTH);
    SHA256_Final(hash.GetUnderlyingData(), &sha256);

    return HashResult(std::move(hash));
}

HashResult Sha256::Calculate(Aws::IStream& stream)
{
    SHA256_CTX sha256;
    SHA256_Init(&sha256);

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

    ByteBuffer hash(SHA256_DIGEST_LENGTH);
    SHA256_Final(hash.GetUnderlyingData(), &sha256);

    return HashResult(std::move(hash));
}
