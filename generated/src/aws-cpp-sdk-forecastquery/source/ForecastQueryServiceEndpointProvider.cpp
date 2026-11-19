/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecastquery/ForecastQueryServiceEndpointProvider.h>
#include <aws/forecastquery/internal/ForecastQueryServiceEndpointRules.h>

namespace Aws {
#ifndef AWS_FORECASTQUERYSERVICE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ForecastQueryService::Endpoint::ForecastQueryServiceClientConfiguration,
                                                   ForecastQueryService::Endpoint::ForecastQueryServiceBuiltInParameters,
                                                   ForecastQueryService::Endpoint::ForecastQueryServiceClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ForecastQueryService::Endpoint::ForecastQueryServiceClientConfiguration,
                                                  ForecastQueryService::Endpoint::ForecastQueryServiceBuiltInParameters,
                                                  ForecastQueryService::Endpoint::ForecastQueryServiceClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ForecastQueryService {
namespace Endpoint {
ForecastQueryServiceEndpointProvider::ForecastQueryServiceEndpointProvider()
    : ForecastQueryServiceDefaultEpProviderBase(Aws::ForecastQueryService::ForecastQueryServiceEndpointRules::GetRulesBlob(),
                                                Aws::ForecastQueryService::ForecastQueryServiceEndpointRules::RulesBlobSize) {}

void ForecastQueryServiceBuiltInParameters::SetFromClientConfiguration(const ForecastQueryServiceClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ForecastQueryServiceClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ForecastQueryServiceBuiltInParameters::SetFromClientConfiguration(const ForecastQueryServiceClientConfiguration& config,
                                                                       const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ForecastQueryServiceClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ForecastQueryServiceBuiltInParameters::SetServiceSpecificParameters(const ForecastQueryServiceClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ForecastQueryService
}  // namespace Aws
