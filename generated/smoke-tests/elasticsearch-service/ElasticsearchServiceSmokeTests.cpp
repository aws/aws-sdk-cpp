/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <utility>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <algorithm>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/elasticsearch-service/ElasticsearchServiceClient.h>
#include <aws/elasticsearch-service/model/ListDomainNamesRequest.h>

namespace ElasticsearchServiceSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::ElasticsearchService;
using namespace Aws::ElasticsearchService::Model;
class ElasticsearchServiceSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char ElasticsearchServiceSmokeTestSuite::ALLOCATION_TAG[] = "ElasticsearchServiceSmokeTest";
TEST_F(ElasticsearchServiceSmokeTestSuite, ListDomainNamesSuccess )
{
    Aws::ElasticsearchService::ElasticsearchServiceClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<ElasticsearchServiceClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    ListDomainNamesRequest input;
    auto outcome = clientSp->ListDomainNames(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
}
