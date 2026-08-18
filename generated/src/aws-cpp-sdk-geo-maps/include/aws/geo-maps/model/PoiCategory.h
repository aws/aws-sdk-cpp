/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-maps/GeoMaps_EXPORTS.h>

namespace Aws {
namespace GeoMaps {
namespace Model {
enum class PoiCategory {
  NOT_SET,
  FoodAndDrink,
  Entertainment,
  SightsAndMuseums,
  Transportation,
  Accommodations,
  LeisureAndOutdoor,
  Shopping,
  BusinessAndServices,
  FacilitiesAndBuildings
};

namespace PoiCategoryMapper {
AWS_GEOMAPS_API PoiCategory GetPoiCategoryForName(const Aws::String& name);

AWS_GEOMAPS_API Aws::String GetNameForPoiCategory(PoiCategory value);
}  // namespace PoiCategoryMapper
}  // namespace Model
}  // namespace GeoMaps
}  // namespace Aws
