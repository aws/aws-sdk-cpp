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
  enum class WaypointOptimizationServiceTimeTreatment
  {
    NOT_SET,
    Rest,
    Work
  };

namespace WaypointOptimizationServiceTimeTreatmentMapper
{
AWS_GEOROUTES_API WaypointOptimizationServiceTimeTreatment GetWaypointOptimizationServiceTimeTreatmentForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForWaypointOptimizationServiceTimeTreatment(WaypointOptimizationServiceTimeTreatment value);
} // namespace WaypointOptimizationServiceTimeTreatmentMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
