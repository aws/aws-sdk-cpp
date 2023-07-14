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
  enum class ScalingPlanStatusCode
  {
    NOT_SET,
    Active,
    ActiveWithProblems,
    CreationInProgress,
    CreationFailed,
    DeletionInProgress,
    DeletionFailed,
    UpdateInProgress,
    UpdateFailed
  };

namespace ScalingPlanStatusCodeMapper
{
AWS_AUTOSCALINGPLANS_API ScalingPlanStatusCode GetScalingPlanStatusCodeForName(const Aws::String& name);

AWS_AUTOSCALINGPLANS_API Aws::String GetNameForScalingPlanStatusCode(ScalingPlanStatusCode value);
} // namespace ScalingPlanStatusCodeMapper
} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
