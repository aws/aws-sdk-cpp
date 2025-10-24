/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-maps/model/Terrain.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoMaps {
namespace Model {
namespace TerrainMapper {

static const int Hillshade_HASH = HashingUtils::HashString("Hillshade");

Terrain GetTerrainForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Hillshade_HASH) {
    return Terrain::Hillshade;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Terrain>(hashCode);
  }

  return Terrain::NOT_SET;
}

Aws::String GetNameForTerrain(Terrain enumValue) {
  switch (enumValue) {
    case Terrain::NOT_SET:
      return {};
    case Terrain::Hillshade:
      return "Hillshade";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TerrainMapper
}  // namespace Model
}  // namespace GeoMaps
}  // namespace Aws
