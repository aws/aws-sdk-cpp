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
#include <aws/kinesis/KinesisClient.h>
#include <aws/kinesis/model/DescribeStreamRequest.h>
#include <aws/kinesis/model/ListStreamsRequest.h>

namespace KinesisSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::Kinesis;
using namespace Aws::Kinesis::Model;
class KinesisSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char KinesisSmokeTestSuite::ALLOCATION_TAG[] = "KinesisSmokeTest";
TEST_F(KinesisSmokeTestSuite, DescribeStreamFailure )
{
    Aws::Kinesis::KinesisClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<KinesisClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    DescribeStreamRequest input;
    input.SetStreamName("bogus-stream-name");
    auto outcome = clientSp->DescribeStream(input);
    EXPECT_FALSE( outcome.IsSuccess());
}
TEST_F(KinesisSmokeTestSuite, ListStreamsSuccess )
{
    Aws::Kinesis::KinesisClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<KinesisClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    ListStreamsRequest input;
    auto outcome = clientSp->ListStreams(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
}
