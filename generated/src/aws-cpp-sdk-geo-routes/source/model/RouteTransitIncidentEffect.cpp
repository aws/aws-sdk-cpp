/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-routes/model/RouteTransitIncidentEffect.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {
namespace RouteTransitIncidentEffectMapper {

static const int Delayed_HASH = HashingUtils::HashString("Delayed");
static const int Detoured_HASH = HashingUtils::HashString("Detoured");
static const int Other_HASH = HashingUtils::HashString("Other");
static const int ServiceAdded_HASH = HashingUtils::HashString("ServiceAdded");
static const int ServiceCancelled_HASH = HashingUtils::HashString("ServiceCancelled");
static const int ServiceModified_HASH = HashingUtils::HashString("ServiceModified");
static const int ServiceReduced_HASH = HashingUtils::HashString("ServiceReduced");
static const int StopMoved_HASH = HashingUtils::HashString("StopMoved");

RouteTransitIncidentEffect GetRouteTransitIncidentEffectForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Delayed_HASH) {
    return RouteTransitIncidentEffect::Delayed;
  } else if (hashCode == Detoured_HASH) {
    return RouteTransitIncidentEffect::Detoured;
  } else if (hashCode == Other_HASH) {
    return RouteTransitIncidentEffect::Other;
  } else if (hashCode == ServiceAdded_HASH) {
    return RouteTransitIncidentEffect::ServiceAdded;
  } else if (hashCode == ServiceCancelled_HASH) {
    return RouteTransitIncidentEffect::ServiceCancelled;
  } else if (hashCode == ServiceModified_HASH) {
    return RouteTransitIncidentEffect::ServiceModified;
  } else if (hashCode == ServiceReduced_HASH) {
    return RouteTransitIncidentEffect::ServiceReduced;
  } else if (hashCode == StopMoved_HASH) {
    return RouteTransitIncidentEffect::StopMoved;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouteTransitIncidentEffect>(hashCode);
  }

  return RouteTransitIncidentEffect::NOT_SET;
}

Aws::String GetNameForRouteTransitIncidentEffect(RouteTransitIncidentEffect enumValue) {
  switch (enumValue) {
    case RouteTransitIncidentEffect::NOT_SET:
      return {};
    case RouteTransitIncidentEffect::Delayed:
      return "Delayed";
    case RouteTransitIncidentEffect::Detoured:
      return "Detoured";
    case RouteTransitIncidentEffect::Other:
      return "Other";
    case RouteTransitIncidentEffect::ServiceAdded:
      return "ServiceAdded";
    case RouteTransitIncidentEffect::ServiceCancelled:
      return "ServiceCancelled";
    case RouteTransitIncidentEffect::ServiceModified:
      return "ServiceModified";
    case RouteTransitIncidentEffect::ServiceReduced:
      return "ServiceReduced";
    case RouteTransitIncidentEffect::StopMoved:
      return "StopMoved";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouteTransitIncidentEffectMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
