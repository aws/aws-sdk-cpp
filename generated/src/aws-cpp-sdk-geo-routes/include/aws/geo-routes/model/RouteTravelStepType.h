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
  enum class RouteTravelStepType
  {
    NOT_SET,
    Default,
    TurnByTurn
  };

namespace RouteTravelStepTypeMapper
{
AWS_GEOROUTES_API RouteTravelStepType GetRouteTravelStepTypeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteTravelStepType(RouteTravelStepType value);
} // namespace RouteTravelStepTypeMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
