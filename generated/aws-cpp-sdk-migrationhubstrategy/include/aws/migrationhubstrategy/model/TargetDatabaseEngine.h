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
  enum class TargetDatabaseEngine
  {
    NOT_SET,
    None_specified,
    Amazon_Aurora,
    AWS_PostgreSQL,
    MySQL,
    Microsoft_SQL_Server,
    Oracle_Database,
    MariaDB,
    SAP,
    Db2_LUW,
    MongoDB
  };

namespace TargetDatabaseEngineMapper
{
AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API TargetDatabaseEngine GetTargetDatabaseEngineForName(const Aws::String& name);

AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String GetNameForTargetDatabaseEngine(TargetDatabaseEngine value);
} // namespace TargetDatabaseEngineMapper
} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
