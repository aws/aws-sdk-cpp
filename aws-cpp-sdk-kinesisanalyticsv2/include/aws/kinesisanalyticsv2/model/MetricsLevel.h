/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{
  enum class MetricsLevel
  {
    NOT_SET,
    APPLICATION,
    TASK,
    OPERATOR,
    PARALLELISM
  };

namespace MetricsLevelMapper
{
AWS_KINESISANALYTICSV2_API MetricsLevel GetMetricsLevelForName(const Aws::String& name);

AWS_KINESISANALYTICSV2_API Aws::String GetNameForMetricsLevel(MetricsLevel value);
} // namespace MetricsLevelMapper
} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
