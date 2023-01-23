/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Appflow
{
namespace Model
{
  enum class ScheduleFrequencyType
  {
    NOT_SET,
    BYMINUTE,
    HOURLY,
    DAILY,
    WEEKLY,
    MONTHLY,
    ONCE
  };

namespace ScheduleFrequencyTypeMapper
{
AWS_APPFLOW_API ScheduleFrequencyType GetScheduleFrequencyTypeForName(const Aws::String& name);

AWS_APPFLOW_API Aws::String GetNameForScheduleFrequencyType(ScheduleFrequencyType value);
} // namespace ScheduleFrequencyTypeMapper
} // namespace Model
} // namespace Appflow
} // namespace Aws
