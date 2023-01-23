/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ECS
{
namespace Model
{
  enum class TaskStopCode
  {
    NOT_SET,
    TaskFailedToStart,
    EssentialContainerExited,
    UserInitiated,
    ServiceSchedulerInitiated,
    SpotInterruption,
    TerminationNotice
  };

namespace TaskStopCodeMapper
{
AWS_ECS_API TaskStopCode GetTaskStopCodeForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForTaskStopCode(TaskStopCode value);
} // namespace TaskStopCodeMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
