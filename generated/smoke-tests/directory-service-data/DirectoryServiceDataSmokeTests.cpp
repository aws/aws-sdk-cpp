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
#include <aws/directory-service-data/DirectoryServiceDataClient.h>
#include <aws/directory-service-data/model/DescribeGroupRequest.h>
#include <aws/directory-service-data/model/DescribeUserRequest.h>

namespace DirectoryServiceDataSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::DirectoryServiceData;
using namespace Aws::DirectoryServiceData::Model;
class DirectoryServiceDataSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char DirectoryServiceDataSmokeTestSuite::ALLOCATION_TAG[] = "DirectoryServiceDataSmokeTest";
TEST_F(DirectoryServiceDataSmokeTestSuite, DescribeGroupFailure )
{
    Aws::DirectoryServiceData::DirectoryServiceDataClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<DirectoryServiceDataClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    DescribeGroupRequest input;
    input.SetDirectoryId("d-1111111111");
    input.SetSAMAccountName("test-group");
    auto outcome = clientSp->DescribeGroup(input);
    EXPECT_FALSE( outcome.IsSuccess());
}
TEST_F(DirectoryServiceDataSmokeTestSuite, DescribeUserFailure )
{
    Aws::DirectoryServiceData::DirectoryServiceDataClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<DirectoryServiceDataClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    DescribeUserRequest input;
    input.SetDirectoryId("d-1111111111");
    input.SetSAMAccountName("test-user");
    auto outcome = clientSp->DescribeUser(input);
    EXPECT_FALSE( outcome.IsSuccess());
}
}
