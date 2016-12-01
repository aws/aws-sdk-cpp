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

#include <chrono>
#include <thread>

using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

namespace
{

static const char* ALLOCATION_TAG = "EC2Tests";
static const char* SECURITY_GROUP_NAME = "CppSDKIntegrationTestSecurityGroup";

class EC2OperationTest : public ::testing::Test
{

protected:

    enum class ObjectState {
        Ready,
        Nonexistent
    };

    static std::shared_ptr<Aws::EC2::EC2Client> m_EC2Client;

    static Aws::String m_vpcId;


    static void SetUpTestCase()
    {
        ClientConfiguration config;
        config.scheme = Scheme::HTTPS;
        config.region = Aws::Region::US_EAST_1;

        m_EC2Client = Aws::MakeShared<Aws::EC2::EC2Client>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG), config);
        
        Aws::EC2::Model::CreateVpcRequest createVpcRequest;
        createVpcRequest.SetCidrBlock("10.0.0.0/16");
        createVpcRequest.SetInstanceTenancy(Aws::EC2::Model::Tenancy::default_);

        auto createOutcome = m_EC2Client->CreateVpc(createVpcRequest);
        ASSERT_TRUE(createOutcome.IsSuccess());

        m_vpcId = createOutcome.GetResult().GetVpc().GetVpcId();
        WaitOnVpcState(m_vpcId, ObjectState::Ready);

        DeleteSecurityGroup(SECURITY_GROUP_NAME);
    }

    static void TearDownTestCase()
    {
        DeleteSecurityGroup(SECURITY_GROUP_NAME);
        DeleteVpc(m_vpcId);

        m_EC2Client = nullptr;
    }

    static void DeleteSecurityGroup(const Aws::String& groupName)
    {
        Aws::EC2::Model::DeleteSecurityGroupRequest deleteRequest;
        deleteRequest.SetGroupName(groupName);

        m_EC2Client->DeleteSecurityGroup(deleteRequest);
        WaitOnSecurityGroupState(groupName, ObjectState::Nonexistent);
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
                bool exists = std::find_if(groups.cbegin(), groups.cend(), [](const Aws::EC2::Model::SecurityGroup& group){ return group.GetGroupName() == SECURITY_GROUP_NAME; }) != groups.cend();
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

    static void DeleteVpc(const Aws::String vpcId)
    {
        Aws::EC2::Model::DeleteVpcRequest deleteVpcRequest;
        deleteVpcRequest.SetVpcId(vpcId);

        auto deleteOutcome = m_EC2Client->DeleteVpc(deleteVpcRequest);
        ASSERT_TRUE(deleteOutcome.IsSuccess());

        WaitOnVpcState(vpcId, ObjectState::Nonexistent);
    }

    static void WaitOnVpcState(const Aws::String& vpcId, ObjectState objectState)
    {
        Aws::EC2::Model::DescribeVpcsRequest describeRequest;
        describeRequest.AddVpcIds(vpcId);

        bool finished = false;
        while(!finished)
        {
            auto describeOutcome = m_EC2Client->DescribeVpcs(describeRequest);
            if (describeOutcome.IsSuccess())
            {
                const Aws::Vector< Aws::EC2::Model::Vpc >& vpcs = describeOutcome.GetResult().GetVpcs();
                bool exists = std::find_if(vpcs.cbegin(), vpcs.cend(), [vpcId](const Aws::EC2::Model::Vpc& vpc){ return vpc.GetVpcId() == vpcId; }) != vpcs.cend();
                finished = (objectState == ObjectState::Nonexistent && !exists) || (objectState == ObjectState::Ready && exists);
            }
            else if (describeOutcome.GetError().GetErrorType() == Aws::EC2::EC2Errors::INVALID_VPC_I_D__NOT_FOUND)
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
Aws::String EC2OperationTest::m_vpcId;

} // anonymous namespace

TEST_F(EC2OperationTest, DescribeSpotFleet)
{
    Aws::EC2::Model::DescribeSpotFleetRequestsRequest request;

    auto outcome = m_EC2Client->DescribeSpotFleetRequests(request);
    ASSERT_TRUE(outcome.IsSuccess());
}

TEST_F(EC2OperationTest, CreateSecurityGroup)
{
    Aws::EC2::Model::CreateSecurityGroupRequest createRequest;
    createRequest.SetGroupName(SECURITY_GROUP_NAME);
    createRequest.SetDescription("A dummy description");

    auto createOutcome = m_EC2Client->CreateSecurityGroup(createRequest);
    ASSERT_TRUE(createOutcome.IsSuccess());

    WaitOnSecurityGroupState(SECURITY_GROUP_NAME, ObjectState::Ready);
    DeleteSecurityGroup(SECURITY_GROUP_NAME);
}



