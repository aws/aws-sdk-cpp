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
  enum class RoutingObjective
  {
    NOT_SET,
    FastestRoute,
    ShortestRoute
  };

namespace RoutingObjectiveMapper
{
AWS_GEOROUTES_API RoutingObjective GetRoutingObjectiveForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRoutingObjective(RoutingObjective value);
} // namespace RoutingObjectiveMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
