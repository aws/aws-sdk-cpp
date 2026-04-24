/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>

namespace Aws {
namespace EC2 {
namespace Model {
enum class CapacityManagerMonitoredTagKeyStatus { NOT_SET, activating, activated, deactivating, suspended };

namespace CapacityManagerMonitoredTagKeyStatusMapper {
AWS_EC2_API CapacityManagerMonitoredTagKeyStatus GetCapacityManagerMonitoredTagKeyStatusForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForCapacityManagerMonitoredTagKeyStatus(CapacityManagerMonitoredTagKeyStatus value);
}  // namespace CapacityManagerMonitoredTagKeyStatusMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
