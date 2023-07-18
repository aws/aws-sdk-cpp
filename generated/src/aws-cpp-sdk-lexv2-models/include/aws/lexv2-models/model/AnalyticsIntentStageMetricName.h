/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{
  enum class AnalyticsIntentStageMetricName
  {
    NOT_SET,
    Count,
    Success,
    Failed,
    Dropped,
    Retry
  };

namespace AnalyticsIntentStageMetricNameMapper
{
AWS_LEXMODELSV2_API AnalyticsIntentStageMetricName GetAnalyticsIntentStageMetricNameForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForAnalyticsIntentStageMetricName(AnalyticsIntentStageMetricName value);
} // namespace AnalyticsIntentStageMetricNameMapper
} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
