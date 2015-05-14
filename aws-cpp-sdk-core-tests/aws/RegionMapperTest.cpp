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

#include <aws/external/gtest.h>

#include <aws/core/Region.h>

using namespace Aws;

TEST(RegionMapperTest, TestRegionToString)
{
    ASSERT_STREQ("us-east-1", RegionMapper::GetRegionName(Region::US_EAST_1));
    ASSERT_STREQ("us-west-1", RegionMapper::GetRegionName(Region::US_WEST_1));
    ASSERT_STREQ("us-west-2", RegionMapper::GetRegionName(Region::US_WEST_2));
    ASSERT_STREQ("eu-west-1", RegionMapper::GetRegionName(Region::EU_WEST_1));
    ASSERT_STREQ("eu-central-1", RegionMapper::GetRegionName(Region::EU_CENTRAL_1));
    ASSERT_STREQ("ap-southeast-1", RegionMapper::GetRegionName(Region::AP_SOUTHEAST_1));
    ASSERT_STREQ("ap-southeast-2", RegionMapper::GetRegionName(Region::AP_SOUTHEAST_2));
    ASSERT_STREQ("ap-northeast-1", RegionMapper::GetRegionName(Region::AP_NORTHEAST_1));
    ASSERT_STREQ("sa-east-1", RegionMapper::GetRegionName(Region::SA_EAST_1));
}
