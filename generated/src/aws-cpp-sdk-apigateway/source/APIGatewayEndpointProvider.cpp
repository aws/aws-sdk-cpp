/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/APIGatewayEndpointProvider.h>
#include <aws/apigateway/internal/APIGatewayEndpointRules.h>

namespace Aws {
#ifndef AWS_APIGATEWAY_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<APIGateway::Endpoint::APIGatewayClientConfiguration,
                                                   APIGateway::Endpoint::APIGatewayBuiltInParameters,
                                                   APIGateway::Endpoint::APIGatewayClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<APIGateway::Endpoint::APIGatewayClientConfiguration,
                                                  APIGateway::Endpoint::APIGatewayBuiltInParameters,
                                                  APIGateway::Endpoint::APIGatewayClientContextParameters>;
}  // namespace Endpoint
#endif

namespace APIGateway {
namespace Endpoint {
APIGatewayEndpointProvider::APIGatewayEndpointProvider()
    : APIGatewayDefaultEpProviderBase(Aws::APIGateway::APIGatewayEndpointRules::GetRulesBlob(),
                                      Aws::APIGateway::APIGatewayEndpointRules::RulesBlobSize) {}

void APIGatewayBuiltInParameters::SetFromClientConfiguration(const APIGatewayClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const APIGatewayClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void APIGatewayBuiltInParameters::SetFromClientConfiguration(const APIGatewayClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const APIGatewayClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void APIGatewayBuiltInParameters::SetServiceSpecificParameters(const APIGatewayClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace APIGateway
}  // namespace Aws
