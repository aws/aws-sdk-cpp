/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{
  enum class DataQualityMetricType
  {
    NOT_SET,
    COLUMN_COMPLETENESS,
    DIMENSION_UNIQUENESS,
    TIME_SERIES_COUNT,
    ROWS_PROCESSED,
    ROWS_PARTIAL_COMPLIANCE,
    INVALID_ROWS_COMPLIANCE,
    BACKTEST_TRAINING_DATA_START_TIME_STAMP,
    BACKTEST_TRAINING_DATA_END_TIME_STAMP,
    BACKTEST_INFERENCE_DATA_START_TIME_STAMP,
    BACKTEST_INFERENCE_DATA_END_TIME_STAMP
  };

namespace DataQualityMetricTypeMapper
{
AWS_LOOKOUTMETRICS_API DataQualityMetricType GetDataQualityMetricTypeForName(const Aws::String& name);

AWS_LOOKOUTMETRICS_API Aws::String GetNameForDataQualityMetricType(DataQualityMetricType value);
} // namespace DataQualityMetricTypeMapper
} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
