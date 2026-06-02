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
enum class RouteWebLinkDeviceType { NOT_SET, Android, Ios, Web };

namespace RouteWebLinkDeviceTypeMapper {
AWS_GEOROUTES_API RouteWebLinkDeviceType GetRouteWebLinkDeviceTypeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteWebLinkDeviceType(RouteWebLinkDeviceType value);
}  // namespace RouteWebLinkDeviceTypeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
