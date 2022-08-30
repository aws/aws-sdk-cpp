/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/ec2/EC2Client.h>
#include <aws/ec2/model/CreateSecurityGroupRequest.h>
#include <aws/ec2/model/CreateSecurityGroupResponse.h>
#include <aws/ec2/model/CreateVpcRequest.h>
#include <aws/ec2/model/CreateVpcResponse.h>
#include <aws/ec2/model/DeleteSecurityGroupRequest.h>
#include <aws/ec2/model/DeleteVpcRequest.h>
#include <aws/ec2/model/DescribeSecurityGroupsRequest.h>
#include <aws/ec2/model/DescribeSecurityGroupsResponse.h>
#include <aws/ec2/model/DescribeSpotFleetRequestsRequest.h>
#include <aws/ec2/model/DescribeSpotFleetRequestsResponse.h>
#include <aws/ec2/model/DescribeVpcsRequest.h>
#include <aws/ec2/model/DescribeVpcsResponse.h>
#include <aws/testing/TestingEnvironment.h>
#include <aws/core/utils/UUID.h>

#include <chrono>
#include <thread>

using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

namespace
{

static const char* ALLOCATION_TAG = "EC2Tests";
static const char* BASE_SECURITY_GROUP_NAME = "CppSDKIntegrationTestSecurityGroup";

class EC2OperationTest : public ::testing::Test
{

protected:

    enum class ObjectState {
        Ready,
        Nonexistent
    };

    static std::shared_ptr<Aws::EC2::EC2Client> m_EC2Client;

    static Aws::String GetRandomUUID()
    {
        static const Aws::Utils::UUID resourceUUID = Aws::Utils::UUID::RandomUUID();
        return resourceUUID;
    }

    static Aws::String BuildResourceName(const char* baseName)
    {
        return Aws::Testing::GetAwsResourcePrefix() + baseName + GetRandomUUID();
    }

    static void SetUpTestCase()
    {
        ClientConfiguration config;
        config.scheme = Scheme::HTTPS;
        config.region = Aws::Region::US_EAST_1;

        m_EC2Client = Aws::MakeShared<Aws::EC2::EC2Client>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG), config);

        DeleteSecurityGroup(BuildResourceName(BASE_SECURITY_GROUP_NAME));
    }

    static void TearDownTestCase()
    {
        DeleteSecurityGroup(BuildResourceName(BASE_SECURITY_GROUP_NAME));

        m_EC2Client = nullptr;
    }

    static void DeleteSecurityGroup(const Aws::String& groupName)
    {
        Aws::EC2::Model::DeleteSecurityGroupRequest deleteRequest;
        deleteRequest.SetGroupName(groupName);

        auto deleteOutcome = m_EC2Client->DeleteSecurityGroup(deleteRequest);
        if(deleteOutcome.IsSuccess())
        {
            WaitOnSecurityGroupState(groupName, ObjectState::Nonexistent);
        }
    }

    static void WaitOnSecurityGroupState(const Aws::String& groupName, ObjectState objectState)
    {
        Aws::EC2::Model::DescribeSecurityGroupsRequest describeRequest;
        describeRequest.AddGroupNames(groupName);

        bool finished = false;
        while(!finished)
        {
            auto describeOutcome = m_EC2Client->DescribeSecurityGroups(describeRequest);
            if (describeOutcome.IsSuccess())
            {
                const Aws::Vector< Aws::EC2::Model::SecurityGroup >& groups = describeOutcome.GetResult().GetSecurityGroups();
                bool exists = std::find_if(groups.cbegin(), groups.cend(), [](const Aws::EC2::Model::SecurityGroup& group){ return group.GetGroupName() == BuildResourceName(BASE_SECURITY_GROUP_NAME); }) != groups.cend();
                finished = (objectState == ObjectState::Nonexistent && !exists) || (objectState == ObjectState::Ready && exists);
            }
            else if (describeOutcome.GetError().GetErrorType() == Aws::EC2::EC2Errors::INVALID_GROUP__NOT_FOUND)
            {
                finished = objectState == ObjectState::Nonexistent;
            }

            if (!finished)
            {
                std::this_thread::sleep_for(std::chrono::seconds(1));
            }
        }
    }

};

std::shared_ptr<Aws::EC2::EC2Client> EC2OperationTest::m_EC2Client(nullptr);

} // anonymous namespace

TEST_F(EC2OperationTest, DescribeSpotFleet)
{
    Aws::EC2::Model::DescribeSpotFleetRequestsRequest request;

    auto outcome = m_EC2Client->DescribeSpotFleetRequests(request);
    AWS_ASSERT_SUCCESS(outcome);
}

TEST_F(EC2OperationTest, CreateSecurityGroup)
{
    Aws::EC2::Model::CreateSecurityGroupRequest createRequest;

    Aws::String securityGroupName = BuildResourceName(BASE_SECURITY_GROUP_NAME);
    createRequest.SetGroupName(securityGroupName);
    createRequest.SetDescription("A dummy description");

    auto createOutcome = m_EC2Client->CreateSecurityGroup(createRequest);
    AWS_ASSERT_SUCCESS(createOutcome);

    WaitOnSecurityGroupState(securityGroupName, ObjectState::Ready);
    DeleteSecurityGroup(securityGroupName);
}



