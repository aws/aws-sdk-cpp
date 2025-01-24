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
#include <aws/billing/BillingClient.h>
#include <aws/billing/model/ListBillingViewsRequest.h>
#include <aws/core/utils/DateTime.h>

namespace BillingSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::Billing;
using namespace Aws::Billing::Model;
class BillingSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char BillingSmokeTestSuite::ALLOCATION_TAG[] = "BillingSmokeTest";
TEST_F(BillingSmokeTestSuite, ListBillingViewsSuccess )
{
    Aws::Billing::BillingClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-east-1";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<BillingClient>(ALLOCATION_TAG, clientConfiguration);
    //Prepare test data
    auto GetlistbillingviewsElemLvl0Idx0 = [&]() -> ActiveTimeRange
    {
     ActiveTimeRange listbillingviews_elem ;
     listbillingviews_elem.SetActiveAfterInclusive( {(double)1719792000} );
     listbillingviews_elem.SetActiveBeforeInclusive( {(double)1.722470399999E9} );
     return listbillingviews_elem;
    };
    //populate input params
    
    ListBillingViewsRequest input;
    input.SetActiveTimeRange(GetlistbillingviewsElemLvl0Idx0());
    auto outcome = clientSp->ListBillingViews(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
}
