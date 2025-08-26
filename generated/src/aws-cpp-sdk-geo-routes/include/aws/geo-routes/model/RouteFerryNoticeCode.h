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
  enum class RouteFerryNoticeCode
  {
    NOT_SET,
    AccuratePolylineUnavailable,
    NoSchedule,
    Other,
    ViolatedAvoidFerry,
    ViolatedAvoidRailFerry,
    SeasonalClosure,
    PotentialViolatedVehicleRestrictionUsage
  };

namespace RouteFerryNoticeCodeMapper
{
AWS_GEOROUTES_API RouteFerryNoticeCode GetRouteFerryNoticeCodeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteFerryNoticeCode(RouteFerryNoticeCode value);
} // namespace RouteFerryNoticeCodeMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
