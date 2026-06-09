/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-routes/model/RouteRentalTravelStepType.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {
namespace RouteRentalTravelStepTypeMapper {

static const int Arrive_HASH = HashingUtils::HashString("Arrive");
static const int Continue_HASH = HashingUtils::HashString("Continue");
static const int Depart_HASH = HashingUtils::HashString("Depart");
static const int Exit_HASH = HashingUtils::HashString("Exit");
static const int Keep_HASH = HashingUtils::HashString("Keep");
static const int Ramp_HASH = HashingUtils::HashString("Ramp");
static const int RoundaboutEnter_HASH = HashingUtils::HashString("RoundaboutEnter");
static const int RoundaboutExit_HASH = HashingUtils::HashString("RoundaboutExit");
static const int RoundaboutPass_HASH = HashingUtils::HashString("RoundaboutPass");
static const int Turn_HASH = HashingUtils::HashString("Turn");
static const int UTurn_HASH = HashingUtils::HashString("UTurn");

RouteRentalTravelStepType GetRouteRentalTravelStepTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Arrive_HASH) {
    return RouteRentalTravelStepType::Arrive;
  } else if (hashCode == Continue_HASH) {
    return RouteRentalTravelStepType::Continue;
  } else if (hashCode == Depart_HASH) {
    return RouteRentalTravelStepType::Depart;
  } else if (hashCode == Exit_HASH) {
    return RouteRentalTravelStepType::Exit;
  } else if (hashCode == Keep_HASH) {
    return RouteRentalTravelStepType::Keep;
  } else if (hashCode == Ramp_HASH) {
    return RouteRentalTravelStepType::Ramp;
  } else if (hashCode == RoundaboutEnter_HASH) {
    return RouteRentalTravelStepType::RoundaboutEnter;
  } else if (hashCode == RoundaboutExit_HASH) {
    return RouteRentalTravelStepType::RoundaboutExit;
  } else if (hashCode == RoundaboutPass_HASH) {
    return RouteRentalTravelStepType::RoundaboutPass;
  } else if (hashCode == Turn_HASH) {
    return RouteRentalTravelStepType::Turn;
  } else if (hashCode == UTurn_HASH) {
    return RouteRentalTravelStepType::UTurn;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouteRentalTravelStepType>(hashCode);
  }

  return RouteRentalTravelStepType::NOT_SET;
}

Aws::String GetNameForRouteRentalTravelStepType(RouteRentalTravelStepType enumValue) {
  switch (enumValue) {
    case RouteRentalTravelStepType::NOT_SET:
      return {};
    case RouteRentalTravelStepType::Arrive:
      return "Arrive";
    case RouteRentalTravelStepType::Continue:
      return "Continue";
    case RouteRentalTravelStepType::Depart:
      return "Depart";
    case RouteRentalTravelStepType::Exit:
      return "Exit";
    case RouteRentalTravelStepType::Keep:
      return "Keep";
    case RouteRentalTravelStepType::Ramp:
      return "Ramp";
    case RouteRentalTravelStepType::RoundaboutEnter:
      return "RoundaboutEnter";
    case RouteRentalTravelStepType::RoundaboutExit:
      return "RoundaboutExit";
    case RouteRentalTravelStepType::RoundaboutPass:
      return "RoundaboutPass";
    case RouteRentalTravelStepType::Turn:
      return "Turn";
    case RouteRentalTravelStepType::UTurn:
      return "UTurn";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouteRentalTravelStepTypeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
