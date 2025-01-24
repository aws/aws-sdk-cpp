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
#include <aws/neptune/NeptuneClient.h>
#include <aws/neptune/model/DescribeDBEngineVersionsRequest.h>
#include <aws/neptune/model/DescribeDBInstancesRequest.h>

namespace NeptuneSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::Neptune;
using namespace Aws::Neptune::Model;
class NeptuneSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char NeptuneSmokeTestSuite::ALLOCATION_TAG[] = "NeptuneSmokeTest";
TEST_F(NeptuneSmokeTestSuite, DescribeDBEngineVersionsSuccess )
{
    Aws::Neptune::NeptuneClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<NeptuneClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    DescribeDBEngineVersionsRequest input;
    auto outcome = clientSp->DescribeDBEngineVersions(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
TEST_F(NeptuneSmokeTestSuite, DescribeDBInstancesFailure )
{
    Aws::Neptune::NeptuneClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<NeptuneClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    DescribeDBInstancesRequest input;
    input.SetDBInstanceIdentifier("fake-id");
    auto outcome = clientSp->DescribeDBInstances(input);
    EXPECT_FALSE( outcome.IsSuccess());
}
}
