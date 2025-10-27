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
enum class IsolineTruckType { NOT_SET, LightTruck, StraightTruck, Tractor };

namespace IsolineTruckTypeMapper {
AWS_GEOROUTES_API IsolineTruckType GetIsolineTruckTypeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForIsolineTruckType(IsolineTruckType value);
}  // namespace IsolineTruckTypeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
