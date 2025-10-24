/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/ForecastService_EXPORTS.h>

namespace Aws {
namespace ForecastService {
namespace Model {
enum class OptimizationMetric { NOT_SET, WAPE, RMSE, AverageWeightedQuantileLoss, MASE, MAPE };

namespace OptimizationMetricMapper {
AWS_FORECASTSERVICE_API OptimizationMetric GetOptimizationMetricForName(const Aws::String& name);

AWS_FORECASTSERVICE_API Aws::String GetNameForOptimizationMetric(OptimizationMetric value);
}  // namespace OptimizationMetricMapper
}  // namespace Model
}  // namespace ForecastService
}  // namespace Aws
