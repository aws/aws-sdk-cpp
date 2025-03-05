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
#include <aws/gameliftstreams/GameLiftStreamsClient.h>
#include <aws/gameliftstreams/model/GetStreamSessionRequest.h>
#include <aws/gameliftstreams/model/ListStreamSessionsByAccountRequest.h>
#include <aws/gameliftstreams/model/ListStreamSessionsRequest.h>
#include <aws/gameliftstreams/model/ListTagsForResourceRequest.h>

namespace GameLiftStreamsSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::GameLiftStreams;
using namespace Aws::GameLiftStreams::Model;
class GameLiftStreamsSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char GameLiftStreamsSmokeTestSuite::ALLOCATION_TAG[] = "GameLiftStreamsSmokeTest";
TEST_F(GameLiftStreamsSmokeTestSuite, GetStreamSession )
{
    Aws::GameLiftStreams::GameLiftStreamsClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<GameLiftStreamsClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    GetStreamSessionRequest input;
    input.SetIdentifier("abcdefghi");
    input.SetStreamSessionIdentifier("jklmnopqr");
    auto outcome = clientSp->GetStreamSession(input);
    EXPECT_FALSE( outcome.IsSuccess());
}
TEST_F(GameLiftStreamsSmokeTestSuite, ListStreamSessions )
{
    Aws::GameLiftStreams::GameLiftStreamsClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<GameLiftStreamsClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    ListStreamSessionsRequest input;
    input.SetIdentifier("abcdefghi");
    auto outcome = clientSp->ListStreamSessions(input);
    EXPECT_FALSE( outcome.IsSuccess());
}
TEST_F(GameLiftStreamsSmokeTestSuite, ListStreamSessionsByAccount )
{
    Aws::GameLiftStreams::GameLiftStreamsClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<GameLiftStreamsClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    ListStreamSessionsByAccountRequest input;
    auto outcome = clientSp->ListStreamSessionsByAccount(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
TEST_F(GameLiftStreamsSmokeTestSuite, ListTagsForResource )
{
    Aws::GameLiftStreams::GameLiftStreamsClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<GameLiftStreamsClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    ListTagsForResourceRequest input;
    input.SetResourceArn("arn:aws:gameliftstreams:us-west-2:012345678901:abcdefghi");
    auto outcome = clientSp->ListTagsForResource(input);
    EXPECT_FALSE( outcome.IsSuccess());
}
}
