/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Lightsail
{
namespace Model
{
  enum class AlarmState
  {
    NOT_SET,
    OK,
    ALARM,
    INSUFFICIENT_DATA
  };

namespace AlarmStateMapper
{
AWS_LIGHTSAIL_API AlarmState GetAlarmStateForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForAlarmState(AlarmState value);
} // namespace AlarmStateMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
