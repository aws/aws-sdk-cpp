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
  enum class AntipatternReportStatus
  {
    NOT_SET,
    FAILED,
    IN_PROGRESS,
    SUCCESS
  };

namespace AntipatternReportStatusMapper
{
AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AntipatternReportStatus GetAntipatternReportStatusForName(const Aws::String& name);

AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String GetNameForAntipatternReportStatus(AntipatternReportStatus value);
} // namespace AntipatternReportStatusMapper
} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
