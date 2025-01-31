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
#include <aws/rds/RDSClient.h>
#include <aws/rds/model/DescribeDBEngineVersionsRequest.h>
#include <aws/rds/model/DescribeDBInstancesRequest.h>

namespace RDSSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::RDS;
using namespace Aws::RDS::Model;
class RDSSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char RDSSmokeTestSuite::ALLOCATION_TAG[] = "RDSSmokeTest";
TEST_F(RDSSmokeTestSuite, DescribeDBEngineVersionsSuccess )
{
    Aws::RDS::RDSClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<RDSClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    DescribeDBEngineVersionsRequest input;
    auto outcome = clientSp->DescribeDBEngineVersions(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
TEST_F(RDSSmokeTestSuite, DescribeDBInstancesFailure )
{
    Aws::RDS::RDSClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<RDSClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    DescribeDBInstancesRequest input;
    input.SetDBInstanceIdentifier("fake-id");
    auto outcome = clientSp->DescribeDBInstances(input);
    EXPECT_FALSE( outcome.IsSuccess());
}
}
