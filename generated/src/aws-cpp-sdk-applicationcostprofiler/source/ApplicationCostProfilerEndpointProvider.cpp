/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/applicationcostprofiler/ApplicationCostProfilerEndpointProvider.h>
#include <aws/applicationcostprofiler/internal/ApplicationCostProfilerEndpointRules.h>

namespace Aws {
#ifndef AWS_APPLICATIONCOSTPROFILER_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ApplicationCostProfiler::Endpoint::ApplicationCostProfilerClientConfiguration,
                                                   ApplicationCostProfiler::Endpoint::ApplicationCostProfilerBuiltInParameters,
                                                   ApplicationCostProfiler::Endpoint::ApplicationCostProfilerClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ApplicationCostProfiler::Endpoint::ApplicationCostProfilerClientConfiguration,
                                                  ApplicationCostProfiler::Endpoint::ApplicationCostProfilerBuiltInParameters,
                                                  ApplicationCostProfiler::Endpoint::ApplicationCostProfilerClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ApplicationCostProfiler {
namespace Endpoint {
ApplicationCostProfilerEndpointProvider::ApplicationCostProfilerEndpointProvider()
    : ApplicationCostProfilerDefaultEpProviderBase(Aws::ApplicationCostProfiler::ApplicationCostProfilerEndpointRules::GetRulesBlob(),
                                                   Aws::ApplicationCostProfiler::ApplicationCostProfilerEndpointRules::RulesBlobSize) {}

void ApplicationCostProfilerBuiltInParameters::SetFromClientConfiguration(const ApplicationCostProfilerClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ApplicationCostProfilerClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ApplicationCostProfilerBuiltInParameters::SetFromClientConfiguration(const ApplicationCostProfilerClientConfiguration& config,
                                                                          const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ApplicationCostProfilerClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ApplicationCostProfilerBuiltInParameters::SetServiceSpecificParameters(const ApplicationCostProfilerClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ApplicationCostProfiler
}  // namespace Aws
