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
#include <aws/codepipeline/CodePipelineClient.h>
#include <aws/codepipeline/model/GetPipelineRequest.h>
#include <aws/codepipeline/model/ListPipelinesRequest.h>

namespace CodePipelineSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::CodePipeline;
using namespace Aws::CodePipeline::Model;
class CodePipelineSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char CodePipelineSmokeTestSuite::ALLOCATION_TAG[] = "CodePipelineSmokeTest";
TEST_F(CodePipelineSmokeTestSuite, GetPipelineFailure )
{
    Aws::CodePipeline::CodePipelineClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<CodePipelineClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    GetPipelineRequest input;
    input.SetName("fake-pipeline");
    auto outcome = clientSp->GetPipeline(input);
    EXPECT_FALSE( outcome.IsSuccess());
}
TEST_F(CodePipelineSmokeTestSuite, ListPipelinesSuccess )
{
    Aws::CodePipeline::CodePipelineClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<CodePipelineClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    ListPipelinesRequest input;
    auto outcome = clientSp->ListPipelines(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
}
