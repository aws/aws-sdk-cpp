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
  enum class IntervalPeriod
  {
    NOT_SET,
    FIFTEEN_MIN,
    THIRTY_MIN,
    HOUR,
    DAY,
    WEEK,
    TOTAL
  };

namespace IntervalPeriodMapper
{
AWS_CONNECT_API IntervalPeriod GetIntervalPeriodForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForIntervalPeriod(IntervalPeriod value);
} // namespace IntervalPeriodMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
