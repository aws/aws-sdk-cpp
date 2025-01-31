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
#include <aws/acm/ACMClient.h>
#include <aws/acm/model/GetCertificateRequest.h>
#include <aws/acm/model/ListCertificatesRequest.h>

namespace ACMSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::ACM;
using namespace Aws::ACM::Model;
class ACMSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char ACMSmokeTestSuite::ALLOCATION_TAG[] = "ACMSmokeTest";
TEST_F(ACMSmokeTestSuite, GetCertificateFailure )
{
    Aws::ACM::ACMClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<ACMClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    GetCertificateRequest input;
    input.SetCertificateArn("arn:aws:acm:region:123456789012:certificate/12345678-1234-1234-1234-123456789012");
    auto outcome = clientSp->GetCertificate(input);
    EXPECT_FALSE( outcome.IsSuccess());
}
TEST_F(ACMSmokeTestSuite, ListCertificatesSuccess )
{
    Aws::ACM::ACMClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<ACMClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    ListCertificatesRequest input;
    auto outcome = clientSp->ListCertificates(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
}
