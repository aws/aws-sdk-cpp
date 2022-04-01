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
  enum class AppType
  {
    NOT_SET,
    DotNetFramework,
    Java,
    SQLServer,
    IIS,
    Oracle,
    Other
  };

namespace AppTypeMapper
{
AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AppType GetAppTypeForName(const Aws::String& name);

AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String GetNameForAppType(AppType value);
} // namespace AppTypeMapper
} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
