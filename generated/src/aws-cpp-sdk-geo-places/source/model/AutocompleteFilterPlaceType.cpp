/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-places/model/AutocompleteFilterPlaceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoPlaces {
namespace Model {
namespace AutocompleteFilterPlaceTypeMapper {

static const int Locality_HASH = HashingUtils::HashString("Locality");
static const int PostalCode_HASH = HashingUtils::HashString("PostalCode");
static const int Street_HASH = HashingUtils::HashString("Street");
static const int Intersection_HASH = HashingUtils::HashString("Intersection");
static const int PointAddress_HASH = HashingUtils::HashString("PointAddress");
static const int InterpolatedAddress_HASH = HashingUtils::HashString("InterpolatedAddress");
static const int Country_HASH = HashingUtils::HashString("Country");
static const int Region_HASH = HashingUtils::HashString("Region");

AutocompleteFilterPlaceType GetAutocompleteFilterPlaceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Locality_HASH) {
    return AutocompleteFilterPlaceType::Locality;
  } else if (hashCode == PostalCode_HASH) {
    return AutocompleteFilterPlaceType::PostalCode;
  } else if (hashCode == Street_HASH) {
    return AutocompleteFilterPlaceType::Street;
  } else if (hashCode == Intersection_HASH) {
    return AutocompleteFilterPlaceType::Intersection;
  } else if (hashCode == PointAddress_HASH) {
    return AutocompleteFilterPlaceType::PointAddress;
  } else if (hashCode == InterpolatedAddress_HASH) {
    return AutocompleteFilterPlaceType::InterpolatedAddress;
  } else if (hashCode == Country_HASH) {
    return AutocompleteFilterPlaceType::Country;
  } else if (hashCode == Region_HASH) {
    return AutocompleteFilterPlaceType::Region;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AutocompleteFilterPlaceType>(hashCode);
  }

  return AutocompleteFilterPlaceType::NOT_SET;
}

Aws::String GetNameForAutocompleteFilterPlaceType(AutocompleteFilterPlaceType enumValue) {
  switch (enumValue) {
    case AutocompleteFilterPlaceType::NOT_SET:
      return {};
    case AutocompleteFilterPlaceType::Locality:
      return "Locality";
    case AutocompleteFilterPlaceType::PostalCode:
      return "PostalCode";
    case AutocompleteFilterPlaceType::Street:
      return "Street";
    case AutocompleteFilterPlaceType::Intersection:
      return "Intersection";
    case AutocompleteFilterPlaceType::PointAddress:
      return "PointAddress";
    case AutocompleteFilterPlaceType::InterpolatedAddress:
      return "InterpolatedAddress";
    case AutocompleteFilterPlaceType::Country:
      return "Country";
    case AutocompleteFilterPlaceType::Region:
      return "Region";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AutocompleteFilterPlaceTypeMapper
}  // namespace Model
}  // namespace GeoPlaces
}  // namespace Aws
