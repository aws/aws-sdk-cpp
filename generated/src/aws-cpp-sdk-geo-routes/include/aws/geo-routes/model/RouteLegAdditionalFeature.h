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
  enum class RouteLegAdditionalFeature
  {
    NOT_SET,
    Elevation,
    Incidents,
    PassThroughWaypoints,
    Summary,
    Tolls,
    TravelStepInstructions,
    TruckRoadTypes,
    TypicalDuration,
    Zones
  };

namespace RouteLegAdditionalFeatureMapper
{
AWS_GEOROUTES_API RouteLegAdditionalFeature GetRouteLegAdditionalFeatureForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteLegAdditionalFeature(RouteLegAdditionalFeature value);
} // namespace RouteLegAdditionalFeatureMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
