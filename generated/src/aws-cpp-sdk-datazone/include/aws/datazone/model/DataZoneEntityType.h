/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>

namespace Aws {
namespace DataZone {
namespace Model {
enum class DataZoneEntityType { NOT_SET, DOMAIN_UNIT };

namespace DataZoneEntityTypeMapper {
AWS_DATAZONE_API DataZoneEntityType GetDataZoneEntityTypeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForDataZoneEntityType(DataZoneEntityType value);
}  // namespace DataZoneEntityTypeMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
