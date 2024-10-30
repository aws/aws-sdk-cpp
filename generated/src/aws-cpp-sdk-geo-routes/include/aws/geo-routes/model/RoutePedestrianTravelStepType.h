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
  enum class RoutePedestrianTravelStepType
  {
    NOT_SET,
    Arrive,
    Continue,
    Depart,
    Keep,
    RoundaboutEnter,
    RoundaboutExit,
    RoundaboutPass,
    Turn,
    Exit,
    Ramp,
    UTurn
  };

namespace RoutePedestrianTravelStepTypeMapper
{
AWS_GEOROUTES_API RoutePedestrianTravelStepType GetRoutePedestrianTravelStepTypeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRoutePedestrianTravelStepType(RoutePedestrianTravelStepType value);
} // namespace RoutePedestrianTravelStepTypeMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
