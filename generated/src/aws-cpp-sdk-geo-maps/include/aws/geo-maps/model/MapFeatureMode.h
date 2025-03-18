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
  enum class MapFeatureMode
  {
    NOT_SET,
    Enabled,
    Disabled
  };

namespace MapFeatureModeMapper
{
AWS_GEOMAPS_API MapFeatureMode GetMapFeatureModeForName(const Aws::String& name);

AWS_GEOMAPS_API Aws::String GetNameForMapFeatureMode(MapFeatureMode value);
} // namespace MapFeatureModeMapper
} // namespace Model
} // namespace GeoMaps
} // namespace Aws
