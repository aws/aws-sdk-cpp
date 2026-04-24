/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-maps/GeoMaps_EXPORTS.h>

namespace Aws {
namespace GeoMaps {
namespace Model {
enum class Buildings { NOT_SET, Buildings3D };

namespace BuildingsMapper {
AWS_GEOMAPS_API Buildings GetBuildingsForName(const Aws::String& name);

AWS_GEOMAPS_API Aws::String GetNameForBuildings(Buildings value);
}  // namespace BuildingsMapper
}  // namespace Model
}  // namespace GeoMaps
}  // namespace Aws
