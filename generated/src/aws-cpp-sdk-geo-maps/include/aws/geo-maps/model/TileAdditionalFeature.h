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
  enum class TileAdditionalFeature
  {
    NOT_SET,
    ContourLines,
    Hillshade,
    Logistics,
    Transit
  };

namespace TileAdditionalFeatureMapper
{
AWS_GEOMAPS_API TileAdditionalFeature GetTileAdditionalFeatureForName(const Aws::String& name);

AWS_GEOMAPS_API Aws::String GetNameForTileAdditionalFeature(TileAdditionalFeature value);
} // namespace TileAdditionalFeatureMapper
} // namespace Model
} // namespace GeoMaps
} // namespace Aws
