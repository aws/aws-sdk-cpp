/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Braket {
namespace Model {
enum class DeviceStatusReasonCode { NOT_SET, OUTSIDE_AVAILABILITY_WINDOW, MAINTENANCE, RESERVATION };

namespace DeviceStatusReasonCodeMapper {
AWS_BRAKET_API DeviceStatusReasonCode GetDeviceStatusReasonCodeForName(const Aws::String& name);

AWS_BRAKET_API Aws::String GetNameForDeviceStatusReasonCode(DeviceStatusReasonCode value);
}  // namespace DeviceStatusReasonCodeMapper
}  // namespace Model
}  // namespace Braket
}  // namespace Aws
