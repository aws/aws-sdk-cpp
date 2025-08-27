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
#include <aws/workspaces-instances/WorkspacesInstancesClient.h>
#include <aws/workspaces-instances/model/ListRegionsRequest.h>

namespace WorkspacesInstancesSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::WorkspacesInstances;
using namespace Aws::WorkspacesInstances::Model;
class WorkspacesInstancesSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char WorkspacesInstancesSmokeTestSuite::ALLOCATION_TAG[] = "WorkspacesInstancesSmokeTest";
TEST_F(WorkspacesInstancesSmokeTestSuite, ListRegionsSuccess )
{
    Aws::WorkspacesInstances::WorkspacesInstancesClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-east-1";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<WorkspacesInstancesClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    ListRegionsRequest input;
    auto outcome = clientSp->ListRegions(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
}
