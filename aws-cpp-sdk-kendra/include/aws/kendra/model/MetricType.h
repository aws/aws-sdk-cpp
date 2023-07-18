/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace kendra
{
namespace Model
{
  enum class MetricType
  {
    NOT_SET,
    QUERIES_BY_COUNT,
    QUERIES_BY_ZERO_CLICK_RATE,
    QUERIES_BY_ZERO_RESULT_RATE,
    DOCS_BY_CLICK_COUNT,
    AGG_QUERY_DOC_METRICS,
    TREND_QUERY_DOC_METRICS
  };

namespace MetricTypeMapper
{
AWS_KENDRA_API MetricType GetMetricTypeForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForMetricType(MetricType value);
} // namespace MetricTypeMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
