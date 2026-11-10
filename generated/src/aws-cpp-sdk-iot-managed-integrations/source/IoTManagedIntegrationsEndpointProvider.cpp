/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/IoTManagedIntegrationsEndpointProvider.h>
#include <aws/iot-managed-integrations/internal/IoTManagedIntegrationsEndpointRules.h>

namespace Aws {
#ifndef AWS_IOTMANAGEDINTEGRATIONS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<IoTManagedIntegrations::Endpoint::IoTManagedIntegrationsClientConfiguration,
                                                   IoTManagedIntegrations::Endpoint::IoTManagedIntegrationsBuiltInParameters,
                                                   IoTManagedIntegrations::Endpoint::IoTManagedIntegrationsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<IoTManagedIntegrations::Endpoint::IoTManagedIntegrationsClientConfiguration,
                                                  IoTManagedIntegrations::Endpoint::IoTManagedIntegrationsBuiltInParameters,
                                                  IoTManagedIntegrations::Endpoint::IoTManagedIntegrationsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace IoTManagedIntegrations {
namespace Endpoint {
IoTManagedIntegrationsEndpointProvider::IoTManagedIntegrationsEndpointProvider()
    : IoTManagedIntegrationsDefaultEpProviderBase(Aws::IoTManagedIntegrations::IoTManagedIntegrationsEndpointRules::GetRulesBlob(),
                                                  Aws::IoTManagedIntegrations::IoTManagedIntegrationsEndpointRules::RulesBlobSize) {}

void IoTManagedIntegrationsBuiltInParameters::SetFromClientConfiguration(const IoTManagedIntegrationsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const IoTManagedIntegrationsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void IoTManagedIntegrationsBuiltInParameters::SetFromClientConfiguration(const IoTManagedIntegrationsClientConfiguration& config,
                                                                         const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const IoTManagedIntegrationsClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void IoTManagedIntegrationsBuiltInParameters::SetServiceSpecificParameters(const IoTManagedIntegrationsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace IoTManagedIntegrations
}  // namespace Aws
