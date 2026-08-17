/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-maps/model/PoiCategory.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoMaps {
namespace Model {
namespace PoiCategoryMapper {

static const int FoodAndDrink_HASH = HashingUtils::HashString("FoodAndDrink");
static const int Entertainment_HASH = HashingUtils::HashString("Entertainment");
static const int SightsAndMuseums_HASH = HashingUtils::HashString("SightsAndMuseums");
static const int Transportation_HASH = HashingUtils::HashString("Transportation");
static const int Accommodations_HASH = HashingUtils::HashString("Accommodations");
static const int LeisureAndOutdoor_HASH = HashingUtils::HashString("LeisureAndOutdoor");
static const int Shopping_HASH = HashingUtils::HashString("Shopping");
static const int BusinessAndServices_HASH = HashingUtils::HashString("BusinessAndServices");
static const int FacilitiesAndBuildings_HASH = HashingUtils::HashString("FacilitiesAndBuildings");

PoiCategory GetPoiCategoryForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FoodAndDrink_HASH) {
    return PoiCategory::FoodAndDrink;
  } else if (hashCode == Entertainment_HASH) {
    return PoiCategory::Entertainment;
  } else if (hashCode == SightsAndMuseums_HASH) {
    return PoiCategory::SightsAndMuseums;
  } else if (hashCode == Transportation_HASH) {
    return PoiCategory::Transportation;
  } else if (hashCode == Accommodations_HASH) {
    return PoiCategory::Accommodations;
  } else if (hashCode == LeisureAndOutdoor_HASH) {
    return PoiCategory::LeisureAndOutdoor;
  } else if (hashCode == Shopping_HASH) {
    return PoiCategory::Shopping;
  } else if (hashCode == BusinessAndServices_HASH) {
    return PoiCategory::BusinessAndServices;
  } else if (hashCode == FacilitiesAndBuildings_HASH) {
    return PoiCategory::FacilitiesAndBuildings;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PoiCategory>(hashCode);
  }

  return PoiCategory::NOT_SET;
}

Aws::String GetNameForPoiCategory(PoiCategory enumValue) {
  switch (enumValue) {
    case PoiCategory::NOT_SET:
      return {};
    case PoiCategory::FoodAndDrink:
      return "FoodAndDrink";
    case PoiCategory::Entertainment:
      return "Entertainment";
    case PoiCategory::SightsAndMuseums:
      return "SightsAndMuseums";
    case PoiCategory::Transportation:
      return "Transportation";
    case PoiCategory::Accommodations:
      return "Accommodations";
    case PoiCategory::LeisureAndOutdoor:
      return "LeisureAndOutdoor";
    case PoiCategory::Shopping:
      return "Shopping";
    case PoiCategory::BusinessAndServices:
      return "BusinessAndServices";
    case PoiCategory::FacilitiesAndBuildings:
      return "FacilitiesAndBuildings";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PoiCategoryMapper
}  // namespace Model
}  // namespace GeoMaps
}  // namespace Aws
