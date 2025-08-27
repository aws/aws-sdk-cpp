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
#include <aws/config/ConfigServiceClient.h>
#include <aws/config/model/DescribeConfigurationRecordersRequest.h>

namespace ConfigServiceSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::ConfigService;
using namespace Aws::ConfigService::Model;
class ConfigServiceSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char ConfigServiceSmokeTestSuite::ALLOCATION_TAG[] = "ConfigServiceSmokeTest";
TEST_F(ConfigServiceSmokeTestSuite, DescribeConfigurationRecordersSuccess )
{
    Aws::ConfigService::ConfigServiceClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<ConfigServiceClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    DescribeConfigurationRecordersRequest input;
    auto outcome = clientSp->DescribeConfigurationRecorders(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
}
