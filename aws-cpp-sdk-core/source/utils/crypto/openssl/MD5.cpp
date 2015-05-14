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

#include <aws/core/utils/crypto/MD5.h>

#include <aws/core/utils/Outcome.h>

#include <cstring>
#include <openssl/md5.h>

using namespace Aws::Utils;
using namespace Aws::Utils::Crypto;

MD5::MD5() 
{
}

MD5::~MD5() 
{
}


HashResult MD5::Calculate(const Aws::String& str)
{
    MD5_CTX md5;
    MD5_Init(&md5);
    MD5_Update(&md5, str.c_str(), str.size());
 
    ByteBuffer hash(MD5_DIGEST_LENGTH);
    MD5_Final(hash.GetUnderlyingData(), &md5);

    return HashResult(std::move(hash));
}

HashResult MD5::Calculate(Aws::IStream& stream)
{
    MD5_CTX md5;
    MD5_Init(&md5);

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

    ByteBuffer hash(MD5_DIGEST_LENGTH);
    MD5_Final(hash.GetUnderlyingData(), &md5);

    return HashResult(std::move(hash));
}
