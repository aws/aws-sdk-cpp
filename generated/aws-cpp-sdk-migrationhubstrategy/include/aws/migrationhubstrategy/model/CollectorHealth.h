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
  enum class CollectorHealth
  {
    NOT_SET,
    COLLECTOR_HEALTHY,
    COLLECTOR_UNHEALTHY
  };

namespace CollectorHealthMapper
{
AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API CollectorHealth GetCollectorHealthForName(const Aws::String& name);

AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String GetNameForCollectorHealth(CollectorHealth value);
} // namespace CollectorHealthMapper
} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
