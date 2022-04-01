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
  enum class RunTimeAssessmentStatus
  {
    NOT_SET,
    dataCollectionTaskToBeScheduled,
    dataCollectionTaskScheduled,
    dataCollectionTaskStarted,
    dataCollectionTaskStopped,
    dataCollectionTaskSuccess,
    dataCollectionTaskFailed,
    dataCollectionTaskPartialSuccess
  };

namespace RunTimeAssessmentStatusMapper
{
AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API RunTimeAssessmentStatus GetRunTimeAssessmentStatusForName(const Aws::String& name);

AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String GetNameForRunTimeAssessmentStatus(RunTimeAssessmentStatus value);
} // namespace RunTimeAssessmentStatusMapper
} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
