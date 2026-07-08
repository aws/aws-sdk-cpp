/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-places/model/GeocodeFilterPlaceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoPlaces {
namespace Model {
namespace GeocodeFilterPlaceTypeMapper {

static const int Locality_HASH = HashingUtils::HashString("Locality");
static const int PostalCode_HASH = HashingUtils::HashString("PostalCode");
static const int Intersection_HASH = HashingUtils::HashString("Intersection");
static const int Street_HASH = HashingUtils::HashString("Street");
static const int PointAddress_HASH = HashingUtils::HashString("PointAddress");
static const int InterpolatedAddress_HASH = HashingUtils::HashString("InterpolatedAddress");
static const int SecondaryAddress_HASH = HashingUtils::HashString("SecondaryAddress");
static const int PointOfInterest_HASH = HashingUtils::HashString("PointOfInterest");
static const int Country_HASH = HashingUtils::HashString("Country");
static const int Region_HASH = HashingUtils::HashString("Region");

GeocodeFilterPlaceType GetGeocodeFilterPlaceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Locality_HASH) {
    return GeocodeFilterPlaceType::Locality;
  } else if (hashCode == PostalCode_HASH) {
    return GeocodeFilterPlaceType::PostalCode;
  } else if (hashCode == Intersection_HASH) {
    return GeocodeFilterPlaceType::Intersection;
  } else if (hashCode == Street_HASH) {
    return GeocodeFilterPlaceType::Street;
  } else if (hashCode == PointAddress_HASH) {
    return GeocodeFilterPlaceType::PointAddress;
  } else if (hashCode == InterpolatedAddress_HASH) {
    return GeocodeFilterPlaceType::InterpolatedAddress;
  } else if (hashCode == SecondaryAddress_HASH) {
    return GeocodeFilterPlaceType::SecondaryAddress;
  } else if (hashCode == PointOfInterest_HASH) {
    return GeocodeFilterPlaceType::PointOfInterest;
  } else if (hashCode == Country_HASH) {
    return GeocodeFilterPlaceType::Country;
  } else if (hashCode == Region_HASH) {
    return GeocodeFilterPlaceType::Region;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GeocodeFilterPlaceType>(hashCode);
  }

  return GeocodeFilterPlaceType::NOT_SET;
}

Aws::String GetNameForGeocodeFilterPlaceType(GeocodeFilterPlaceType enumValue) {
  switch (enumValue) {
    case GeocodeFilterPlaceType::NOT_SET:
      return {};
    case GeocodeFilterPlaceType::Locality:
      return "Locality";
    case GeocodeFilterPlaceType::PostalCode:
      return "PostalCode";
    case GeocodeFilterPlaceType::Intersection:
      return "Intersection";
    case GeocodeFilterPlaceType::Street:
      return "Street";
    case GeocodeFilterPlaceType::PointAddress:
      return "PointAddress";
    case GeocodeFilterPlaceType::InterpolatedAddress:
      return "InterpolatedAddress";
    case GeocodeFilterPlaceType::SecondaryAddress:
      return "SecondaryAddress";
    case GeocodeFilterPlaceType::PointOfInterest:
      return "PointOfInterest";
    case GeocodeFilterPlaceType::Country:
      return "Country";
    case GeocodeFilterPlaceType::Region:
      return "Region";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GeocodeFilterPlaceTypeMapper
}  // namespace Model
}  // namespace GeoPlaces
}  // namespace Aws
