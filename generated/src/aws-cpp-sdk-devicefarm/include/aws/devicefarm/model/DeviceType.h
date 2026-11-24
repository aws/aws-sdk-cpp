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
enum class DeviceType { NOT_SET, PHYSICAL, VIRTUAL };

namespace DeviceTypeMapper {
AWS_DEVICEFARM_API DeviceType GetDeviceTypeForName(const Aws::String& name);

AWS_DEVICEFARM_API Aws::String GetNameForDeviceType(DeviceType value);
}  // namespace DeviceTypeMapper
}  // namespace Model
}  // namespace DeviceFarm
}  // namespace Aws
