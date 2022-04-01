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
  enum class AwsManagedTargetDestination
  {
    NOT_SET,
    None_specified,
    AWS_Elastic_BeanStalk,
    AWS_Fargate
  };

namespace AwsManagedTargetDestinationMapper
{
AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AwsManagedTargetDestination GetAwsManagedTargetDestinationForName(const Aws::String& name);

AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String GetNameForAwsManagedTargetDestination(AwsManagedTargetDestination value);
} // namespace AwsManagedTargetDestinationMapper
} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
