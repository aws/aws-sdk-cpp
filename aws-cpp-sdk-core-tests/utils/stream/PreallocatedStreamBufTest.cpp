/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/external/gtest.h>
#include <aws/core/utils/stream/PreallocatedStreamBuf.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

using namespace Aws::Utils;
using namespace Aws::Utils::Stream;

TEST(PreallocatedStreamBufTest, TestStreamReadFromPrefilledBuffer)
{
    const char* bufferStr = "This is an internal buffer.";
    Array<uint8_t> buffer((uint8_t*)bufferStr, strlen(bufferStr) + 1);
    PreallocatedStreamBuf streamBuf(&buffer, buffer.GetLength());
    Aws::IOStream ioStream(&streamBuf);

    Array<uint8_t> readBuf(strlen(bufferStr) + 1);
    ioStream.read((char*)readBuf.GetUnderlyingData(), readBuf.GetLength());
    ASSERT_EQ(strlen(bufferStr) + 1, ioStream.gcount());
    ASSERT_STREQ(bufferStr, (const char*)readBuf.GetUnderlyingData());
}

TEST(PreallocatedStreamBufTest, TestStreamWriteToPrefilledBuffer)
{
    const char* bufferStr = "This is an internal buffer.";
    Array<uint8_t> buffer(strlen(bufferStr) + 1);
    PreallocatedStreamBuf streamBuf(&buffer, buffer.GetLength());
    Aws::IOStream ioStream(&streamBuf);

    ioStream.write(bufferStr, strlen(bufferStr) + 1);
    ASSERT_STREQ(bufferStr, (const char*)buffer.GetUnderlyingData());
}

TEST(PreallocatedStreamBufTest, TestStreamReadSeekBeg)
{
    const char* bufferStr = "This is an internal buffer.";
    Array<uint8_t> buffer((uint8_t*)bufferStr, strlen(bufferStr) + 1);
    PreallocatedStreamBuf streamBuf(&buffer, buffer.GetLength());
    Aws::IOStream ioStream(&streamBuf);

    ioStream.seekg(5, std::ios_base::beg);
    Array<uint8_t> readBuf(strlen(bufferStr) + 1 - 5);
    ioStream.read((char*)readBuf.GetUnderlyingData(), readBuf.GetLength());
    ASSERT_EQ(strlen(bufferStr) + 1 - 5, ioStream.gcount());
    ASSERT_STREQ(bufferStr + 5, (const char*)readBuf.GetUnderlyingData());
}

TEST(PreallocatedStreamBufTest, TestStreamReadSeekCur)
{
    const char* bufferStr = "This is an internal buffer.";
    Array<uint8_t> buffer((uint8_t*)bufferStr, strlen(bufferStr) + 1);
    PreallocatedStreamBuf streamBuf(&buffer, buffer.GetLength());
    Aws::IOStream ioStream(&streamBuf);

    ioStream.seekg(5, std::ios_base::cur);
    Array<uint8_t> readBuf(strlen(bufferStr) + 1 - 5);
    ioStream.read((char*)readBuf.GetUnderlyingData(), readBuf.GetLength());
    ASSERT_EQ(strlen(bufferStr) + 1 - 5, ioStream.gcount());
    ASSERT_STREQ(bufferStr + 5, (const char*)readBuf.GetUnderlyingData());
}

TEST(PreallocatedStreamBufTest, TestStreamReadSeekEnd)
{
    const char* bufferStr = "This is an internal buffer.";
    Array<uint8_t> buffer((uint8_t*)bufferStr, strlen(bufferStr) + 1);
    PreallocatedStreamBuf streamBuf(&buffer, buffer.GetLength());
    Aws::IOStream ioStream(&streamBuf);

    auto seekPos = strlen(bufferStr) + 1 - 5;
    ioStream.seekg(seekPos, std::ios_base::end);
    Array<uint8_t> readBuf(strlen(bufferStr) + 1 - 5);
    ioStream.read((char*)readBuf.GetUnderlyingData(), readBuf.GetLength());
    ASSERT_EQ(strlen(bufferStr) + 1 - 5, ioStream.gcount());
    ASSERT_STREQ(bufferStr + 5, (const char*)readBuf.GetUnderlyingData());
}

