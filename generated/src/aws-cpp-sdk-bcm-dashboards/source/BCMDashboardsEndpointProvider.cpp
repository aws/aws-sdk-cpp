/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-dashboards/BCMDashboardsEndpointProvider.h>
#include <aws/bcm-dashboards/internal/BCMDashboardsEndpointRules.h>

namespace Aws {
#ifndef AWS_BCMDASHBOARDS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<BCMDashboards::Endpoint::BCMDashboardsClientConfiguration,
                                                   BCMDashboards::Endpoint::BCMDashboardsBuiltInParameters,
                                                   BCMDashboards::Endpoint::BCMDashboardsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<BCMDashboards::Endpoint::BCMDashboardsClientConfiguration,
                                                  BCMDashboards::Endpoint::BCMDashboardsBuiltInParameters,
                                                  BCMDashboards::Endpoint::BCMDashboardsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace BCMDashboards {
namespace Endpoint {
BCMDashboardsEndpointProvider::BCMDashboardsEndpointProvider()
    : BCMDashboardsDefaultEpProviderBase(Aws::BCMDashboards::BCMDashboardsEndpointRules::GetRulesBlob(),
                                         Aws::BCMDashboards::BCMDashboardsEndpointRules::RulesBlobSize) {}

void BCMDashboardsBuiltInParameters::SetFromClientConfiguration(const BCMDashboardsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const BCMDashboardsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void BCMDashboardsBuiltInParameters::SetFromClientConfiguration(const BCMDashboardsClientConfiguration& config,
                                                                const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const BCMDashboardsClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void BCMDashboardsBuiltInParameters::SetServiceSpecificParameters(const BCMDashboardsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace BCMDashboards
}  // namespace Aws
