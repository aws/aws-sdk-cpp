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
enum class PlaceAttribute { NOT_SET, DriveThrough };

namespace PlaceAttributeMapper {
AWS_GEOPLACES_API PlaceAttribute GetPlaceAttributeForName(const Aws::String& name);

AWS_GEOPLACES_API Aws::String GetNameForPlaceAttribute(PlaceAttribute value);
}  // namespace PlaceAttributeMapper
}  // namespace Model
}  // namespace GeoPlaces
}  // namespace Aws
