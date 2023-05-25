/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class HoursOfOperationDays
  {
    NOT_SET,
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
  };

namespace HoursOfOperationDaysMapper
{
AWS_CONNECT_API HoursOfOperationDays GetHoursOfOperationDaysForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForHoursOfOperationDays(HoursOfOperationDays value);
} // namespace HoursOfOperationDaysMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
