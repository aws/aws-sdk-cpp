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
  enum class ScalingPolicyUpdateBehavior
  {
    NOT_SET,
    KeepExternalPolicies,
    ReplaceExternalPolicies
  };

namespace ScalingPolicyUpdateBehaviorMapper
{
AWS_AUTOSCALINGPLANS_API ScalingPolicyUpdateBehavior GetScalingPolicyUpdateBehaviorForName(const Aws::String& name);

AWS_AUTOSCALINGPLANS_API Aws::String GetNameForScalingPolicyUpdateBehavior(ScalingPolicyUpdateBehavior value);
} // namespace ScalingPolicyUpdateBehaviorMapper
} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
