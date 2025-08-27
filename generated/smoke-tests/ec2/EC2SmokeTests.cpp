/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <algorithm>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <utility>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/ec2/EC2Client.h>
#include <aws/ec2/model/DescribeInstancesRequest.h>
#include <aws/ec2/model/DescribeRegionsRequest.h>

namespace EC2SmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::EC2;
using namespace Aws::EC2::Model;
class EC2SmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char EC2SmokeTestSuite::ALLOCATION_TAG[] = "EC2SmokeTest";
TEST_F(EC2SmokeTestSuite, DescribeInstancesFailure )
{
    Aws::EC2::EC2ClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<EC2Client>(ALLOCATION_TAG, clientConfiguration);
    //Prepare test data
    auto GetdescribeinstancesElemLvl0Idx0 = [&]() -> Aws::Vector<Aws::String>
    {
     Aws::Vector<Aws::String> describeinstances_elem = 
      {
       "i-12345678"
      };
     return describeinstances_elem;
    };
    //populate input params
    
    DescribeInstancesRequest input;
    input.SetInstanceIds(GetdescribeinstancesElemLvl0Idx0());
    auto outcome = clientSp->DescribeInstances(input);
    EXPECT_FALSE( outcome.IsSuccess());
}
TEST_F(EC2SmokeTestSuite, DescribeRegionsSuccess )
{
    Aws::EC2::EC2ClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<EC2Client>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    DescribeRegionsRequest input;
    auto outcome = clientSp->DescribeRegions(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
}
