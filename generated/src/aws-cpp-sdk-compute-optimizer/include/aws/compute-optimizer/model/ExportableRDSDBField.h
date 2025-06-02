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
    ClusterWriter,
    CurrentDBInstanceClass,
    CurrentStorageConfigurationStorageType,
    CurrentStorageConfigurationAllocatedStorage,
    CurrentStorageConfigurationMaxAllocatedStorage,
    CurrentStorageConfigurationIOPS,
    CurrentStorageConfigurationStorageThroughput,
    CurrentStorageEstimatedMonthlyVolumeIOPsCostVariation,
    CurrentInstanceOnDemandHourlyPrice,
    CurrentStorageOnDemandMonthlyPrice,
    LookbackPeriodInDays,
    CurrentStorageEstimatedClusterInstanceOnDemandMonthlyCost,
    CurrentStorageEstimatedClusterStorageOnDemandMonthlyCost,
    CurrentStorageEstimatedClusterStorageIOOnDemandMonthlyCost,
    CurrentInstancePerformanceRisk,
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
    UtilizationMetricsStorageNetworkReceiveThroughputMaximum,
    UtilizationMetricsStorageNetworkTransmitThroughputMaximum,
    UtilizationMetricsAuroraMemoryHealthStateMaximum,
    UtilizationMetricsAuroraMemoryNumDeclinedSqlTotalMaximum,
    UtilizationMetricsAuroraMemoryNumKillConnTotalMaximum,
    UtilizationMetricsAuroraMemoryNumKillQueryTotalMaximum,
    UtilizationMetricsReadIOPSEphemeralStorageMaximum,
    UtilizationMetricsWriteIOPSEphemeralStorageMaximum,
    UtilizationMetricsVolumeBytesUsedAverage,
    UtilizationMetricsVolumeReadIOPsAverage,
    UtilizationMetricsVolumeWriteIOPsAverage,
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
    StorageRecommendationOptionsEstimatedMonthlyVolumeIOPsCostVariation,
    InstanceRecommendationOptionsInstanceOnDemandHourlyPrice,
    InstanceRecommendationOptionsSavingsOpportunityPercentage,
    InstanceRecommendationOptionsEstimatedMonthlySavingsCurrency,
    InstanceRecommendationOptionsEstimatedMonthlySavingsValue,
    InstanceRecommendationOptionsSavingsOpportunityAfterDiscountsPercentage,
    InstanceRecommendationOptionsEstimatedMonthlySavingsCurrencyAfterDiscounts,
    InstanceRecommendationOptionsEstimatedMonthlySavingsValueAfterDiscounts,
    StorageRecommendationOptionsOnDemandMonthlyPrice,
    StorageRecommendationOptionsEstimatedClusterInstanceOnDemandMonthlyCost,
    StorageRecommendationOptionsEstimatedClusterStorageOnDemandMonthlyCost,
    StorageRecommendationOptionsEstimatedClusterStorageIOOnDemandMonthlyCost,
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
    Tags,
    DBClusterIdentifier,
    PromotionTier
  };

namespace ExportableRDSDBFieldMapper
{
AWS_COMPUTEOPTIMIZER_API ExportableRDSDBField GetExportableRDSDBFieldForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForExportableRDSDBField(ExportableRDSDBField value);
} // namespace ExportableRDSDBFieldMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
