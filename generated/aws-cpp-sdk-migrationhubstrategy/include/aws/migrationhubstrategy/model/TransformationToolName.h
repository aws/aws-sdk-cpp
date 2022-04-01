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
  enum class TransformationToolName
  {
    NOT_SET,
    App2Container,
    Porting_Assistant_For_NET,
    End_of_Support_Migration,
    Windows_Web_Application_Migration_Assistant,
    Application_Migration_Service,
    Strategy_Recommendation_Support,
    In_Place_Operating_System_Upgrade,
    Schema_Conversion_Tool,
    Database_Migration_Service,
    Native_SQL_Server_Backup_Restore
  };

namespace TransformationToolNameMapper
{
AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API TransformationToolName GetTransformationToolNameForName(const Aws::String& name);

AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String GetNameForTransformationToolName(TransformationToolName value);
} // namespace TransformationToolNameMapper
} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
