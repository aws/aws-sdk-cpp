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
#include <aws/shield/ShieldClient.h>
#include <aws/shield/model/ListAttacksRequest.h>

namespace ShieldSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::Shield;
using namespace Aws::Shield::Model;
class ShieldSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char ShieldSmokeTestSuite::ALLOCATION_TAG[] = "ShieldSmokeTest";
TEST_F(ShieldSmokeTestSuite, ListAttacksSuccess )
{
    Aws::Shield::ShieldClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-east-1";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<ShieldClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    ListAttacksRequest input;
    auto outcome = clientSp->ListAttacks(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
}
