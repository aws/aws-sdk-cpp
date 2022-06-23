/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace Model
{
  enum class ImportFileTaskStatus
  {
    NOT_SET,
    ImportInProgress,
    ImportFailed,
    ImportPartialSuccess,
    ImportSuccess,
    DeleteInProgress,
    DeleteFailed,
    DeletePartialSuccess,
    DeleteSuccess
  };

namespace ImportFileTaskStatusMapper
{
AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ImportFileTaskStatus GetImportFileTaskStatusForName(const Aws::String& name);

AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String GetNameForImportFileTaskStatus(ImportFileTaskStatus value);
} // namespace ImportFileTaskStatusMapper
} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
