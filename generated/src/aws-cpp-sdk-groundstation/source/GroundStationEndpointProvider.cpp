/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/GroundStationEndpointProvider.h>
#include <aws/groundstation/internal/GroundStationEndpointRules.h>

namespace Aws {
namespace GroundStation {
namespace Endpoint {
GroundStationEndpointProvider::GroundStationEndpointProvider()
    : GroundStationDefaultEpProviderBase(Aws::GroundStation::GroundStationEndpointRules::GetRulesBlob(),
                                         Aws::GroundStation::GroundStationEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace GroundStation
}  // namespace Aws
