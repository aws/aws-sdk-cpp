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
  enum class MpaSessionStatus
  {
    NOT_SET,
    PENDING,
    APPROVED,
    FAILED
  };

namespace MpaSessionStatusMapper
{
AWS_BACKUP_API MpaSessionStatus GetMpaSessionStatusForName(const Aws::String& name);

AWS_BACKUP_API Aws::String GetNameForMpaSessionStatus(MpaSessionStatus value);
} // namespace MpaSessionStatusMapper
} // namespace Model
} // namespace Backup
} // namespace Aws
