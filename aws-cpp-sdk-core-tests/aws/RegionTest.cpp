/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
