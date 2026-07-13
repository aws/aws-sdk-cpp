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
enum class SuggestTravelMode { NOT_SET, Car, Scooter, Truck };

namespace SuggestTravelModeMapper {
AWS_GEOPLACES_API SuggestTravelMode GetSuggestTravelModeForName(const Aws::String& name);

AWS_GEOPLACES_API Aws::String GetNameForSuggestTravelMode(SuggestTravelMode value);
}  // namespace SuggestTravelModeMapper
}  // namespace Model
}  // namespace GeoPlaces
}  // namespace Aws
