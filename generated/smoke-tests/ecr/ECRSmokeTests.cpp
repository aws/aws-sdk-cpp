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
#include <aws/ecr/ECRClient.h>
#include <aws/ecr/model/DescribeRepositoriesRequest.h>
#include <aws/ecr/model/ListImagesRequest.h>

namespace ECRSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::ECR;
using namespace Aws::ECR::Model;
class ECRSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char ECRSmokeTestSuite::ALLOCATION_TAG[] = "ECRSmokeTest";
TEST_F(ECRSmokeTestSuite, DescribeRepositoriesSuccess )
{
    Aws::ECR::ECRClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<ECRClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    DescribeRepositoriesRequest input;
    auto outcome = clientSp->DescribeRepositories(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
TEST_F(ECRSmokeTestSuite, ListImagesFailure )
{
    Aws::ECR::ECRClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<ECRClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    ListImagesRequest input;
    input.SetRepositoryName("not-a-real-repository");
    auto outcome = clientSp->ListImages(input);
    EXPECT_FALSE( outcome.IsSuccess());
}
}
