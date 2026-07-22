/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-data/IoTDataPlaneEndpointProvider.h>
#include <aws/iot-data/internal/IoTDataPlaneEndpointRules.h>

namespace Aws {
namespace IoTDataPlane {
namespace Endpoint {
IoTDataPlaneEndpointProvider::IoTDataPlaneEndpointProvider()
    : IoTDataPlaneDefaultEpProviderBase(Aws::IoTDataPlane::IoTDataPlaneEndpointRules::GetRulesBlob(),
                                        Aws::IoTDataPlane::IoTDataPlaneEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace IoTDataPlane
}  // namespace Aws
