/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>

namespace Aws {
namespace CloudWatchLogs {
namespace Model {
enum class ScheduledQueryState { NOT_SET, ENABLED, DISABLED };

namespace ScheduledQueryStateMapper {
AWS_CLOUDWATCHLOGS_API ScheduledQueryState GetScheduledQueryStateForName(const Aws::String& name);

AWS_CLOUDWATCHLOGS_API Aws::String GetNameForScheduledQueryState(ScheduledQueryState value);
}  // namespace ScheduledQueryStateMapper
}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
