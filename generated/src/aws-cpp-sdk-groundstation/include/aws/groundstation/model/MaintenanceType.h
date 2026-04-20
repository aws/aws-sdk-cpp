/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/GroundStation_EXPORTS.h>

namespace Aws {
namespace GroundStation {
namespace Model {
enum class MaintenanceType { NOT_SET, PLANNED, UNPLANNED };

namespace MaintenanceTypeMapper {
AWS_GROUNDSTATION_API MaintenanceType GetMaintenanceTypeForName(const Aws::String& name);

AWS_GROUNDSTATION_API Aws::String GetNameForMaintenanceType(MaintenanceType value);
}  // namespace MaintenanceTypeMapper
}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
