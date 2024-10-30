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
  enum class RouteResponseNoticeCode
  {
    NOT_SET,
    MainLanguageNotFound,
    Other,
    TravelTimeExceedsDriverWorkHours
  };

namespace RouteResponseNoticeCodeMapper
{
AWS_GEOROUTES_API RouteResponseNoticeCode GetRouteResponseNoticeCodeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteResponseNoticeCode(RouteResponseNoticeCode value);
} // namespace RouteResponseNoticeCodeMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
