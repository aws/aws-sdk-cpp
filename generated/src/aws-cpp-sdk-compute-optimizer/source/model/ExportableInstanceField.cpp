/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/ExportableInstanceField.h>
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
      namespace ExportableInstanceFieldMapper
      {

        static constexpr uint32_t AccountId_HASH = ConstExprHashingUtils::HashString("AccountId");
        static constexpr uint32_t InstanceArn_HASH = ConstExprHashingUtils::HashString("InstanceArn");
        static constexpr uint32_t InstanceName_HASH = ConstExprHashingUtils::HashString("InstanceName");
        static constexpr uint32_t Finding_HASH = ConstExprHashingUtils::HashString("Finding");
        static constexpr uint32_t FindingReasonCodes_HASH = ConstExprHashingUtils::HashString("FindingReasonCodes");
        static constexpr uint32_t LookbackPeriodInDays_HASH = ConstExprHashingUtils::HashString("LookbackPeriodInDays");
        static constexpr uint32_t CurrentInstanceType_HASH = ConstExprHashingUtils::HashString("CurrentInstanceType");
        static constexpr uint32_t UtilizationMetricsCpuMaximum_HASH = ConstExprHashingUtils::HashString("UtilizationMetricsCpuMaximum");
        static constexpr uint32_t UtilizationMetricsMemoryMaximum_HASH = ConstExprHashingUtils::HashString("UtilizationMetricsMemoryMaximum");
        static constexpr uint32_t UtilizationMetricsEbsReadOpsPerSecondMaximum_HASH = ConstExprHashingUtils::HashString("UtilizationMetricsEbsReadOpsPerSecondMaximum");
        static constexpr uint32_t UtilizationMetricsEbsWriteOpsPerSecondMaximum_HASH = ConstExprHashingUtils::HashString("UtilizationMetricsEbsWriteOpsPerSecondMaximum");
        static constexpr uint32_t UtilizationMetricsEbsReadBytesPerSecondMaximum_HASH = ConstExprHashingUtils::HashString("UtilizationMetricsEbsReadBytesPerSecondMaximum");
        static constexpr uint32_t UtilizationMetricsEbsWriteBytesPerSecondMaximum_HASH = ConstExprHashingUtils::HashString("UtilizationMetricsEbsWriteBytesPerSecondMaximum");
        static constexpr uint32_t UtilizationMetricsDiskReadOpsPerSecondMaximum_HASH = ConstExprHashingUtils::HashString("UtilizationMetricsDiskReadOpsPerSecondMaximum");
        static constexpr uint32_t UtilizationMetricsDiskWriteOpsPerSecondMaximum_HASH = ConstExprHashingUtils::HashString("UtilizationMetricsDiskWriteOpsPerSecondMaximum");
        static constexpr uint32_t UtilizationMetricsDiskReadBytesPerSecondMaximum_HASH = ConstExprHashingUtils::HashString("UtilizationMetricsDiskReadBytesPerSecondMaximum");
        static constexpr uint32_t UtilizationMetricsDiskWriteBytesPerSecondMaximum_HASH = ConstExprHashingUtils::HashString("UtilizationMetricsDiskWriteBytesPerSecondMaximum");
        static constexpr uint32_t UtilizationMetricsNetworkInBytesPerSecondMaximum_HASH = ConstExprHashingUtils::HashString("UtilizationMetricsNetworkInBytesPerSecondMaximum");
        static constexpr uint32_t UtilizationMetricsNetworkOutBytesPerSecondMaximum_HASH = ConstExprHashingUtils::HashString("UtilizationMetricsNetworkOutBytesPerSecondMaximum");
        static constexpr uint32_t UtilizationMetricsNetworkPacketsInPerSecondMaximum_HASH = ConstExprHashingUtils::HashString("UtilizationMetricsNetworkPacketsInPerSecondMaximum");
        static constexpr uint32_t UtilizationMetricsNetworkPacketsOutPerSecondMaximum_HASH = ConstExprHashingUtils::HashString("UtilizationMetricsNetworkPacketsOutPerSecondMaximum");
        static constexpr uint32_t CurrentOnDemandPrice_HASH = ConstExprHashingUtils::HashString("CurrentOnDemandPrice");
        static constexpr uint32_t CurrentStandardOneYearNoUpfrontReservedPrice_HASH = ConstExprHashingUtils::HashString("CurrentStandardOneYearNoUpfrontReservedPrice");
        static constexpr uint32_t CurrentStandardThreeYearNoUpfrontReservedPrice_HASH = ConstExprHashingUtils::HashString("CurrentStandardThreeYearNoUpfrontReservedPrice");
        static constexpr uint32_t CurrentVCpus_HASH = ConstExprHashingUtils::HashString("CurrentVCpus");
        static constexpr uint32_t CurrentMemory_HASH = ConstExprHashingUtils::HashString("CurrentMemory");
        static constexpr uint32_t CurrentStorage_HASH = ConstExprHashingUtils::HashString("CurrentStorage");
        static constexpr uint32_t CurrentNetwork_HASH = ConstExprHashingUtils::HashString("CurrentNetwork");
        static constexpr uint32_t RecommendationOptionsInstanceType_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsInstanceType");
        static constexpr uint32_t RecommendationOptionsProjectedUtilizationMetricsCpuMaximum_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsProjectedUtilizationMetricsCpuMaximum");
        static constexpr uint32_t RecommendationOptionsProjectedUtilizationMetricsMemoryMaximum_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsProjectedUtilizationMetricsMemoryMaximum");
        static constexpr uint32_t RecommendationOptionsPlatformDifferences_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsPlatformDifferences");
        static constexpr uint32_t RecommendationOptionsPerformanceRisk_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsPerformanceRisk");
        static constexpr uint32_t RecommendationOptionsVcpus_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsVcpus");
        static constexpr uint32_t RecommendationOptionsMemory_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsMemory");
        static constexpr uint32_t RecommendationOptionsStorage_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsStorage");
        static constexpr uint32_t RecommendationOptionsNetwork_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsNetwork");
        static constexpr uint32_t RecommendationOptionsOnDemandPrice_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsOnDemandPrice");
        static constexpr uint32_t RecommendationOptionsStandardOneYearNoUpfrontReservedPrice_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsStandardOneYearNoUpfrontReservedPrice");
        static constexpr uint32_t RecommendationOptionsStandardThreeYearNoUpfrontReservedPrice_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsStandardThreeYearNoUpfrontReservedPrice");
        static constexpr uint32_t RecommendationsSourcesRecommendationSourceArn_HASH = ConstExprHashingUtils::HashString("RecommendationsSourcesRecommendationSourceArn");
        static constexpr uint32_t RecommendationsSourcesRecommendationSourceType_HASH = ConstExprHashingUtils::HashString("RecommendationsSourcesRecommendationSourceType");
        static constexpr uint32_t LastRefreshTimestamp_HASH = ConstExprHashingUtils::HashString("LastRefreshTimestamp");
        static constexpr uint32_t CurrentPerformanceRisk_HASH = ConstExprHashingUtils::HashString("CurrentPerformanceRisk");
        static constexpr uint32_t RecommendationOptionsSavingsOpportunityPercentage_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsSavingsOpportunityPercentage");
        static constexpr uint32_t RecommendationOptionsEstimatedMonthlySavingsCurrency_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsEstimatedMonthlySavingsCurrency");
        static constexpr uint32_t RecommendationOptionsEstimatedMonthlySavingsValue_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsEstimatedMonthlySavingsValue");
        static constexpr uint32_t EffectiveRecommendationPreferencesCpuVendorArchitectures_HASH = ConstExprHashingUtils::HashString("EffectiveRecommendationPreferencesCpuVendorArchitectures");
        static constexpr uint32_t EffectiveRecommendationPreferencesEnhancedInfrastructureMetrics_HASH = ConstExprHashingUtils::HashString("EffectiveRecommendationPreferencesEnhancedInfrastructureMetrics");
        static constexpr uint32_t EffectiveRecommendationPreferencesInferredWorkloadTypes_HASH = ConstExprHashingUtils::HashString("EffectiveRecommendationPreferencesInferredWorkloadTypes");
        static constexpr uint32_t InferredWorkloadTypes_HASH = ConstExprHashingUtils::HashString("InferredWorkloadTypes");
        static constexpr uint32_t RecommendationOptionsMigrationEffort_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsMigrationEffort");
        static constexpr uint32_t EffectiveRecommendationPreferencesExternalMetricsSource_HASH = ConstExprHashingUtils::HashString("EffectiveRecommendationPreferencesExternalMetricsSource");
        static constexpr uint32_t InstanceState_HASH = ConstExprHashingUtils::HashString("InstanceState");
        static constexpr uint32_t Tags_HASH = ConstExprHashingUtils::HashString("Tags");
        static constexpr uint32_t ExternalMetricStatusCode_HASH = ConstExprHashingUtils::HashString("ExternalMetricStatusCode");
        static constexpr uint32_t ExternalMetricStatusReason_HASH = ConstExprHashingUtils::HashString("ExternalMetricStatusReason");
        static constexpr uint32_t CurrentInstanceGpuInfo_HASH = ConstExprHashingUtils::HashString("CurrentInstanceGpuInfo");
        static constexpr uint32_t RecommendationOptionsInstanceGpuInfo_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsInstanceGpuInfo");
        static constexpr uint32_t UtilizationMetricsGpuPercentageMaximum_HASH = ConstExprHashingUtils::HashString("UtilizationMetricsGpuPercentageMaximum");
        static constexpr uint32_t UtilizationMetricsGpuMemoryPercentageMaximum_HASH = ConstExprHashingUtils::HashString("UtilizationMetricsGpuMemoryPercentageMaximum");
        static constexpr uint32_t RecommendationOptionsProjectedUtilizationMetricsGpuPercentageMaximum_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsProjectedUtilizationMetricsGpuPercentageMaximum");
        static constexpr uint32_t RecommendationOptionsProjectedUtilizationMetricsGpuMemoryPercentageMaximum_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsProjectedUtilizationMetricsGpuMemoryPercentageMaximum");
        static constexpr uint32_t Idle_HASH = ConstExprHashingUtils::HashString("Idle");


        ExportableInstanceField GetExportableInstanceFieldForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AccountId_HASH)
          {
            return ExportableInstanceField::AccountId;
          }
          else if (hashCode == InstanceArn_HASH)
          {
            return ExportableInstanceField::InstanceArn;
          }
          else if (hashCode == InstanceName_HASH)
          {
            return ExportableInstanceField::InstanceName;
          }
          else if (hashCode == Finding_HASH)
          {
            return ExportableInstanceField::Finding;
          }
          else if (hashCode == FindingReasonCodes_HASH)
          {
            return ExportableInstanceField::FindingReasonCodes;
          }
          else if (hashCode == LookbackPeriodInDays_HASH)
          {
            return ExportableInstanceField::LookbackPeriodInDays;
          }
          else if (hashCode == CurrentInstanceType_HASH)
          {
            return ExportableInstanceField::CurrentInstanceType;
          }
          else if (hashCode == UtilizationMetricsCpuMaximum_HASH)
          {
            return ExportableInstanceField::UtilizationMetricsCpuMaximum;
          }
          else if (hashCode == UtilizationMetricsMemoryMaximum_HASH)
          {
            return ExportableInstanceField::UtilizationMetricsMemoryMaximum;
          }
          else if (hashCode == UtilizationMetricsEbsReadOpsPerSecondMaximum_HASH)
          {
            return ExportableInstanceField::UtilizationMetricsEbsReadOpsPerSecondMaximum;
          }
          else if (hashCode == UtilizationMetricsEbsWriteOpsPerSecondMaximum_HASH)
          {
            return ExportableInstanceField::UtilizationMetricsEbsWriteOpsPerSecondMaximum;
          }
          else if (hashCode == UtilizationMetricsEbsReadBytesPerSecondMaximum_HASH)
          {
            return ExportableInstanceField::UtilizationMetricsEbsReadBytesPerSecondMaximum;
          }
          else if (hashCode == UtilizationMetricsEbsWriteBytesPerSecondMaximum_HASH)
          {
            return ExportableInstanceField::UtilizationMetricsEbsWriteBytesPerSecondMaximum;
          }
          else if (hashCode == UtilizationMetricsDiskReadOpsPerSecondMaximum_HASH)
          {
            return ExportableInstanceField::UtilizationMetricsDiskReadOpsPerSecondMaximum;
          }
          else if (hashCode == UtilizationMetricsDiskWriteOpsPerSecondMaximum_HASH)
          {
            return ExportableInstanceField::UtilizationMetricsDiskWriteOpsPerSecondMaximum;
          }
          else if (hashCode == UtilizationMetricsDiskReadBytesPerSecondMaximum_HASH)
          {
            return ExportableInstanceField::UtilizationMetricsDiskReadBytesPerSecondMaximum;
          }
          else if (hashCode == UtilizationMetricsDiskWriteBytesPerSecondMaximum_HASH)
          {
            return ExportableInstanceField::UtilizationMetricsDiskWriteBytesPerSecondMaximum;
          }
          else if (hashCode == UtilizationMetricsNetworkInBytesPerSecondMaximum_HASH)
          {
            return ExportableInstanceField::UtilizationMetricsNetworkInBytesPerSecondMaximum;
          }
          else if (hashCode == UtilizationMetricsNetworkOutBytesPerSecondMaximum_HASH)
          {
            return ExportableInstanceField::UtilizationMetricsNetworkOutBytesPerSecondMaximum;
          }
          else if (hashCode == UtilizationMetricsNetworkPacketsInPerSecondMaximum_HASH)
          {
            return ExportableInstanceField::UtilizationMetricsNetworkPacketsInPerSecondMaximum;
          }
          else if (hashCode == UtilizationMetricsNetworkPacketsOutPerSecondMaximum_HASH)
          {
            return ExportableInstanceField::UtilizationMetricsNetworkPacketsOutPerSecondMaximum;
          }
          else if (hashCode == CurrentOnDemandPrice_HASH)
          {
            return ExportableInstanceField::CurrentOnDemandPrice;
          }
          else if (hashCode == CurrentStandardOneYearNoUpfrontReservedPrice_HASH)
          {
            return ExportableInstanceField::CurrentStandardOneYearNoUpfrontReservedPrice;
          }
          else if (hashCode == CurrentStandardThreeYearNoUpfrontReservedPrice_HASH)
          {
            return ExportableInstanceField::CurrentStandardThreeYearNoUpfrontReservedPrice;
          }
          else if (hashCode == CurrentVCpus_HASH)
          {
            return ExportableInstanceField::CurrentVCpus;
          }
          else if (hashCode == CurrentMemory_HASH)
          {
            return ExportableInstanceField::CurrentMemory;
          }
          else if (hashCode == CurrentStorage_HASH)
          {
            return ExportableInstanceField::CurrentStorage;
          }
          else if (hashCode == CurrentNetwork_HASH)
          {
            return ExportableInstanceField::CurrentNetwork;
          }
          else if (hashCode == RecommendationOptionsInstanceType_HASH)
          {
            return ExportableInstanceField::RecommendationOptionsInstanceType;
          }
          else if (hashCode == RecommendationOptionsProjectedUtilizationMetricsCpuMaximum_HASH)
          {
            return ExportableInstanceField::RecommendationOptionsProjectedUtilizationMetricsCpuMaximum;
          }
          else if (hashCode == RecommendationOptionsProjectedUtilizationMetricsMemoryMaximum_HASH)
          {
            return ExportableInstanceField::RecommendationOptionsProjectedUtilizationMetricsMemoryMaximum;
          }
          else if (hashCode == RecommendationOptionsPlatformDifferences_HASH)
          {
            return ExportableInstanceField::RecommendationOptionsPlatformDifferences;
          }
          else if (hashCode == RecommendationOptionsPerformanceRisk_HASH)
          {
            return ExportableInstanceField::RecommendationOptionsPerformanceRisk;
          }
          else if (hashCode == RecommendationOptionsVcpus_HASH)
          {
            return ExportableInstanceField::RecommendationOptionsVcpus;
          }
          else if (hashCode == RecommendationOptionsMemory_HASH)
          {
            return ExportableInstanceField::RecommendationOptionsMemory;
          }
          else if (hashCode == RecommendationOptionsStorage_HASH)
          {
            return ExportableInstanceField::RecommendationOptionsStorage;
          }
          else if (hashCode == RecommendationOptionsNetwork_HASH)
          {
            return ExportableInstanceField::RecommendationOptionsNetwork;
          }
          else if (hashCode == RecommendationOptionsOnDemandPrice_HASH)
          {
            return ExportableInstanceField::RecommendationOptionsOnDemandPrice;
          }
          else if (hashCode == RecommendationOptionsStandardOneYearNoUpfrontReservedPrice_HASH)
          {
            return ExportableInstanceField::RecommendationOptionsStandardOneYearNoUpfrontReservedPrice;
          }
          else if (hashCode == RecommendationOptionsStandardThreeYearNoUpfrontReservedPrice_HASH)
          {
            return ExportableInstanceField::RecommendationOptionsStandardThreeYearNoUpfrontReservedPrice;
          }
          else if (hashCode == RecommendationsSourcesRecommendationSourceArn_HASH)
          {
            return ExportableInstanceField::RecommendationsSourcesRecommendationSourceArn;
          }
          else if (hashCode == RecommendationsSourcesRecommendationSourceType_HASH)
          {
            return ExportableInstanceField::RecommendationsSourcesRecommendationSourceType;
          }
          else if (hashCode == LastRefreshTimestamp_HASH)
          {
            return ExportableInstanceField::LastRefreshTimestamp;
          }
          else if (hashCode == CurrentPerformanceRisk_HASH)
          {
            return ExportableInstanceField::CurrentPerformanceRisk;
          }
          else if (hashCode == RecommendationOptionsSavingsOpportunityPercentage_HASH)
          {
            return ExportableInstanceField::RecommendationOptionsSavingsOpportunityPercentage;
          }
          else if (hashCode == RecommendationOptionsEstimatedMonthlySavingsCurrency_HASH)
          {
            return ExportableInstanceField::RecommendationOptionsEstimatedMonthlySavingsCurrency;
          }
          else if (hashCode == RecommendationOptionsEstimatedMonthlySavingsValue_HASH)
          {
            return ExportableInstanceField::RecommendationOptionsEstimatedMonthlySavingsValue;
          }
          else if (hashCode == EffectiveRecommendationPreferencesCpuVendorArchitectures_HASH)
          {
            return ExportableInstanceField::EffectiveRecommendationPreferencesCpuVendorArchitectures;
          }
          else if (hashCode == EffectiveRecommendationPreferencesEnhancedInfrastructureMetrics_HASH)
          {
            return ExportableInstanceField::EffectiveRecommendationPreferencesEnhancedInfrastructureMetrics;
          }
          else if (hashCode == EffectiveRecommendationPreferencesInferredWorkloadTypes_HASH)
          {
            return ExportableInstanceField::EffectiveRecommendationPreferencesInferredWorkloadTypes;
          }
          else if (hashCode == InferredWorkloadTypes_HASH)
          {
            return ExportableInstanceField::InferredWorkloadTypes;
          }
          else if (hashCode == RecommendationOptionsMigrationEffort_HASH)
          {
            return ExportableInstanceField::RecommendationOptionsMigrationEffort;
          }
          else if (hashCode == EffectiveRecommendationPreferencesExternalMetricsSource_HASH)
          {
            return ExportableInstanceField::EffectiveRecommendationPreferencesExternalMetricsSource;
          }
          else if (hashCode == InstanceState_HASH)
          {
            return ExportableInstanceField::InstanceState;
          }
          else if (hashCode == Tags_HASH)
          {
            return ExportableInstanceField::Tags;
          }
          else if (hashCode == ExternalMetricStatusCode_HASH)
          {
            return ExportableInstanceField::ExternalMetricStatusCode;
          }
          else if (hashCode == ExternalMetricStatusReason_HASH)
          {
            return ExportableInstanceField::ExternalMetricStatusReason;
          }
          else if (hashCode == CurrentInstanceGpuInfo_HASH)
          {
            return ExportableInstanceField::CurrentInstanceGpuInfo;
          }
          else if (hashCode == RecommendationOptionsInstanceGpuInfo_HASH)
          {
            return ExportableInstanceField::RecommendationOptionsInstanceGpuInfo;
          }
          else if (hashCode == UtilizationMetricsGpuPercentageMaximum_HASH)
          {
            return ExportableInstanceField::UtilizationMetricsGpuPercentageMaximum;
          }
          else if (hashCode == UtilizationMetricsGpuMemoryPercentageMaximum_HASH)
          {
            return ExportableInstanceField::UtilizationMetricsGpuMemoryPercentageMaximum;
          }
          else if (hashCode == RecommendationOptionsProjectedUtilizationMetricsGpuPercentageMaximum_HASH)
          {
            return ExportableInstanceField::RecommendationOptionsProjectedUtilizationMetricsGpuPercentageMaximum;
          }
          else if (hashCode == RecommendationOptionsProjectedUtilizationMetricsGpuMemoryPercentageMaximum_HASH)
          {
            return ExportableInstanceField::RecommendationOptionsProjectedUtilizationMetricsGpuMemoryPercentageMaximum;
          }
          else if (hashCode == Idle_HASH)
          {
            return ExportableInstanceField::Idle;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExportableInstanceField>(hashCode);
          }

          return ExportableInstanceField::NOT_SET;
        }

        Aws::String GetNameForExportableInstanceField(ExportableInstanceField enumValue)
        {
          switch(enumValue)
          {
          case ExportableInstanceField::NOT_SET:
            return {};
          case ExportableInstanceField::AccountId:
            return "AccountId";
          case ExportableInstanceField::InstanceArn:
            return "InstanceArn";
          case ExportableInstanceField::InstanceName:
            return "InstanceName";
          case ExportableInstanceField::Finding:
            return "Finding";
          case ExportableInstanceField::FindingReasonCodes:
            return "FindingReasonCodes";
          case ExportableInstanceField::LookbackPeriodInDays:
            return "LookbackPeriodInDays";
          case ExportableInstanceField::CurrentInstanceType:
            return "CurrentInstanceType";
          case ExportableInstanceField::UtilizationMetricsCpuMaximum:
            return "UtilizationMetricsCpuMaximum";
          case ExportableInstanceField::UtilizationMetricsMemoryMaximum:
            return "UtilizationMetricsMemoryMaximum";
          case ExportableInstanceField::UtilizationMetricsEbsReadOpsPerSecondMaximum:
            return "UtilizationMetricsEbsReadOpsPerSecondMaximum";
          case ExportableInstanceField::UtilizationMetricsEbsWriteOpsPerSecondMaximum:
            return "UtilizationMetricsEbsWriteOpsPerSecondMaximum";
          case ExportableInstanceField::UtilizationMetricsEbsReadBytesPerSecondMaximum:
            return "UtilizationMetricsEbsReadBytesPerSecondMaximum";
          case ExportableInstanceField::UtilizationMetricsEbsWriteBytesPerSecondMaximum:
            return "UtilizationMetricsEbsWriteBytesPerSecondMaximum";
          case ExportableInstanceField::UtilizationMetricsDiskReadOpsPerSecondMaximum:
            return "UtilizationMetricsDiskReadOpsPerSecondMaximum";
          case ExportableInstanceField::UtilizationMetricsDiskWriteOpsPerSecondMaximum:
            return "UtilizationMetricsDiskWriteOpsPerSecondMaximum";
          case ExportableInstanceField::UtilizationMetricsDiskReadBytesPerSecondMaximum:
            return "UtilizationMetricsDiskReadBytesPerSecondMaximum";
          case ExportableInstanceField::UtilizationMetricsDiskWriteBytesPerSecondMaximum:
            return "UtilizationMetricsDiskWriteBytesPerSecondMaximum";
          case ExportableInstanceField::UtilizationMetricsNetworkInBytesPerSecondMaximum:
            return "UtilizationMetricsNetworkInBytesPerSecondMaximum";
          case ExportableInstanceField::UtilizationMetricsNetworkOutBytesPerSecondMaximum:
            return "UtilizationMetricsNetworkOutBytesPerSecondMaximum";
          case ExportableInstanceField::UtilizationMetricsNetworkPacketsInPerSecondMaximum:
            return "UtilizationMetricsNetworkPacketsInPerSecondMaximum";
          case ExportableInstanceField::UtilizationMetricsNetworkPacketsOutPerSecondMaximum:
            return "UtilizationMetricsNetworkPacketsOutPerSecondMaximum";
          case ExportableInstanceField::CurrentOnDemandPrice:
            return "CurrentOnDemandPrice";
          case ExportableInstanceField::CurrentStandardOneYearNoUpfrontReservedPrice:
            return "CurrentStandardOneYearNoUpfrontReservedPrice";
          case ExportableInstanceField::CurrentStandardThreeYearNoUpfrontReservedPrice:
            return "CurrentStandardThreeYearNoUpfrontReservedPrice";
          case ExportableInstanceField::CurrentVCpus:
            return "CurrentVCpus";
          case ExportableInstanceField::CurrentMemory:
            return "CurrentMemory";
          case ExportableInstanceField::CurrentStorage:
            return "CurrentStorage";
          case ExportableInstanceField::CurrentNetwork:
            return "CurrentNetwork";
          case ExportableInstanceField::RecommendationOptionsInstanceType:
            return "RecommendationOptionsInstanceType";
          case ExportableInstanceField::RecommendationOptionsProjectedUtilizationMetricsCpuMaximum:
            return "RecommendationOptionsProjectedUtilizationMetricsCpuMaximum";
          case ExportableInstanceField::RecommendationOptionsProjectedUtilizationMetricsMemoryMaximum:
            return "RecommendationOptionsProjectedUtilizationMetricsMemoryMaximum";
          case ExportableInstanceField::RecommendationOptionsPlatformDifferences:
            return "RecommendationOptionsPlatformDifferences";
          case ExportableInstanceField::RecommendationOptionsPerformanceRisk:
            return "RecommendationOptionsPerformanceRisk";
          case ExportableInstanceField::RecommendationOptionsVcpus:
            return "RecommendationOptionsVcpus";
          case ExportableInstanceField::RecommendationOptionsMemory:
            return "RecommendationOptionsMemory";
          case ExportableInstanceField::RecommendationOptionsStorage:
            return "RecommendationOptionsStorage";
          case ExportableInstanceField::RecommendationOptionsNetwork:
            return "RecommendationOptionsNetwork";
          case ExportableInstanceField::RecommendationOptionsOnDemandPrice:
            return "RecommendationOptionsOnDemandPrice";
          case ExportableInstanceField::RecommendationOptionsStandardOneYearNoUpfrontReservedPrice:
            return "RecommendationOptionsStandardOneYearNoUpfrontReservedPrice";
          case ExportableInstanceField::RecommendationOptionsStandardThreeYearNoUpfrontReservedPrice:
            return "RecommendationOptionsStandardThreeYearNoUpfrontReservedPrice";
          case ExportableInstanceField::RecommendationsSourcesRecommendationSourceArn:
            return "RecommendationsSourcesRecommendationSourceArn";
          case ExportableInstanceField::RecommendationsSourcesRecommendationSourceType:
            return "RecommendationsSourcesRecommendationSourceType";
          case ExportableInstanceField::LastRefreshTimestamp:
            return "LastRefreshTimestamp";
          case ExportableInstanceField::CurrentPerformanceRisk:
            return "CurrentPerformanceRisk";
          case ExportableInstanceField::RecommendationOptionsSavingsOpportunityPercentage:
            return "RecommendationOptionsSavingsOpportunityPercentage";
          case ExportableInstanceField::RecommendationOptionsEstimatedMonthlySavingsCurrency:
            return "RecommendationOptionsEstimatedMonthlySavingsCurrency";
          case ExportableInstanceField::RecommendationOptionsEstimatedMonthlySavingsValue:
            return "RecommendationOptionsEstimatedMonthlySavingsValue";
          case ExportableInstanceField::EffectiveRecommendationPreferencesCpuVendorArchitectures:
            return "EffectiveRecommendationPreferencesCpuVendorArchitectures";
          case ExportableInstanceField::EffectiveRecommendationPreferencesEnhancedInfrastructureMetrics:
            return "EffectiveRecommendationPreferencesEnhancedInfrastructureMetrics";
          case ExportableInstanceField::EffectiveRecommendationPreferencesInferredWorkloadTypes:
            return "EffectiveRecommendationPreferencesInferredWorkloadTypes";
          case ExportableInstanceField::InferredWorkloadTypes:
            return "InferredWorkloadTypes";
          case ExportableInstanceField::RecommendationOptionsMigrationEffort:
            return "RecommendationOptionsMigrationEffort";
          case ExportableInstanceField::EffectiveRecommendationPreferencesExternalMetricsSource:
            return "EffectiveRecommendationPreferencesExternalMetricsSource";
          case ExportableInstanceField::InstanceState:
            return "InstanceState";
          case ExportableInstanceField::Tags:
            return "Tags";
          case ExportableInstanceField::ExternalMetricStatusCode:
            return "ExternalMetricStatusCode";
          case ExportableInstanceField::ExternalMetricStatusReason:
            return "ExternalMetricStatusReason";
          case ExportableInstanceField::CurrentInstanceGpuInfo:
            return "CurrentInstanceGpuInfo";
          case ExportableInstanceField::RecommendationOptionsInstanceGpuInfo:
            return "RecommendationOptionsInstanceGpuInfo";
          case ExportableInstanceField::UtilizationMetricsGpuPercentageMaximum:
            return "UtilizationMetricsGpuPercentageMaximum";
          case ExportableInstanceField::UtilizationMetricsGpuMemoryPercentageMaximum:
            return "UtilizationMetricsGpuMemoryPercentageMaximum";
          case ExportableInstanceField::RecommendationOptionsProjectedUtilizationMetricsGpuPercentageMaximum:
            return "RecommendationOptionsProjectedUtilizationMetricsGpuPercentageMaximum";
          case ExportableInstanceField::RecommendationOptionsProjectedUtilizationMetricsGpuMemoryPercentageMaximum:
            return "RecommendationOptionsProjectedUtilizationMetricsGpuMemoryPercentageMaximum";
          case ExportableInstanceField::Idle:
            return "Idle";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExportableInstanceFieldMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
