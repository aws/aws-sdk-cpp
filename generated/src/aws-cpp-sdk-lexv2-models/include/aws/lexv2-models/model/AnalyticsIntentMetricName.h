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
  enum class AnalyticsIntentMetricName
  {
    NOT_SET,
    Count,
    Success,
    Failure,
    Switched,
    Dropped
  };

namespace AnalyticsIntentMetricNameMapper
{
AWS_LEXMODELSV2_API AnalyticsIntentMetricName GetAnalyticsIntentMetricNameForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForAnalyticsIntentMetricName(AnalyticsIntentMetricName value);
} // namespace AnalyticsIntentMetricNameMapper
} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
