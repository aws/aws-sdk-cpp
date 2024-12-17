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
  enum class Index
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace IndexMapper
{
AWS_BACKUP_API Index GetIndexForName(const Aws::String& name);

AWS_BACKUP_API Aws::String GetNameForIndex(Index value);
} // namespace IndexMapper
} // namespace Model
} // namespace Backup
} // namespace Aws
