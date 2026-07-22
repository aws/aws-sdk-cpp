/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/APIGatewayEndpointProvider.h>
#include <aws/apigateway/internal/APIGatewayEndpointRules.h>

namespace Aws {
namespace APIGateway {
namespace Endpoint {
APIGatewayEndpointProvider::APIGatewayEndpointProvider()
    : APIGatewayDefaultEpProviderBase(Aws::APIGateway::APIGatewayEndpointRules::GetRulesBlob(),
                                      Aws::APIGateway::APIGatewayEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace APIGateway
}  // namespace Aws
