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
#include <aws/iot-managed-integrations/IoTManagedIntegrationsClient.h>
#include <aws/iot-managed-integrations/model/GetCustomEndpointRequest.h>
#include <aws/iot-managed-integrations/model/ListTagsForResourceRequest.h>

namespace IoTManagedIntegrationsSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::IoTManagedIntegrations;
using namespace Aws::IoTManagedIntegrations::Model;
class IoTManagedIntegrationsSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char IoTManagedIntegrationsSmokeTestSuite::ALLOCATION_TAG[] = "IoTManagedIntegrationsSmokeTest";
TEST_F(IoTManagedIntegrationsSmokeTestSuite, GetCustomEndpointSuccess )
{
    Aws::IoTManagedIntegrations::IoTManagedIntegrationsClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-east-1";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<IoTManagedIntegrationsClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    GetCustomEndpointRequest input;
    auto outcome = clientSp->GetCustomEndpoint(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
TEST_F(IoTManagedIntegrationsSmokeTestSuite, ListTagsForResourceNotFound )
{
    Aws::IoTManagedIntegrations::IoTManagedIntegrationsClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-east-1";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<IoTManagedIntegrationsClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    ListTagsForResourceRequest input;
    input.SetResourceArn("arn:aws:iotmanagedintegrations:us-east-1:123456789012:managed-thing/nonexistent");
    auto outcome = clientSp->ListTagsForResource(input);
    EXPECT_FALSE( outcome.IsSuccess());
}
TEST_F(IoTManagedIntegrationsSmokeTestSuite, ListTagsForResourceSuccess )
{
    Aws::IoTManagedIntegrations::IoTManagedIntegrationsClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-east-1";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<IoTManagedIntegrationsClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    ListTagsForResourceRequest input;
    input.SetResourceArn("arn:aws:iotmanagedintegrations:us-east-1:123456789012:managed-thing/test123");
    auto outcome = clientSp->ListTagsForResource(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
}
