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
  enum class LifecycleState
  {
    NOT_SET,
    Pending,
    Pending_Wait,
    Pending_Proceed,
    Quarantined,
    InService,
    Terminating,
    Terminating_Wait,
    Terminating_Proceed,
    Terminated,
    Detaching,
    Detached,
    EnteringStandby,
    Standby
  };

namespace LifecycleStateMapper
{
AWS_AUTOSCALING_API LifecycleState GetLifecycleStateForName(const Aws::String& name);

AWS_AUTOSCALING_API Aws::String GetNameForLifecycleState(LifecycleState value);
} // namespace LifecycleStateMapper
} // namespace Model
} // namespace AutoScaling
} // namespace Aws
