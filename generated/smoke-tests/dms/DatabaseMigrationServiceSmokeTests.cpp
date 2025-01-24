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
#include <aws/dms/DatabaseMigrationServiceClient.h>
#include <aws/dms/model/DescribeEndpointsRequest.h>

namespace DatabaseMigrationServiceSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::DatabaseMigrationService;
using namespace Aws::DatabaseMigrationService::Model;
class DatabaseMigrationServiceSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char DatabaseMigrationServiceSmokeTestSuite::ALLOCATION_TAG[] = "DatabaseMigrationServiceSmokeTest";
TEST_F(DatabaseMigrationServiceSmokeTestSuite, DescribeEndpointsSuccess )
{
    Aws::DatabaseMigrationService::DatabaseMigrationServiceClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<DatabaseMigrationServiceClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    DescribeEndpointsRequest input;
    auto outcome = clientSp->DescribeEndpoints(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
}
