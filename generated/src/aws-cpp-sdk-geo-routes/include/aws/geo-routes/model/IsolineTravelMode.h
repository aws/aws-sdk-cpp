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
enum class IsolineTravelMode { NOT_SET, Car, Pedestrian, Scooter, Truck };

namespace IsolineTravelModeMapper {
AWS_GEOROUTES_API IsolineTravelMode GetIsolineTravelModeForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForIsolineTravelMode(IsolineTravelMode value);
}  // namespace IsolineTravelModeMapper
}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
