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
#include <aws/iot-data/IoTDataPlaneClient.h>
#include <aws/iot-data/model/GetThingShadowRequest.h>

namespace IoTDataPlaneSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::IoTDataPlane;
using namespace Aws::IoTDataPlane::Model;
class IoTDataPlaneSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char IoTDataPlaneSmokeTestSuite::ALLOCATION_TAG[] = "IoTDataPlaneSmokeTest";
TEST_F(IoTDataPlaneSmokeTestSuite, GetThingShadowFailure )
{
    Aws::IoTDataPlane::IoTDataPlaneClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<IoTDataPlaneClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    GetThingShadowRequest input;
    input.SetThingName("fake-thing");
    auto outcome = clientSp->GetThingShadow(input);
    EXPECT_FALSE( outcome.IsSuccess());
}
}
