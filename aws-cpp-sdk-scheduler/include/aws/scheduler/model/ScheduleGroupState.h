/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/scheduler/Scheduler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Scheduler
{
namespace Model
{
  enum class ScheduleGroupState
  {
    NOT_SET,
    ACTIVE,
    DELETING
  };

namespace ScheduleGroupStateMapper
{
AWS_SCHEDULER_API ScheduleGroupState GetScheduleGroupStateForName(const Aws::String& name);

AWS_SCHEDULER_API Aws::String GetNameForScheduleGroupState(ScheduleGroupState value);
} // namespace ScheduleGroupStateMapper
} // namespace Model
} // namespace Scheduler
} // namespace Aws
