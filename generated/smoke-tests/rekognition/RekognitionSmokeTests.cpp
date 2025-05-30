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
#include <aws/rekognition/RekognitionClient.h>
#include <aws/rekognition/model/ListCollectionsRequest.h>

namespace RekognitionSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::Rekognition;
using namespace Aws::Rekognition::Model;
class RekognitionSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char RekognitionSmokeTestSuite::ALLOCATION_TAG[] = "RekognitionSmokeTest";
TEST_F(RekognitionSmokeTestSuite, ListCollectionsSuccess )
{
    Aws::Rekognition::RekognitionClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<RekognitionClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    ListCollectionsRequest input;
    auto outcome = clientSp->ListCollections(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
}
