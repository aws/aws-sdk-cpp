/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewaymanagementapi/ApiGatewayManagementApiEndpointProvider.h>
#include <aws/apigatewaymanagementapi/internal/ApiGatewayManagementApiEndpointRules.h>

namespace Aws {
#ifndef AWS_APIGATEWAYMANAGEMENTAPI_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ApiGatewayManagementApi::Endpoint::ApiGatewayManagementApiClientConfiguration,
                                                   ApiGatewayManagementApi::Endpoint::ApiGatewayManagementApiBuiltInParameters,
                                                   ApiGatewayManagementApi::Endpoint::ApiGatewayManagementApiClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ApiGatewayManagementApi::Endpoint::ApiGatewayManagementApiClientConfiguration,
                                                  ApiGatewayManagementApi::Endpoint::ApiGatewayManagementApiBuiltInParameters,
                                                  ApiGatewayManagementApi::Endpoint::ApiGatewayManagementApiClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ApiGatewayManagementApi {
namespace Endpoint {
ApiGatewayManagementApiEndpointProvider::ApiGatewayManagementApiEndpointProvider()
    : ApiGatewayManagementApiDefaultEpProviderBase(Aws::ApiGatewayManagementApi::ApiGatewayManagementApiEndpointRules::GetRulesBlob(),
                                                   Aws::ApiGatewayManagementApi::ApiGatewayManagementApiEndpointRules::RulesBlobSize) {}

void ApiGatewayManagementApiBuiltInParameters::SetFromClientConfiguration(const ApiGatewayManagementApiClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ApiGatewayManagementApiClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ApiGatewayManagementApiBuiltInParameters::SetFromClientConfiguration(const ApiGatewayManagementApiClientConfiguration& config,
                                                                          const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ApiGatewayManagementApiClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ApiGatewayManagementApiBuiltInParameters::SetServiceSpecificParameters(const ApiGatewayManagementApiClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ApiGatewayManagementApi
}  // namespace Aws
