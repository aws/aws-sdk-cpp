/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FSx
{
namespace Model
{
  enum class BackupLifecycle
  {
    NOT_SET,
    AVAILABLE,
    CREATING,
    TRANSFERRING,
    DELETED,
    FAILED,
    PENDING
  };

namespace BackupLifecycleMapper
{
AWS_FSX_API BackupLifecycle GetBackupLifecycleForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForBackupLifecycle(BackupLifecycle value);
} // namespace BackupLifecycleMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
