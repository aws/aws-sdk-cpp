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
  enum class RouteSpanGateAttribute
  {
    NOT_SET,
    Emergency,
    KeyAccess,
    PermissionRequired
  };

namespace RouteSpanGateAttributeMapper
{
AWS_GEOROUTES_API RouteSpanGateAttribute GetRouteSpanGateAttributeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteSpanGateAttribute(RouteSpanGateAttribute value);
} // namespace RouteSpanGateAttributeMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
