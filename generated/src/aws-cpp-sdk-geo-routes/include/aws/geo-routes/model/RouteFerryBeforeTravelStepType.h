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
  enum class RouteFerryBeforeTravelStepType
  {
    NOT_SET,
    Board
  };

namespace RouteFerryBeforeTravelStepTypeMapper
{
AWS_GEOROUTES_API RouteFerryBeforeTravelStepType GetRouteFerryBeforeTravelStepTypeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteFerryBeforeTravelStepType(RouteFerryBeforeTravelStepType value);
} // namespace RouteFerryBeforeTravelStepTypeMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
