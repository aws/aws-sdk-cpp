/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewaymanagementapi/ApiGatewayManagementApiEndpointProvider.h>
#include <aws/apigatewaymanagementapi/internal/ApiGatewayManagementApiEndpointRules.h>

namespace Aws {
namespace ApiGatewayManagementApi {
namespace Endpoint {
ApiGatewayManagementApiEndpointProvider::ApiGatewayManagementApiEndpointProvider()
    : ApiGatewayManagementApiDefaultEpProviderBase(Aws::ApiGatewayManagementApi::ApiGatewayManagementApiEndpointRules::GetRulesBlob(),
                                                   Aws::ApiGatewayManagementApi::ApiGatewayManagementApiEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ApiGatewayManagementApi
}  // namespace Aws
