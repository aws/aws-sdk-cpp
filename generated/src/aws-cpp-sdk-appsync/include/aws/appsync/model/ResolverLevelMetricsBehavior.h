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
  enum class ResolverLevelMetricsBehavior
  {
    NOT_SET,
    FULL_REQUEST_RESOLVER_METRICS,
    PER_RESOLVER_METRICS
  };

namespace ResolverLevelMetricsBehaviorMapper
{
AWS_APPSYNC_API ResolverLevelMetricsBehavior GetResolverLevelMetricsBehaviorForName(const Aws::String& name);

AWS_APPSYNC_API Aws::String GetNameForResolverLevelMetricsBehavior(ResolverLevelMetricsBehavior value);
} // namespace ResolverLevelMetricsBehaviorMapper
} // namespace Model
} // namespace AppSync
} // namespace Aws
