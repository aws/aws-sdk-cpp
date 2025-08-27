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
#include <aws/cloudformation/CloudFormationClient.h>
#include <aws/cloudformation/model/CreateStackRequest.h>
#include <aws/cloudformation/model/ListStacksRequest.h>

namespace CloudFormationSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::CloudFormation;
using namespace Aws::CloudFormation::Model;
class CloudFormationSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char CloudFormationSmokeTestSuite::ALLOCATION_TAG[] = "CloudFormationSmokeTest";
TEST_F(CloudFormationSmokeTestSuite, CreateStackFailure )
{
    Aws::CloudFormation::CloudFormationClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<CloudFormationClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    CreateStackRequest input;
    input.SetStackName("fakestack");
    input.SetTemplateURL("http://s3.amazonaws.com/foo/bar");
    auto outcome = clientSp->CreateStack(input);
    EXPECT_FALSE( outcome.IsSuccess());
}
TEST_F(CloudFormationSmokeTestSuite, ListStacksSuccess )
{
    Aws::CloudFormation::CloudFormationClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<CloudFormationClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    ListStacksRequest input;
    auto outcome = clientSp->ListStacks(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
}
