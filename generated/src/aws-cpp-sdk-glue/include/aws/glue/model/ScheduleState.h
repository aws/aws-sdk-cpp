/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class ScheduleState
  {
    NOT_SET,
    SCHEDULED,
    NOT_SCHEDULED,
    TRANSITIONING
  };

namespace ScheduleStateMapper
{
AWS_GLUE_API ScheduleState GetScheduleStateForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForScheduleState(ScheduleState value);
} // namespace ScheduleStateMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
