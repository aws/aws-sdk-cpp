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
  enum class ExportableInstanceField
  {
    NOT_SET,
    AccountId,
    InstanceArn,
    InstanceName,
    Finding,
    FindingReasonCodes,
    LookbackPeriodInDays,
    CurrentInstanceType,
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
    CurrentOnDemandPrice,
    CurrentStandardOneYearNoUpfrontReservedPrice,
    CurrentStandardThreeYearNoUpfrontReservedPrice,
    CurrentVCpus,
    CurrentMemory,
    CurrentStorage,
    CurrentNetwork,
    RecommendationOptionsInstanceType,
    RecommendationOptionsProjectedUtilizationMetricsCpuMaximum,
    RecommendationOptionsProjectedUtilizationMetricsMemoryMaximum,
    RecommendationOptionsPlatformDifferences,
    RecommendationOptionsPerformanceRisk,
    RecommendationOptionsVcpus,
    RecommendationOptionsMemory,
    RecommendationOptionsStorage,
    RecommendationOptionsNetwork,
    RecommendationOptionsOnDemandPrice,
    RecommendationOptionsStandardOneYearNoUpfrontReservedPrice,
    RecommendationOptionsStandardThreeYearNoUpfrontReservedPrice,
    RecommendationsSourcesRecommendationSourceArn,
    RecommendationsSourcesRecommendationSourceType,
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
    EffectiveRecommendationPreferencesExternalMetricsSource
  };

namespace ExportableInstanceFieldMapper
{
AWS_COMPUTEOPTIMIZER_API ExportableInstanceField GetExportableInstanceFieldForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForExportableInstanceField(ExportableInstanceField value);
} // namespace ExportableInstanceFieldMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
