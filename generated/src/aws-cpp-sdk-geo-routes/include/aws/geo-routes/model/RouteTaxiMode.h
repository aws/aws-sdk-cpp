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
enum class RouteTaxiMode { NOT_SET, All, Car };

namespace RouteTaxiModeMapper {
AWS_GEOROUTES_API RouteTaxiMode GetRouteTaxiModeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteTaxiMode(RouteTaxiMode value);
}  // namespace RouteTaxiModeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
