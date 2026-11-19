/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-zonal-shift/ARCZonalShiftEndpointProvider.h>
#include <aws/arc-zonal-shift/internal/ARCZonalShiftEndpointRules.h>

namespace Aws {
#ifndef AWS_ARCZONALSHIFT_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ARCZonalShift::Endpoint::ARCZonalShiftClientConfiguration,
                                                   ARCZonalShift::Endpoint::ARCZonalShiftBuiltInParameters,
                                                   ARCZonalShift::Endpoint::ARCZonalShiftClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ARCZonalShift::Endpoint::ARCZonalShiftClientConfiguration,
                                                  ARCZonalShift::Endpoint::ARCZonalShiftBuiltInParameters,
                                                  ARCZonalShift::Endpoint::ARCZonalShiftClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ARCZonalShift {
namespace Endpoint {
ARCZonalShiftEndpointProvider::ARCZonalShiftEndpointProvider()
    : ARCZonalShiftDefaultEpProviderBase(Aws::ARCZonalShift::ARCZonalShiftEndpointRules::GetRulesBlob(),
                                         Aws::ARCZonalShift::ARCZonalShiftEndpointRules::RulesBlobSize) {}

void ARCZonalShiftBuiltInParameters::SetFromClientConfiguration(const ARCZonalShiftClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ARCZonalShiftClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ARCZonalShiftBuiltInParameters::SetFromClientConfiguration(const ARCZonalShiftClientConfiguration& config,
                                                                const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ARCZonalShiftClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ARCZonalShiftBuiltInParameters::SetServiceSpecificParameters(const ARCZonalShiftClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ARCZonalShift
}  // namespace Aws
