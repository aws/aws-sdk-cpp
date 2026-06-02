/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-routes/model/RouteVehicleMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {
namespace RouteVehicleModeMapper {

static const int All_HASH = HashingUtils::HashString("All");
static const int Car_HASH = HashingUtils::HashString("Car");

RouteVehicleMode GetRouteVehicleModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == All_HASH) {
    return RouteVehicleMode::All;
  } else if (hashCode == Car_HASH) {
    return RouteVehicleMode::Car;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouteVehicleMode>(hashCode);
  }

  return RouteVehicleMode::NOT_SET;
}

Aws::String GetNameForRouteVehicleMode(RouteVehicleMode enumValue) {
  switch (enumValue) {
    case RouteVehicleMode::NOT_SET:
      return {};
    case RouteVehicleMode::All:
      return "All";
    case RouteVehicleMode::Car:
      return "Car";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouteVehicleModeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
