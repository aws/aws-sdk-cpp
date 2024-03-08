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
  enum class RestoreValidationStatus
  {
    NOT_SET,
    FAILED,
    SUCCESSFUL,
    TIMED_OUT,
    VALIDATING
  };

namespace RestoreValidationStatusMapper
{
AWS_BACKUP_API RestoreValidationStatus GetRestoreValidationStatusForName(const Aws::String& name);

AWS_BACKUP_API Aws::String GetNameForRestoreValidationStatus(RestoreValidationStatus value);
} // namespace RestoreValidationStatusMapper
} // namespace Model
} // namespace Backup
} // namespace Aws
