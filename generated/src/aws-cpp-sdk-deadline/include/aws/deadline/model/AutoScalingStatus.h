/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/Deadline_EXPORTS.h>

namespace Aws {
namespace deadline {
namespace Model {
enum class AutoScalingStatus { NOT_SET, GROWING, STEADY, SHRINKING };

namespace AutoScalingStatusMapper {
AWS_DEADLINE_API AutoScalingStatus GetAutoScalingStatusForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForAutoScalingStatus(AutoScalingStatus value);
}  // namespace AutoScalingStatusMapper
}  // namespace Model
}  // namespace deadline
}  // namespace Aws
