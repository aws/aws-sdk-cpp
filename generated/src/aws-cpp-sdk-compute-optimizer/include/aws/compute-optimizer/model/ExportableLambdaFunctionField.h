/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{
  enum class ExportableLambdaFunctionField
  {
    NOT_SET,
    AccountId,
    FunctionArn,
    FunctionVersion,
    Finding,
    FindingReasonCodes,
    NumberOfInvocations,
    UtilizationMetricsDurationMaximum,
    UtilizationMetricsDurationAverage,
    UtilizationMetricsMemoryMaximum,
    UtilizationMetricsMemoryAverage,
    LookbackPeriodInDays,
    CurrentConfigurationMemorySize,
    CurrentConfigurationTimeout,
    CurrentCostTotal,
    CurrentCostAverage,
    RecommendationOptionsConfigurationMemorySize,
    RecommendationOptionsCostLow,
    RecommendationOptionsCostHigh,
    RecommendationOptionsProjectedUtilizationMetricsDurationLowerBound,
    RecommendationOptionsProjectedUtilizationMetricsDurationUpperBound,
    RecommendationOptionsProjectedUtilizationMetricsDurationExpected,
    LastRefreshTimestamp,
    CurrentPerformanceRisk,
    RecommendationOptionsSavingsOpportunityPercentage,
    RecommendationOptionsEstimatedMonthlySavingsCurrency,
    RecommendationOptionsEstimatedMonthlySavingsValue,
    Tags,
    EffectiveRecommendationPreferencesSavingsEstimationMode,
    RecommendationOptionsSavingsOpportunityAfterDiscountsPercentage,
    RecommendationOptionsEstimatedMonthlySavingsCurrencyAfterDiscounts,
    RecommendationOptionsEstimatedMonthlySavingsValueAfterDiscounts
  };

namespace ExportableLambdaFunctionFieldMapper
{
AWS_COMPUTEOPTIMIZER_API ExportableLambdaFunctionField GetExportableLambdaFunctionFieldForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForExportableLambdaFunctionField(ExportableLambdaFunctionField value);
} // namespace ExportableLambdaFunctionFieldMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
