/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace MigrationHubStrategyRecommendations
{
namespace MigrationHubStrategyRecommendationsEndpoint
{
AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace MigrationHubStrategyRecommendationsEndpoint
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
