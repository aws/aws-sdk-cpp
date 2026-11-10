/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/ApiGatewayV2EndpointProvider.h>
#include <aws/apigatewayv2/internal/ApiGatewayV2EndpointRules.h>

namespace Aws {
#ifndef AWS_APIGATEWAYV2_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ApiGatewayV2::Endpoint::ApiGatewayV2ClientConfiguration,
                                                   ApiGatewayV2::Endpoint::ApiGatewayV2BuiltInParameters,
                                                   ApiGatewayV2::Endpoint::ApiGatewayV2ClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ApiGatewayV2::Endpoint::ApiGatewayV2ClientConfiguration,
                                                  ApiGatewayV2::Endpoint::ApiGatewayV2BuiltInParameters,
                                                  ApiGatewayV2::Endpoint::ApiGatewayV2ClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ApiGatewayV2 {
namespace Endpoint {
ApiGatewayV2EndpointProvider::ApiGatewayV2EndpointProvider()
    : ApiGatewayV2DefaultEpProviderBase(Aws::ApiGatewayV2::ApiGatewayV2EndpointRules::GetRulesBlob(),
                                        Aws::ApiGatewayV2::ApiGatewayV2EndpointRules::RulesBlobSize) {}

void ApiGatewayV2BuiltInParameters::SetFromClientConfiguration(const ApiGatewayV2ClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ApiGatewayV2ClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ApiGatewayV2BuiltInParameters::SetFromClientConfiguration(const ApiGatewayV2ClientConfiguration& config,
                                                               const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ApiGatewayV2ClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ApiGatewayV2BuiltInParameters::SetServiceSpecificParameters(const ApiGatewayV2ClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ApiGatewayV2
}  // namespace Aws
