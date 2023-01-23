/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cur/CostandUsageReportService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CostandUsageReportService
{
namespace Model
{
  enum class TimeUnit
  {
    NOT_SET,
    HOURLY,
    DAILY,
    MONTHLY
  };

namespace TimeUnitMapper
{
AWS_COSTANDUSAGEREPORTSERVICE_API TimeUnit GetTimeUnitForName(const Aws::String& name);

AWS_COSTANDUSAGEREPORTSERVICE_API Aws::String GetNameForTimeUnit(TimeUnit value);
} // namespace TimeUnitMapper
} // namespace Model
} // namespace CostandUsageReportService
} // namespace Aws
