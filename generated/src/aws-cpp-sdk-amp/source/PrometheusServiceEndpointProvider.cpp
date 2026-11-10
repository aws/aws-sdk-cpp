/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/PrometheusServiceEndpointProvider.h>
#include <aws/amp/internal/PrometheusServiceEndpointRules.h>

namespace Aws {
#ifndef AWS_PROMETHEUSSERVICE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<PrometheusService::Endpoint::PrometheusServiceClientConfiguration,
                                                   PrometheusService::Endpoint::PrometheusServiceBuiltInParameters,
                                                   PrometheusService::Endpoint::PrometheusServiceClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<PrometheusService::Endpoint::PrometheusServiceClientConfiguration,
                                                  PrometheusService::Endpoint::PrometheusServiceBuiltInParameters,
                                                  PrometheusService::Endpoint::PrometheusServiceClientContextParameters>;
}  // namespace Endpoint
#endif

namespace PrometheusService {
namespace Endpoint {
PrometheusServiceEndpointProvider::PrometheusServiceEndpointProvider()
    : PrometheusServiceDefaultEpProviderBase(Aws::PrometheusService::PrometheusServiceEndpointRules::GetRulesBlob(),
                                             Aws::PrometheusService::PrometheusServiceEndpointRules::RulesBlobSize) {}

void PrometheusServiceBuiltInParameters::SetFromClientConfiguration(const PrometheusServiceClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const PrometheusServiceClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void PrometheusServiceBuiltInParameters::SetFromClientConfiguration(const PrometheusServiceClientConfiguration& config,
                                                                    const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const PrometheusServiceClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void PrometheusServiceBuiltInParameters::SetServiceSpecificParameters(const PrometheusServiceClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace PrometheusService
}  // namespace Aws
