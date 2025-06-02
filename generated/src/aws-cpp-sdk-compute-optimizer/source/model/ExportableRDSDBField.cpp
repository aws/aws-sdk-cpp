/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/ExportableRDSDBField.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComputeOptimizer
  {
    namespace Model
    {
      namespace ExportableRDSDBFieldMapper
      {

        static const int ResourceArn_HASH = HashingUtils::HashString("ResourceArn");
        static const int AccountId_HASH = HashingUtils::HashString("AccountId");
        static const int Engine_HASH = HashingUtils::HashString("Engine");
        static const int EngineVersion_HASH = HashingUtils::HashString("EngineVersion");
        static const int Idle_HASH = HashingUtils::HashString("Idle");
        static const int MultiAZDBInstance_HASH = HashingUtils::HashString("MultiAZDBInstance");
        static const int ClusterWriter_HASH = HashingUtils::HashString("ClusterWriter");
        static const int CurrentDBInstanceClass_HASH = HashingUtils::HashString("CurrentDBInstanceClass");
        static const int CurrentStorageConfigurationStorageType_HASH = HashingUtils::HashString("CurrentStorageConfigurationStorageType");
        static const int CurrentStorageConfigurationAllocatedStorage_HASH = HashingUtils::HashString("CurrentStorageConfigurationAllocatedStorage");
        static const int CurrentStorageConfigurationMaxAllocatedStorage_HASH = HashingUtils::HashString("CurrentStorageConfigurationMaxAllocatedStorage");
        static const int CurrentStorageConfigurationIOPS_HASH = HashingUtils::HashString("CurrentStorageConfigurationIOPS");
        static const int CurrentStorageConfigurationStorageThroughput_HASH = HashingUtils::HashString("CurrentStorageConfigurationStorageThroughput");
        static const int CurrentStorageEstimatedMonthlyVolumeIOPsCostVariation_HASH = HashingUtils::HashString("CurrentStorageEstimatedMonthlyVolumeIOPsCostVariation");
        static const int CurrentInstanceOnDemandHourlyPrice_HASH = HashingUtils::HashString("CurrentInstanceOnDemandHourlyPrice");
        static const int CurrentStorageOnDemandMonthlyPrice_HASH = HashingUtils::HashString("CurrentStorageOnDemandMonthlyPrice");
        static const int LookbackPeriodInDays_HASH = HashingUtils::HashString("LookbackPeriodInDays");
        static const int CurrentStorageEstimatedClusterInstanceOnDemandMonthlyCost_HASH = HashingUtils::HashString("CurrentStorageEstimatedClusterInstanceOnDemandMonthlyCost");
        static const int CurrentStorageEstimatedClusterStorageOnDemandMonthlyCost_HASH = HashingUtils::HashString("CurrentStorageEstimatedClusterStorageOnDemandMonthlyCost");
        static const int CurrentStorageEstimatedClusterStorageIOOnDemandMonthlyCost_HASH = HashingUtils::HashString("CurrentStorageEstimatedClusterStorageIOOnDemandMonthlyCost");
        static const int CurrentInstancePerformanceRisk_HASH = HashingUtils::HashString("CurrentInstancePerformanceRisk");
        static const int UtilizationMetricsCpuMaximum_HASH = HashingUtils::HashString("UtilizationMetricsCpuMaximum");
        static const int UtilizationMetricsMemoryMaximum_HASH = HashingUtils::HashString("UtilizationMetricsMemoryMaximum");
        static const int UtilizationMetricsEBSVolumeStorageSpaceUtilizationMaximum_HASH = HashingUtils::HashString("UtilizationMetricsEBSVolumeStorageSpaceUtilizationMaximum");
        static const int UtilizationMetricsNetworkReceiveThroughputMaximum_HASH = HashingUtils::HashString("UtilizationMetricsNetworkReceiveThroughputMaximum");
        static const int UtilizationMetricsNetworkTransmitThroughputMaximum_HASH = HashingUtils::HashString("UtilizationMetricsNetworkTransmitThroughputMaximum");
        static const int UtilizationMetricsEBSVolumeReadIOPSMaximum_HASH = HashingUtils::HashString("UtilizationMetricsEBSVolumeReadIOPSMaximum");
        static const int UtilizationMetricsEBSVolumeWriteIOPSMaximum_HASH = HashingUtils::HashString("UtilizationMetricsEBSVolumeWriteIOPSMaximum");
        static const int UtilizationMetricsEBSVolumeReadThroughputMaximum_HASH = HashingUtils::HashString("UtilizationMetricsEBSVolumeReadThroughputMaximum");
        static const int UtilizationMetricsEBSVolumeWriteThroughputMaximum_HASH = HashingUtils::HashString("UtilizationMetricsEBSVolumeWriteThroughputMaximum");
        static const int UtilizationMetricsDatabaseConnectionsMaximum_HASH = HashingUtils::HashString("UtilizationMetricsDatabaseConnectionsMaximum");
        static const int UtilizationMetricsStorageNetworkReceiveThroughputMaximum_HASH = HashingUtils::HashString("UtilizationMetricsStorageNetworkReceiveThroughputMaximum");
        static const int UtilizationMetricsStorageNetworkTransmitThroughputMaximum_HASH = HashingUtils::HashString("UtilizationMetricsStorageNetworkTransmitThroughputMaximum");
        static const int UtilizationMetricsAuroraMemoryHealthStateMaximum_HASH = HashingUtils::HashString("UtilizationMetricsAuroraMemoryHealthStateMaximum");
        static const int UtilizationMetricsAuroraMemoryNumDeclinedSqlTotalMaximum_HASH = HashingUtils::HashString("UtilizationMetricsAuroraMemoryNumDeclinedSqlTotalMaximum");
        static const int UtilizationMetricsAuroraMemoryNumKillConnTotalMaximum_HASH = HashingUtils::HashString("UtilizationMetricsAuroraMemoryNumKillConnTotalMaximum");
        static const int UtilizationMetricsAuroraMemoryNumKillQueryTotalMaximum_HASH = HashingUtils::HashString("UtilizationMetricsAuroraMemoryNumKillQueryTotalMaximum");
        static const int UtilizationMetricsReadIOPSEphemeralStorageMaximum_HASH = HashingUtils::HashString("UtilizationMetricsReadIOPSEphemeralStorageMaximum");
        static const int UtilizationMetricsWriteIOPSEphemeralStorageMaximum_HASH = HashingUtils::HashString("UtilizationMetricsWriteIOPSEphemeralStorageMaximum");
        static const int UtilizationMetricsVolumeBytesUsedAverage_HASH = HashingUtils::HashString("UtilizationMetricsVolumeBytesUsedAverage");
        static const int UtilizationMetricsVolumeReadIOPsAverage_HASH = HashingUtils::HashString("UtilizationMetricsVolumeReadIOPsAverage");
        static const int UtilizationMetricsVolumeWriteIOPsAverage_HASH = HashingUtils::HashString("UtilizationMetricsVolumeWriteIOPsAverage");
        static const int InstanceFinding_HASH = HashingUtils::HashString("InstanceFinding");
        static const int InstanceFindingReasonCodes_HASH = HashingUtils::HashString("InstanceFindingReasonCodes");
        static const int StorageFinding_HASH = HashingUtils::HashString("StorageFinding");
        static const int StorageFindingReasonCodes_HASH = HashingUtils::HashString("StorageFindingReasonCodes");
        static const int InstanceRecommendationOptionsDBInstanceClass_HASH = HashingUtils::HashString("InstanceRecommendationOptionsDBInstanceClass");
        static const int InstanceRecommendationOptionsRank_HASH = HashingUtils::HashString("InstanceRecommendationOptionsRank");
        static const int InstanceRecommendationOptionsPerformanceRisk_HASH = HashingUtils::HashString("InstanceRecommendationOptionsPerformanceRisk");
        static const int InstanceRecommendationOptionsProjectedUtilizationMetricsCpuMaximum_HASH = HashingUtils::HashString("InstanceRecommendationOptionsProjectedUtilizationMetricsCpuMaximum");
        static const int StorageRecommendationOptionsStorageType_HASH = HashingUtils::HashString("StorageRecommendationOptionsStorageType");
        static const int StorageRecommendationOptionsAllocatedStorage_HASH = HashingUtils::HashString("StorageRecommendationOptionsAllocatedStorage");
        static const int StorageRecommendationOptionsMaxAllocatedStorage_HASH = HashingUtils::HashString("StorageRecommendationOptionsMaxAllocatedStorage");
        static const int StorageRecommendationOptionsIOPS_HASH = HashingUtils::HashString("StorageRecommendationOptionsIOPS");
        static const int StorageRecommendationOptionsStorageThroughput_HASH = HashingUtils::HashString("StorageRecommendationOptionsStorageThroughput");
        static const int StorageRecommendationOptionsRank_HASH = HashingUtils::HashString("StorageRecommendationOptionsRank");
        static const int StorageRecommendationOptionsEstimatedMonthlyVolumeIOPsCostVariation_HASH = HashingUtils::HashString("StorageRecommendationOptionsEstimatedMonthlyVolumeIOPsCostVariation");
        static const int InstanceRecommendationOptionsInstanceOnDemandHourlyPrice_HASH = HashingUtils::HashString("InstanceRecommendationOptionsInstanceOnDemandHourlyPrice");
        static const int InstanceRecommendationOptionsSavingsOpportunityPercentage_HASH = HashingUtils::HashString("InstanceRecommendationOptionsSavingsOpportunityPercentage");
        static const int InstanceRecommendationOptionsEstimatedMonthlySavingsCurrency_HASH = HashingUtils::HashString("InstanceRecommendationOptionsEstimatedMonthlySavingsCurrency");
        static const int InstanceRecommendationOptionsEstimatedMonthlySavingsValue_HASH = HashingUtils::HashString("InstanceRecommendationOptionsEstimatedMonthlySavingsValue");
        static const int InstanceRecommendationOptionsSavingsOpportunityAfterDiscountsPercentage_HASH = HashingUtils::HashString("InstanceRecommendationOptionsSavingsOpportunityAfterDiscountsPercentage");
        static const int InstanceRecommendationOptionsEstimatedMonthlySavingsCurrencyAfterDiscounts_HASH = HashingUtils::HashString("InstanceRecommendationOptionsEstimatedMonthlySavingsCurrencyAfterDiscounts");
        static const int InstanceRecommendationOptionsEstimatedMonthlySavingsValueAfterDiscounts_HASH = HashingUtils::HashString("InstanceRecommendationOptionsEstimatedMonthlySavingsValueAfterDiscounts");
        static const int StorageRecommendationOptionsOnDemandMonthlyPrice_HASH = HashingUtils::HashString("StorageRecommendationOptionsOnDemandMonthlyPrice");
        static const int StorageRecommendationOptionsEstimatedClusterInstanceOnDemandMonthlyCost_HASH = HashingUtils::HashString("StorageRecommendationOptionsEstimatedClusterInstanceOnDemandMonthlyCost");
        static const int StorageRecommendationOptionsEstimatedClusterStorageOnDemandMonthlyCost_HASH = HashingUtils::HashString("StorageRecommendationOptionsEstimatedClusterStorageOnDemandMonthlyCost");
        static const int StorageRecommendationOptionsEstimatedClusterStorageIOOnDemandMonthlyCost_HASH = HashingUtils::HashString("StorageRecommendationOptionsEstimatedClusterStorageIOOnDemandMonthlyCost");
        static const int StorageRecommendationOptionsSavingsOpportunityPercentage_HASH = HashingUtils::HashString("StorageRecommendationOptionsSavingsOpportunityPercentage");
        static const int StorageRecommendationOptionsEstimatedMonthlySavingsCurrency_HASH = HashingUtils::HashString("StorageRecommendationOptionsEstimatedMonthlySavingsCurrency");
        static const int StorageRecommendationOptionsEstimatedMonthlySavingsValue_HASH = HashingUtils::HashString("StorageRecommendationOptionsEstimatedMonthlySavingsValue");
        static const int StorageRecommendationOptionsSavingsOpportunityAfterDiscountsPercentage_HASH = HashingUtils::HashString("StorageRecommendationOptionsSavingsOpportunityAfterDiscountsPercentage");
        static const int StorageRecommendationOptionsEstimatedMonthlySavingsCurrencyAfterDiscounts_HASH = HashingUtils::HashString("StorageRecommendationOptionsEstimatedMonthlySavingsCurrencyAfterDiscounts");
        static const int StorageRecommendationOptionsEstimatedMonthlySavingsValueAfterDiscounts_HASH = HashingUtils::HashString("StorageRecommendationOptionsEstimatedMonthlySavingsValueAfterDiscounts");
        static const int EffectiveRecommendationPreferencesCpuVendorArchitectures_HASH = HashingUtils::HashString("EffectiveRecommendationPreferencesCpuVendorArchitectures");
        static const int EffectiveRecommendationPreferencesEnhancedInfrastructureMetrics_HASH = HashingUtils::HashString("EffectiveRecommendationPreferencesEnhancedInfrastructureMetrics");
        static const int EffectiveRecommendationPreferencesLookBackPeriod_HASH = HashingUtils::HashString("EffectiveRecommendationPreferencesLookBackPeriod");
        static const int EffectiveRecommendationPreferencesSavingsEstimationMode_HASH = HashingUtils::HashString("EffectiveRecommendationPreferencesSavingsEstimationMode");
        static const int LastRefreshTimestamp_HASH = HashingUtils::HashString("LastRefreshTimestamp");
        static const int Tags_HASH = HashingUtils::HashString("Tags");
        static const int DBClusterIdentifier_HASH = HashingUtils::HashString("DBClusterIdentifier");
        static const int PromotionTier_HASH = HashingUtils::HashString("PromotionTier");


        ExportableRDSDBField GetExportableRDSDBFieldForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ResourceArn_HASH)
          {
            return ExportableRDSDBField::ResourceArn;
          }
          else if (hashCode == AccountId_HASH)
          {
            return ExportableRDSDBField::AccountId;
          }
          else if (hashCode == Engine_HASH)
          {
            return ExportableRDSDBField::Engine;
          }
          else if (hashCode == EngineVersion_HASH)
          {
            return ExportableRDSDBField::EngineVersion;
          }
          else if (hashCode == Idle_HASH)
          {
            return ExportableRDSDBField::Idle;
          }
          else if (hashCode == MultiAZDBInstance_HASH)
          {
            return ExportableRDSDBField::MultiAZDBInstance;
          }
          else if (hashCode == ClusterWriter_HASH)
          {
            return ExportableRDSDBField::ClusterWriter;
          }
          else if (hashCode == CurrentDBInstanceClass_HASH)
          {
            return ExportableRDSDBField::CurrentDBInstanceClass;
          }
          else if (hashCode == CurrentStorageConfigurationStorageType_HASH)
          {
            return ExportableRDSDBField::CurrentStorageConfigurationStorageType;
          }
          else if (hashCode == CurrentStorageConfigurationAllocatedStorage_HASH)
          {
            return ExportableRDSDBField::CurrentStorageConfigurationAllocatedStorage;
          }
          else if (hashCode == CurrentStorageConfigurationMaxAllocatedStorage_HASH)
          {
            return ExportableRDSDBField::CurrentStorageConfigurationMaxAllocatedStorage;
          }
          else if (hashCode == CurrentStorageConfigurationIOPS_HASH)
          {
            return ExportableRDSDBField::CurrentStorageConfigurationIOPS;
          }
          else if (hashCode == CurrentStorageConfigurationStorageThroughput_HASH)
          {
            return ExportableRDSDBField::CurrentStorageConfigurationStorageThroughput;
          }
          else if (hashCode == CurrentStorageEstimatedMonthlyVolumeIOPsCostVariation_HASH)
          {
            return ExportableRDSDBField::CurrentStorageEstimatedMonthlyVolumeIOPsCostVariation;
          }
          else if (hashCode == CurrentInstanceOnDemandHourlyPrice_HASH)
          {
            return ExportableRDSDBField::CurrentInstanceOnDemandHourlyPrice;
          }
          else if (hashCode == CurrentStorageOnDemandMonthlyPrice_HASH)
          {
            return ExportableRDSDBField::CurrentStorageOnDemandMonthlyPrice;
          }
          else if (hashCode == LookbackPeriodInDays_HASH)
          {
            return ExportableRDSDBField::LookbackPeriodInDays;
          }
          else if (hashCode == CurrentStorageEstimatedClusterInstanceOnDemandMonthlyCost_HASH)
          {
            return ExportableRDSDBField::CurrentStorageEstimatedClusterInstanceOnDemandMonthlyCost;
          }
          else if (hashCode == CurrentStorageEstimatedClusterStorageOnDemandMonthlyCost_HASH)
          {
            return ExportableRDSDBField::CurrentStorageEstimatedClusterStorageOnDemandMonthlyCost;
          }
          else if (hashCode == CurrentStorageEstimatedClusterStorageIOOnDemandMonthlyCost_HASH)
          {
            return ExportableRDSDBField::CurrentStorageEstimatedClusterStorageIOOnDemandMonthlyCost;
          }
          else if (hashCode == CurrentInstancePerformanceRisk_HASH)
          {
            return ExportableRDSDBField::CurrentInstancePerformanceRisk;
          }
          else if (hashCode == UtilizationMetricsCpuMaximum_HASH)
          {
            return ExportableRDSDBField::UtilizationMetricsCpuMaximum;
          }
          else if (hashCode == UtilizationMetricsMemoryMaximum_HASH)
          {
            return ExportableRDSDBField::UtilizationMetricsMemoryMaximum;
          }
          else if (hashCode == UtilizationMetricsEBSVolumeStorageSpaceUtilizationMaximum_HASH)
          {
            return ExportableRDSDBField::UtilizationMetricsEBSVolumeStorageSpaceUtilizationMaximum;
          }
          else if (hashCode == UtilizationMetricsNetworkReceiveThroughputMaximum_HASH)
          {
            return ExportableRDSDBField::UtilizationMetricsNetworkReceiveThroughputMaximum;
          }
          else if (hashCode == UtilizationMetricsNetworkTransmitThroughputMaximum_HASH)
          {
            return ExportableRDSDBField::UtilizationMetricsNetworkTransmitThroughputMaximum;
          }
          else if (hashCode == UtilizationMetricsEBSVolumeReadIOPSMaximum_HASH)
          {
            return ExportableRDSDBField::UtilizationMetricsEBSVolumeReadIOPSMaximum;
          }
          else if (hashCode == UtilizationMetricsEBSVolumeWriteIOPSMaximum_HASH)
          {
            return ExportableRDSDBField::UtilizationMetricsEBSVolumeWriteIOPSMaximum;
          }
          else if (hashCode == UtilizationMetricsEBSVolumeReadThroughputMaximum_HASH)
          {
            return ExportableRDSDBField::UtilizationMetricsEBSVolumeReadThroughputMaximum;
          }
          else if (hashCode == UtilizationMetricsEBSVolumeWriteThroughputMaximum_HASH)
          {
            return ExportableRDSDBField::UtilizationMetricsEBSVolumeWriteThroughputMaximum;
          }
          else if (hashCode == UtilizationMetricsDatabaseConnectionsMaximum_HASH)
          {
            return ExportableRDSDBField::UtilizationMetricsDatabaseConnectionsMaximum;
          }
          else if (hashCode == UtilizationMetricsStorageNetworkReceiveThroughputMaximum_HASH)
          {
            return ExportableRDSDBField::UtilizationMetricsStorageNetworkReceiveThroughputMaximum;
          }
          else if (hashCode == UtilizationMetricsStorageNetworkTransmitThroughputMaximum_HASH)
          {
            return ExportableRDSDBField::UtilizationMetricsStorageNetworkTransmitThroughputMaximum;
          }
          else if (hashCode == UtilizationMetricsAuroraMemoryHealthStateMaximum_HASH)
          {
            return ExportableRDSDBField::UtilizationMetricsAuroraMemoryHealthStateMaximum;
          }
          else if (hashCode == UtilizationMetricsAuroraMemoryNumDeclinedSqlTotalMaximum_HASH)
          {
            return ExportableRDSDBField::UtilizationMetricsAuroraMemoryNumDeclinedSqlTotalMaximum;
          }
          else if (hashCode == UtilizationMetricsAuroraMemoryNumKillConnTotalMaximum_HASH)
          {
            return ExportableRDSDBField::UtilizationMetricsAuroraMemoryNumKillConnTotalMaximum;
          }
          else if (hashCode == UtilizationMetricsAuroraMemoryNumKillQueryTotalMaximum_HASH)
          {
            return ExportableRDSDBField::UtilizationMetricsAuroraMemoryNumKillQueryTotalMaximum;
          }
          else if (hashCode == UtilizationMetricsReadIOPSEphemeralStorageMaximum_HASH)
          {
            return ExportableRDSDBField::UtilizationMetricsReadIOPSEphemeralStorageMaximum;
          }
          else if (hashCode == UtilizationMetricsWriteIOPSEphemeralStorageMaximum_HASH)
          {
            return ExportableRDSDBField::UtilizationMetricsWriteIOPSEphemeralStorageMaximum;
          }
          else if (hashCode == UtilizationMetricsVolumeBytesUsedAverage_HASH)
          {
            return ExportableRDSDBField::UtilizationMetricsVolumeBytesUsedAverage;
          }
          else if (hashCode == UtilizationMetricsVolumeReadIOPsAverage_HASH)
          {
            return ExportableRDSDBField::UtilizationMetricsVolumeReadIOPsAverage;
          }
          else if (hashCode == UtilizationMetricsVolumeWriteIOPsAverage_HASH)
          {
            return ExportableRDSDBField::UtilizationMetricsVolumeWriteIOPsAverage;
          }
          else if (hashCode == InstanceFinding_HASH)
          {
            return ExportableRDSDBField::InstanceFinding;
          }
          else if (hashCode == InstanceFindingReasonCodes_HASH)
          {
            return ExportableRDSDBField::InstanceFindingReasonCodes;
          }
          else if (hashCode == StorageFinding_HASH)
          {
            return ExportableRDSDBField::StorageFinding;
          }
          else if (hashCode == StorageFindingReasonCodes_HASH)
          {
            return ExportableRDSDBField::StorageFindingReasonCodes;
          }
          else if (hashCode == InstanceRecommendationOptionsDBInstanceClass_HASH)
          {
            return ExportableRDSDBField::InstanceRecommendationOptionsDBInstanceClass;
          }
          else if (hashCode == InstanceRecommendationOptionsRank_HASH)
          {
            return ExportableRDSDBField::InstanceRecommendationOptionsRank;
          }
          else if (hashCode == InstanceRecommendationOptionsPerformanceRisk_HASH)
          {
            return ExportableRDSDBField::InstanceRecommendationOptionsPerformanceRisk;
          }
          else if (hashCode == InstanceRecommendationOptionsProjectedUtilizationMetricsCpuMaximum_HASH)
          {
            return ExportableRDSDBField::InstanceRecommendationOptionsProjectedUtilizationMetricsCpuMaximum;
          }
          else if (hashCode == StorageRecommendationOptionsStorageType_HASH)
          {
            return ExportableRDSDBField::StorageRecommendationOptionsStorageType;
          }
          else if (hashCode == StorageRecommendationOptionsAllocatedStorage_HASH)
          {
            return ExportableRDSDBField::StorageRecommendationOptionsAllocatedStorage;
          }
          else if (hashCode == StorageRecommendationOptionsMaxAllocatedStorage_HASH)
          {
            return ExportableRDSDBField::StorageRecommendationOptionsMaxAllocatedStorage;
          }
          else if (hashCode == StorageRecommendationOptionsIOPS_HASH)
          {
            return ExportableRDSDBField::StorageRecommendationOptionsIOPS;
          }
          else if (hashCode == StorageRecommendationOptionsStorageThroughput_HASH)
          {
            return ExportableRDSDBField::StorageRecommendationOptionsStorageThroughput;
          }
          else if (hashCode == StorageRecommendationOptionsRank_HASH)
          {
            return ExportableRDSDBField::StorageRecommendationOptionsRank;
          }
          else if (hashCode == StorageRecommendationOptionsEstimatedMonthlyVolumeIOPsCostVariation_HASH)
          {
            return ExportableRDSDBField::StorageRecommendationOptionsEstimatedMonthlyVolumeIOPsCostVariation;
          }
          else if (hashCode == InstanceRecommendationOptionsInstanceOnDemandHourlyPrice_HASH)
          {
            return ExportableRDSDBField::InstanceRecommendationOptionsInstanceOnDemandHourlyPrice;
          }
          else if (hashCode == InstanceRecommendationOptionsSavingsOpportunityPercentage_HASH)
          {
            return ExportableRDSDBField::InstanceRecommendationOptionsSavingsOpportunityPercentage;
          }
          else if (hashCode == InstanceRecommendationOptionsEstimatedMonthlySavingsCurrency_HASH)
          {
            return ExportableRDSDBField::InstanceRecommendationOptionsEstimatedMonthlySavingsCurrency;
          }
          else if (hashCode == InstanceRecommendationOptionsEstimatedMonthlySavingsValue_HASH)
          {
            return ExportableRDSDBField::InstanceRecommendationOptionsEstimatedMonthlySavingsValue;
          }
          else if (hashCode == InstanceRecommendationOptionsSavingsOpportunityAfterDiscountsPercentage_HASH)
          {
            return ExportableRDSDBField::InstanceRecommendationOptionsSavingsOpportunityAfterDiscountsPercentage;
          }
          else if (hashCode == InstanceRecommendationOptionsEstimatedMonthlySavingsCurrencyAfterDiscounts_HASH)
          {
            return ExportableRDSDBField::InstanceRecommendationOptionsEstimatedMonthlySavingsCurrencyAfterDiscounts;
          }
          else if (hashCode == InstanceRecommendationOptionsEstimatedMonthlySavingsValueAfterDiscounts_HASH)
          {
            return ExportableRDSDBField::InstanceRecommendationOptionsEstimatedMonthlySavingsValueAfterDiscounts;
          }
          else if (hashCode == StorageRecommendationOptionsOnDemandMonthlyPrice_HASH)
          {
            return ExportableRDSDBField::StorageRecommendationOptionsOnDemandMonthlyPrice;
          }
          else if (hashCode == StorageRecommendationOptionsEstimatedClusterInstanceOnDemandMonthlyCost_HASH)
          {
            return ExportableRDSDBField::StorageRecommendationOptionsEstimatedClusterInstanceOnDemandMonthlyCost;
          }
          else if (hashCode == StorageRecommendationOptionsEstimatedClusterStorageOnDemandMonthlyCost_HASH)
          {
            return ExportableRDSDBField::StorageRecommendationOptionsEstimatedClusterStorageOnDemandMonthlyCost;
          }
          else if (hashCode == StorageRecommendationOptionsEstimatedClusterStorageIOOnDemandMonthlyCost_HASH)
          {
            return ExportableRDSDBField::StorageRecommendationOptionsEstimatedClusterStorageIOOnDemandMonthlyCost;
          }
          else if (hashCode == StorageRecommendationOptionsSavingsOpportunityPercentage_HASH)
          {
            return ExportableRDSDBField::StorageRecommendationOptionsSavingsOpportunityPercentage;
          }
          else if (hashCode == StorageRecommendationOptionsEstimatedMonthlySavingsCurrency_HASH)
          {
            return ExportableRDSDBField::StorageRecommendationOptionsEstimatedMonthlySavingsCurrency;
          }
          else if (hashCode == StorageRecommendationOptionsEstimatedMonthlySavingsValue_HASH)
          {
            return ExportableRDSDBField::StorageRecommendationOptionsEstimatedMonthlySavingsValue;
          }
          else if (hashCode == StorageRecommendationOptionsSavingsOpportunityAfterDiscountsPercentage_HASH)
          {
            return ExportableRDSDBField::StorageRecommendationOptionsSavingsOpportunityAfterDiscountsPercentage;
          }
          else if (hashCode == StorageRecommendationOptionsEstimatedMonthlySavingsCurrencyAfterDiscounts_HASH)
          {
            return ExportableRDSDBField::StorageRecommendationOptionsEstimatedMonthlySavingsCurrencyAfterDiscounts;
          }
          else if (hashCode == StorageRecommendationOptionsEstimatedMonthlySavingsValueAfterDiscounts_HASH)
          {
            return ExportableRDSDBField::StorageRecommendationOptionsEstimatedMonthlySavingsValueAfterDiscounts;
          }
          else if (hashCode == EffectiveRecommendationPreferencesCpuVendorArchitectures_HASH)
          {
            return ExportableRDSDBField::EffectiveRecommendationPreferencesCpuVendorArchitectures;
          }
          else if (hashCode == EffectiveRecommendationPreferencesEnhancedInfrastructureMetrics_HASH)
          {
            return ExportableRDSDBField::EffectiveRecommendationPreferencesEnhancedInfrastructureMetrics;
          }
          else if (hashCode == EffectiveRecommendationPreferencesLookBackPeriod_HASH)
          {
            return ExportableRDSDBField::EffectiveRecommendationPreferencesLookBackPeriod;
          }
          else if (hashCode == EffectiveRecommendationPreferencesSavingsEstimationMode_HASH)
          {
            return ExportableRDSDBField::EffectiveRecommendationPreferencesSavingsEstimationMode;
          }
          else if (hashCode == LastRefreshTimestamp_HASH)
          {
            return ExportableRDSDBField::LastRefreshTimestamp;
          }
          else if (hashCode == Tags_HASH)
          {
            return ExportableRDSDBField::Tags;
          }
          else if (hashCode == DBClusterIdentifier_HASH)
          {
            return ExportableRDSDBField::DBClusterIdentifier;
          }
          else if (hashCode == PromotionTier_HASH)
          {
            return ExportableRDSDBField::PromotionTier;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExportableRDSDBField>(hashCode);
          }

          return ExportableRDSDBField::NOT_SET;
        }

        Aws::String GetNameForExportableRDSDBField(ExportableRDSDBField enumValue)
        {
          switch(enumValue)
          {
          case ExportableRDSDBField::NOT_SET:
            return {};
          case ExportableRDSDBField::ResourceArn:
            return "ResourceArn";
          case ExportableRDSDBField::AccountId:
            return "AccountId";
          case ExportableRDSDBField::Engine:
            return "Engine";
          case ExportableRDSDBField::EngineVersion:
            return "EngineVersion";
          case ExportableRDSDBField::Idle:
            return "Idle";
          case ExportableRDSDBField::MultiAZDBInstance:
            return "MultiAZDBInstance";
          case ExportableRDSDBField::ClusterWriter:
            return "ClusterWriter";
          case ExportableRDSDBField::CurrentDBInstanceClass:
            return "CurrentDBInstanceClass";
          case ExportableRDSDBField::CurrentStorageConfigurationStorageType:
            return "CurrentStorageConfigurationStorageType";
          case ExportableRDSDBField::CurrentStorageConfigurationAllocatedStorage:
            return "CurrentStorageConfigurationAllocatedStorage";
          case ExportableRDSDBField::CurrentStorageConfigurationMaxAllocatedStorage:
            return "CurrentStorageConfigurationMaxAllocatedStorage";
          case ExportableRDSDBField::CurrentStorageConfigurationIOPS:
            return "CurrentStorageConfigurationIOPS";
          case ExportableRDSDBField::CurrentStorageConfigurationStorageThroughput:
            return "CurrentStorageConfigurationStorageThroughput";
          case ExportableRDSDBField::CurrentStorageEstimatedMonthlyVolumeIOPsCostVariation:
            return "CurrentStorageEstimatedMonthlyVolumeIOPsCostVariation";
          case ExportableRDSDBField::CurrentInstanceOnDemandHourlyPrice:
            return "CurrentInstanceOnDemandHourlyPrice";
          case ExportableRDSDBField::CurrentStorageOnDemandMonthlyPrice:
            return "CurrentStorageOnDemandMonthlyPrice";
          case ExportableRDSDBField::LookbackPeriodInDays:
            return "LookbackPeriodInDays";
          case ExportableRDSDBField::CurrentStorageEstimatedClusterInstanceOnDemandMonthlyCost:
            return "CurrentStorageEstimatedClusterInstanceOnDemandMonthlyCost";
          case ExportableRDSDBField::CurrentStorageEstimatedClusterStorageOnDemandMonthlyCost:
            return "CurrentStorageEstimatedClusterStorageOnDemandMonthlyCost";
          case ExportableRDSDBField::CurrentStorageEstimatedClusterStorageIOOnDemandMonthlyCost:
            return "CurrentStorageEstimatedClusterStorageIOOnDemandMonthlyCost";
          case ExportableRDSDBField::CurrentInstancePerformanceRisk:
            return "CurrentInstancePerformanceRisk";
          case ExportableRDSDBField::UtilizationMetricsCpuMaximum:
            return "UtilizationMetricsCpuMaximum";
          case ExportableRDSDBField::UtilizationMetricsMemoryMaximum:
            return "UtilizationMetricsMemoryMaximum";
          case ExportableRDSDBField::UtilizationMetricsEBSVolumeStorageSpaceUtilizationMaximum:
            return "UtilizationMetricsEBSVolumeStorageSpaceUtilizationMaximum";
          case ExportableRDSDBField::UtilizationMetricsNetworkReceiveThroughputMaximum:
            return "UtilizationMetricsNetworkReceiveThroughputMaximum";
          case ExportableRDSDBField::UtilizationMetricsNetworkTransmitThroughputMaximum:
            return "UtilizationMetricsNetworkTransmitThroughputMaximum";
          case ExportableRDSDBField::UtilizationMetricsEBSVolumeReadIOPSMaximum:
            return "UtilizationMetricsEBSVolumeReadIOPSMaximum";
          case ExportableRDSDBField::UtilizationMetricsEBSVolumeWriteIOPSMaximum:
            return "UtilizationMetricsEBSVolumeWriteIOPSMaximum";
          case ExportableRDSDBField::UtilizationMetricsEBSVolumeReadThroughputMaximum:
            return "UtilizationMetricsEBSVolumeReadThroughputMaximum";
          case ExportableRDSDBField::UtilizationMetricsEBSVolumeWriteThroughputMaximum:
            return "UtilizationMetricsEBSVolumeWriteThroughputMaximum";
          case ExportableRDSDBField::UtilizationMetricsDatabaseConnectionsMaximum:
            return "UtilizationMetricsDatabaseConnectionsMaximum";
          case ExportableRDSDBField::UtilizationMetricsStorageNetworkReceiveThroughputMaximum:
            return "UtilizationMetricsStorageNetworkReceiveThroughputMaximum";
          case ExportableRDSDBField::UtilizationMetricsStorageNetworkTransmitThroughputMaximum:
            return "UtilizationMetricsStorageNetworkTransmitThroughputMaximum";
          case ExportableRDSDBField::UtilizationMetricsAuroraMemoryHealthStateMaximum:
            return "UtilizationMetricsAuroraMemoryHealthStateMaximum";
          case ExportableRDSDBField::UtilizationMetricsAuroraMemoryNumDeclinedSqlTotalMaximum:
            return "UtilizationMetricsAuroraMemoryNumDeclinedSqlTotalMaximum";
          case ExportableRDSDBField::UtilizationMetricsAuroraMemoryNumKillConnTotalMaximum:
            return "UtilizationMetricsAuroraMemoryNumKillConnTotalMaximum";
          case ExportableRDSDBField::UtilizationMetricsAuroraMemoryNumKillQueryTotalMaximum:
            return "UtilizationMetricsAuroraMemoryNumKillQueryTotalMaximum";
          case ExportableRDSDBField::UtilizationMetricsReadIOPSEphemeralStorageMaximum:
            return "UtilizationMetricsReadIOPSEphemeralStorageMaximum";
          case ExportableRDSDBField::UtilizationMetricsWriteIOPSEphemeralStorageMaximum:
            return "UtilizationMetricsWriteIOPSEphemeralStorageMaximum";
          case ExportableRDSDBField::UtilizationMetricsVolumeBytesUsedAverage:
            return "UtilizationMetricsVolumeBytesUsedAverage";
          case ExportableRDSDBField::UtilizationMetricsVolumeReadIOPsAverage:
            return "UtilizationMetricsVolumeReadIOPsAverage";
          case ExportableRDSDBField::UtilizationMetricsVolumeWriteIOPsAverage:
            return "UtilizationMetricsVolumeWriteIOPsAverage";
          case ExportableRDSDBField::InstanceFinding:
            return "InstanceFinding";
          case ExportableRDSDBField::InstanceFindingReasonCodes:
            return "InstanceFindingReasonCodes";
          case ExportableRDSDBField::StorageFinding:
            return "StorageFinding";
          case ExportableRDSDBField::StorageFindingReasonCodes:
            return "StorageFindingReasonCodes";
          case ExportableRDSDBField::InstanceRecommendationOptionsDBInstanceClass:
            return "InstanceRecommendationOptionsDBInstanceClass";
          case ExportableRDSDBField::InstanceRecommendationOptionsRank:
            return "InstanceRecommendationOptionsRank";
          case ExportableRDSDBField::InstanceRecommendationOptionsPerformanceRisk:
            return "InstanceRecommendationOptionsPerformanceRisk";
          case ExportableRDSDBField::InstanceRecommendationOptionsProjectedUtilizationMetricsCpuMaximum:
            return "InstanceRecommendationOptionsProjectedUtilizationMetricsCpuMaximum";
          case ExportableRDSDBField::StorageRecommendationOptionsStorageType:
            return "StorageRecommendationOptionsStorageType";
          case ExportableRDSDBField::StorageRecommendationOptionsAllocatedStorage:
            return "StorageRecommendationOptionsAllocatedStorage";
          case ExportableRDSDBField::StorageRecommendationOptionsMaxAllocatedStorage:
            return "StorageRecommendationOptionsMaxAllocatedStorage";
          case ExportableRDSDBField::StorageRecommendationOptionsIOPS:
            return "StorageRecommendationOptionsIOPS";
          case ExportableRDSDBField::StorageRecommendationOptionsStorageThroughput:
            return "StorageRecommendationOptionsStorageThroughput";
          case ExportableRDSDBField::StorageRecommendationOptionsRank:
            return "StorageRecommendationOptionsRank";
          case ExportableRDSDBField::StorageRecommendationOptionsEstimatedMonthlyVolumeIOPsCostVariation:
            return "StorageRecommendationOptionsEstimatedMonthlyVolumeIOPsCostVariation";
          case ExportableRDSDBField::InstanceRecommendationOptionsInstanceOnDemandHourlyPrice:
            return "InstanceRecommendationOptionsInstanceOnDemandHourlyPrice";
          case ExportableRDSDBField::InstanceRecommendationOptionsSavingsOpportunityPercentage:
            return "InstanceRecommendationOptionsSavingsOpportunityPercentage";
          case ExportableRDSDBField::InstanceRecommendationOptionsEstimatedMonthlySavingsCurrency:
            return "InstanceRecommendationOptionsEstimatedMonthlySavingsCurrency";
          case ExportableRDSDBField::InstanceRecommendationOptionsEstimatedMonthlySavingsValue:
            return "InstanceRecommendationOptionsEstimatedMonthlySavingsValue";
          case ExportableRDSDBField::InstanceRecommendationOptionsSavingsOpportunityAfterDiscountsPercentage:
            return "InstanceRecommendationOptionsSavingsOpportunityAfterDiscountsPercentage";
          case ExportableRDSDBField::InstanceRecommendationOptionsEstimatedMonthlySavingsCurrencyAfterDiscounts:
            return "InstanceRecommendationOptionsEstimatedMonthlySavingsCurrencyAfterDiscounts";
          case ExportableRDSDBField::InstanceRecommendationOptionsEstimatedMonthlySavingsValueAfterDiscounts:
            return "InstanceRecommendationOptionsEstimatedMonthlySavingsValueAfterDiscounts";
          case ExportableRDSDBField::StorageRecommendationOptionsOnDemandMonthlyPrice:
            return "StorageRecommendationOptionsOnDemandMonthlyPrice";
          case ExportableRDSDBField::StorageRecommendationOptionsEstimatedClusterInstanceOnDemandMonthlyCost:
            return "StorageRecommendationOptionsEstimatedClusterInstanceOnDemandMonthlyCost";
          case ExportableRDSDBField::StorageRecommendationOptionsEstimatedClusterStorageOnDemandMonthlyCost:
            return "StorageRecommendationOptionsEstimatedClusterStorageOnDemandMonthlyCost";
          case ExportableRDSDBField::StorageRecommendationOptionsEstimatedClusterStorageIOOnDemandMonthlyCost:
            return "StorageRecommendationOptionsEstimatedClusterStorageIOOnDemandMonthlyCost";
          case ExportableRDSDBField::StorageRecommendationOptionsSavingsOpportunityPercentage:
            return "StorageRecommendationOptionsSavingsOpportunityPercentage";
          case ExportableRDSDBField::StorageRecommendationOptionsEstimatedMonthlySavingsCurrency:
            return "StorageRecommendationOptionsEstimatedMonthlySavingsCurrency";
          case ExportableRDSDBField::StorageRecommendationOptionsEstimatedMonthlySavingsValue:
            return "StorageRecommendationOptionsEstimatedMonthlySavingsValue";
          case ExportableRDSDBField::StorageRecommendationOptionsSavingsOpportunityAfterDiscountsPercentage:
            return "StorageRecommendationOptionsSavingsOpportunityAfterDiscountsPercentage";
          case ExportableRDSDBField::StorageRecommendationOptionsEstimatedMonthlySavingsCurrencyAfterDiscounts:
            return "StorageRecommendationOptionsEstimatedMonthlySavingsCurrencyAfterDiscounts";
          case ExportableRDSDBField::StorageRecommendationOptionsEstimatedMonthlySavingsValueAfterDiscounts:
            return "StorageRecommendationOptionsEstimatedMonthlySavingsValueAfterDiscounts";
          case ExportableRDSDBField::EffectiveRecommendationPreferencesCpuVendorArchitectures:
            return "EffectiveRecommendationPreferencesCpuVendorArchitectures";
          case ExportableRDSDBField::EffectiveRecommendationPreferencesEnhancedInfrastructureMetrics:
            return "EffectiveRecommendationPreferencesEnhancedInfrastructureMetrics";
          case ExportableRDSDBField::EffectiveRecommendationPreferencesLookBackPeriod:
            return "EffectiveRecommendationPreferencesLookBackPeriod";
          case ExportableRDSDBField::EffectiveRecommendationPreferencesSavingsEstimationMode:
            return "EffectiveRecommendationPreferencesSavingsEstimationMode";
          case ExportableRDSDBField::LastRefreshTimestamp:
            return "LastRefreshTimestamp";
          case ExportableRDSDBField::Tags:
            return "Tags";
          case ExportableRDSDBField::DBClusterIdentifier:
            return "DBClusterIdentifier";
          case ExportableRDSDBField::PromotionTier:
            return "PromotionTier";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExportableRDSDBFieldMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
