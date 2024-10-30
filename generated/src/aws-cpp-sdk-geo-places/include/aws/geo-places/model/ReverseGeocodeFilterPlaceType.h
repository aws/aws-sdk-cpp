/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GeoPlaces
{
namespace Model
{
  enum class ReverseGeocodeFilterPlaceType
  {
    NOT_SET,
    Locality,
    Intersection,
    Street,
    PointAddress,
    InterpolatedAddress
  };

namespace ReverseGeocodeFilterPlaceTypeMapper
{
AWS_GEOPLACES_API ReverseGeocodeFilterPlaceType GetReverseGeocodeFilterPlaceTypeForName(const Aws::String& name);

AWS_GEOPLACES_API Aws::String GetNameForReverseGeocodeFilterPlaceType(ReverseGeocodeFilterPlaceType value);
} // namespace ReverseGeocodeFilterPlaceTypeMapper
} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
