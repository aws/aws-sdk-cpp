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
  enum class PlaceType
  {
    NOT_SET,
    Country,
    Region,
    SubRegion,
    Locality,
    District,
    SubDistrict,
    PostalCode,
    Block,
    SubBlock,
    Intersection,
    Street,
    PointOfInterest,
    PointAddress,
    InterpolatedAddress,
    SecondaryAddress
  };

namespace PlaceTypeMapper
{
AWS_GEOPLACES_API PlaceType GetPlaceTypeForName(const Aws::String& name);

AWS_GEOPLACES_API Aws::String GetNameForPlaceType(PlaceType value);
} // namespace PlaceTypeMapper
} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
