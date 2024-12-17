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
  enum class IndexStatus
  {
    NOT_SET,
    PENDING,
    ACTIVE,
    FAILED,
    DELETING
  };

namespace IndexStatusMapper
{
AWS_BACKUP_API IndexStatus GetIndexStatusForName(const Aws::String& name);

AWS_BACKUP_API Aws::String GetNameForIndexStatus(IndexStatus value);
} // namespace IndexStatusMapper
} // namespace Model
} // namespace Backup
} // namespace Aws
