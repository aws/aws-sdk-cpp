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
#include <aws/wafv2/WAFV2Client.h>
#include <aws/wafv2/model/ListWebACLsRequest.h>

namespace WAFV2SmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::WAFV2;
using namespace Aws::WAFV2::Model;
class WAFV2SmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char WAFV2SmokeTestSuite::ALLOCATION_TAG[] = "WAFV2SmokeTest";
TEST_F(WAFV2SmokeTestSuite, ListWebACLsSuccess )
{
    Aws::WAFV2::WAFV2ClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-east-1";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<WAFV2Client>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    ListWebACLsRequest input;
    input.SetScope(Scope::REGIONAL);
    input.SetLimit(20);
    auto outcome = clientSp->ListWebACLs(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
}
