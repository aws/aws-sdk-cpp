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
  enum class RoadSnapTravelMode
  {
    NOT_SET,
    Car,
    Pedestrian,
    Scooter,
    Truck
  };

namespace RoadSnapTravelModeMapper
{
AWS_GEOROUTES_API RoadSnapTravelMode GetRoadSnapTravelModeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRoadSnapTravelMode(RoadSnapTravelMode value);
} // namespace RoadSnapTravelModeMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
