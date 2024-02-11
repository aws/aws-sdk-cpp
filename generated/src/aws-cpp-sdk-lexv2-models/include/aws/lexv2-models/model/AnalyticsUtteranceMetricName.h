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
  enum class AnalyticsUtteranceMetricName
  {
    NOT_SET,
    Count,
    Missed,
    Detected,
    UtteranceTimestamp
  };

namespace AnalyticsUtteranceMetricNameMapper
{
AWS_LEXMODELSV2_API AnalyticsUtteranceMetricName GetAnalyticsUtteranceMetricNameForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForAnalyticsUtteranceMetricName(AnalyticsUtteranceMetricName value);
} // namespace AnalyticsUtteranceMetricNameMapper
} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
