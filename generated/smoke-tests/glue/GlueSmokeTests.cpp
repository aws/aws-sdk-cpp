/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <utility>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <algorithm>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/glue/GlueClient.h>
#include <aws/glue/model/GetCatalogImportStatusRequest.h>

namespace GlueSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::Glue;
using namespace Aws::Glue::Model;
class GlueSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char GlueSmokeTestSuite::ALLOCATION_TAG[] = "GlueSmokeTest";
TEST_F(GlueSmokeTestSuite, GetCatalogImportStatusSuccess )
{
    Aws::Glue::GlueClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<GlueClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    GetCatalogImportStatusRequest input;
    auto outcome = clientSp->GetCatalogImportStatus(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
}
