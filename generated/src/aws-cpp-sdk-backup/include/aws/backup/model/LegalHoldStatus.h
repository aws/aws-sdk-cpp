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
  enum class LegalHoldStatus
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    CANCELING,
    CANCELED
  };

namespace LegalHoldStatusMapper
{
AWS_BACKUP_API LegalHoldStatus GetLegalHoldStatusForName(const Aws::String& name);

AWS_BACKUP_API Aws::String GetNameForLegalHoldStatus(LegalHoldStatus value);
} // namespace LegalHoldStatusMapper
} // namespace Model
} // namespace Backup
} // namespace Aws
