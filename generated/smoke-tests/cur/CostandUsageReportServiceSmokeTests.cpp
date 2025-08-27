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
#include <aws/cur/CostandUsageReportServiceClient.h>
#include <aws/cur/model/DescribeReportDefinitionsRequest.h>

namespace CostandUsageReportServiceSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::CostandUsageReportService;
using namespace Aws::CostandUsageReportService::Model;
class CostandUsageReportServiceSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char CostandUsageReportServiceSmokeTestSuite::ALLOCATION_TAG[] = "CostandUsageReportServiceSmokeTest";
TEST_F(CostandUsageReportServiceSmokeTestSuite, DescribeReportDefinitionsSuccess )
{
    Aws::CostandUsageReportService::CostandUsageReportServiceClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-east-1";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<CostandUsageReportServiceClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    DescribeReportDefinitionsRequest input;
    auto outcome = clientSp->DescribeReportDefinitions(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
}
