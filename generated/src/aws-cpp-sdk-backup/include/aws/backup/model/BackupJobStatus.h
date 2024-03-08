/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Backup
{
namespace Model
{
  enum class BackupJobStatus
  {
    NOT_SET,
    CREATED,
    PENDING,
    RUNNING,
    ABORTING,
    ABORTED,
    COMPLETED,
    FAILED,
    EXPIRED,
    PARTIAL,
    AGGREGATE_ALL,
    ANY
  };

namespace BackupJobStatusMapper
{
AWS_BACKUP_API BackupJobStatus GetBackupJobStatusForName(const Aws::String& name);

AWS_BACKUP_API Aws::String GetNameForBackupJobStatus(BackupJobStatus value);
} // namespace BackupJobStatusMapper
} // namespace Model
} // namespace Backup
} // namespace Aws
