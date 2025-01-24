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
#include <aws/email/SESClient.h>
#include <aws/email/model/ListIdentitiesRequest.h>

namespace SESSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::SES;
using namespace Aws::SES::Model;
class SESSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char SESSmokeTestSuite::ALLOCATION_TAG[] = "SESSmokeTest";
TEST_F(SESSmokeTestSuite, ListIdentitiesSuccess )
{
    Aws::SES::SESClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<SESClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    ListIdentitiesRequest input;
    auto outcome = clientSp->ListIdentities(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
}
