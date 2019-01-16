/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    RESTORE_JOB_STARTED,
    RESTORE_JOB_COMPLETED,
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
