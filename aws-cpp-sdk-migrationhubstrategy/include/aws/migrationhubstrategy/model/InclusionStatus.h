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
  enum class InclusionStatus
  {
    NOT_SET,
    excludeFromAssessment,
    includeInAssessment
  };

namespace InclusionStatusMapper
{
AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API InclusionStatus GetInclusionStatusForName(const Aws::String& name);

AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String GetNameForInclusionStatus(InclusionStatus value);
} // namespace InclusionStatusMapper
} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
