/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-maps/GeoMapsEndpointProvider.h>
#include <aws/geo-maps/internal/GeoMapsEndpointRules.h>

namespace Aws {
namespace GeoMaps {
namespace Endpoint {
GeoMapsEndpointProvider::GeoMapsEndpointProvider()
    : GeoMapsDefaultEpProviderBase(Aws::GeoMaps::GeoMapsEndpointRules::GetRulesBlob(), Aws::GeoMaps::GeoMapsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace GeoMaps
}  // namespace Aws
