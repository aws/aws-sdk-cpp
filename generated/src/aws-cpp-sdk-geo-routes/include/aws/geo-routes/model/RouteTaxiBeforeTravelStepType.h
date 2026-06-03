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
enum class RouteTaxiBeforeTravelStepType { NOT_SET, Wait };

namespace RouteTaxiBeforeTravelStepTypeMapper {
AWS_GEOROUTES_API RouteTaxiBeforeTravelStepType GetRouteTaxiBeforeTravelStepTypeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteTaxiBeforeTravelStepType(RouteTaxiBeforeTravelStepType value);
}  // namespace RouteTaxiBeforeTravelStepTypeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
