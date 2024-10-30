/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GeoRoutes
{
namespace Model
{
  enum class RoadSnapHazardousCargoType
  {
    NOT_SET,
    Combustible,
    Corrosive,
    Explosive,
    Flammable,
    Gas,
    HarmfulToWater,
    Organic,
    Other,
    Poison,
    PoisonousInhalation,
    Radioactive
  };

namespace RoadSnapHazardousCargoTypeMapper
{
AWS_GEOROUTES_API RoadSnapHazardousCargoType GetRoadSnapHazardousCargoTypeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRoadSnapHazardousCargoType(RoadSnapHazardousCargoType value);
} // namespace RoadSnapHazardousCargoTypeMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
