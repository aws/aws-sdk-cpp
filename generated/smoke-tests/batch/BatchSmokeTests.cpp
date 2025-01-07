/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <utility>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <algorithm>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/batch/BatchClient.h>
#include <aws/batch/model/DescribeComputeEnvironmentsRequest.h>

namespace BatchSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::Batch;
using namespace Aws::Batch::Model;
class BatchSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char BatchSmokeTestSuite::ALLOCATION_TAG[] = "BatchSmokeTest";
TEST_F(BatchSmokeTestSuite, DescribeComputeEnvironmentsSuccess )
{
    Aws::Batch::BatchClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<BatchClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    DescribeComputeEnvironmentsRequest input;
    auto outcome = clientSp->DescribeComputeEnvironments(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
}
