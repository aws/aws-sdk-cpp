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
  enum class RouteFerryAfterTravelStepType
  {
    NOT_SET,
    Deboard
  };

namespace RouteFerryAfterTravelStepTypeMapper
{
AWS_GEOROUTES_API RouteFerryAfterTravelStepType GetRouteFerryAfterTravelStepTypeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteFerryAfterTravelStepType(RouteFerryAfterTravelStepType value);
} // namespace RouteFerryAfterTravelStepTypeMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
