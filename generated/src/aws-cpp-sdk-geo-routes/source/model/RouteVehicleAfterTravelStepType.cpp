/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-routes/model/RouteVehicleAfterTravelStepType.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {
namespace RouteVehicleAfterTravelStepTypeMapper {

static const int Park_HASH = HashingUtils::HashString("Park");

RouteVehicleAfterTravelStepType GetRouteVehicleAfterTravelStepTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Park_HASH) {
    return RouteVehicleAfterTravelStepType::Park;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouteVehicleAfterTravelStepType>(hashCode);
  }

  return RouteVehicleAfterTravelStepType::NOT_SET;
}

Aws::String GetNameForRouteVehicleAfterTravelStepType(RouteVehicleAfterTravelStepType enumValue) {
  switch (enumValue) {
    case RouteVehicleAfterTravelStepType::NOT_SET:
      return {};
    case RouteVehicleAfterTravelStepType::Park:
      return "Park";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouteVehicleAfterTravelStepTypeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
