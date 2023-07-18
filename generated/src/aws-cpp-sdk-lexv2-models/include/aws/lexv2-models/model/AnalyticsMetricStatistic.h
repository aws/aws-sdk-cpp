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
  enum class AnalyticsMetricStatistic
  {
    NOT_SET,
    Sum,
    Avg,
    Max
  };

namespace AnalyticsMetricStatisticMapper
{
AWS_LEXMODELSV2_API AnalyticsMetricStatistic GetAnalyticsMetricStatisticForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForAnalyticsMetricStatistic(AnalyticsMetricStatistic value);
} // namespace AnalyticsMetricStatisticMapper
} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
