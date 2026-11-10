/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/ARCRegionswitchEndpointProvider.h>
#include <aws/arc-region-switch/internal/ARCRegionswitchEndpointRules.h>

namespace Aws {
#ifndef AWS_ARCREGIONSWITCH_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ARCRegionswitch::Endpoint::ARCRegionswitchClientConfiguration,
                                                   ARCRegionswitch::Endpoint::ARCRegionswitchBuiltInParameters,
                                                   ARCRegionswitch::Endpoint::ARCRegionswitchClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ARCRegionswitch::Endpoint::ARCRegionswitchClientConfiguration,
                                                  ARCRegionswitch::Endpoint::ARCRegionswitchBuiltInParameters,
                                                  ARCRegionswitch::Endpoint::ARCRegionswitchClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ARCRegionswitch {
namespace Endpoint {
ARCRegionswitchEndpointProvider::ARCRegionswitchEndpointProvider()
    : ARCRegionswitchDefaultEpProviderBase(Aws::ARCRegionswitch::ARCRegionswitchEndpointRules::GetRulesBlob(),
                                           Aws::ARCRegionswitch::ARCRegionswitchEndpointRules::RulesBlobSize) {}

void ARCRegionswitchBuiltInParameters::SetFromClientConfiguration(const ARCRegionswitchClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ARCRegionswitchClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ARCRegionswitchBuiltInParameters::SetFromClientConfiguration(const ARCRegionswitchClientConfiguration& config,
                                                                  const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ARCRegionswitchClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ARCRegionswitchBuiltInParameters::SetServiceSpecificParameters(const ARCRegionswitchClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace ARCRegionswitch
}  // namespace Aws
