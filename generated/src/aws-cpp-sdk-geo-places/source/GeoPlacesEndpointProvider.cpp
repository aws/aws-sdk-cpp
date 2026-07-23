/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/GeoPlacesEndpointProvider.h>
#include <aws/geo-places/internal/GeoPlacesEndpointRules.h>

namespace Aws {
namespace GeoPlaces {
namespace Endpoint {
GeoPlacesEndpointProvider::GeoPlacesEndpointProvider()
    : GeoPlacesDefaultEpProviderBase(Aws::GeoPlaces::GeoPlacesEndpointRules::GetRulesBlob(),
                                     Aws::GeoPlaces::GeoPlacesEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace GeoPlaces
}  // namespace Aws
