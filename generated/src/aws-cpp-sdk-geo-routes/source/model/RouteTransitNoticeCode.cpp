/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-routes/model/RouteTransitNoticeCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {
namespace RouteTransitNoticeCodeMapper {

static const int AccuratePolylineUnavailable_HASH = HashingUtils::HashString("AccuratePolylineUnavailable");
static const int IntermediateStopsUnavailable_HASH = HashingUtils::HashString("IntermediateStopsUnavailable");
static const int NoSchedule_HASH = HashingUtils::HashString("NoSchedule");
static const int Other_HASH = HashingUtils::HashString("Other");
static const int PotentialViolatedVehicleRestrictionUsage_HASH = HashingUtils::HashString("PotentialViolatedVehicleRestrictionUsage");
static const int ScheduledTimes_HASH = HashingUtils::HashString("ScheduledTimes");
static const int SeasonalClosure_HASH = HashingUtils::HashString("SeasonalClosure");
static const int ViolatedAvoidFerry_HASH = HashingUtils::HashString("ViolatedAvoidFerry");
static const int ViolatedAvoidRailFerry_HASH = HashingUtils::HashString("ViolatedAvoidRailFerry");
static const int ViolatedExcludedTransitMode_HASH = HashingUtils::HashString("ViolatedExcludedTransitMode");
static const int ViolatedVehicleRestriction_HASH = HashingUtils::HashString("ViolatedVehicleRestriction");
static const int ViolatedAvoidAreas_HASH = HashingUtils::HashString("ViolatedAvoidAreas");

RouteTransitNoticeCode GetRouteTransitNoticeCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AccuratePolylineUnavailable_HASH) {
    return RouteTransitNoticeCode::AccuratePolylineUnavailable;
  } else if (hashCode == IntermediateStopsUnavailable_HASH) {
    return RouteTransitNoticeCode::IntermediateStopsUnavailable;
  } else if (hashCode == NoSchedule_HASH) {
    return RouteTransitNoticeCode::NoSchedule;
  } else if (hashCode == Other_HASH) {
    return RouteTransitNoticeCode::Other;
  } else if (hashCode == PotentialViolatedVehicleRestrictionUsage_HASH) {
    return RouteTransitNoticeCode::PotentialViolatedVehicleRestrictionUsage;
  } else if (hashCode == ScheduledTimes_HASH) {
    return RouteTransitNoticeCode::ScheduledTimes;
  } else if (hashCode == SeasonalClosure_HASH) {
    return RouteTransitNoticeCode::SeasonalClosure;
  } else if (hashCode == ViolatedAvoidFerry_HASH) {
    return RouteTransitNoticeCode::ViolatedAvoidFerry;
  } else if (hashCode == ViolatedAvoidRailFerry_HASH) {
    return RouteTransitNoticeCode::ViolatedAvoidRailFerry;
  } else if (hashCode == ViolatedExcludedTransitMode_HASH) {
    return RouteTransitNoticeCode::ViolatedExcludedTransitMode;
  } else if (hashCode == ViolatedVehicleRestriction_HASH) {
    return RouteTransitNoticeCode::ViolatedVehicleRestriction;
  } else if (hashCode == ViolatedAvoidAreas_HASH) {
    return RouteTransitNoticeCode::ViolatedAvoidAreas;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouteTransitNoticeCode>(hashCode);
  }

  return RouteTransitNoticeCode::NOT_SET;
}

Aws::String GetNameForRouteTransitNoticeCode(RouteTransitNoticeCode enumValue) {
  switch (enumValue) {
    case RouteTransitNoticeCode::NOT_SET:
      return {};
    case RouteTransitNoticeCode::AccuratePolylineUnavailable:
      return "AccuratePolylineUnavailable";
    case RouteTransitNoticeCode::IntermediateStopsUnavailable:
      return "IntermediateStopsUnavailable";
    case RouteTransitNoticeCode::NoSchedule:
      return "NoSchedule";
    case RouteTransitNoticeCode::Other:
      return "Other";
    case RouteTransitNoticeCode::PotentialViolatedVehicleRestrictionUsage:
      return "PotentialViolatedVehicleRestrictionUsage";
    case RouteTransitNoticeCode::ScheduledTimes:
      return "ScheduledTimes";
    case RouteTransitNoticeCode::SeasonalClosure:
      return "SeasonalClosure";
    case RouteTransitNoticeCode::ViolatedAvoidFerry:
      return "ViolatedAvoidFerry";
    case RouteTransitNoticeCode::ViolatedAvoidRailFerry:
      return "ViolatedAvoidRailFerry";
    case RouteTransitNoticeCode::ViolatedExcludedTransitMode:
      return "ViolatedExcludedTransitMode";
    case RouteTransitNoticeCode::ViolatedVehicleRestriction:
      return "ViolatedVehicleRestriction";
    case RouteTransitNoticeCode::ViolatedAvoidAreas:
      return "ViolatedAvoidAreas";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouteTransitNoticeCodeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
