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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2Client.h>
#include <aws/elasticloadbalancingv2/model/DescribeLoadBalancersRequest.h>

namespace ElasticLoadBalancingv2SmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::ElasticLoadBalancingv2;
using namespace Aws::ElasticLoadBalancingv2::Model;
class ElasticLoadBalancingv2SmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char ElasticLoadBalancingv2SmokeTestSuite::ALLOCATION_TAG[] = "ElasticLoadBalancingv2SmokeTest";
TEST_F(ElasticLoadBalancingv2SmokeTestSuite, DescribeLoadBalancersSuccess )
{
    Aws::ElasticLoadBalancingv2::ElasticLoadBalancingv2ClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<ElasticLoadBalancingv2Client>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    DescribeLoadBalancersRequest input;
    auto outcome = clientSp->DescribeLoadBalancers(input);
    EXPECT_TRUE( outcome.IsSuccess()) << outcome.GetError().GetExceptionName() << " - " << outcome.GetError().GetMessage();
}
TEST_F(ElasticLoadBalancingv2SmokeTestSuite, DescribeLoadBalancersFailure )
{
    Aws::ElasticLoadBalancingv2::ElasticLoadBalancingv2ClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<ElasticLoadBalancingv2Client>(ALLOCATION_TAG, clientConfiguration);
    //Prepare test data
    auto GetdescribeloadbalancersElemLvl0Idx0 = [&]() -> Aws::Vector<Aws::String>
    {
     Aws::Vector<Aws::String> describeloadbalancers_elem = 
      {
       "fake_load_balancer"
      };
     return describeloadbalancers_elem;
    };
    //populate input params
    
    DescribeLoadBalancersRequest input;
    input.SetLoadBalancerArns(GetdescribeloadbalancersElemLvl0Idx0());
    auto outcome = clientSp->DescribeLoadBalancers(input);
    EXPECT_FALSE( outcome.IsSuccess());
}
}
