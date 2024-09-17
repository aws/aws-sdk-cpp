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
  enum class OperationLevelMetricsConfig
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace OperationLevelMetricsConfigMapper
{
AWS_APPSYNC_API OperationLevelMetricsConfig GetOperationLevelMetricsConfigForName(const Aws::String& name);

AWS_APPSYNC_API Aws::String GetNameForOperationLevelMetricsConfig(OperationLevelMetricsConfig value);
} // namespace OperationLevelMetricsConfigMapper
} // namespace Model
} // namespace AppSync
} // namespace Aws
