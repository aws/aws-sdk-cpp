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
#include <aws/keyspacesstreams/KeyspacesStreamsClient.h>
#include <aws/keyspacesstreams/model/ListStreamsRequest.h>

namespace KeyspacesStreamsSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::KeyspacesStreams;
using namespace Aws::KeyspacesStreams::Model;
class KeyspacesStreamsSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char KeyspacesStreamsSmokeTestSuite::ALLOCATION_TAG[] = "KeyspacesStreamsSmokeTest";
TEST_F(KeyspacesStreamsSmokeTestSuite, ListStreamsSuccess )
{
    Aws::KeyspacesStreams::KeyspacesStreamsClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-east-1";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<KeyspacesStreamsClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    ListStreamsRequest input;
    auto outcome = clientSp->ListStreams(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
}
