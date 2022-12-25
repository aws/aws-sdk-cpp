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
  enum class CopyJobState
  {
    NOT_SET,
    CREATED,
    RUNNING,
    COMPLETED,
    FAILED,
    PARTIAL
  };

namespace CopyJobStateMapper
{
AWS_BACKUP_API CopyJobState GetCopyJobStateForName(const Aws::String& name);

AWS_BACKUP_API Aws::String GetNameForCopyJobState(CopyJobState value);
} // namespace CopyJobStateMapper
} // namespace Model
} // namespace Backup
} // namespace Aws
