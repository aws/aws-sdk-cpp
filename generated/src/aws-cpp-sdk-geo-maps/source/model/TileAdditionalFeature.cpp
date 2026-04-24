/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-maps/model/TileAdditionalFeature.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoMaps {
namespace Model {
namespace TileAdditionalFeatureMapper {

static const int ContourLines_HASH = HashingUtils::HashString("ContourLines");
static const int Hillshade_HASH = HashingUtils::HashString("Hillshade");
static const int Logistics_HASH = HashingUtils::HashString("Logistics");
static const int Transit_HASH = HashingUtils::HashString("Transit");

TileAdditionalFeature GetTileAdditionalFeatureForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ContourLines_HASH) {
    return TileAdditionalFeature::ContourLines;
  } else if (hashCode == Hillshade_HASH) {
    return TileAdditionalFeature::Hillshade;
  } else if (hashCode == Logistics_HASH) {
    return TileAdditionalFeature::Logistics;
  } else if (hashCode == Transit_HASH) {
    return TileAdditionalFeature::Transit;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TileAdditionalFeature>(hashCode);
  }

  return TileAdditionalFeature::NOT_SET;
}

Aws::String GetNameForTileAdditionalFeature(TileAdditionalFeature enumValue) {
  switch (enumValue) {
    case TileAdditionalFeature::NOT_SET:
      return {};
    case TileAdditionalFeature::ContourLines:
      return "ContourLines";
    case TileAdditionalFeature::Hillshade:
      return "Hillshade";
    case TileAdditionalFeature::Logistics:
      return "Logistics";
    case TileAdditionalFeature::Transit:
      return "Transit";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TileAdditionalFeatureMapper
}  // namespace Model
}  // namespace GeoMaps
}  // namespace Aws
