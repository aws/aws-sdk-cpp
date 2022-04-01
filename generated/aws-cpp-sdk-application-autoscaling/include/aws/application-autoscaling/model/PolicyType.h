/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ApplicationAutoScaling
{
namespace Model
{
  enum class PolicyType
  {
    NOT_SET,
    StepScaling,
    TargetTrackingScaling
  };

namespace PolicyTypeMapper
{
AWS_APPLICATIONAUTOSCALING_API PolicyType GetPolicyTypeForName(const Aws::String& name);

AWS_APPLICATIONAUTOSCALING_API Aws::String GetNameForPolicyType(PolicyType value);
} // namespace PolicyTypeMapper
} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
