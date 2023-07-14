/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class CalendarState
  {
    NOT_SET,
    OPEN,
    CLOSED
  };

namespace CalendarStateMapper
{
AWS_SSM_API CalendarState GetCalendarStateForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForCalendarState(CalendarState value);
} // namespace CalendarStateMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
