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
  enum class ScalingStatusCode
  {
    NOT_SET,
    Inactive,
    PartiallyActive,
    Active
  };

namespace ScalingStatusCodeMapper
{
AWS_AUTOSCALINGPLANS_API ScalingStatusCode GetScalingStatusCodeForName(const Aws::String& name);

AWS_AUTOSCALINGPLANS_API Aws::String GetNameForScalingStatusCode(ScalingStatusCode value);
} // namespace ScalingStatusCodeMapper
} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
