/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-routes/model/RouteTransitTravelStepType.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {
namespace RouteTransitTravelStepTypeMapper {

static const int Depart_HASH = HashingUtils::HashString("Depart");

RouteTransitTravelStepType GetRouteTransitTravelStepTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Depart_HASH) {
    return RouteTransitTravelStepType::Depart;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouteTransitTravelStepType>(hashCode);
  }

  return RouteTransitTravelStepType::NOT_SET;
}

Aws::String GetNameForRouteTransitTravelStepType(RouteTransitTravelStepType enumValue) {
  switch (enumValue) {
    case RouteTransitTravelStepType::NOT_SET:
      return {};
    case RouteTransitTravelStepType::Depart:
      return "Depart";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouteTransitTravelStepTypeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
