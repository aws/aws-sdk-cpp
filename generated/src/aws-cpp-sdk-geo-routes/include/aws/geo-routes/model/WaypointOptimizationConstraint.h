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
  enum class WaypointOptimizationConstraint
  {
    NOT_SET,
    AccessHours,
    AppointmentTime,
    Before,
    Heading,
    ServiceDuration,
    SideOfStreet
  };

namespace WaypointOptimizationConstraintMapper
{
AWS_GEOROUTES_API WaypointOptimizationConstraint GetWaypointOptimizationConstraintForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForWaypointOptimizationConstraint(WaypointOptimizationConstraint value);
} // namespace WaypointOptimizationConstraintMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
