/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>

namespace Aws {
namespace GeoRoutes {
namespace Model {
enum class RouteAttributionType { NOT_SET, Disclaimer, Tariff };

namespace RouteAttributionTypeMapper {
AWS_GEOROUTES_API RouteAttributionType GetRouteAttributionTypeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteAttributionType(RouteAttributionType value);
}  // namespace RouteAttributionTypeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
