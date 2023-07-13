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
  enum class RetentionPeriodType
  {
    NOT_SET,
    SECONDS,
    MINUTES,
    HOURS,
    DAYS,
    MONTHS,
    YEARS,
    INFINITE,
    UNSPECIFIED
  };

namespace RetentionPeriodTypeMapper
{
AWS_FSX_API RetentionPeriodType GetRetentionPeriodTypeForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForRetentionPeriodType(RetentionPeriodType value);
} // namespace RetentionPeriodTypeMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
