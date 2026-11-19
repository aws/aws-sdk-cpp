/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/ForecastServiceEndpointProvider.h>
#include <aws/forecast/internal/ForecastServiceEndpointRules.h>

namespace Aws {
#ifndef AWS_FORECASTSERVICE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ForecastService::Endpoint::ForecastServiceClientConfiguration,
                                                   ForecastService::Endpoint::ForecastServiceBuiltInParameters,
                                                   ForecastService::Endpoint::ForecastServiceClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ForecastService::Endpoint::ForecastServiceClientConfiguration,
                                                  ForecastService::Endpoint::ForecastServiceBuiltInParameters,
                                                  ForecastService::Endpoint::ForecastServiceClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ForecastService {
namespace Endpoint {
ForecastServiceEndpointProvider::ForecastServiceEndpointProvider()
    : ForecastServiceDefaultEpProviderBase(Aws::ForecastService::ForecastServiceEndpointRules::GetRulesBlob(),
                                           Aws::ForecastService::ForecastServiceEndpointRules::RulesBlobSize) {}

void ForecastServiceBuiltInParameters::SetFromClientConfiguration(const ForecastServiceClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ForecastServiceClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ForecastServiceBuiltInParameters::SetFromClientConfiguration(const ForecastServiceClientConfiguration& config,
                                                                  const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ForecastServiceClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ForecastServiceBuiltInParameters::SetServiceSpecificParameters(const ForecastServiceClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ForecastService
}  // namespace Aws
