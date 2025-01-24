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
#include <aws/route53/Route53Client.h>
#include <aws/route53/model/GetHostedZoneRequest.h>
#include <aws/route53/model/ListHostedZonesRequest.h>

namespace Route53SmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::Route53;
using namespace Aws::Route53::Model;
class Route53SmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char Route53SmokeTestSuite::ALLOCATION_TAG[] = "Route53SmokeTest";
TEST_F(Route53SmokeTestSuite, GetHostedZoneFailure )
{
    Aws::Route53::Route53ClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-east-1";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<Route53Client>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    GetHostedZoneRequest input;
    input.SetId("fake-zone");
    auto outcome = clientSp->GetHostedZone(input);
    EXPECT_FALSE( outcome.IsSuccess());
}
TEST_F(Route53SmokeTestSuite, ListHostedZonesSuccess )
{
    Aws::Route53::Route53ClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-east-1";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<Route53Client>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    ListHostedZonesRequest input;
    auto outcome = clientSp->ListHostedZones(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
}
