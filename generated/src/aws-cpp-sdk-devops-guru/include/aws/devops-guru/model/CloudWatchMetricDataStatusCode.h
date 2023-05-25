/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{
  enum class CloudWatchMetricDataStatusCode
  {
    NOT_SET,
    Complete,
    InternalError,
    PartialData
  };

namespace CloudWatchMetricDataStatusCodeMapper
{
AWS_DEVOPSGURU_API CloudWatchMetricDataStatusCode GetCloudWatchMetricDataStatusCodeForName(const Aws::String& name);

AWS_DEVOPSGURU_API Aws::String GetNameForCloudWatchMetricDataStatusCode(CloudWatchMetricDataStatusCode value);
} // namespace CloudWatchMetricDataStatusCodeMapper
} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
