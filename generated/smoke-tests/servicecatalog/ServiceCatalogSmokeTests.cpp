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
#include <aws/servicecatalog/ServiceCatalogClient.h>
#include <aws/servicecatalog/model/ListAcceptedPortfolioSharesRequest.h>

namespace ServiceCatalogSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::ServiceCatalog;
using namespace Aws::ServiceCatalog::Model;
class ServiceCatalogSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char ServiceCatalogSmokeTestSuite::ALLOCATION_TAG[] = "ServiceCatalogSmokeTest";
TEST_F(ServiceCatalogSmokeTestSuite, ListAcceptedPortfolioSharesSuccess )
{
    Aws::ServiceCatalog::ServiceCatalogClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<ServiceCatalogClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    ListAcceptedPortfolioSharesRequest input;
    auto outcome = clientSp->ListAcceptedPortfolioShares(input);
    EXPECT_TRUE( outcome.IsSuccess()) << outcome.GetError().GetExceptionName() << " - " << outcome.GetError().GetMessage();
}
}
