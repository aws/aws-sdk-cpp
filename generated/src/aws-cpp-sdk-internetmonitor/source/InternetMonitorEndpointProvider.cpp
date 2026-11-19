/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/internetmonitor/InternetMonitorEndpointProvider.h>
#include <aws/internetmonitor/internal/InternetMonitorEndpointRules.h>

namespace Aws {
#ifndef AWS_INTERNETMONITOR_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<InternetMonitor::Endpoint::InternetMonitorClientConfiguration,
                                                   InternetMonitor::Endpoint::InternetMonitorBuiltInParameters,
                                                   InternetMonitor::Endpoint::InternetMonitorClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<InternetMonitor::Endpoint::InternetMonitorClientConfiguration,
                                                  InternetMonitor::Endpoint::InternetMonitorBuiltInParameters,
                                                  InternetMonitor::Endpoint::InternetMonitorClientContextParameters>;
}  // namespace Endpoint
#endif

namespace InternetMonitor {
namespace Endpoint {
InternetMonitorEndpointProvider::InternetMonitorEndpointProvider()
    : InternetMonitorDefaultEpProviderBase(Aws::InternetMonitor::InternetMonitorEndpointRules::GetRulesBlob(),
                                           Aws::InternetMonitor::InternetMonitorEndpointRules::RulesBlobSize) {}

void InternetMonitorBuiltInParameters::SetFromClientConfiguration(const InternetMonitorClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const InternetMonitorClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void InternetMonitorBuiltInParameters::SetFromClientConfiguration(const InternetMonitorClientConfiguration& config,
                                                                  const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const InternetMonitorClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void InternetMonitorBuiltInParameters::SetServiceSpecificParameters(const InternetMonitorClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace InternetMonitor
}  // namespace Aws
