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
  enum class SuppressionState
  {
    NOT_SET,
    SUPPRESSED,
    UNSUPPRESSED
  };

namespace SuppressionStateMapper
{
AWS_CLOUDWATCHLOGS_API SuppressionState GetSuppressionStateForName(const Aws::String& name);

AWS_CLOUDWATCHLOGS_API Aws::String GetNameForSuppressionState(SuppressionState value);
} // namespace SuppressionStateMapper
} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
