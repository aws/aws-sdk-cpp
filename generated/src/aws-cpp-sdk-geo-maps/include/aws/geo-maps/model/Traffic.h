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
enum class Traffic { NOT_SET, All };

namespace TrafficMapper {
AWS_GEOMAPS_API Traffic GetTrafficForName(const Aws::String& name);

AWS_GEOMAPS_API Aws::String GetNameForTraffic(Traffic value);
}  // namespace TrafficMapper
}  // namespace Model
}  // namespace GeoMaps
}  // namespace Aws
