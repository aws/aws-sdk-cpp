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
  enum class MapStyle
  {
    NOT_SET,
    Standard,
    Monochrome,
    Hybrid,
    Satellite
  };

namespace MapStyleMapper
{
AWS_GEOMAPS_API MapStyle GetMapStyleForName(const Aws::String& name);

AWS_GEOMAPS_API Aws::String GetNameForMapStyle(MapStyle value);
} // namespace MapStyleMapper
} // namespace Model
} // namespace GeoMaps
} // namespace Aws
