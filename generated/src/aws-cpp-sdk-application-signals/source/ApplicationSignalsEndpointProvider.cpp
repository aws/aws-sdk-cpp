/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/ApplicationSignalsEndpointProvider.h>
#include <aws/application-signals/internal/ApplicationSignalsEndpointRules.h>

namespace Aws {
#ifndef AWS_APPLICATIONSIGNALS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ApplicationSignals::Endpoint::ApplicationSignalsClientConfiguration,
                                                   ApplicationSignals::Endpoint::ApplicationSignalsBuiltInParameters,
                                                   ApplicationSignals::Endpoint::ApplicationSignalsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ApplicationSignals::Endpoint::ApplicationSignalsClientConfiguration,
                                                  ApplicationSignals::Endpoint::ApplicationSignalsBuiltInParameters,
                                                  ApplicationSignals::Endpoint::ApplicationSignalsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ApplicationSignals {
namespace Endpoint {
ApplicationSignalsEndpointProvider::ApplicationSignalsEndpointProvider()
    : ApplicationSignalsDefaultEpProviderBase(Aws::ApplicationSignals::ApplicationSignalsEndpointRules::GetRulesBlob(),
                                              Aws::ApplicationSignals::ApplicationSignalsEndpointRules::RulesBlobSize) {}

void ApplicationSignalsBuiltInParameters::SetFromClientConfiguration(const ApplicationSignalsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ApplicationSignalsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ApplicationSignalsBuiltInParameters::SetFromClientConfiguration(const ApplicationSignalsClientConfiguration& config,
                                                                     const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ApplicationSignalsClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ApplicationSignalsBuiltInParameters::SetServiceSpecificParameters(const ApplicationSignalsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace ApplicationSignals
}  // namespace Aws
