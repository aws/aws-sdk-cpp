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
  enum class BackupVaultEvent
  {
    NOT_SET,
    BACKUP_JOB_STARTED,
    BACKUP_JOB_COMPLETED,
    BACKUP_JOB_SUCCESSFUL,
    BACKUP_JOB_FAILED,
    BACKUP_JOB_EXPIRED,
    RESTORE_JOB_STARTED,
    RESTORE_JOB_COMPLETED,
    RESTORE_JOB_SUCCESSFUL,
    RESTORE_JOB_FAILED,
    COPY_JOB_STARTED,
    COPY_JOB_SUCCESSFUL,
    COPY_JOB_FAILED,
    RECOVERY_POINT_MODIFIED,
    BACKUP_PLAN_CREATED,
    BACKUP_PLAN_MODIFIED
  };

namespace BackupVaultEventMapper
{
AWS_BACKUP_API BackupVaultEvent GetBackupVaultEventForName(const Aws::String& name);

AWS_BACKUP_API Aws::String GetNameForBackupVaultEvent(BackupVaultEvent value);
} // namespace BackupVaultEventMapper
} // namespace Model
} // namespace Backup
} // namespace Aws
