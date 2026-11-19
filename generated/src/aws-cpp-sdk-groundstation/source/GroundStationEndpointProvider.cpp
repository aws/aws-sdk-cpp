/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/GroundStationEndpointProvider.h>
#include <aws/groundstation/internal/GroundStationEndpointRules.h>

namespace Aws {
#ifndef AWS_GROUNDSTATION_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<GroundStation::Endpoint::GroundStationClientConfiguration,
                                                   GroundStation::Endpoint::GroundStationBuiltInParameters,
                                                   GroundStation::Endpoint::GroundStationClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<GroundStation::Endpoint::GroundStationClientConfiguration,
                                                  GroundStation::Endpoint::GroundStationBuiltInParameters,
                                                  GroundStation::Endpoint::GroundStationClientContextParameters>;
}  // namespace Endpoint
#endif

namespace GroundStation {
namespace Endpoint {
GroundStationEndpointProvider::GroundStationEndpointProvider()
    : GroundStationDefaultEpProviderBase(Aws::GroundStation::GroundStationEndpointRules::GetRulesBlob(),
                                         Aws::GroundStation::GroundStationEndpointRules::RulesBlobSize) {}

void GroundStationBuiltInParameters::SetFromClientConfiguration(const GroundStationClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const GroundStationClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void GroundStationBuiltInParameters::SetFromClientConfiguration(const GroundStationClientConfiguration& config,
                                                                const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const GroundStationClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void GroundStationBuiltInParameters::SetServiceSpecificParameters(const GroundStationClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace GroundStation
}  // namespace Aws
