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
  enum class RouteLegTravelMode
  {
    NOT_SET,
    Car,
    Ferry,
    Pedestrian,
    Scooter,
    Truck,
    CarShuttleTrain
  };

namespace RouteLegTravelModeMapper
{
AWS_GEOROUTES_API RouteLegTravelMode GetRouteLegTravelModeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteLegTravelMode(RouteLegTravelMode value);
} // namespace RouteLegTravelModeMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
