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
#include <aws/core/utils/Array.h>
#include <aws/core/utils/stream/SimpleStreamBuf.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

using namespace Aws::Utils;
using namespace Aws::Utils::Stream;

// these are all just variants of some of the PreallocatedStreamBuf tests
const char bufferStr[] = "This is an internal buffer.";
const char replacementBuf[] = "Boom, I ruined your st";
const char concatStr[] = "This Boom, I ruined your st";


//Write to an empty buffer via a stream interface, and make sure the buffer
//contains the data.
TEST(SimpleStreamBufTest, TestStreamWriteToPrefilledBuffer)
{
    SimpleStreamBuf streamBuf;
    Aws::IOStream ioStream(&streamBuf);
    ioStream.write(bufferStr, sizeof(bufferStr));

    ASSERT_STREQ(bufferStr, streamBuf.str().c_str());
}

//test read seeking from the beginning
TEST(SimpleStreamBufTest, TestStreamReadSeekBeg)
{
    SimpleStreamBuf streamBuf;
    Aws::IOStream ioStream(&streamBuf);
    ioStream.write(bufferStr, sizeof(bufferStr));

    ioStream.seekg(5, std::ios_base::beg);
    Array<uint8_t> readBuf(strlen(bufferStr) + 1 - 5);
    ioStream.read((char*)readBuf.GetUnderlyingData(), readBuf.GetLength());
    ASSERT_EQ(sizeof(bufferStr) - 5, static_cast<size_t>(ioStream.gcount()));
    ASSERT_STREQ(bufferStr + 5, (const char*)readBuf.GetUnderlyingData());
}

//test read seeking from current pos.
TEST(SimpleStreamBufTest, TestStreamReadSeekCur)
{
    SimpleStreamBuf streamBuf;
    Aws::IOStream ioStream(&streamBuf);
    ioStream.write(bufferStr, sizeof(bufferStr));

    ioStream.seekg(5, std::ios_base::cur);
    Array<uint8_t> readBuf(sizeof(bufferStr) - 5);
    ioStream.read((char*)readBuf.GetUnderlyingData(), readBuf.GetLength());
    ASSERT_EQ(sizeof(bufferStr) - 5, static_cast<size_t>(ioStream.gcount()));
    ASSERT_STREQ(bufferStr + 5, (const char*)readBuf.GetUnderlyingData());
}

//test read seeking from the end.
TEST(SimpleStreamBufTest, TestStreamReadSeekEnd)
{
    SimpleStreamBuf streamBuf;
    Aws::IOStream ioStream(&streamBuf);
    ioStream.write(bufferStr, sizeof(bufferStr));

    auto seekPos = sizeof(bufferStr) - 5;
    ioStream.seekg(seekPos, std::ios_base::end);
    Array<uint8_t> readBuf(sizeof(bufferStr) - 5);
    ioStream.read((char*)readBuf.GetUnderlyingData(), readBuf.GetLength());
    ASSERT_EQ(sizeof(bufferStr) - 5, static_cast<size_t>(ioStream.gcount()));
    ASSERT_STREQ(bufferStr + 5, (const char*)readBuf.GetUnderlyingData());
}

//test write seeking from the beginning.
TEST(SimpleStreamBufTest, TestStreamWriteSeekBeg)
{
    SimpleStreamBuf streamBuf;
    Aws::IOStream ioStream(&streamBuf);
    ioStream.write(bufferStr, sizeof(bufferStr));

    ioStream.seekp(5, std::ios_base::beg);   
    ioStream.write(replacementBuf, sizeof(replacementBuf));

    ASSERT_STREQ(concatStr, streamBuf.str().c_str());
}

//test write seeking from the end.
TEST(SimpleStreamBufTest, TestStreamWriteSeekEnd)
{
    SimpleStreamBuf streamBuf;
    Aws::IOStream ioStream(&streamBuf);
    ioStream.write(bufferStr, sizeof(bufferStr));

    auto seekPos = strlen(bufferStr) + 1 - 5;
    ioStream.seekp(seekPos, std::ios_base::end);
    ioStream.write(replacementBuf, sizeof(replacementBuf));

    ASSERT_STREQ(concatStr, streamBuf.str().c_str());
}

TEST(SimpleStreamBufTest, TestZeroLengthSeekFromEnd)
{
    SimpleStreamBuf streamBuf;
    Aws::IOStream ioStream(&streamBuf);
    ioStream.write(bufferStr, sizeof(bufferStr));

    ioStream.seekg(0, std::ios_base::end);
    ASSERT_FALSE(ioStream.eof());

    // attempting to read a character should fail and hit eof since we're one position after
    // the last character
    char ch = 0;
    ioStream.get(ch);
    // could check ch == 0 but I don't think the standard guarantees that
    ASSERT_TRUE(ioStream.eof());
}

TEST(SimpleStreamBufTest, SetStr)
{
    SimpleStreamBuf streamBuf;
    streamBuf.str(bufferStr);

    ASSERT_STREQ(bufferStr, streamBuf.str().c_str());
}

TEST(SimpleStreamBufTest, StringConstructor)
{
    SimpleStreamBuf streamBuf(bufferStr);
    ASSERT_STREQ(bufferStr, streamBuf.str().c_str());
}

