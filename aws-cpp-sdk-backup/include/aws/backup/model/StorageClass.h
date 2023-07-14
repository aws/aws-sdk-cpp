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
  enum class StorageClass
  {
    NOT_SET,
    WARM,
    COLD,
    DELETED
  };

namespace StorageClassMapper
{
AWS_BACKUP_API StorageClass GetStorageClassForName(const Aws::String& name);

AWS_BACKUP_API Aws::String GetNameForStorageClass(StorageClass value);
} // namespace StorageClassMapper
} // namespace Model
} // namespace Backup
} // namespace Aws
