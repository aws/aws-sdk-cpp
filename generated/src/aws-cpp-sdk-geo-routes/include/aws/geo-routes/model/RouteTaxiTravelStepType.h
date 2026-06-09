/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>

namespace Aws {
namespace GeoRoutes {
namespace Model {
enum class RouteTaxiTravelStepType {
  NOT_SET,
  Arrive,
  Continue,
  Depart,
  Exit,
  Keep,
  Ramp,
  RoundaboutEnter,
  RoundaboutExit,
  RoundaboutPass,
  Turn,
  UTurn
};

namespace RouteTaxiTravelStepTypeMapper {
AWS_GEOROUTES_API RouteTaxiTravelStepType GetRouteTaxiTravelStepTypeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteTaxiTravelStepType(RouteTaxiTravelStepType value);
}  // namespace RouteTaxiTravelStepTypeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
