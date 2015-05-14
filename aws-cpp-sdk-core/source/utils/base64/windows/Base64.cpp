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

#include <aws/core/utils/base64/Base64.h>

#include <aws/core/utils/Array.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <Windows.h>
#include <Wincrypt.h>
#include <cmath>
#include <utility>
#include <cassert>

using namespace Aws::Utils::Base64;

Base64::Base64() 
{
}

static const char* logTag = "Base64";

Aws::String Base64::Encode(const Aws::Utils::ByteBuffer& buffer) const
{
    if (buffer.GetLength() < 1)
    {
        return "";
    }

		int strLength = static_cast<int>(4 * std::ceil((double)buffer.GetLength() / 3));
		Array<char> outputBuffer(strLength + 1);

		DWORD written = (DWORD)outputBuffer.GetLength(); 

		//http://msdn.microsoft.com/en-us/library/windows/desktop/aa379887(v=vs.85).aspx
		if (CryptBinaryToString(buffer.GetUnderlyingData(), (DWORD)buffer.GetLength(),
        CRYPT_STRING_BASE64 | CRYPT_STRING_NOCRLF, outputBuffer.GetUnderlyingData(), &written))
		{
				return outputBuffer.GetUnderlyingData();
		}

    AWS_LOG_FATAL(logTag, "Unable to base64 encode buffer");
    assert(written > 0);	

    return "";
}

Aws::Utils::ByteBuffer Base64::Decode(const Aws::String& base64Value) const
{
    if (base64Value.length() < 1)
        return Aws::Utils::ByteBuffer(0);

		unsigned decodedLength = CalculateBase64Length(base64Value);
		ByteBuffer outputBuffer(decodedLength);
		DWORD writtenLength = decodedLength;

		//http://msdn.microsoft.com/en-us/library/windows/desktop/aa380285(v=vs.85).aspx
		if (CryptStringToBinary(base64Value.c_str(), (DWORD)base64Value.length(),
        CRYPT_STRING_BASE64, outputBuffer.GetUnderlyingData(), &writtenLength, nullptr,
				nullptr))
		{
				return std::move(outputBuffer);
		}
  	  	
    AWS_LOG_FATAL(logTag, "Unable to base64 decode string");
    assert(writtenLength > 0);

    return Aws::Utils::ByteBuffer();
}

