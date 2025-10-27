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
enum class RouteSideOfStreet { NOT_SET, Left, Right };

namespace RouteSideOfStreetMapper {
AWS_GEOROUTES_API RouteSideOfStreet GetRouteSideOfStreetForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteSideOfStreet(RouteSideOfStreet value);
}  // namespace RouteSideOfStreetMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
