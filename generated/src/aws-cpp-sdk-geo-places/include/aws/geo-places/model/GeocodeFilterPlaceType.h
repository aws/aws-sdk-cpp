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
  enum class GeocodeFilterPlaceType
  {
    NOT_SET,
    Locality,
    PostalCode,
    Intersection,
    Street,
    PointAddress,
    InterpolatedAddress
  };

namespace GeocodeFilterPlaceTypeMapper
{
AWS_GEOPLACES_API GeocodeFilterPlaceType GetGeocodeFilterPlaceTypeForName(const Aws::String& name);

AWS_GEOPLACES_API Aws::String GetNameForGeocodeFilterPlaceType(GeocodeFilterPlaceType value);
} // namespace GeocodeFilterPlaceTypeMapper
} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
