/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-data/IoTDataPlaneEndpointProvider.h>
#include <aws/iot-data/internal/IoTDataPlaneEndpointRules.h>

namespace Aws {
#ifndef AWS_IOTDATAPLANE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<IoTDataPlane::Endpoint::IoTDataPlaneClientConfiguration,
                                                   IoTDataPlane::Endpoint::IoTDataPlaneBuiltInParameters,
                                                   IoTDataPlane::Endpoint::IoTDataPlaneClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<IoTDataPlane::Endpoint::IoTDataPlaneClientConfiguration,
                                                  IoTDataPlane::Endpoint::IoTDataPlaneBuiltInParameters,
                                                  IoTDataPlane::Endpoint::IoTDataPlaneClientContextParameters>;
}  // namespace Endpoint
#endif

namespace IoTDataPlane {
namespace Endpoint {
IoTDataPlaneEndpointProvider::IoTDataPlaneEndpointProvider()
    : IoTDataPlaneDefaultEpProviderBase(Aws::IoTDataPlane::IoTDataPlaneEndpointRules::GetRulesBlob(),
                                        Aws::IoTDataPlane::IoTDataPlaneEndpointRules::RulesBlobSize) {}

void IoTDataPlaneBuiltInParameters::SetFromClientConfiguration(const IoTDataPlaneClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const IoTDataPlaneClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void IoTDataPlaneBuiltInParameters::SetFromClientConfiguration(const IoTDataPlaneClientConfiguration& config,
                                                               const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const IoTDataPlaneClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void IoTDataPlaneBuiltInParameters::SetServiceSpecificParameters(const IoTDataPlaneClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace IoTDataPlane
}  // namespace Aws
