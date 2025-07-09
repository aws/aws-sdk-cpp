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
#include <aws/freetier/FreeTierClient.h>
#include <aws/freetier/model/GetAccountActivityRequest.h>
#include <aws/freetier/model/ListAccountActivitiesRequest.h>

namespace FreeTierSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::FreeTier;
using namespace Aws::FreeTier::Model;
class FreeTierSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char FreeTierSmokeTestSuite::ALLOCATION_TAG[] = "FreeTierSmokeTest";
TEST_F(FreeTierSmokeTestSuite, GetAccountActivitySuccess )
{
    Aws::FreeTier::FreeTierClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-east-1";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<FreeTierClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    GetAccountActivityRequest input;
    input.SetActivityId("d622f48bf4014286a2686ab10cacfb2e");
    input.SetLanguageCode({LanguageCode::en-US});
    auto outcome = clientSp->GetAccountActivity(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
TEST_F(FreeTierSmokeTestSuite, ListAccountActivitiesSuccess )
{
    Aws::FreeTier::FreeTierClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-east-1";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<FreeTierClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    ListAccountActivitiesRequest input;
    input.SetLanguageCode({LanguageCode::en-US});
    auto outcome = clientSp->ListAccountActivities(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
}
