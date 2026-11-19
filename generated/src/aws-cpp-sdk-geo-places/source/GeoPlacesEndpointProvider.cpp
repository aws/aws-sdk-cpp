/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/GeoPlacesEndpointProvider.h>
#include <aws/geo-places/internal/GeoPlacesEndpointRules.h>

namespace Aws {
#ifndef AWS_GEOPLACES_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<GeoPlaces::Endpoint::GeoPlacesClientConfiguration,
                                                   GeoPlaces::Endpoint::GeoPlacesBuiltInParameters,
                                                   GeoPlaces::Endpoint::GeoPlacesClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<GeoPlaces::Endpoint::GeoPlacesClientConfiguration,
                                                  GeoPlaces::Endpoint::GeoPlacesBuiltInParameters,
                                                  GeoPlaces::Endpoint::GeoPlacesClientContextParameters>;
}  // namespace Endpoint
#endif

namespace GeoPlaces {
namespace Endpoint {
GeoPlacesEndpointProvider::GeoPlacesEndpointProvider()
    : GeoPlacesDefaultEpProviderBase(Aws::GeoPlaces::GeoPlacesEndpointRules::GetRulesBlob(),
                                     Aws::GeoPlaces::GeoPlacesEndpointRules::RulesBlobSize) {}

void GeoPlacesBuiltInParameters::SetFromClientConfiguration(const GeoPlacesClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const GeoPlacesClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void GeoPlacesBuiltInParameters::SetFromClientConfiguration(const GeoPlacesClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const GeoPlacesClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void GeoPlacesBuiltInParameters::SetServiceSpecificParameters(const GeoPlacesClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace GeoPlaces
}  // namespace Aws
