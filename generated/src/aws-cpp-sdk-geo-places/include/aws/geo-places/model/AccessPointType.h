/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-places/GeoPlaces_EXPORTS.h>

namespace Aws {
namespace GeoPlaces {
namespace Model {
enum class AccessPointType { NOT_SET, Delivery, Emergency, Entrance, Loading, Other, Parking, Taxi };

namespace AccessPointTypeMapper {
AWS_GEOPLACES_API AccessPointType GetAccessPointTypeForName(const Aws::String& name);

AWS_GEOPLACES_API Aws::String GetNameForAccessPointType(AccessPointType value);
}  // namespace AccessPointTypeMapper
}  // namespace Model
}  // namespace GeoPlaces
}  // namespace Aws
