/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/IoTFleetWiseEndpointProvider.h>
#include <aws/iotfleetwise/internal/IoTFleetWiseEndpointRules.h>

namespace Aws {
namespace IoTFleetWise {
namespace Endpoint {
IoTFleetWiseEndpointProvider::IoTFleetWiseEndpointProvider()
    : IoTFleetWiseDefaultEpProviderBase(Aws::IoTFleetWise::IoTFleetWiseEndpointRules::GetRulesBlob(),
                                        Aws::IoTFleetWise::IoTFleetWiseEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace IoTFleetWise
}  // namespace Aws
