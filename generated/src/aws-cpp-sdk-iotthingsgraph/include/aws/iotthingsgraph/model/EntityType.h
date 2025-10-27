/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>

namespace Aws {
namespace IoTThingsGraph {
namespace Model {
enum class EntityType { NOT_SET, DEVICE, SERVICE, DEVICE_MODEL, CAPABILITY, STATE, ACTION, EVENT, PROPERTY, MAPPING, ENUM };

namespace EntityTypeMapper {
AWS_IOTTHINGSGRAPH_API EntityType GetEntityTypeForName(const Aws::String& name);

AWS_IOTTHINGSGRAPH_API Aws::String GetNameForEntityType(EntityType value);
}  // namespace EntityTypeMapper
}  // namespace Model
}  // namespace IoTThingsGraph
}  // namespace Aws
