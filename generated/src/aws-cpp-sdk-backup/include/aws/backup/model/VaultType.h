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
  enum class VaultType
  {
    NOT_SET,
    BACKUP_VAULT,
    LOGICALLY_AIR_GAPPED_BACKUP_VAULT
  };

namespace VaultTypeMapper
{
AWS_BACKUP_API VaultType GetVaultTypeForName(const Aws::String& name);

AWS_BACKUP_API Aws::String GetNameForVaultType(VaultType value);
} // namespace VaultTypeMapper
} // namespace Model
} // namespace Backup
} // namespace Aws
