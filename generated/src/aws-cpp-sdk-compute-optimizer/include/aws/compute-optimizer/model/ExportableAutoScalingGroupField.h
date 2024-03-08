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
  enum class ExportableAutoScalingGroupField
  {
    NOT_SET,
    AccountId,
    AutoScalingGroupArn,
    AutoScalingGroupName,
    Finding,
    UtilizationMetricsCpuMaximum,
    UtilizationMetricsMemoryMaximum,
    UtilizationMetricsEbsReadOpsPerSecondMaximum,
    UtilizationMetricsEbsWriteOpsPerSecondMaximum,
    UtilizationMetricsEbsReadBytesPerSecondMaximum,
    UtilizationMetricsEbsWriteBytesPerSecondMaximum,
    UtilizationMetricsDiskReadOpsPerSecondMaximum,
    UtilizationMetricsDiskWriteOpsPerSecondMaximum,
    UtilizationMetricsDiskReadBytesPerSecondMaximum,
    UtilizationMetricsDiskWriteBytesPerSecondMaximum,
    UtilizationMetricsNetworkInBytesPerSecondMaximum,
    UtilizationMetricsNetworkOutBytesPerSecondMaximum,
    UtilizationMetricsNetworkPacketsInPerSecondMaximum,
    UtilizationMetricsNetworkPacketsOutPerSecondMaximum,
    LookbackPeriodInDays,
    CurrentConfigurationInstanceType,
    CurrentConfigurationDesiredCapacity,
    CurrentConfigurationMinSize,
    CurrentConfigurationMaxSize,
    CurrentOnDemandPrice,
    CurrentStandardOneYearNoUpfrontReservedPrice,
    CurrentStandardThreeYearNoUpfrontReservedPrice,
    CurrentVCpus,
    CurrentMemory,
    CurrentStorage,
    CurrentNetwork,
    RecommendationOptionsConfigurationInstanceType,
    RecommendationOptionsConfigurationDesiredCapacity,
    RecommendationOptionsConfigurationMinSize,
    RecommendationOptionsConfigurationMaxSize,
    RecommendationOptionsProjectedUtilizationMetricsCpuMaximum,
    RecommendationOptionsProjectedUtilizationMetricsMemoryMaximum,
    RecommendationOptionsPerformanceRisk,
    RecommendationOptionsOnDemandPrice,
    RecommendationOptionsStandardOneYearNoUpfrontReservedPrice,
    RecommendationOptionsStandardThreeYearNoUpfrontReservedPrice,
    RecommendationOptionsVcpus,
    RecommendationOptionsMemory,
    RecommendationOptionsStorage,
    RecommendationOptionsNetwork,
    LastRefreshTimestamp,
    CurrentPerformanceRisk,
    RecommendationOptionsSavingsOpportunityPercentage,
    RecommendationOptionsEstimatedMonthlySavingsCurrency,
    RecommendationOptionsEstimatedMonthlySavingsValue,
    EffectiveRecommendationPreferencesCpuVendorArchitectures,
    EffectiveRecommendationPreferencesEnhancedInfrastructureMetrics,
    EffectiveRecommendationPreferencesInferredWorkloadTypes,
    InferredWorkloadTypes,
    RecommendationOptionsMigrationEffort,
    CurrentInstanceGpuInfo,
    RecommendationOptionsInstanceGpuInfo,
    UtilizationMetricsGpuPercentageMaximum,
    UtilizationMetricsGpuMemoryPercentageMaximum,
    RecommendationOptionsProjectedUtilizationMetricsGpuPercentageMaximum,
    RecommendationOptionsProjectedUtilizationMetricsGpuMemoryPercentageMaximum,
    EffectiveRecommendationPreferencesSavingsEstimationMode,
    RecommendationOptionsSavingsOpportunityAfterDiscountsPercentage,
    RecommendationOptionsEstimatedMonthlySavingsCurrencyAfterDiscounts,
    RecommendationOptionsEstimatedMonthlySavingsValueAfterDiscounts,
    EffectiveRecommendationPreferencesPreferredResources,
    EffectiveRecommendationPreferencesLookBackPeriod
  };

namespace ExportableAutoScalingGroupFieldMapper
{
AWS_COMPUTEOPTIMIZER_API ExportableAutoScalingGroupField GetExportableAutoScalingGroupFieldForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForExportableAutoScalingGroupField(ExportableAutoScalingGroupField value);
} // namespace ExportableAutoScalingGroupFieldMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
