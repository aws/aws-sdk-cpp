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
  enum class ExportableVolumeField
  {
    NOT_SET,
    AccountId,
    VolumeArn,
    Finding,
    UtilizationMetricsVolumeReadOpsPerSecondMaximum,
    UtilizationMetricsVolumeWriteOpsPerSecondMaximum,
    UtilizationMetricsVolumeReadBytesPerSecondMaximum,
    UtilizationMetricsVolumeWriteBytesPerSecondMaximum,
    LookbackPeriodInDays,
    CurrentConfigurationVolumeType,
    CurrentConfigurationVolumeBaselineIOPS,
    CurrentConfigurationVolumeBaselineThroughput,
    CurrentConfigurationVolumeBurstIOPS,
    CurrentConfigurationVolumeBurstThroughput,
    CurrentConfigurationVolumeSize,
    CurrentMonthlyPrice,
    RecommendationOptionsConfigurationVolumeType,
    RecommendationOptionsConfigurationVolumeBaselineIOPS,
    RecommendationOptionsConfigurationVolumeBaselineThroughput,
    RecommendationOptionsConfigurationVolumeBurstIOPS,
    RecommendationOptionsConfigurationVolumeBurstThroughput,
    RecommendationOptionsConfigurationVolumeSize,
    RecommendationOptionsMonthlyPrice,
    RecommendationOptionsPerformanceRisk,
    LastRefreshTimestamp,
    CurrentPerformanceRisk,
    RecommendationOptionsSavingsOpportunityPercentage,
    RecommendationOptionsEstimatedMonthlySavingsCurrency,
    RecommendationOptionsEstimatedMonthlySavingsValue,
    RootVolume,
    Tags,
    CurrentConfigurationRootVolume,
    EffectiveRecommendationPreferencesSavingsEstimationMode,
    RecommendationOptionsSavingsOpportunityAfterDiscountsPercentage,
    RecommendationOptionsEstimatedMonthlySavingsCurrencyAfterDiscounts,
    RecommendationOptionsEstimatedMonthlySavingsValueAfterDiscounts
  };

namespace ExportableVolumeFieldMapper
{
AWS_COMPUTEOPTIMIZER_API ExportableVolumeField GetExportableVolumeFieldForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForExportableVolumeField(ExportableVolumeField value);
} // namespace ExportableVolumeFieldMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
