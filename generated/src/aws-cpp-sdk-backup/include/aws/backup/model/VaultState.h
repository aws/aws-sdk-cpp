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
  enum class VaultState
  {
    NOT_SET,
    CREATING,
    AVAILABLE,
    FAILED
  };

namespace VaultStateMapper
{
AWS_BACKUP_API VaultState GetVaultStateForName(const Aws::String& name);

AWS_BACKUP_API Aws::String GetNameForVaultState(VaultState value);
} // namespace VaultStateMapper
} // namespace Model
} // namespace Backup
} // namespace Aws
