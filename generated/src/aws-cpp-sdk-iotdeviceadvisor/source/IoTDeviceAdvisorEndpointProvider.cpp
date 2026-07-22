/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotdeviceadvisor/IoTDeviceAdvisorEndpointProvider.h>
#include <aws/iotdeviceadvisor/internal/IoTDeviceAdvisorEndpointRules.h>

namespace Aws {
namespace IoTDeviceAdvisor {
namespace Endpoint {
IoTDeviceAdvisorEndpointProvider::IoTDeviceAdvisorEndpointProvider()
    : IoTDeviceAdvisorDefaultEpProviderBase(Aws::IoTDeviceAdvisor::IoTDeviceAdvisorEndpointRules::GetRulesBlob(),
                                            Aws::IoTDeviceAdvisor::IoTDeviceAdvisorEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace IoTDeviceAdvisor
}  // namespace Aws
