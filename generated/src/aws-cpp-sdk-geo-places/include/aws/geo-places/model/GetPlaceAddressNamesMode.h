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
enum class GetPlaceAddressNamesMode { NOT_SET, Administrative };

namespace GetPlaceAddressNamesModeMapper {
AWS_GEOPLACES_API GetPlaceAddressNamesMode GetGetPlaceAddressNamesModeForName(const Aws::String& name);

AWS_GEOPLACES_API Aws::String GetNameForGetPlaceAddressNamesMode(GetPlaceAddressNamesMode value);
}  // namespace GetPlaceAddressNamesModeMapper
}  // namespace Model
}  // namespace GeoPlaces
}  // namespace Aws
