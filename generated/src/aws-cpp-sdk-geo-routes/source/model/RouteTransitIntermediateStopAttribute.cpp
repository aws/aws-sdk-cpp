/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-routes/model/RouteTransitIntermediateStopAttribute.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {
namespace RouteTransitIntermediateStopAttributeMapper {

static const int NoEntry_HASH = HashingUtils::HashString("NoEntry");
static const int NoExit_HASH = HashingUtils::HashString("NoExit");

RouteTransitIntermediateStopAttribute GetRouteTransitIntermediateStopAttributeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NoEntry_HASH) {
    return RouteTransitIntermediateStopAttribute::NoEntry;
  } else if (hashCode == NoExit_HASH) {
    return RouteTransitIntermediateStopAttribute::NoExit;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouteTransitIntermediateStopAttribute>(hashCode);
  }

  return RouteTransitIntermediateStopAttribute::NOT_SET;
}

Aws::String GetNameForRouteTransitIntermediateStopAttribute(RouteTransitIntermediateStopAttribute enumValue) {
  switch (enumValue) {
    case RouteTransitIntermediateStopAttribute::NOT_SET:
      return {};
    case RouteTransitIntermediateStopAttribute::NoEntry:
      return "NoEntry";
    case RouteTransitIntermediateStopAttribute::NoExit:
      return "NoExit";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouteTransitIntermediateStopAttributeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
