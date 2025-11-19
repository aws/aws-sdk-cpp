/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Backup {
namespace Model {
enum class ScanJobStatus { NOT_SET, CREATED, COMPLETED, COMPLETED_WITH_ISSUES, RUNNING, FAILED, CANCELED, AGGREGATE_ALL, ANY };

namespace ScanJobStatusMapper {
AWS_BACKUP_API ScanJobStatus GetScanJobStatusForName(const Aws::String& name);

AWS_BACKUP_API Aws::String GetNameForScanJobStatus(ScanJobStatus value);
}  // namespace ScanJobStatusMapper
}  // namespace Model
}  // namespace Backup
}  // namespace Aws
