/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

static char bufferStr[] = "This is an internal buffer.";
static char replacementBuf[] = "Boom, I ruined your st";
static char concatStr[] = "This Boom, I ruined your st";
static char shortenedBuffer[] = "This is an internal buf";

//Fill in a buffer and make sure we read the same exact thing back
//for the stream
TEST(PreallocatedStreamBufTest, TestStreamReadFromPrefilledBuffer)
{
    PreallocatedStreamBuf streamBuf(reinterpret_cast<unsigned char*>(bufferStr), sizeof(bufferStr));
    Aws::IOStream ioStream(&streamBuf);

    Array<uint8_t> readBuf(sizeof(bufferStr));
    ioStream.read(reinterpret_cast<char*>(readBuf.GetUnderlyingData()), readBuf.GetLength());
    ASSERT_EQ(sizeof(bufferStr), static_cast<size_t>(ioStream.gcount()));
    ASSERT_STREQ(bufferStr, reinterpret_cast<const char*>(readBuf.GetUnderlyingData()));
}

//test read seeking from the beginning
TEST(PreallocatedStreamBufTest, TestStreamReadSeekBeg)
{
    PreallocatedStreamBuf streamBuf(reinterpret_cast<unsigned char*>(bufferStr), sizeof(bufferStr));
    Aws::IOStream ioStream(&streamBuf);

    ioStream.seekg(5, std::ios_base::beg);
    Array<uint8_t> readBuf(strlen(bufferStr) + 1 - 5);
    ioStream.read(reinterpret_cast<char*>(readBuf.GetUnderlyingData()), readBuf.GetLength());
    ASSERT_EQ(sizeof(bufferStr) - 5, static_cast<size_t>(ioStream.gcount()));
    ASSERT_STREQ(bufferStr + 5, reinterpret_cast<const char*>(readBuf.GetUnderlyingData()));
}

//test read seeking from current pos.
TEST(PreallocatedStreamBufTest, TestStreamReadSeekCur)
{
    PreallocatedStreamBuf streamBuf(reinterpret_cast<unsigned char*>(bufferStr), sizeof(bufferStr));
    Aws::IOStream ioStream(&streamBuf);

    ioStream.seekg(5, std::ios_base::cur);
    Array<uint8_t> readBuf(sizeof(bufferStr) - 5);
    ioStream.read(reinterpret_cast<char*>(readBuf.GetUnderlyingData()), readBuf.GetLength());
    ASSERT_EQ(sizeof(bufferStr) - 5, static_cast<size_t>(ioStream.gcount()));
    ASSERT_STREQ(bufferStr + 5, reinterpret_cast<const char*>(readBuf.GetUnderlyingData()));
}

//test read seeking from the end.
TEST(PreallocatedStreamBufTest, TestStreamReadSeekEnd)
{
    PreallocatedStreamBuf streamBuf(reinterpret_cast<unsigned char*>(bufferStr), sizeof(bufferStr));
    Aws::IOStream ioStream(&streamBuf);

    auto seekPos = sizeof(bufferStr) - 5;
    ioStream.seekg(seekPos, std::ios_base::end);
    Array<uint8_t> readBuf(sizeof(bufferStr) - 5);
    ioStream.read(reinterpret_cast<char*>(readBuf.GetUnderlyingData()), readBuf.GetLength());
    ASSERT_EQ(sizeof(bufferStr) - 5, static_cast<size_t>(ioStream.gcount()));
    ASSERT_STREQ(bufferStr + 5, reinterpret_cast<const char*>(readBuf.GetUnderlyingData()));
}

//test write seeking from the beginning.
TEST(PreallocatedStreamBufTest, TestStreamWriteSeekBeg)
{
    char bufferStrLocal[] = "This is an internal buffer.";
    PreallocatedStreamBuf streamBuf(reinterpret_cast<unsigned char*>(bufferStrLocal), sizeof(bufferStrLocal));
    Aws::IOStream ioStream(&streamBuf);

    ioStream.seekp(5, std::ios_base::beg);
    ioStream.write(replacementBuf, sizeof(replacementBuf));

    ASSERT_STREQ(concatStr, bufferStrLocal);
}

//test write seeking from the current position.
TEST(PreallocatedStreamBufTest, TestStreamWriteSeekCur)
{
    char bufferStrLocal[] = "This is an internal buffer.";
    PreallocatedStreamBuf streamBuf(reinterpret_cast<unsigned char*>(bufferStrLocal), sizeof(bufferStrLocal));
    Aws::IOStream ioStream(&streamBuf);

    ioStream.seekp(5, std::ios_base::cur);
    ioStream.write(replacementBuf, sizeof(replacementBuf));

    ASSERT_STREQ(concatStr, bufferStrLocal);
}

//test write seeking from the end.
TEST(PreallocatedStreamBufTest, TestStreamWriteSeekEnd)
{
    char bufferStrLocal[] = "This is an internal buffer.";
    PreallocatedStreamBuf streamBuf(reinterpret_cast<unsigned char*>(bufferStrLocal), sizeof(bufferStrLocal));
    Aws::IOStream ioStream(&streamBuf);

    auto seekPos = strlen(bufferStrLocal) + 1 - 5;
    ioStream.seekp(seekPos, std::ios_base::end);
    ioStream.write(replacementBuf, sizeof(replacementBuf));

    ASSERT_STREQ(concatStr, bufferStrLocal);
}

//make sure if the max stream size has been set to something smaller than the 
//buffer size, that max stream size is honored instead of the buffer length for reads
TEST(PreallocatedStreamBufTest, TestStreamReadHonorsSizeLimitShorterThanBuffer)
{
    PreallocatedStreamBuf streamBuf(reinterpret_cast<unsigned char*>(bufferStr), sizeof(bufferStr) - 5);
    Aws::IOStream ioStream(&streamBuf);

    Array<uint8_t> readBuf(sizeof(bufferStr));
    readBuf[sizeof(bufferStr) - 5] = 0;

    ioStream.read(reinterpret_cast<char*>(readBuf.GetUnderlyingData()), readBuf.GetLength());

    ASSERT_EQ(sizeof(bufferStr) - 5, static_cast<size_t>(ioStream.gcount()));
    ASSERT_STREQ(shortenedBuffer, reinterpret_cast<const char*>(readBuf.GetUnderlyingData()));
}

TEST(PreallocatedStreamBufTest, TestZeroLengthSeekFromEnd)
{
    PreallocatedStreamBuf streamBuf(reinterpret_cast<unsigned char*>(bufferStr), sizeof(bufferStr));
    Aws::IOStream ioStream(&streamBuf);

    ioStream.seekg(0, std::ios_base::end);
    ASSERT_FALSE(ioStream.eof());

    // attempting to read a character should fail and hit eof since we're one position after
    // the last character
    char ch = 0;
    ioStream.get(ch);
    // could check ch == 0 but I don't think the standard guarantees that
    ASSERT_TRUE(ioStream.eof());
}
