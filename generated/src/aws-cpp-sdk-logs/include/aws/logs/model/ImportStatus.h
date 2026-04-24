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
enum class ImportStatus { NOT_SET, IN_PROGRESS, CANCELLED, COMPLETED, FAILED };

namespace ImportStatusMapper {
AWS_CLOUDWATCHLOGS_API ImportStatus GetImportStatusForName(const Aws::String& name);

AWS_CLOUDWATCHLOGS_API Aws::String GetNameForImportStatus(ImportStatus value);
}  // namespace ImportStatusMapper
}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
