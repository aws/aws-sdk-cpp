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
enum class RouteTaxiAfterTravelStepType { NOT_SET, Park };

namespace RouteTaxiAfterTravelStepTypeMapper {
AWS_GEOROUTES_API RouteTaxiAfterTravelStepType GetRouteTaxiAfterTravelStepTypeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteTaxiAfterTravelStepType(RouteTaxiAfterTravelStepType value);
}  // namespace RouteTaxiAfterTravelStepTypeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
