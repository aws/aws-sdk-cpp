/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-routes/model/RouteTransitTripStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {
namespace RouteTransitTripStatusMapper {

static const int Added_HASH = HashingUtils::HashString("Added");
static const int Cancelled_HASH = HashingUtils::HashString("Cancelled");
static const int Replaced_HASH = HashingUtils::HashString("Replaced");
static const int Scheduled_HASH = HashingUtils::HashString("Scheduled");

RouteTransitTripStatus GetRouteTransitTripStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Added_HASH) {
    return RouteTransitTripStatus::Added;
  } else if (hashCode == Cancelled_HASH) {
    return RouteTransitTripStatus::Cancelled;
  } else if (hashCode == Replaced_HASH) {
    return RouteTransitTripStatus::Replaced;
  } else if (hashCode == Scheduled_HASH) {
    return RouteTransitTripStatus::Scheduled;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouteTransitTripStatus>(hashCode);
  }

  return RouteTransitTripStatus::NOT_SET;
}

Aws::String GetNameForRouteTransitTripStatus(RouteTransitTripStatus enumValue) {
  switch (enumValue) {
    case RouteTransitTripStatus::NOT_SET:
      return {};
    case RouteTransitTripStatus::Added:
      return "Added";
    case RouteTransitTripStatus::Cancelled:
      return "Cancelled";
    case RouteTransitTripStatus::Replaced:
      return "Replaced";
    case RouteTransitTripStatus::Scheduled:
      return "Scheduled";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouteTransitTripStatusMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
