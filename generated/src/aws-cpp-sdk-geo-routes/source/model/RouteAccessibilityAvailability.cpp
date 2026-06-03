/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-routes/model/RouteAccessibilityAvailability.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {
namespace RouteAccessibilityAvailabilityMapper {

static const int Available_HASH = HashingUtils::HashString("Available");
static const int Limited_HASH = HashingUtils::HashString("Limited");
static const int Unavailable_HASH = HashingUtils::HashString("Unavailable");
static const int Unknown_HASH = HashingUtils::HashString("Unknown");

RouteAccessibilityAvailability GetRouteAccessibilityAvailabilityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Available_HASH) {
    return RouteAccessibilityAvailability::Available;
  } else if (hashCode == Limited_HASH) {
    return RouteAccessibilityAvailability::Limited;
  } else if (hashCode == Unavailable_HASH) {
    return RouteAccessibilityAvailability::Unavailable;
  } else if (hashCode == Unknown_HASH) {
    return RouteAccessibilityAvailability::Unknown;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouteAccessibilityAvailability>(hashCode);
  }

  return RouteAccessibilityAvailability::NOT_SET;
}

Aws::String GetNameForRouteAccessibilityAvailability(RouteAccessibilityAvailability enumValue) {
  switch (enumValue) {
    case RouteAccessibilityAvailability::NOT_SET:
      return {};
    case RouteAccessibilityAvailability::Available:
      return "Available";
    case RouteAccessibilityAvailability::Limited:
      return "Limited";
    case RouteAccessibilityAvailability::Unavailable:
      return "Unavailable";
    case RouteAccessibilityAvailability::Unknown:
      return "Unknown";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouteAccessibilityAvailabilityMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
