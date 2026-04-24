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
#include <aws/socialmessaging/SocialMessagingClient.h>
#include <aws/socialmessaging/model/ListTagsForResourceRequest.h>

namespace SocialMessagingSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::SocialMessaging;
using namespace Aws::SocialMessaging::Model;
class SocialMessagingSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char SocialMessagingSmokeTestSuite::ALLOCATION_TAG[] = "SocialMessagingSmokeTest";
TEST_F(SocialMessagingSmokeTestSuite, ListTagsFailure )
{
    Aws::SocialMessaging::SocialMessagingClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-east-1";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<SocialMessagingClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    ListTagsForResourceRequest input;
    input.SetResourceArn("arn:aws:social-messaging:us-east-1:9923825:phone-number-id/45c1973a7577");
    auto outcome = clientSp->ListTagsForResource(input);
    EXPECT_FALSE( outcome.IsSuccess());
}
}
