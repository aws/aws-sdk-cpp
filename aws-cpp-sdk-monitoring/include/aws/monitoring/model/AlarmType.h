/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{
  enum class AlarmType
  {
    NOT_SET,
    CompositeAlarm,
    MetricAlarm
  };

namespace AlarmTypeMapper
{
AWS_CLOUDWATCH_API AlarmType GetAlarmTypeForName(const Aws::String& name);

AWS_CLOUDWATCH_API Aws::String GetNameForAlarmType(AlarmType value);
} // namespace AlarmTypeMapper
} // namespace Model
} // namespace CloudWatch
} // namespace Aws
