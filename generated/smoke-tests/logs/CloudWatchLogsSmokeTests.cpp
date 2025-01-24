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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/CloudWatchLogsClient.h>
#include <aws/logs/model/DescribeLogGroupsRequest.h>
#include <aws/logs/model/GetLogEventsRequest.h>

namespace CloudWatchLogsSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::CloudWatchLogs;
using namespace Aws::CloudWatchLogs::Model;
class CloudWatchLogsSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char CloudWatchLogsSmokeTestSuite::ALLOCATION_TAG[] = "CloudWatchLogsSmokeTest";
TEST_F(CloudWatchLogsSmokeTestSuite, DescribeLogGroupsSuccess )
{
    Aws::CloudWatchLogs::CloudWatchLogsClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<CloudWatchLogsClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    DescribeLogGroupsRequest input;
    auto outcome = clientSp->DescribeLogGroups(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
TEST_F(CloudWatchLogsSmokeTestSuite, GetLogEventsFailure )
{
    Aws::CloudWatchLogs::CloudWatchLogsClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<CloudWatchLogsClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    GetLogEventsRequest input;
    input.SetLogGroupName("fakegroup");
    input.SetLogStreamName("fakestream");
    auto outcome = clientSp->GetLogEvents(input);
    EXPECT_FALSE( outcome.IsSuccess());
}
}
