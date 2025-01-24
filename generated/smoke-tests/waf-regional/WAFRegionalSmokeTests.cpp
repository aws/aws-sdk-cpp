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
#include <aws/waf-regional/WAFRegionalClient.h>
#include <aws/waf-regional/model/ListRulesRequest.h>

namespace WAFRegionalSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::WAFRegional;
using namespace Aws::WAFRegional::Model;
class WAFRegionalSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char WAFRegionalSmokeTestSuite::ALLOCATION_TAG[] = "WAFRegionalSmokeTest";
TEST_F(WAFRegionalSmokeTestSuite, ListRulesSuccess )
{
    Aws::WAFRegional::WAFRegionalClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-east-1";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<WAFRegionalClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    ListRulesRequest input;
    input.SetLimit(20);
    auto outcome = clientSp->ListRules(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
}
