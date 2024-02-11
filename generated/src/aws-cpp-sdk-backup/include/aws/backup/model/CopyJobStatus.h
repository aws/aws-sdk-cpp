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
  enum class CopyJobStatus
  {
    NOT_SET,
    CREATED,
    RUNNING,
    ABORTING,
    ABORTED,
    COMPLETING,
    COMPLETED,
    FAILING,
    FAILED,
    PARTIAL,
    AGGREGATE_ALL,
    ANY
  };

namespace CopyJobStatusMapper
{
AWS_BACKUP_API CopyJobStatus GetCopyJobStatusForName(const Aws::String& name);

AWS_BACKUP_API Aws::String GetNameForCopyJobStatus(CopyJobStatus value);
} // namespace CopyJobStatusMapper
} // namespace Model
} // namespace Backup
} // namespace Aws
