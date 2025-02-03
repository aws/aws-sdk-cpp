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
#include <aws/directconnect/DirectConnectClient.h>
#include <aws/directconnect/model/DescribeConnectionsRequest.h>

namespace DirectConnectSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::DirectConnect;
using namespace Aws::DirectConnect::Model;
class DirectConnectSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char DirectConnectSmokeTestSuite::ALLOCATION_TAG[] = "DirectConnectSmokeTest";
TEST_F(DirectConnectSmokeTestSuite, DescribeConnectionsSuccess )
{
    Aws::DirectConnect::DirectConnectClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<DirectConnectClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    DescribeConnectionsRequest input;
    auto outcome = clientSp->DescribeConnections(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
TEST_F(DirectConnectSmokeTestSuite, DescribeConnectionsFailure )
{
    Aws::DirectConnect::DirectConnectClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<DirectConnectClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    DescribeConnectionsRequest input;
    input.SetConnectionId("fake-connection");
    auto outcome = clientSp->DescribeConnections(input);
    EXPECT_FALSE( outcome.IsSuccess());
}
}
