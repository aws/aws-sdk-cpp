/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FSx
{
namespace Model
{
  enum class AutocommitPeriodType
  {
    NOT_SET,
    MINUTES,
    HOURS,
    DAYS,
    MONTHS,
    YEARS,
    NONE
  };

namespace AutocommitPeriodTypeMapper
{
AWS_FSX_API AutocommitPeriodType GetAutocommitPeriodTypeForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForAutocommitPeriodType(AutocommitPeriodType value);
} // namespace AutocommitPeriodTypeMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
