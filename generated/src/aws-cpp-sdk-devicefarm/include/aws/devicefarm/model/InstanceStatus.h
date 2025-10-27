/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>

namespace Aws {
namespace DeviceFarm {
namespace Model {
enum class InstanceStatus { NOT_SET, IN_USE, PREPARING, AVAILABLE, NOT_AVAILABLE };

namespace InstanceStatusMapper {
AWS_DEVICEFARM_API InstanceStatus GetInstanceStatusForName(const Aws::String& name);

AWS_DEVICEFARM_API Aws::String GetNameForInstanceStatus(InstanceStatus value);
}  // namespace InstanceStatusMapper
}  // namespace Model
}  // namespace DeviceFarm
}  // namespace Aws
