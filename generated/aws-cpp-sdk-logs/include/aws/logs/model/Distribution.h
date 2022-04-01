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
  enum class Distribution
  {
    NOT_SET,
    Random,
    ByLogStream
  };

namespace DistributionMapper
{
AWS_CLOUDWATCHLOGS_API Distribution GetDistributionForName(const Aws::String& name);

AWS_CLOUDWATCHLOGS_API Aws::String GetNameForDistribution(Distribution value);
} // namespace DistributionMapper
} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
