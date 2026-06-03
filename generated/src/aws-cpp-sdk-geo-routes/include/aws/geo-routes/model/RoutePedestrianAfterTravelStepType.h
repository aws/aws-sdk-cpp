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
enum class RoutePedestrianAfterTravelStepType { NOT_SET, Wait };

namespace RoutePedestrianAfterTravelStepTypeMapper {
AWS_GEOROUTES_API RoutePedestrianAfterTravelStepType GetRoutePedestrianAfterTravelStepTypeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRoutePedestrianAfterTravelStepType(RoutePedestrianAfterTravelStepType value);
}  // namespace RoutePedestrianAfterTravelStepTypeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
