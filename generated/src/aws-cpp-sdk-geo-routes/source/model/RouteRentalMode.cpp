/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-routes/model/RouteRentalMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {
namespace RouteRentalModeMapper {

static const int All_HASH = HashingUtils::HashString("All");
static const int Car_HASH = HashingUtils::HashString("Car");

RouteRentalMode GetRouteRentalModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == All_HASH) {
    return RouteRentalMode::All;
  } else if (hashCode == Car_HASH) {
    return RouteRentalMode::Car;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouteRentalMode>(hashCode);
  }

  return RouteRentalMode::NOT_SET;
}

Aws::String GetNameForRouteRentalMode(RouteRentalMode enumValue) {
  switch (enumValue) {
    case RouteRentalMode::NOT_SET:
      return {};
    case RouteRentalMode::All:
      return "All";
    case RouteRentalMode::Car:
      return "Car";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouteRentalModeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
