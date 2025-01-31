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
#include <aws/route53domains/Route53DomainsClient.h>
#include <aws/route53domains/model/GetDomainDetailRequest.h>
#include <aws/route53domains/model/ListDomainsRequest.h>

namespace Route53DomainsSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::Route53Domains;
using namespace Aws::Route53Domains::Model;
class Route53DomainsSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char Route53DomainsSmokeTestSuite::ALLOCATION_TAG[] = "Route53DomainsSmokeTest";
TEST_F(Route53DomainsSmokeTestSuite, GetDomainDetailFailure )
{
    Aws::Route53Domains::Route53DomainsClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-east-1";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<Route53DomainsClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    GetDomainDetailRequest input;
    input.SetDomainName("fake-domain-name");
    auto outcome = clientSp->GetDomainDetail(input);
    EXPECT_FALSE( outcome.IsSuccess());
}
TEST_F(Route53DomainsSmokeTestSuite, ListDomainsSuccess )
{
    Aws::Route53Domains::Route53DomainsClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-east-1";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<Route53DomainsClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    ListDomainsRequest input;
    auto outcome = clientSp->ListDomains(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
}
