/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-routes/model/RouteTaxiTravelStepType.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {
namespace RouteTaxiTravelStepTypeMapper {

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

RouteTaxiTravelStepType GetRouteTaxiTravelStepTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Arrive_HASH) {
    return RouteTaxiTravelStepType::Arrive;
  } else if (hashCode == Continue_HASH) {
    return RouteTaxiTravelStepType::Continue;
  } else if (hashCode == Depart_HASH) {
    return RouteTaxiTravelStepType::Depart;
  } else if (hashCode == Exit_HASH) {
    return RouteTaxiTravelStepType::Exit;
  } else if (hashCode == Keep_HASH) {
    return RouteTaxiTravelStepType::Keep;
  } else if (hashCode == Ramp_HASH) {
    return RouteTaxiTravelStepType::Ramp;
  } else if (hashCode == RoundaboutEnter_HASH) {
    return RouteTaxiTravelStepType::RoundaboutEnter;
  } else if (hashCode == RoundaboutExit_HASH) {
    return RouteTaxiTravelStepType::RoundaboutExit;
  } else if (hashCode == RoundaboutPass_HASH) {
    return RouteTaxiTravelStepType::RoundaboutPass;
  } else if (hashCode == Turn_HASH) {
    return RouteTaxiTravelStepType::Turn;
  } else if (hashCode == UTurn_HASH) {
    return RouteTaxiTravelStepType::UTurn;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouteTaxiTravelStepType>(hashCode);
  }

  return RouteTaxiTravelStepType::NOT_SET;
}

Aws::String GetNameForRouteTaxiTravelStepType(RouteTaxiTravelStepType enumValue) {
  switch (enumValue) {
    case RouteTaxiTravelStepType::NOT_SET:
      return {};
    case RouteTaxiTravelStepType::Arrive:
      return "Arrive";
    case RouteTaxiTravelStepType::Continue:
      return "Continue";
    case RouteTaxiTravelStepType::Depart:
      return "Depart";
    case RouteTaxiTravelStepType::Exit:
      return "Exit";
    case RouteTaxiTravelStepType::Keep:
      return "Keep";
    case RouteTaxiTravelStepType::Ramp:
      return "Ramp";
    case RouteTaxiTravelStepType::RoundaboutEnter:
      return "RoundaboutEnter";
    case RouteTaxiTravelStepType::RoundaboutExit:
      return "RoundaboutExit";
    case RouteTaxiTravelStepType::RoundaboutPass:
      return "RoundaboutPass";
    case RouteTaxiTravelStepType::Turn:
      return "Turn";
    case RouteTaxiTravelStepType::UTurn:
      return "UTurn";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouteTaxiTravelStepTypeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
