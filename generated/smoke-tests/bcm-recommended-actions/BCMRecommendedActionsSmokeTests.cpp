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
#include <aws/bcm-recommended-actions/BCMRecommendedActionsClient.h>
#include <aws/bcm-recommended-actions/model/ListRecommendedActionsRequest.h>

namespace BCMRecommendedActionsSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::BCMRecommendedActions;
using namespace Aws::BCMRecommendedActions::Model;
class BCMRecommendedActionsSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char BCMRecommendedActionsSmokeTestSuite::ALLOCATION_TAG[] = "BCMRecommendedActionsSmokeTest";
TEST_F(BCMRecommendedActionsSmokeTestSuite, ListRecommendedActionsSuccess )
{
    Aws::BCMRecommendedActions::BCMRecommendedActionsClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<BCMRecommendedActionsClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    ListRecommendedActionsRequest input;
    input.SetMaxResults(10);
    auto outcome = clientSp->ListRecommendedActions(input);
    EXPECT_FALSE( outcome.IsSuccess());
}
}
