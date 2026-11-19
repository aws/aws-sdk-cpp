/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-jobs-data/IoTJobsDataPlaneEndpointProvider.h>
#include <aws/iot-jobs-data/internal/IoTJobsDataPlaneEndpointRules.h>

namespace Aws {
#ifndef AWS_IOTJOBSDATAPLANE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<IoTJobsDataPlane::Endpoint::IoTJobsDataPlaneClientConfiguration,
                                                   IoTJobsDataPlane::Endpoint::IoTJobsDataPlaneBuiltInParameters,
                                                   IoTJobsDataPlane::Endpoint::IoTJobsDataPlaneClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<IoTJobsDataPlane::Endpoint::IoTJobsDataPlaneClientConfiguration,
                                                  IoTJobsDataPlane::Endpoint::IoTJobsDataPlaneBuiltInParameters,
                                                  IoTJobsDataPlane::Endpoint::IoTJobsDataPlaneClientContextParameters>;
}  // namespace Endpoint
#endif

namespace IoTJobsDataPlane {
namespace Endpoint {
IoTJobsDataPlaneEndpointProvider::IoTJobsDataPlaneEndpointProvider()
    : IoTJobsDataPlaneDefaultEpProviderBase(Aws::IoTJobsDataPlane::IoTJobsDataPlaneEndpointRules::GetRulesBlob(),
                                            Aws::IoTJobsDataPlane::IoTJobsDataPlaneEndpointRules::RulesBlobSize) {}

void IoTJobsDataPlaneBuiltInParameters::SetFromClientConfiguration(const IoTJobsDataPlaneClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const IoTJobsDataPlaneClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void IoTJobsDataPlaneBuiltInParameters::SetFromClientConfiguration(const IoTJobsDataPlaneClientConfiguration& config,
                                                                   const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const IoTJobsDataPlaneClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void IoTJobsDataPlaneBuiltInParameters::SetServiceSpecificParameters(const IoTJobsDataPlaneClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace IoTJobsDataPlane
}  // namespace Aws
