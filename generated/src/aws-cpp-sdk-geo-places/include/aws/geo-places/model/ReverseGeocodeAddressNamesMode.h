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
enum class ReverseGeocodeAddressNamesMode { NOT_SET, Administrative };

namespace ReverseGeocodeAddressNamesModeMapper {
AWS_GEOPLACES_API ReverseGeocodeAddressNamesMode GetReverseGeocodeAddressNamesModeForName(const Aws::String& name);

AWS_GEOPLACES_API Aws::String GetNameForReverseGeocodeAddressNamesMode(ReverseGeocodeAddressNamesMode value);
}  // namespace ReverseGeocodeAddressNamesModeMapper
}  // namespace Model
}  // namespace GeoPlaces
}  // namespace Aws
