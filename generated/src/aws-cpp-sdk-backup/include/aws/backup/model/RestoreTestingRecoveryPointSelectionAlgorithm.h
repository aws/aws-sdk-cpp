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
  enum class RestoreTestingRecoveryPointSelectionAlgorithm
  {
    NOT_SET,
    LATEST_WITHIN_WINDOW,
    RANDOM_WITHIN_WINDOW
  };

namespace RestoreTestingRecoveryPointSelectionAlgorithmMapper
{
AWS_BACKUP_API RestoreTestingRecoveryPointSelectionAlgorithm GetRestoreTestingRecoveryPointSelectionAlgorithmForName(const Aws::String& name);

AWS_BACKUP_API Aws::String GetNameForRestoreTestingRecoveryPointSelectionAlgorithm(RestoreTestingRecoveryPointSelectionAlgorithm value);
} // namespace RestoreTestingRecoveryPointSelectionAlgorithmMapper
} // namespace Model
} // namespace Backup
} // namespace Aws
