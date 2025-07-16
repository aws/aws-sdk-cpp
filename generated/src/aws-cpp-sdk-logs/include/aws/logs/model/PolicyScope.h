/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{
  enum class PolicyScope
  {
    NOT_SET,
    ACCOUNT,
    RESOURCE
  };

namespace PolicyScopeMapper
{
AWS_CLOUDWATCHLOGS_API PolicyScope GetPolicyScopeForName(const Aws::String& name);

AWS_CLOUDWATCHLOGS_API Aws::String GetNameForPolicyScope(PolicyScope value);
} // namespace PolicyScopeMapper
} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
