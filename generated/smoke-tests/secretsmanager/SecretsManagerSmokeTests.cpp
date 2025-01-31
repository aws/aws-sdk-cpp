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
#include <aws/secretsmanager/SecretsManagerClient.h>
#include <aws/secretsmanager/model/DescribeSecretRequest.h>
#include <aws/secretsmanager/model/ListSecretsRequest.h>

namespace SecretsManagerSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::SecretsManager;
using namespace Aws::SecretsManager::Model;
class SecretsManagerSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char SecretsManagerSmokeTestSuite::ALLOCATION_TAG[] = "SecretsManagerSmokeTest";
TEST_F(SecretsManagerSmokeTestSuite, DescribeSecretFailure )
{
    Aws::SecretsManager::SecretsManagerClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<SecretsManagerClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    DescribeSecretRequest input;
    input.SetSecretId("fake-secret-id");
    auto outcome = clientSp->DescribeSecret(input);
    EXPECT_FALSE( outcome.IsSuccess());
}
TEST_F(SecretsManagerSmokeTestSuite, ListSecretsSuccess )
{
    Aws::SecretsManager::SecretsManagerClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<SecretsManagerClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    ListSecretsRequest input;
    auto outcome = clientSp->ListSecrets(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
}
