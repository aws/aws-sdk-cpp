/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-routes/model/RouteTransitBeforeTravelStepType.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {
namespace RouteTransitBeforeTravelStepTypeMapper {

static const int Board_HASH = HashingUtils::HashString("Board");

RouteTransitBeforeTravelStepType GetRouteTransitBeforeTravelStepTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Board_HASH) {
    return RouteTransitBeforeTravelStepType::Board;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouteTransitBeforeTravelStepType>(hashCode);
  }

  return RouteTransitBeforeTravelStepType::NOT_SET;
}

Aws::String GetNameForRouteTransitBeforeTravelStepType(RouteTransitBeforeTravelStepType enumValue) {
  switch (enumValue) {
    case RouteTransitBeforeTravelStepType::NOT_SET:
      return {};
    case RouteTransitBeforeTravelStepType::Board:
      return "Board";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouteTransitBeforeTravelStepTypeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
