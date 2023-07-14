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
  enum class RecoveryPointStatus
  {
    NOT_SET,
    COMPLETED,
    PARTIAL,
    DELETING,
    EXPIRED
  };

namespace RecoveryPointStatusMapper
{
AWS_BACKUP_API RecoveryPointStatus GetRecoveryPointStatusForName(const Aws::String& name);

AWS_BACKUP_API Aws::String GetNameForRecoveryPointStatus(RecoveryPointStatus value);
} // namespace RecoveryPointStatusMapper
} // namespace Model
} // namespace Backup
} // namespace Aws
