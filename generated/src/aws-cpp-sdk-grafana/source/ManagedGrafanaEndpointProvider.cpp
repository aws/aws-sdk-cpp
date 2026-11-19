/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/grafana/ManagedGrafanaEndpointProvider.h>
#include <aws/grafana/internal/ManagedGrafanaEndpointRules.h>

namespace Aws {
#ifndef AWS_MANAGEDGRAFANA_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ManagedGrafana::Endpoint::ManagedGrafanaClientConfiguration,
                                                   ManagedGrafana::Endpoint::ManagedGrafanaBuiltInParameters,
                                                   ManagedGrafana::Endpoint::ManagedGrafanaClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ManagedGrafana::Endpoint::ManagedGrafanaClientConfiguration,
                                                  ManagedGrafana::Endpoint::ManagedGrafanaBuiltInParameters,
                                                  ManagedGrafana::Endpoint::ManagedGrafanaClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ManagedGrafana {
namespace Endpoint {
ManagedGrafanaEndpointProvider::ManagedGrafanaEndpointProvider()
    : ManagedGrafanaDefaultEpProviderBase(Aws::ManagedGrafana::ManagedGrafanaEndpointRules::GetRulesBlob(),
                                          Aws::ManagedGrafana::ManagedGrafanaEndpointRules::RulesBlobSize) {}

void ManagedGrafanaBuiltInParameters::SetFromClientConfiguration(const ManagedGrafanaClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ManagedGrafanaClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ManagedGrafanaBuiltInParameters::SetFromClientConfiguration(const ManagedGrafanaClientConfiguration& config,
                                                                 const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ManagedGrafanaClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ManagedGrafanaBuiltInParameters::SetServiceSpecificParameters(const ManagedGrafanaClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ManagedGrafana
}  // namespace Aws
