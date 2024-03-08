/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppSync
{
namespace Model
{
  enum class DataSourceLevelMetricsConfig
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace DataSourceLevelMetricsConfigMapper
{
AWS_APPSYNC_API DataSourceLevelMetricsConfig GetDataSourceLevelMetricsConfigForName(const Aws::String& name);

AWS_APPSYNC_API Aws::String GetNameForDataSourceLevelMetricsConfig(DataSourceLevelMetricsConfig value);
} // namespace DataSourceLevelMetricsConfigMapper
} // namespace Model
} // namespace AppSync
} // namespace Aws
