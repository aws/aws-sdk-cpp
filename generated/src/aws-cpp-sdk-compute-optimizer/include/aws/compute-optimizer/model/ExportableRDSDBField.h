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
  enum class ExportableRDSDBField
  {
    NOT_SET,
    ResourceArn,
    AccountId,
    Engine,
    EngineVersion,
    Idle,
    MultiAZDBInstance,
    CurrentDBInstanceClass,
    CurrentStorageConfigurationStorageType,
    CurrentStorageConfigurationAllocatedStorage,
    CurrentStorageConfigurationMaxAllocatedStorage,
    CurrentStorageConfigurationIOPS,
    CurrentStorageConfigurationStorageThroughput,
    CurrentInstanceOnDemandHourlyPrice,
    CurrentStorageOnDemandMonthlyPrice,
    LookbackPeriodInDays,
    UtilizationMetricsCpuMaximum,
    UtilizationMetricsMemoryMaximum,
    UtilizationMetricsEBSVolumeStorageSpaceUtilizationMaximum,
    UtilizationMetricsNetworkReceiveThroughputMaximum,
    UtilizationMetricsNetworkTransmitThroughputMaximum,
    UtilizationMetricsEBSVolumeReadIOPSMaximum,
    UtilizationMetricsEBSVolumeWriteIOPSMaximum,
    UtilizationMetricsEBSVolumeReadThroughputMaximum,
    UtilizationMetricsEBSVolumeWriteThroughputMaximum,
    UtilizationMetricsDatabaseConnectionsMaximum,
    InstanceFinding,
    InstanceFindingReasonCodes,
    StorageFinding,
    StorageFindingReasonCodes,
    InstanceRecommendationOptionsDBInstanceClass,
    InstanceRecommendationOptionsRank,
    InstanceRecommendationOptionsPerformanceRisk,
    InstanceRecommendationOptionsProjectedUtilizationMetricsCpuMaximum,
    StorageRecommendationOptionsStorageType,
    StorageRecommendationOptionsAllocatedStorage,
    StorageRecommendationOptionsMaxAllocatedStorage,
    StorageRecommendationOptionsIOPS,
    StorageRecommendationOptionsStorageThroughput,
    StorageRecommendationOptionsRank,
    InstanceRecommendationOptionsInstanceOnDemandHourlyPrice,
    InstanceRecommendationOptionsSavingsOpportunityPercentage,
    InstanceRecommendationOptionsEstimatedMonthlySavingsCurrency,
    InstanceRecommendationOptionsEstimatedMonthlySavingsValue,
    InstanceRecommendationOptionsSavingsOpportunityAfterDiscountsPercentage,
    InstanceRecommendationOptionsEstimatedMonthlySavingsCurrencyAfterDiscounts,
    InstanceRecommendationOptionsEstimatedMonthlySavingsValueAfterDiscounts,
    StorageRecommendationOptionsOnDemandMonthlyPrice,
    StorageRecommendationOptionsSavingsOpportunityPercentage,
    StorageRecommendationOptionsEstimatedMonthlySavingsCurrency,
    StorageRecommendationOptionsEstimatedMonthlySavingsValue,
    StorageRecommendationOptionsSavingsOpportunityAfterDiscountsPercentage,
    StorageRecommendationOptionsEstimatedMonthlySavingsCurrencyAfterDiscounts,
    StorageRecommendationOptionsEstimatedMonthlySavingsValueAfterDiscounts,
    EffectiveRecommendationPreferencesCpuVendorArchitectures,
    EffectiveRecommendationPreferencesEnhancedInfrastructureMetrics,
    EffectiveRecommendationPreferencesLookBackPeriod,
    EffectiveRecommendationPreferencesSavingsEstimationMode,
    LastRefreshTimestamp,
    Tags
  };

namespace ExportableRDSDBFieldMapper
{
AWS_COMPUTEOPTIMIZER_API ExportableRDSDBField GetExportableRDSDBFieldForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForExportableRDSDBField(ExportableRDSDBField value);
} // namespace ExportableRDSDBFieldMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
