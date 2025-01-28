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
#include <aws/elasticmapreduce/EMRClient.h>
#include <aws/elasticmapreduce/model/DescribeClusterRequest.h>
#include <aws/elasticmapreduce/model/ListClustersRequest.h>

namespace EMRSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::EMR;
using namespace Aws::EMR::Model;
class EMRSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char EMRSmokeTestSuite::ALLOCATION_TAG[] = "EMRSmokeTest";
TEST_F(EMRSmokeTestSuite, DescribeClusterFailure )
{
    Aws::EMR::EMRClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<EMRClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    DescribeClusterRequest input;
    input.SetClusterId("fake_cluster");
    auto outcome = clientSp->DescribeCluster(input);
    EXPECT_FALSE( outcome.IsSuccess());
}
TEST_F(EMRSmokeTestSuite, ListClustersSuccess )
{
    Aws::EMR::EMRClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<EMRClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    ListClustersRequest input;
    auto outcome = clientSp->ListClusters(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
}
