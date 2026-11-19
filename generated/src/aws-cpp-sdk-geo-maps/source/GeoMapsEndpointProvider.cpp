/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-maps/GeoMapsEndpointProvider.h>
#include <aws/geo-maps/internal/GeoMapsEndpointRules.h>

namespace Aws {
#ifndef AWS_GEOMAPS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<GeoMaps::Endpoint::GeoMapsClientConfiguration,
                                                   GeoMaps::Endpoint::GeoMapsBuiltInParameters,
                                                   GeoMaps::Endpoint::GeoMapsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<GeoMaps::Endpoint::GeoMapsClientConfiguration,
                                                  GeoMaps::Endpoint::GeoMapsBuiltInParameters,
                                                  GeoMaps::Endpoint::GeoMapsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace GeoMaps {
namespace Endpoint {
GeoMapsEndpointProvider::GeoMapsEndpointProvider()
    : GeoMapsDefaultEpProviderBase(Aws::GeoMaps::GeoMapsEndpointRules::GetRulesBlob(), Aws::GeoMaps::GeoMapsEndpointRules::RulesBlobSize) {}

void GeoMapsBuiltInParameters::SetFromClientConfiguration(const GeoMapsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const GeoMapsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void GeoMapsBuiltInParameters::SetFromClientConfiguration(const GeoMapsClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const GeoMapsClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void GeoMapsBuiltInParameters::SetServiceSpecificParameters(const GeoMapsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace GeoMaps
}  // namespace Aws
