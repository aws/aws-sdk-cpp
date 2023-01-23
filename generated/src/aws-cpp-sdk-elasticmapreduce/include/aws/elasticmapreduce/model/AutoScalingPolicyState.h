/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EMR
{
namespace Model
{
  enum class AutoScalingPolicyState
  {
    NOT_SET,
    PENDING,
    ATTACHING,
    ATTACHED,
    DETACHING,
    DETACHED,
    FAILED
  };

namespace AutoScalingPolicyStateMapper
{
AWS_EMR_API AutoScalingPolicyState GetAutoScalingPolicyStateForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForAutoScalingPolicyState(AutoScalingPolicyState value);
} // namespace AutoScalingPolicyStateMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
