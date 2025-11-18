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
enum class ExecutionStatus { NOT_SET, Running, InvalidQuery, Complete, Failed, Timeout };

namespace ExecutionStatusMapper {
AWS_CLOUDWATCHLOGS_API ExecutionStatus GetExecutionStatusForName(const Aws::String& name);

AWS_CLOUDWATCHLOGS_API Aws::String GetNameForExecutionStatus(ExecutionStatus value);
}  // namespace ExecutionStatusMapper
}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
