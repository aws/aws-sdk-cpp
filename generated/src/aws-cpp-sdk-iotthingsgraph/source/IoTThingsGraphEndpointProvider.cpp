/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotthingsgraph/IoTThingsGraphEndpointProvider.h>
#include <aws/iotthingsgraph/internal/IoTThingsGraphEndpointRules.h>

namespace Aws {
namespace IoTThingsGraph {
namespace Endpoint {
IoTThingsGraphEndpointProvider::IoTThingsGraphEndpointProvider()
    : IoTThingsGraphDefaultEpProviderBase(Aws::IoTThingsGraph::IoTThingsGraphEndpointRules::GetRulesBlob(),
                                          Aws::IoTThingsGraph::IoTThingsGraphEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace IoTThingsGraph
}  // namespace Aws
