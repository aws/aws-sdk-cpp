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
  enum class RestoreJobStatus
  {
    NOT_SET,
    PENDING,
    RUNNING,
    COMPLETED,
    ABORTED,
    FAILED
  };

namespace RestoreJobStatusMapper
{
AWS_BACKUP_API RestoreJobStatus GetRestoreJobStatusForName(const Aws::String& name);

AWS_BACKUP_API Aws::String GetNameForRestoreJobStatus(RestoreJobStatus value);
} // namespace RestoreJobStatusMapper
} // namespace Model
} // namespace Backup
} // namespace Aws
