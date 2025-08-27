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
#include <aws/swf/SWFClient.h>
#include <aws/swf/model/ListDomainsRequest.h>

namespace SWFSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::SWF;
using namespace Aws::SWF::Model;
class SWFSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char SWFSmokeTestSuite::ALLOCATION_TAG[] = "SWFSmokeTest";
TEST_F(SWFSmokeTestSuite, ListDomainsSuccess )
{
    Aws::SWF::SWFClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<SWFClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    ListDomainsRequest input;
    input.SetRegistrationStatus(RegistrationStatus::REGISTERED);
    auto outcome = clientSp->ListDomains(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
}
