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
  enum class RestoreJobState
  {
    NOT_SET,
    CREATED,
    PENDING,
    RUNNING,
    ABORTED,
    COMPLETED,
    FAILED,
    AGGREGATE_ALL,
    ANY
  };

namespace RestoreJobStateMapper
{
AWS_BACKUP_API RestoreJobState GetRestoreJobStateForName(const Aws::String& name);

AWS_BACKUP_API Aws::String GetNameForRestoreJobState(RestoreJobState value);
} // namespace RestoreJobStateMapper
} // namespace Model
} // namespace Backup
} // namespace Aws
