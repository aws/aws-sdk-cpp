/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ApplicationInsights
{
namespace Model
{
  enum class CloudWatchEventSource
  {
    NOT_SET,
    EC2,
    CODE_DEPLOY,
    HEALTH,
    RDS
  };

namespace CloudWatchEventSourceMapper
{
AWS_APPLICATIONINSIGHTS_API CloudWatchEventSource GetCloudWatchEventSourceForName(const Aws::String& name);

AWS_APPLICATIONINSIGHTS_API Aws::String GetNameForCloudWatchEventSource(CloudWatchEventSource value);
} // namespace CloudWatchEventSourceMapper
} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
