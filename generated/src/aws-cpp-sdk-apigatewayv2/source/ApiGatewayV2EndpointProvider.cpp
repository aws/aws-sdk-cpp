/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/ApiGatewayV2EndpointProvider.h>
#include <aws/apigatewayv2/internal/ApiGatewayV2EndpointRules.h>

namespace Aws {
namespace ApiGatewayV2 {
namespace Endpoint {
ApiGatewayV2EndpointProvider::ApiGatewayV2EndpointProvider()
    : ApiGatewayV2DefaultEpProviderBase(Aws::ApiGatewayV2::ApiGatewayV2EndpointRules::GetRulesBlob(),
                                        Aws::ApiGatewayV2::ApiGatewayV2EndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ApiGatewayV2
}  // namespace Aws
