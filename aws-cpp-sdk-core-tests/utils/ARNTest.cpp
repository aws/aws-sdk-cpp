/**
 * Copyright 2019 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/ARN.h>

using namespace Aws::Utils;

TEST(ARNTest, TestHappyPath)
{
    ARN arn("arn:aws:s3:us-east-1:123456789012:bucket");
    ASSERT_TRUE(arn);
    ASSERT_EQ("aws", arn.GetPartition());
    ASSERT_EQ("s3", arn.GetService());
    ASSERT_EQ("us-east-1", arn.GetRegion());
    ASSERT_EQ("123456789012", arn.GetAccountId());
    ASSERT_EQ("bucket", arn.GetResource());

    ARN arn1("arn:aws-us-gov:ec2:us-gov-1:123456789120:bucket:bb:qu");
    ASSERT_TRUE(arn1);
    ASSERT_EQ("aws-us-gov", arn1.GetPartition());
    ASSERT_EQ("ec2", arn1.GetService());
    ASSERT_EQ("us-gov-1", arn1.GetRegion());
    ASSERT_EQ("123456789120", arn1.GetAccountId());
    ASSERT_EQ("bucket:bb:qu", arn1.GetResource());

    ARN arn2("arn:aws-cn:ec2:cn-north-1:123456789120:bucket/bb/qu");
    ASSERT_TRUE(arn2);
    ASSERT_EQ("aws-cn", arn2.GetPartition());
    ASSERT_EQ("ec2", arn2.GetService());
    ASSERT_EQ("cn-north-1", arn2.GetRegion());
    ASSERT_EQ("123456789120", arn2.GetAccountId());
    ASSERT_EQ("bucket/bb/qu", arn2.GetResource());

    ARN arn3("arn:aws:s2::123456789120:whatever:is:put?/here, will be considered:as+_0@@ resource");
    ASSERT_TRUE(arn3);
    ASSERT_EQ("aws", arn3.GetPartition());
    // This is on purpose, service specific ARN should be able to tell if a service name is correct or not.
    ASSERT_EQ("s2", arn3.GetService());
    // Region is omitted sometimes for some service.
    ASSERT_EQ("", arn3.GetRegion());
    ASSERT_EQ("123456789120", arn3.GetAccountId());
    ASSERT_EQ("whatever:is:put?/here, will be considered:as+_0@@ resource", arn3.GetResource());
}

TEST(ARNTest, TestInvalidARN)
{
    // No "arn" prefix
    ASSERT_FALSE(ARN("aws:s3:us-east-1:123456789012:bucket"));

    // Incomplete ARN (for example, missing service or resource), at least 6 parts separated by ':' are required.
    ASSERT_FALSE(ARN("arn:aws:us-east-1:12345679120"));
    ASSERT_FALSE(ARN("arn:aws:s3:us-east-1:12345679120"));
    ASSERT_FALSE(ARN("Haaaaaaaahahahah:::::"));
}