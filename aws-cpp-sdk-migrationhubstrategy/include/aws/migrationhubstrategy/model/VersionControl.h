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
  enum class VersionControl
  {
    NOT_SET,
    GITHUB,
    GITHUB_ENTERPRISE,
    AZURE_DEVOPS_GIT
  };

namespace VersionControlMapper
{
AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API VersionControl GetVersionControlForName(const Aws::String& name);

AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String GetNameForVersionControl(VersionControl value);
} // namespace VersionControlMapper
} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
