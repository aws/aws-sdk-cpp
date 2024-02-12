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
  enum class DataSourceLevelMetricsBehavior
  {
    NOT_SET,
    FULL_REQUEST_DATA_SOURCE_METRICS,
    PER_DATA_SOURCE_METRICS
  };

namespace DataSourceLevelMetricsBehaviorMapper
{
AWS_APPSYNC_API DataSourceLevelMetricsBehavior GetDataSourceLevelMetricsBehaviorForName(const Aws::String& name);

AWS_APPSYNC_API Aws::String GetNameForDataSourceLevelMetricsBehavior(DataSourceLevelMetricsBehavior value);
} // namespace DataSourceLevelMetricsBehaviorMapper
} // namespace Model
} // namespace AppSync
} // namespace Aws
