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
  enum class RouteNoticeImpact
  {
    NOT_SET,
    High,
    Low
  };

namespace RouteNoticeImpactMapper
{
AWS_GEOROUTES_API RouteNoticeImpact GetRouteNoticeImpactForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteNoticeImpact(RouteNoticeImpact value);
} // namespace RouteNoticeImpactMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
