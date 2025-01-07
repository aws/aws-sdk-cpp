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
#include <aws/ds/DirectoryServiceClient.h>
#include <aws/ds/model/DescribeDirectoriesRequest.h>

namespace DirectoryServiceSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::DirectoryService;
using namespace Aws::DirectoryService::Model;
class DirectoryServiceSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char DirectoryServiceSmokeTestSuite::ALLOCATION_TAG[] = "DirectoryServiceSmokeTest";
TEST_F(DirectoryServiceSmokeTestSuite, DescribeDirectoriesSuccess )
{
    Aws::DirectoryService::DirectoryServiceClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<DirectoryServiceClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    DescribeDirectoriesRequest input;
    auto outcome = clientSp->DescribeDirectories(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
}
