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
#include <aws/docdb/DocDBClient.h>
#include <aws/docdb/model/DescribeDBEngineVersionsRequest.h>
#include <aws/docdb/model/DescribeDBInstancesRequest.h>

namespace DocDBSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::DocDB;
using namespace Aws::DocDB::Model;
class DocDBSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char DocDBSmokeTestSuite::ALLOCATION_TAG[] = "DocDBSmokeTest";
TEST_F(DocDBSmokeTestSuite, DescribeDBEngineVersionsSuccess )
{
    Aws::DocDB::DocDBClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<DocDBClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    DescribeDBEngineVersionsRequest input;
    auto outcome = clientSp->DescribeDBEngineVersions(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
TEST_F(DocDBSmokeTestSuite, DescribeDBInstancesFailure )
{
    Aws::DocDB::DocDBClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<DocDBClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    DescribeDBInstancesRequest input;
    input.SetDBInstanceIdentifier("fake-id");
    auto outcome = clientSp->DescribeDBInstances(input);
    EXPECT_FALSE( outcome.IsSuccess());
}
}
