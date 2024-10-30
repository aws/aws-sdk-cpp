/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GeoRoutes
{
namespace Model
{
  enum class RouteVehicleTravelStepType
  {
    NOT_SET,
    Arrive,
    Continue,
    ContinueHighway,
    Depart,
    EnterHighway,
    Exit,
    Keep,
    Ramp,
    RoundaboutEnter,
    RoundaboutExit,
    RoundaboutPass,
    Turn,
    UTurn
  };

namespace RouteVehicleTravelStepTypeMapper
{
AWS_GEOROUTES_API RouteVehicleTravelStepType GetRouteVehicleTravelStepTypeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteVehicleTravelStepType(RouteVehicleTravelStepType value);
} // namespace RouteVehicleTravelStepTypeMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
