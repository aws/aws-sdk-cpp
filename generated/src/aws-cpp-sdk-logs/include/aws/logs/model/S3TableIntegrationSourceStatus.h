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
enum class S3TableIntegrationSourceStatus { NOT_SET, ACTIVE, UNHEALTHY, FAILED, DATA_SOURCE_DELETE_IN_PROGRESS };

namespace S3TableIntegrationSourceStatusMapper {
AWS_CLOUDWATCHLOGS_API S3TableIntegrationSourceStatus GetS3TableIntegrationSourceStatusForName(const Aws::String& name);

AWS_CLOUDWATCHLOGS_API Aws::String GetNameForS3TableIntegrationSourceStatus(S3TableIntegrationSourceStatus value);
}  // namespace S3TableIntegrationSourceStatusMapper
}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
