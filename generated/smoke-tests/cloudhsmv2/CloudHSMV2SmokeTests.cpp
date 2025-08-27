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
#include <aws/cloudhsmv2/CloudHSMV2Client.h>
#include <aws/cloudhsmv2/model/DescribeClustersRequest.h>

namespace CloudHSMV2SmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::CloudHSMV2;
using namespace Aws::CloudHSMV2::Model;
class CloudHSMV2SmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char CloudHSMV2SmokeTestSuite::ALLOCATION_TAG[] = "CloudHSMV2SmokeTest";
TEST_F(CloudHSMV2SmokeTestSuite, DescribeClustersSuccess )
{
    Aws::CloudHSMV2::CloudHSMV2ClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<CloudHSMV2Client>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    DescribeClustersRequest input;
    auto outcome = clientSp->DescribeClusters(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
}
