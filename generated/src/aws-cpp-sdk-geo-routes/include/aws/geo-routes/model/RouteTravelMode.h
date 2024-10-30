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
  enum class RouteTravelMode
  {
    NOT_SET,
    Car,
    Pedestrian,
    Scooter,
    Truck
  };

namespace RouteTravelModeMapper
{
AWS_GEOROUTES_API RouteTravelMode GetRouteTravelModeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteTravelMode(RouteTravelMode value);
} // namespace RouteTravelModeMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
