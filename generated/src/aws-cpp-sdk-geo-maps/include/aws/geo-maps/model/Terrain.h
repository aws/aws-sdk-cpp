/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-maps/GeoMaps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GeoMaps
{
namespace Model
{
  enum class Terrain
  {
    NOT_SET,
    Hillshade
  };

namespace TerrainMapper
{
AWS_GEOMAPS_API Terrain GetTerrainForName(const Aws::String& name);

AWS_GEOMAPS_API Aws::String GetNameForTerrain(Terrain value);
} // namespace TerrainMapper
} // namespace Model
} // namespace GeoMaps
} // namespace Aws
