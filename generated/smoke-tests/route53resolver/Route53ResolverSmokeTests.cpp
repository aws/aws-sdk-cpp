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
#include <aws/route53resolver/Route53ResolverClient.h>
#include <aws/route53resolver/model/ListResolverEndpointsRequest.h>

namespace Route53ResolverSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::Route53Resolver;
using namespace Aws::Route53Resolver::Model;
class Route53ResolverSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char Route53ResolverSmokeTestSuite::ALLOCATION_TAG[] = "Route53ResolverSmokeTest";
TEST_F(Route53ResolverSmokeTestSuite, ListResolverEndpointsSuccess )
{
    Aws::Route53Resolver::Route53ResolverClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<Route53ResolverClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    ListResolverEndpointsRequest input;
    auto outcome = clientSp->ListResolverEndpoints(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
}
