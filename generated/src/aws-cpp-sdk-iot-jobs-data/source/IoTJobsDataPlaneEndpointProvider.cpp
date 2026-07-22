/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-jobs-data/IoTJobsDataPlaneEndpointProvider.h>
#include <aws/iot-jobs-data/internal/IoTJobsDataPlaneEndpointRules.h>

namespace Aws {
namespace IoTJobsDataPlane {
namespace Endpoint {
IoTJobsDataPlaneEndpointProvider::IoTJobsDataPlaneEndpointProvider()
    : IoTJobsDataPlaneDefaultEpProviderBase(Aws::IoTJobsDataPlane::IoTJobsDataPlaneEndpointRules::GetRulesBlob(),
                                            Aws::IoTJobsDataPlane::IoTJobsDataPlaneEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace IoTJobsDataPlane
}  // namespace Aws
