/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CodeDeploy {
namespace Model {
enum class AutoScalingGroupProcess { NOT_SET, Terminate, AZRebalance, InstanceRefresh, ScheduledActions };

namespace AutoScalingGroupProcessMapper {
AWS_CODEDEPLOY_API AutoScalingGroupProcess GetAutoScalingGroupProcessForName(const Aws::String& name);

AWS_CODEDEPLOY_API Aws::String GetNameForAutoScalingGroupProcess(AutoScalingGroupProcess value);
}  // namespace AutoScalingGroupProcessMapper
}  // namespace Model
}  // namespace CodeDeploy
}  // namespace Aws
