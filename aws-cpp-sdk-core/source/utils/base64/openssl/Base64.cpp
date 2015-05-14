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

#include <openssl/evp.h>
#include <openssl/buffer.h>
#include <iomanip>
#include <string.h>
#include <cmath>

using namespace Aws::Utils::Base64;
using namespace Aws::Utils;

Aws::String Aws::Utils::Base64::Base64::Encode(const ByteBuffer& buffer) const
{
    BIO *bio, *b64;
    int encodedSize = 4 * std::ceil((double) buffer.GetLength() / 3);
    size_t buffSize = encodedSize + 1; //add space for null terminator.
    Array<char> outputBuffer(buffSize);
    memset(outputBuffer.GetUnderlyingData(), 0, buffSize);

    b64 = BIO_new(BIO_f_base64());

    bio = BIO_new(BIO_s_mem());
    struct buf_mem_st buf_mem;
    buf_mem.length = 0;
    buf_mem.data = outputBuffer.GetUnderlyingData();
    buf_mem.max = outputBuffer.GetLength();

    BIO_set_mem_buf(bio, &buf_mem, BIO_NOCLOSE);
    bio = BIO_push(b64, bio);
    BIO_set_flags(bio, BIO_FLAGS_BASE64_NO_NL); //Ignore newlines - write everything in one line
    BIO_write(bio, buffer.GetUnderlyingData(), buffer.GetLength());
    int flushValue = BIO_flush(bio);
    BIO_free_all(bio);

    if(flushValue > 0)
    {
        return outputBuffer.GetUnderlyingData();
    }

    return "";
}

ByteBuffer Aws::Utils::Base64::Base64::Decode(const Aws::String& base64Value) const
{
    BIO *bio, *b64;
    int decodeLen = Base64::CalculateBase64Length(base64Value);
    ByteBuffer buffer(decodeLen);

    if (decodeLen > 0)
    {
        struct buf_mem_st buf_mem;
        buf_mem.length = base64Value.length();
        buf_mem.data = (char*) base64Value.c_str();
        buf_mem.max = base64Value.length();

        b64 = BIO_new(BIO_f_base64());
        bio = BIO_new(BIO_s_mem());
        BIO_set_mem_buf(bio, &buf_mem, BIO_NOCLOSE);
        bio = BIO_push(b64, bio);
        BIO_set_flags(bio, BIO_FLAGS_BASE64_NO_NL); //Do not use newlines to flush buffer
        BIO_read(bio, buffer.GetUnderlyingData(), buffer.GetLength());
        BIO_free_all(bio);
    }

    return std::move(buffer);
}
