/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/ApplicationInsightsEndpointProvider.h>
#include <aws/application-insights/internal/ApplicationInsightsEndpointRules.h>

namespace Aws {
#ifndef AWS_APPLICATIONINSIGHTS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ApplicationInsights::Endpoint::ApplicationInsightsClientConfiguration,
                                                   ApplicationInsights::Endpoint::ApplicationInsightsBuiltInParameters,
                                                   ApplicationInsights::Endpoint::ApplicationInsightsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ApplicationInsights::Endpoint::ApplicationInsightsClientConfiguration,
                                                  ApplicationInsights::Endpoint::ApplicationInsightsBuiltInParameters,
                                                  ApplicationInsights::Endpoint::ApplicationInsightsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ApplicationInsights {
namespace Endpoint {
ApplicationInsightsEndpointProvider::ApplicationInsightsEndpointProvider()
    : ApplicationInsightsDefaultEpProviderBase(Aws::ApplicationInsights::ApplicationInsightsEndpointRules::GetRulesBlob(),
                                               Aws::ApplicationInsights::ApplicationInsightsEndpointRules::RulesBlobSize) {}

void ApplicationInsightsBuiltInParameters::SetFromClientConfiguration(const ApplicationInsightsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ApplicationInsightsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ApplicationInsightsBuiltInParameters::SetFromClientConfiguration(const ApplicationInsightsClientConfiguration& config,
                                                                      const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ApplicationInsightsClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ApplicationInsightsBuiltInParameters::SetServiceSpecificParameters(const ApplicationInsightsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ApplicationInsights
}  // namespace Aws
