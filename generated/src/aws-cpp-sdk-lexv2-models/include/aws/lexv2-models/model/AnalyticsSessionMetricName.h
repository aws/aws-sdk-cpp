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
  enum class AnalyticsSessionMetricName
  {
    NOT_SET,
    Count,
    Success,
    Failure,
    Dropped,
    Duration,
    TurnsPerConversation,
    Concurrency
  };

namespace AnalyticsSessionMetricNameMapper
{
AWS_LEXMODELSV2_API AnalyticsSessionMetricName GetAnalyticsSessionMetricNameForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForAnalyticsSessionMetricName(AnalyticsSessionMetricName value);
} // namespace AnalyticsSessionMetricNameMapper
} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
