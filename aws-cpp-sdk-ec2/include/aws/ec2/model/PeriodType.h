/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class PeriodType
  {
    NOT_SET,
    five_minutes,
    fifteen_minutes,
    one_hour,
    three_hours,
    one_day,
    one_week
  };

namespace PeriodTypeMapper
{
AWS_EC2_API PeriodType GetPeriodTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForPeriodType(PeriodType value);
} // namespace PeriodTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
