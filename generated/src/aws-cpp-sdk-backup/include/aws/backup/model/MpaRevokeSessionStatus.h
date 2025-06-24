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
  enum class MpaRevokeSessionStatus
  {
    NOT_SET,
    PENDING,
    FAILED
  };

namespace MpaRevokeSessionStatusMapper
{
AWS_BACKUP_API MpaRevokeSessionStatus GetMpaRevokeSessionStatusForName(const Aws::String& name);

AWS_BACKUP_API Aws::String GetNameForMpaRevokeSessionStatus(MpaRevokeSessionStatus value);
} // namespace MpaRevokeSessionStatusMapper
} // namespace Model
} // namespace Backup
} // namespace Aws
