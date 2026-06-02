/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-routes/model/RouteTransitAfterTravelStepType.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {
namespace RouteTransitAfterTravelStepTypeMapper {

static const int Deboard_HASH = HashingUtils::HashString("Deboard");

RouteTransitAfterTravelStepType GetRouteTransitAfterTravelStepTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Deboard_HASH) {
    return RouteTransitAfterTravelStepType::Deboard;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouteTransitAfterTravelStepType>(hashCode);
  }

  return RouteTransitAfterTravelStepType::NOT_SET;
}

Aws::String GetNameForRouteTransitAfterTravelStepType(RouteTransitAfterTravelStepType enumValue) {
  switch (enumValue) {
    case RouteTransitAfterTravelStepType::NOT_SET:
      return {};
    case RouteTransitAfterTravelStepType::Deboard:
      return "Deboard";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouteTransitAfterTravelStepTypeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
