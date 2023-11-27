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
  enum class RestoreTestingRecoveryPointType
  {
    NOT_SET,
    CONTINUOUS,
    SNAPSHOT
  };

namespace RestoreTestingRecoveryPointTypeMapper
{
AWS_BACKUP_API RestoreTestingRecoveryPointType GetRestoreTestingRecoveryPointTypeForName(const Aws::String& name);

AWS_BACKUP_API Aws::String GetNameForRestoreTestingRecoveryPointType(RestoreTestingRecoveryPointType value);
} // namespace RestoreTestingRecoveryPointTypeMapper
} // namespace Model
} // namespace Backup
} // namespace Aws
