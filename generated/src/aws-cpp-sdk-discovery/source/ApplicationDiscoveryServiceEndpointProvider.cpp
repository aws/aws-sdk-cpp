/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/ApplicationDiscoveryServiceEndpointProvider.h>
#include <aws/discovery/internal/ApplicationDiscoveryServiceEndpointRules.h>

namespace Aws {
#ifndef AWS_APPLICATIONDISCOVERYSERVICE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<
    ApplicationDiscoveryService::Endpoint::ApplicationDiscoveryServiceClientConfiguration,
    ApplicationDiscoveryService::Endpoint::ApplicationDiscoveryServiceBuiltInParameters,
    ApplicationDiscoveryService::Endpoint::ApplicationDiscoveryServiceClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<
    ApplicationDiscoveryService::Endpoint::ApplicationDiscoveryServiceClientConfiguration,
    ApplicationDiscoveryService::Endpoint::ApplicationDiscoveryServiceBuiltInParameters,
    ApplicationDiscoveryService::Endpoint::ApplicationDiscoveryServiceClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ApplicationDiscoveryService {
namespace Endpoint {
ApplicationDiscoveryServiceEndpointProvider::ApplicationDiscoveryServiceEndpointProvider()
    : ApplicationDiscoveryServiceDefaultEpProviderBase(
          Aws::ApplicationDiscoveryService::ApplicationDiscoveryServiceEndpointRules::GetRulesBlob(),
          Aws::ApplicationDiscoveryService::ApplicationDiscoveryServiceEndpointRules::RulesBlobSize) {}

void ApplicationDiscoveryServiceBuiltInParameters::SetFromClientConfiguration(
    const ApplicationDiscoveryServiceClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ApplicationDiscoveryServiceClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ApplicationDiscoveryServiceBuiltInParameters::SetFromClientConfiguration(const ApplicationDiscoveryServiceClientConfiguration& config,
                                                                              const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ApplicationDiscoveryServiceClientConfiguration::BaseClientConfigClass&>(config),
                             serviceName);
  SetServiceSpecificParameters(config);
}

void ApplicationDiscoveryServiceBuiltInParameters::SetServiceSpecificParameters(
    const ApplicationDiscoveryServiceClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ApplicationDiscoveryService
}  // namespace Aws
