/*
 * Copyright 2010-2020 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

TEST(RegionTest, TestComputeSignerRegionFromPseudoRegion)
{
    ASSERT_STREQ("us-east-1", Aws::Region::ComputeSignerRegion("aws-global").c_str());
    ASSERT_STREQ("us-east-1", Aws::Region::ComputeSignerRegion("us-east-1-fips").c_str());
    ASSERT_STREQ("us-east-1", Aws::Region::ComputeSignerRegion("s3-external-1").c_str());
    ASSERT_STREQ("us-west-2", Aws::Region::ComputeSignerRegion("fips-us-west-2").c_str());
    ASSERT_STREQ("eu-west-1", Aws::Region::ComputeSignerRegion("eu-west-1").c_str());
}
