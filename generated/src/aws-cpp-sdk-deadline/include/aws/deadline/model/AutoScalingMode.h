/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace deadline
{
namespace Model
{
  enum class AutoScalingMode
  {
    NOT_SET,
    NO_SCALING,
    EVENT_BASED_AUTO_SCALING
  };

namespace AutoScalingModeMapper
{
AWS_DEADLINE_API AutoScalingMode GetAutoScalingModeForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForAutoScalingMode(AutoScalingMode value);
} // namespace AutoScalingModeMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
