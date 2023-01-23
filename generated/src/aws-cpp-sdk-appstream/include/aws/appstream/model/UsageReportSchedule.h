/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppStream
{
namespace Model
{
  enum class UsageReportSchedule
  {
    NOT_SET,
    DAILY
  };

namespace UsageReportScheduleMapper
{
AWS_APPSTREAM_API UsageReportSchedule GetUsageReportScheduleForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForUsageReportSchedule(UsageReportSchedule value);
} // namespace UsageReportScheduleMapper
} // namespace Model
} // namespace AppStream
} // namespace Aws
