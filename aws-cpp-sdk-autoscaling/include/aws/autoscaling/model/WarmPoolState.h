/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{
  enum class WarmPoolState
  {
    NOT_SET,
    Stopped,
    Running,
    Hibernated
  };

namespace WarmPoolStateMapper
{
AWS_AUTOSCALING_API WarmPoolState GetWarmPoolStateForName(const Aws::String& name);

AWS_AUTOSCALING_API Aws::String GetNameForWarmPoolState(WarmPoolState value);
} // namespace WarmPoolStateMapper
} // namespace Model
} // namespace AutoScaling
} // namespace Aws
