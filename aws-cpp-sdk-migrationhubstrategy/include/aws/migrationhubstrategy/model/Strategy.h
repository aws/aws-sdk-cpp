﻿/**
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
  enum class Strategy
  {
    NOT_SET,
    Rehost,
    Retirement,
    Refactor,
    Replatform,
    Retain,
    Relocate,
    Repurchase
  };

namespace StrategyMapper
{
AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Strategy GetStrategyForName(const Aws::String& name);

AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String GetNameForStrategy(Strategy value);
} // namespace StrategyMapper
} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
