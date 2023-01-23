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
  enum class BackupJobState
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
    PARTIAL
  };

namespace BackupJobStateMapper
{
AWS_BACKUP_API BackupJobState GetBackupJobStateForName(const Aws::String& name);

AWS_BACKUP_API Aws::String GetNameForBackupJobState(BackupJobState value);
} // namespace BackupJobStateMapper
} // namespace Model
} // namespace Backup
} // namespace Aws
