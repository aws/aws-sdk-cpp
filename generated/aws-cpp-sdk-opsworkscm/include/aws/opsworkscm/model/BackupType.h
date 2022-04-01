/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace OpsWorksCM
{
namespace Model
{
  enum class BackupType
  {
    NOT_SET,
    AUTOMATED,
    MANUAL
  };

namespace BackupTypeMapper
{
AWS_OPSWORKSCM_API BackupType GetBackupTypeForName(const Aws::String& name);

AWS_OPSWORKSCM_API Aws::String GetNameForBackupType(BackupType value);
} // namespace BackupTypeMapper
} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
