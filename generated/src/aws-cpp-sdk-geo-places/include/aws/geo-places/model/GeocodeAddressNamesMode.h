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
enum class GeocodeAddressNamesMode { NOT_SET, Matched, Administrative };

namespace GeocodeAddressNamesModeMapper {
AWS_GEOPLACES_API GeocodeAddressNamesMode GetGeocodeAddressNamesModeForName(const Aws::String& name);

AWS_GEOPLACES_API Aws::String GetNameForGeocodeAddressNamesMode(GeocodeAddressNamesMode value);
}  // namespace GeocodeAddressNamesModeMapper
}  // namespace Model
}  // namespace GeoPlaces
}  // namespace Aws
