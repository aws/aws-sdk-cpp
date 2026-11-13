/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/LocationServiceEndpointProvider.h>
#include <aws/location/internal/LocationServiceEndpointRules.h>

namespace Aws {
#ifndef AWS_LOCATIONSERVICE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<LocationService::Endpoint::LocationServiceClientConfiguration,
                                                   LocationService::Endpoint::LocationServiceBuiltInParameters,
                                                   LocationService::Endpoint::LocationServiceClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<LocationService::Endpoint::LocationServiceClientConfiguration,
                                                  LocationService::Endpoint::LocationServiceBuiltInParameters,
                                                  LocationService::Endpoint::LocationServiceClientContextParameters>;
}  // namespace Endpoint
#endif

namespace LocationService {
namespace Endpoint {
LocationServiceEndpointProvider::LocationServiceEndpointProvider()
    : LocationServiceDefaultEpProviderBase(Aws::LocationService::LocationServiceEndpointRules::GetRulesBlob(),
                                           Aws::LocationService::LocationServiceEndpointRules::RulesBlobSize) {}

void LocationServiceBuiltInParameters::SetFromClientConfiguration(const LocationServiceClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const LocationServiceClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void LocationServiceBuiltInParameters::SetFromClientConfiguration(const LocationServiceClientConfiguration& config,
                                                                  const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const LocationServiceClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void LocationServiceBuiltInParameters::SetServiceSpecificParameters(const LocationServiceClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace LocationService
}  // namespace Aws
