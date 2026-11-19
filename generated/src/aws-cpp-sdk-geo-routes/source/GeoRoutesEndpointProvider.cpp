/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/GeoRoutesEndpointProvider.h>
#include <aws/geo-routes/internal/GeoRoutesEndpointRules.h>

namespace Aws {
#ifndef AWS_GEOROUTES_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<GeoRoutes::Endpoint::GeoRoutesClientConfiguration,
                                                   GeoRoutes::Endpoint::GeoRoutesBuiltInParameters,
                                                   GeoRoutes::Endpoint::GeoRoutesClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<GeoRoutes::Endpoint::GeoRoutesClientConfiguration,
                                                  GeoRoutes::Endpoint::GeoRoutesBuiltInParameters,
                                                  GeoRoutes::Endpoint::GeoRoutesClientContextParameters>;
}  // namespace Endpoint
#endif

namespace GeoRoutes {
namespace Endpoint {
GeoRoutesEndpointProvider::GeoRoutesEndpointProvider()
    : GeoRoutesDefaultEpProviderBase(Aws::GeoRoutes::GeoRoutesEndpointRules::GetRulesBlob(),
                                     Aws::GeoRoutes::GeoRoutesEndpointRules::RulesBlobSize) {}

void GeoRoutesBuiltInParameters::SetFromClientConfiguration(const GeoRoutesClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const GeoRoutesClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void GeoRoutesBuiltInParameters::SetFromClientConfiguration(const GeoRoutesClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const GeoRoutesClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void GeoRoutesBuiltInParameters::SetServiceSpecificParameters(const GeoRoutesClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace GeoRoutes
}  // namespace Aws
