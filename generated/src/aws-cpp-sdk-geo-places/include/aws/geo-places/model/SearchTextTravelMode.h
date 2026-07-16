/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-places/GeoPlaces_EXPORTS.h>

namespace Aws {
namespace GeoPlaces {
namespace Model {
enum class SearchTextTravelMode { NOT_SET, Car, Scooter, Truck };

namespace SearchTextTravelModeMapper {
AWS_GEOPLACES_API SearchTextTravelMode GetSearchTextTravelModeForName(const Aws::String& name);

AWS_GEOPLACES_API Aws::String GetNameForSearchTextTravelMode(SearchTextTravelMode value);
}  // namespace SearchTextTravelModeMapper
}  // namespace Model
}  // namespace GeoPlaces
}  // namespace Aws
