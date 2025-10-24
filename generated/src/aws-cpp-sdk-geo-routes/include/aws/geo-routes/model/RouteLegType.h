﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>

namespace Aws {
namespace GeoRoutes {
namespace Model {
enum class RouteLegType { NOT_SET, Ferry, Pedestrian, Vehicle };

namespace RouteLegTypeMapper {
AWS_GEOROUTES_API RouteLegType GetRouteLegTypeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteLegType(RouteLegType value);
}  // namespace RouteLegTypeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
