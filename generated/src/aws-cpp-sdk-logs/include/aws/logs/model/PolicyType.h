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
  enum class PolicyType
  {
    NOT_SET,
    DATA_PROTECTION_POLICY,
    SUBSCRIPTION_FILTER_POLICY
  };

namespace PolicyTypeMapper
{
AWS_CLOUDWATCHLOGS_API PolicyType GetPolicyTypeForName(const Aws::String& name);

AWS_CLOUDWATCHLOGS_API Aws::String GetNameForPolicyType(PolicyType value);
} // namespace PolicyTypeMapper
} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
