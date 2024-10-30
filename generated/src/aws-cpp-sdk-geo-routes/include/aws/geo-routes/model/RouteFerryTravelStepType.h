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
  enum class RouteFerryTravelStepType
  {
    NOT_SET,
    Depart,
    Continue,
    Arrive
  };

namespace RouteFerryTravelStepTypeMapper
{
AWS_GEOROUTES_API RouteFerryTravelStepType GetRouteFerryTravelStepTypeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteFerryTravelStepType(RouteFerryTravelStepType value);
} // namespace RouteFerryTravelStepTypeMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
