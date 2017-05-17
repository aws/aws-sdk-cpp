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
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSSet.h>

using namespace Aws::Utils;

TEST(UUIDTest, TestPlatformGeneratesUUID)
{
    Aws::Set<Aws::String> generatedUUids;

    for(size_t i = 0u; i < 1000u; ++i)
    {
        UUID uuid = UUID::RandomUUID();
        Aws::String uuidStr = uuid;        
        ASSERT_EQ(36u, uuidStr.length());
        ByteBuffer rawUUID = uuid;
        ASSERT_EQ(16u, rawUUID.GetLength());
        ASSERT_EQ(0x40u, 0x40u & rawUUID[6]);
        ASSERT_EQ(0x80u, 0x80u & rawUUID[8]);

	auto iter = generatedUUids.find(uuidStr);
	auto endIter = generatedUUids.end();
	ASSERT_TRUE( iter == endIter );

        generatedUUids.insert(uuidStr);
    }    
}

TEST(UUIDTest, TestUUIDToStringConversion)
{
    ByteBuffer rawUuuid = HashingUtils::HexDecode("f81d4fae7dec11d0a76500a0c91e6bf6");
    const char* expectedStr = "F81D4FAE-7DEC-11D0-A765-00A0C91E6BF6";

    UUID uuid(rawUuuid.GetUnderlyingData());
    Aws::String convertedStr = uuid;
    ASSERT_STREQ(expectedStr, convertedStr.c_str());
}

TEST(UUIDTest, TestUUIDFromStringConversion)
{
    Aws::String originalStr = "F81D4FAE-7DEC-11D0-A765-00A0C91E6BF6";

    UUID uuid(originalStr);
    Aws::String convertedStr = uuid;
    ASSERT_STREQ(originalStr.c_str(), convertedStr.c_str());
}


