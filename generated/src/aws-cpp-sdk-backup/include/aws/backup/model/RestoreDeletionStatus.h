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
  enum class RestoreDeletionStatus
  {
    NOT_SET,
    DELETING,
    FAILED,
    SUCCESSFUL
  };

namespace RestoreDeletionStatusMapper
{
AWS_BACKUP_API RestoreDeletionStatus GetRestoreDeletionStatusForName(const Aws::String& name);

AWS_BACKUP_API Aws::String GetNameForRestoreDeletionStatus(RestoreDeletionStatus value);
} // namespace RestoreDeletionStatusMapper
} // namespace Model
} // namespace Backup
} // namespace Aws
