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
  enum class HomogeneousTargetDatabaseEngine
  {
    NOT_SET,
    None_specified
  };

namespace HomogeneousTargetDatabaseEngineMapper
{
AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API HomogeneousTargetDatabaseEngine GetHomogeneousTargetDatabaseEngineForName(const Aws::String& name);

AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String GetNameForHomogeneousTargetDatabaseEngine(HomogeneousTargetDatabaseEngine value);
} // namespace HomogeneousTargetDatabaseEngineMapper
} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
