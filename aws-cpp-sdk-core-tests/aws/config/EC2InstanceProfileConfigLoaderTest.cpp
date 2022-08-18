/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <gtest/gtest.h>
#include <aws/core/config/AWSProfileConfigLoader.h>
#include <aws/testing/mocks/aws/auth/MockAWSHttpResourceClient.h>
#include <fstream>

using namespace Aws::Utils;
using namespace Aws::Config;

static const char* const ALLOCATION_TAG = "EC2InstanceProfileConfigLoaderTest";

TEST(EC2InstanceProfileConfigLoaderTest, TestSuccesfullyHitsService)
{
    std::shared_ptr<MockEC2MetadataClient> mockClient = Aws::MakeShared<MockEC2MetadataClient>(ALLOCATION_TAG);
    mockClient->SetCurrentRegionValue("us-east-1");
    mockClient->SetMockedCredentialsValue("{ \"AccessKeyId\": \"goodAccessKey\", \"SecretAccessKey\": \"goodSecretKey\", \"Token\": \"goodToken\" }");

    EC2InstanceProfileConfigLoader loader(mockClient);
    ASSERT_TRUE(loader.Load());
    ASSERT_EQ(1u, loader.GetProfiles().size());
    auto profiles = loader.GetProfiles();
    ASSERT_NE(profiles.end(), profiles.find(Aws::Config::INSTANCE_PROFILE_KEY));
    auto creds = profiles[Aws::Config::INSTANCE_PROFILE_KEY].GetCredentials();
    ASSERT_STREQ("goodAccessKey", creds.GetAWSAccessKeyId().c_str());
    ASSERT_STREQ("goodSecretKey", creds.GetAWSSecretKey().c_str());
    ASSERT_STREQ("goodToken", creds.GetSessionToken().c_str());
    ASSERT_STREQ("us-east-1", profiles[Aws::Config::INSTANCE_PROFILE_KEY].GetRegion().c_str());
}

TEST(EC2InstanceProfileConfigLoaderTest, TestFailsToHitService)
{
    std::shared_ptr<MockEC2MetadataClient> mockClient = Aws::MakeShared<MockEC2MetadataClient>(ALLOCATION_TAG);
    mockClient->SetCurrentRegionValue("");
    mockClient->SetMockedCredentialsValue("");

    EC2InstanceProfileConfigLoader loader(mockClient);
    ASSERT_FALSE(loader.Load());
    ASSERT_EQ(0u, loader.GetProfiles().size());
}

TEST(EC2InstanceProfileConfigLoaderTest, TestBadJsonInResponse)
{
    std::shared_ptr<MockEC2MetadataClient> mockClient = Aws::MakeShared<MockEC2MetadataClient>(ALLOCATION_TAG);
    mockClient->SetCurrentRegionValue("us-east-1");
    mockClient->SetMockedCredentialsValue("{ \"AccessKeyId\": \"goodAccessKey\",");

    EC2InstanceProfileConfigLoader loader(mockClient);
    ASSERT_FALSE(loader.Load());
    ASSERT_EQ(0u, loader.GetProfiles().size());
}
