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
  enum class ScalingActivityStatusCode
  {
    NOT_SET,
    Pending,
    InProgress,
    Successful,
    Overridden,
    Unfulfilled,
    Failed
  };

namespace ScalingActivityStatusCodeMapper
{
AWS_APPLICATIONAUTOSCALING_API ScalingActivityStatusCode GetScalingActivityStatusCodeForName(const Aws::String& name);

AWS_APPLICATIONAUTOSCALING_API Aws::String GetNameForScalingActivityStatusCode(ScalingActivityStatusCode value);
} // namespace ScalingActivityStatusCodeMapper
} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
