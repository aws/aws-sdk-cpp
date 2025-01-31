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
#include <aws/eventbridge/EventBridgeClient.h>
#include <aws/eventbridge/model/DescribeRuleRequest.h>
#include <aws/eventbridge/model/ListRulesRequest.h>

namespace EventBridgeSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::EventBridge;
using namespace Aws::EventBridge::Model;
class EventBridgeSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char EventBridgeSmokeTestSuite::ALLOCATION_TAG[] = "EventBridgeSmokeTest";
TEST_F(EventBridgeSmokeTestSuite, DescribeRuleFailure )
{
    Aws::EventBridge::EventBridgeClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<EventBridgeClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    DescribeRuleRequest input;
    input.SetName("fake-rule");
    auto outcome = clientSp->DescribeRule(input);
    EXPECT_FALSE( outcome.IsSuccess());
}
TEST_F(EventBridgeSmokeTestSuite, ListRulesSuccess )
{
    Aws::EventBridge::EventBridgeClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<EventBridgeClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    ListRulesRequest input;
    auto outcome = clientSp->ListRules(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
}
