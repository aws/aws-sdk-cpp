/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appintegrations/AppIntegrationsServiceEndpointProvider.h>
#include <aws/appintegrations/internal/AppIntegrationsServiceEndpointRules.h>

namespace Aws {
#ifndef AWS_APPINTEGRATIONSSERVICE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<AppIntegrationsService::Endpoint::AppIntegrationsServiceClientConfiguration,
                                                   AppIntegrationsService::Endpoint::AppIntegrationsServiceBuiltInParameters,
                                                   AppIntegrationsService::Endpoint::AppIntegrationsServiceClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<AppIntegrationsService::Endpoint::AppIntegrationsServiceClientConfiguration,
                                                  AppIntegrationsService::Endpoint::AppIntegrationsServiceBuiltInParameters,
                                                  AppIntegrationsService::Endpoint::AppIntegrationsServiceClientContextParameters>;
}  // namespace Endpoint
#endif

namespace AppIntegrationsService {
namespace Endpoint {
AppIntegrationsServiceEndpointProvider::AppIntegrationsServiceEndpointProvider()
    : AppIntegrationsServiceDefaultEpProviderBase(Aws::AppIntegrationsService::AppIntegrationsServiceEndpointRules::GetRulesBlob(),
                                                  Aws::AppIntegrationsService::AppIntegrationsServiceEndpointRules::RulesBlobSize) {}

void AppIntegrationsServiceBuiltInParameters::SetFromClientConfiguration(const AppIntegrationsServiceClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const AppIntegrationsServiceClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void AppIntegrationsServiceBuiltInParameters::SetFromClientConfiguration(const AppIntegrationsServiceClientConfiguration& config,
                                                                         const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const AppIntegrationsServiceClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void AppIntegrationsServiceBuiltInParameters::SetServiceSpecificParameters(const AppIntegrationsServiceClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace AppIntegrationsService
}  // namespace Aws