TEST(PreallocatedStreamBufTest, TestStreamWriteSeekBeg)
{                           
    const char* bufferStr = "This is an internal buffer.";
    Array<uint8_t> buffer((uint8_t*)bufferStr, strlen(bufferStr) + 1);
    PreallocatedStreamBuf streamBuf(&buffer, buffer.GetLength());
    Aws::IOStream ioStream(&streamBuf);

    ioStream.seekp(5, std::ios_base::beg);   
    const char* replacementBuf = "Boom, I ruined your st";
    ioStream.write(replacementBuf, strlen(replacementBuf) + 1);

    const char* concatStr = "This Boom, I ruined your st";
    ASSERT_STREQ(concatStr, (const char*)buffer.GetUnderlyingData());
}

TEST(PreallocatedStreamBufTest, TestStreamWriteSeekCur)
{
    const char* bufferStr = "This is an internal buffer.";
    Array<uint8_t> buffer((uint8_t*)bufferStr, strlen(bufferStr) + 1);
    PreallocatedStreamBuf streamBuf(&buffer, buffer.GetLength());
    Aws::IOStream ioStream(&streamBuf);

    ioStream.seekp(5, std::ios_base::cur);
    const char* replacementBuf = "Boom, I ruined your st";
    ioStream.write(replacementBuf, strlen(replacementBuf) + 1);

    const char* concatStr = "This Boom, I ruined your st";
    ASSERT_STREQ(concatStr, (const char*)buffer.GetUnderlyingData());
}

TEST(PreallocatedStreamBufTest, TestStreamWriteSeekEnd)
{
    const char* bufferStr = "This is an internal buffer.";
    Array<uint8_t> buffer((uint8_t*)bufferStr, strlen(bufferStr) + 1);
    PreallocatedStreamBuf streamBuf(&buffer, buffer.GetLength());
    Aws::IOStream ioStream(&streamBuf);

    auto seekPos = strlen(bufferStr) + 1 - 5;
    ioStream.seekp(seekPos, std::ios_base::end);
    const char* replacementBuf = "Boom, I ruined your st";
    ioStream.write(replacementBuf, strlen(replacementBuf) + 1);

    const char* concatStr = "This Boom, I ruined your st";
    ASSERT_STREQ(concatStr, (const char*)buffer.GetUnderlyingData());
}

TEST(PreallocatedStreamBufTest, TestStreamReadHonorsSizeLimitShorterThanBuffer)
{
    const char* bufferStr = "This is an internal buffer.";
    Array<uint8_t> buffer((uint8_t*)bufferStr, strlen(bufferStr) + 1);
    PreallocatedStreamBuf streamBuf(&buffer, buffer.GetLength() - 5);
    Aws::IOStream ioStream(&streamBuf);

    Array<uint8_t> readBuf(strlen(bufferStr) + 1);
    readBuf[strlen(bufferStr) - 4] = 0;

    ioStream.read((char*)readBuf.GetUnderlyingData(), readBuf.GetLength());

    ASSERT_EQ(strlen(bufferStr) - 4, ioStream.gcount());
    const char* shortenedBuffer = "This is an internal buf";
    ASSERT_STREQ(shortenedBuffer, (const char*)readBuf.GetUnderlyingData());
}

TEST(PreallocatedStreamBufTest, TestStreamWriteHonorsSizeLimitShorterThanBuffer)
{
    const char* bufferStr = "This is an internal buffer.";
    Array<uint8_t> buffer(strlen(bufferStr) + 1);
    PreallocatedStreamBuf streamBuf(&buffer, buffer.GetLength() - 5);
    Aws::IOStream ioStream(&streamBuf);
    buffer[strlen(bufferStr) - 4] = 0;
    ioStream.write(bufferStr, strlen(bufferStr) + 1);
    const char* shortenedBuffer = "This is an internal buf";
    ASSERT_STREQ(shortenedBuffer, (const char*)buffer.GetUnderlyingData());
}