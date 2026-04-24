/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/IoTWireless_EXPORTS.h>

namespace Aws {
namespace IoTWireless {
namespace Model {
enum class DeviceProfileType { NOT_SET, Sidewalk, LoRaWAN };

namespace DeviceProfileTypeMapper {
AWS_IOTWIRELESS_API DeviceProfileType GetDeviceProfileTypeForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForDeviceProfileType(DeviceProfileType value);
}  // namespace DeviceProfileTypeMapper
}  // namespace Model
}  // namespace IoTWireless
}  // namespace Aws
