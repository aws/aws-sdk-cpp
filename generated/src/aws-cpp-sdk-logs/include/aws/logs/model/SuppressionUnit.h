/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{
  enum class SuppressionUnit
  {
    NOT_SET,
    SECONDS,
    MINUTES,
    HOURS
  };

namespace SuppressionUnitMapper
{
AWS_CLOUDWATCHLOGS_API SuppressionUnit GetSuppressionUnitForName(const Aws::String& name);

AWS_CLOUDWATCHLOGS_API Aws::String GetNameForSuppressionUnit(SuppressionUnit value);
} // namespace SuppressionUnitMapper
} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
