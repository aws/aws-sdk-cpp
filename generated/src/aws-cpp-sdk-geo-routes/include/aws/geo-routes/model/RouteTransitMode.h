/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>

namespace Aws {
namespace GeoRoutes {
namespace Model {
enum class RouteTransitMode {
  NOT_SET,
  AerialTramway,
  Airplane,
  All,
  Bus,
  BusRapidTransit,
  CityTrain,
  Ferry,
  FunicularRailway,
  HighSpeedTrain,
  IntercityTrain,
  InterregionalTrain,
  LightRail,
  Monorail,
  PrivateBus,
  RegionalTrain,
  Subway
};

namespace RouteTransitModeMapper {
AWS_GEOROUTES_API RouteTransitMode GetRouteTransitModeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteTransitMode(RouteTransitMode value);
}  // namespace RouteTransitModeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
