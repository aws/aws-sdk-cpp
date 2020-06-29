/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling-plans/AutoScalingPlans_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AutoScalingPlans
{
namespace Model
{
  enum class PolicyType
  {
    NOT_SET,
    TargetTrackingScaling
  };

namespace PolicyTypeMapper
{
AWS_AUTOSCALINGPLANS_API PolicyType GetPolicyTypeForName(const Aws::String& name);

AWS_AUTOSCALINGPLANS_API Aws::String GetNameForPolicyType(PolicyType value);
} // namespace PolicyTypeMapper
} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
