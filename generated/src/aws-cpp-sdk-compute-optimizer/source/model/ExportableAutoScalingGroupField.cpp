/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/ExportableAutoScalingGroupField.h>
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
      namespace ExportableAutoScalingGroupFieldMapper
      {

        static constexpr uint32_t AccountId_HASH = ConstExprHashingUtils::HashString("AccountId");
        static constexpr uint32_t AutoScalingGroupArn_HASH = ConstExprHashingUtils::HashString("AutoScalingGroupArn");
        static constexpr uint32_t AutoScalingGroupName_HASH = ConstExprHashingUtils::HashString("AutoScalingGroupName");
        static constexpr uint32_t Finding_HASH = ConstExprHashingUtils::HashString("Finding");
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
        static constexpr uint32_t LookbackPeriodInDays_HASH = ConstExprHashingUtils::HashString("LookbackPeriodInDays");
        static constexpr uint32_t CurrentConfigurationInstanceType_HASH = ConstExprHashingUtils::HashString("CurrentConfigurationInstanceType");
        static constexpr uint32_t CurrentConfigurationDesiredCapacity_HASH = ConstExprHashingUtils::HashString("CurrentConfigurationDesiredCapacity");
        static constexpr uint32_t CurrentConfigurationMinSize_HASH = ConstExprHashingUtils::HashString("CurrentConfigurationMinSize");
        static constexpr uint32_t CurrentConfigurationMaxSize_HASH = ConstExprHashingUtils::HashString("CurrentConfigurationMaxSize");
        static constexpr uint32_t CurrentOnDemandPrice_HASH = ConstExprHashingUtils::HashString("CurrentOnDemandPrice");
        static constexpr uint32_t CurrentStandardOneYearNoUpfrontReservedPrice_HASH = ConstExprHashingUtils::HashString("CurrentStandardOneYearNoUpfrontReservedPrice");
        static constexpr uint32_t CurrentStandardThreeYearNoUpfrontReservedPrice_HASH = ConstExprHashingUtils::HashString("CurrentStandardThreeYearNoUpfrontReservedPrice");
        static constexpr uint32_t CurrentVCpus_HASH = ConstExprHashingUtils::HashString("CurrentVCpus");
        static constexpr uint32_t CurrentMemory_HASH = ConstExprHashingUtils::HashString("CurrentMemory");
        static constexpr uint32_t CurrentStorage_HASH = ConstExprHashingUtils::HashString("CurrentStorage");
        static constexpr uint32_t CurrentNetwork_HASH = ConstExprHashingUtils::HashString("CurrentNetwork");
        static constexpr uint32_t RecommendationOptionsConfigurationInstanceType_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsConfigurationInstanceType");
        static constexpr uint32_t RecommendationOptionsConfigurationDesiredCapacity_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsConfigurationDesiredCapacity");
        static constexpr uint32_t RecommendationOptionsConfigurationMinSize_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsConfigurationMinSize");
        static constexpr uint32_t RecommendationOptionsConfigurationMaxSize_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsConfigurationMaxSize");
        static constexpr uint32_t RecommendationOptionsProjectedUtilizationMetricsCpuMaximum_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsProjectedUtilizationMetricsCpuMaximum");
        static constexpr uint32_t RecommendationOptionsProjectedUtilizationMetricsMemoryMaximum_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsProjectedUtilizationMetricsMemoryMaximum");
        static constexpr uint32_t RecommendationOptionsPerformanceRisk_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsPerformanceRisk");
        static constexpr uint32_t RecommendationOptionsOnDemandPrice_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsOnDemandPrice");
        static constexpr uint32_t RecommendationOptionsStandardOneYearNoUpfrontReservedPrice_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsStandardOneYearNoUpfrontReservedPrice");
        static constexpr uint32_t RecommendationOptionsStandardThreeYearNoUpfrontReservedPrice_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsStandardThreeYearNoUpfrontReservedPrice");
        static constexpr uint32_t RecommendationOptionsVcpus_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsVcpus");
        static constexpr uint32_t RecommendationOptionsMemory_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsMemory");
        static constexpr uint32_t RecommendationOptionsStorage_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsStorage");
        static constexpr uint32_t RecommendationOptionsNetwork_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsNetwork");
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
        static constexpr uint32_t CurrentInstanceGpuInfo_HASH = ConstExprHashingUtils::HashString("CurrentInstanceGpuInfo");
        static constexpr uint32_t RecommendationOptionsInstanceGpuInfo_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsInstanceGpuInfo");
        static constexpr uint32_t UtilizationMetricsGpuPercentageMaximum_HASH = ConstExprHashingUtils::HashString("UtilizationMetricsGpuPercentageMaximum");
        static constexpr uint32_t UtilizationMetricsGpuMemoryPercentageMaximum_HASH = ConstExprHashingUtils::HashString("UtilizationMetricsGpuMemoryPercentageMaximum");
        static constexpr uint32_t RecommendationOptionsProjectedUtilizationMetricsGpuPercentageMaximum_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsProjectedUtilizationMetricsGpuPercentageMaximum");
        static constexpr uint32_t RecommendationOptionsProjectedUtilizationMetricsGpuMemoryPercentageMaximum_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsProjectedUtilizationMetricsGpuMemoryPercentageMaximum");


        ExportableAutoScalingGroupField GetExportableAutoScalingGroupFieldForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AccountId_HASH)
          {
            return ExportableAutoScalingGroupField::AccountId;
          }
          else if (hashCode == AutoScalingGroupArn_HASH)
          {
            return ExportableAutoScalingGroupField::AutoScalingGroupArn;
          }
          else if (hashCode == AutoScalingGroupName_HASH)
          {
            return ExportableAutoScalingGroupField::AutoScalingGroupName;
          }
          else if (hashCode == Finding_HASH)
          {
            return ExportableAutoScalingGroupField::Finding;
          }
          else if (hashCode == UtilizationMetricsCpuMaximum_HASH)
          {
            return ExportableAutoScalingGroupField::UtilizationMetricsCpuMaximum;
          }
          else if (hashCode == UtilizationMetricsMemoryMaximum_HASH)
          {
            return ExportableAutoScalingGroupField::UtilizationMetricsMemoryMaximum;
          }
          else if (hashCode == UtilizationMetricsEbsReadOpsPerSecondMaximum_HASH)
          {
            return ExportableAutoScalingGroupField::UtilizationMetricsEbsReadOpsPerSecondMaximum;
          }
          else if (hashCode == UtilizationMetricsEbsWriteOpsPerSecondMaximum_HASH)
          {
            return ExportableAutoScalingGroupField::UtilizationMetricsEbsWriteOpsPerSecondMaximum;
          }
          else if (hashCode == UtilizationMetricsEbsReadBytesPerSecondMaximum_HASH)
          {
            return ExportableAutoScalingGroupField::UtilizationMetricsEbsReadBytesPerSecondMaximum;
          }
          else if (hashCode == UtilizationMetricsEbsWriteBytesPerSecondMaximum_HASH)
          {
            return ExportableAutoScalingGroupField::UtilizationMetricsEbsWriteBytesPerSecondMaximum;
          }
          else if (hashCode == UtilizationMetricsDiskReadOpsPerSecondMaximum_HASH)
          {
            return ExportableAutoScalingGroupField::UtilizationMetricsDiskReadOpsPerSecondMaximum;
          }
          else if (hashCode == UtilizationMetricsDiskWriteOpsPerSecondMaximum_HASH)
          {
            return ExportableAutoScalingGroupField::UtilizationMetricsDiskWriteOpsPerSecondMaximum;
          }
          else if (hashCode == UtilizationMetricsDiskReadBytesPerSecondMaximum_HASH)
          {
            return ExportableAutoScalingGroupField::UtilizationMetricsDiskReadBytesPerSecondMaximum;
          }
          else if (hashCode == UtilizationMetricsDiskWriteBytesPerSecondMaximum_HASH)
          {
            return ExportableAutoScalingGroupField::UtilizationMetricsDiskWriteBytesPerSecondMaximum;
          }
          else if (hashCode == UtilizationMetricsNetworkInBytesPerSecondMaximum_HASH)
          {
            return ExportableAutoScalingGroupField::UtilizationMetricsNetworkInBytesPerSecondMaximum;
          }
          else if (hashCode == UtilizationMetricsNetworkOutBytesPerSecondMaximum_HASH)
          {
            return ExportableAutoScalingGroupField::UtilizationMetricsNetworkOutBytesPerSecondMaximum;
          }
          else if (hashCode == UtilizationMetricsNetworkPacketsInPerSecondMaximum_HASH)
          {
            return ExportableAutoScalingGroupField::UtilizationMetricsNetworkPacketsInPerSecondMaximum;
          }
          else if (hashCode == UtilizationMetricsNetworkPacketsOutPerSecondMaximum_HASH)
          {
            return ExportableAutoScalingGroupField::UtilizationMetricsNetworkPacketsOutPerSecondMaximum;
          }
          else if (hashCode == LookbackPeriodInDays_HASH)
          {
            return ExportableAutoScalingGroupField::LookbackPeriodInDays;
          }
          else if (hashCode == CurrentConfigurationInstanceType_HASH)
          {
            return ExportableAutoScalingGroupField::CurrentConfigurationInstanceType;
          }
          else if (hashCode == CurrentConfigurationDesiredCapacity_HASH)
          {
            return ExportableAutoScalingGroupField::CurrentConfigurationDesiredCapacity;
          }
          else if (hashCode == CurrentConfigurationMinSize_HASH)
          {
            return ExportableAutoScalingGroupField::CurrentConfigurationMinSize;
          }
          else if (hashCode == CurrentConfigurationMaxSize_HASH)
          {
            return ExportableAutoScalingGroupField::CurrentConfigurationMaxSize;
          }
          else if (hashCode == CurrentOnDemandPrice_HASH)
          {
            return ExportableAutoScalingGroupField::CurrentOnDemandPrice;
          }
          else if (hashCode == CurrentStandardOneYearNoUpfrontReservedPrice_HASH)
          {
            return ExportableAutoScalingGroupField::CurrentStandardOneYearNoUpfrontReservedPrice;
          }
          else if (hashCode == CurrentStandardThreeYearNoUpfrontReservedPrice_HASH)
          {
            return ExportableAutoScalingGroupField::CurrentStandardThreeYearNoUpfrontReservedPrice;
          }
          else if (hashCode == CurrentVCpus_HASH)
          {
            return ExportableAutoScalingGroupField::CurrentVCpus;
          }
          else if (hashCode == CurrentMemory_HASH)
          {
            return ExportableAutoScalingGroupField::CurrentMemory;
          }
          else if (hashCode == CurrentStorage_HASH)
          {
            return ExportableAutoScalingGroupField::CurrentStorage;
          }
          else if (hashCode == CurrentNetwork_HASH)
          {
            return ExportableAutoScalingGroupField::CurrentNetwork;
          }
          else if (hashCode == RecommendationOptionsConfigurationInstanceType_HASH)
          {
            return ExportableAutoScalingGroupField::RecommendationOptionsConfigurationInstanceType;
          }
          else if (hashCode == RecommendationOptionsConfigurationDesiredCapacity_HASH)
          {
            return ExportableAutoScalingGroupField::RecommendationOptionsConfigurationDesiredCapacity;
          }
          else if (hashCode == RecommendationOptionsConfigurationMinSize_HASH)
          {
            return ExportableAutoScalingGroupField::RecommendationOptionsConfigurationMinSize;
          }
          else if (hashCode == RecommendationOptionsConfigurationMaxSize_HASH)
          {
            return ExportableAutoScalingGroupField::RecommendationOptionsConfigurationMaxSize;
          }
          else if (hashCode == RecommendationOptionsProjectedUtilizationMetricsCpuMaximum_HASH)
          {
            return ExportableAutoScalingGroupField::RecommendationOptionsProjectedUtilizationMetricsCpuMaximum;
          }
          else if (hashCode == RecommendationOptionsProjectedUtilizationMetricsMemoryMaximum_HASH)
          {
            return ExportableAutoScalingGroupField::RecommendationOptionsProjectedUtilizationMetricsMemoryMaximum;
          }
          else if (hashCode == RecommendationOptionsPerformanceRisk_HASH)
          {
            return ExportableAutoScalingGroupField::RecommendationOptionsPerformanceRisk;
          }
          else if (hashCode == RecommendationOptionsOnDemandPrice_HASH)
          {
            return ExportableAutoScalingGroupField::RecommendationOptionsOnDemandPrice;
          }
          else if (hashCode == RecommendationOptionsStandardOneYearNoUpfrontReservedPrice_HASH)
          {
            return ExportableAutoScalingGroupField::RecommendationOptionsStandardOneYearNoUpfrontReservedPrice;
          }
          else if (hashCode == RecommendationOptionsStandardThreeYearNoUpfrontReservedPrice_HASH)
          {
            return ExportableAutoScalingGroupField::RecommendationOptionsStandardThreeYearNoUpfrontReservedPrice;
          }
          else if (hashCode == RecommendationOptionsVcpus_HASH)
          {
            return ExportableAutoScalingGroupField::RecommendationOptionsVcpus;
          }
          else if (hashCode == RecommendationOptionsMemory_HASH)
          {
            return ExportableAutoScalingGroupField::RecommendationOptionsMemory;
          }
          else if (hashCode == RecommendationOptionsStorage_HASH)
          {
            return ExportableAutoScalingGroupField::RecommendationOptionsStorage;
          }
          else if (hashCode == RecommendationOptionsNetwork_HASH)
          {
            return ExportableAutoScalingGroupField::RecommendationOptionsNetwork;
          }
          else if (hashCode == LastRefreshTimestamp_HASH)
          {
            return ExportableAutoScalingGroupField::LastRefreshTimestamp;
          }
          else if (hashCode == CurrentPerformanceRisk_HASH)
          {
            return ExportableAutoScalingGroupField::CurrentPerformanceRisk;
          }
          else if (hashCode == RecommendationOptionsSavingsOpportunityPercentage_HASH)
          {
            return ExportableAutoScalingGroupField::RecommendationOptionsSavingsOpportunityPercentage;
          }
          else if (hashCode == RecommendationOptionsEstimatedMonthlySavingsCurrency_HASH)
          {
            return ExportableAutoScalingGroupField::RecommendationOptionsEstimatedMonthlySavingsCurrency;
          }
          else if (hashCode == RecommendationOptionsEstimatedMonthlySavingsValue_HASH)
          {
            return ExportableAutoScalingGroupField::RecommendationOptionsEstimatedMonthlySavingsValue;
          }
          else if (hashCode == EffectiveRecommendationPreferencesCpuVendorArchitectures_HASH)
          {
            return ExportableAutoScalingGroupField::EffectiveRecommendationPreferencesCpuVendorArchitectures;
          }
          else if (hashCode == EffectiveRecommendationPreferencesEnhancedInfrastructureMetrics_HASH)
          {
            return ExportableAutoScalingGroupField::EffectiveRecommendationPreferencesEnhancedInfrastructureMetrics;
          }
          else if (hashCode == EffectiveRecommendationPreferencesInferredWorkloadTypes_HASH)
          {
            return ExportableAutoScalingGroupField::EffectiveRecommendationPreferencesInferredWorkloadTypes;
          }
          else if (hashCode == InferredWorkloadTypes_HASH)
          {
            return ExportableAutoScalingGroupField::InferredWorkloadTypes;
          }
          else if (hashCode == RecommendationOptionsMigrationEffort_HASH)
          {
            return ExportableAutoScalingGroupField::RecommendationOptionsMigrationEffort;
          }
          else if (hashCode == CurrentInstanceGpuInfo_HASH)
          {
            return ExportableAutoScalingGroupField::CurrentInstanceGpuInfo;
          }
          else if (hashCode == RecommendationOptionsInstanceGpuInfo_HASH)
          {
            return ExportableAutoScalingGroupField::RecommendationOptionsInstanceGpuInfo;
          }
          else if (hashCode == UtilizationMetricsGpuPercentageMaximum_HASH)
          {
            return ExportableAutoScalingGroupField::UtilizationMetricsGpuPercentageMaximum;
          }
          else if (hashCode == UtilizationMetricsGpuMemoryPercentageMaximum_HASH)
          {
            return ExportableAutoScalingGroupField::UtilizationMetricsGpuMemoryPercentageMaximum;
          }
          else if (hashCode == RecommendationOptionsProjectedUtilizationMetricsGpuPercentageMaximum_HASH)
          {
            return ExportableAutoScalingGroupField::RecommendationOptionsProjectedUtilizationMetricsGpuPercentageMaximum;
          }
          else if (hashCode == RecommendationOptionsProjectedUtilizationMetricsGpuMemoryPercentageMaximum_HASH)
          {
            return ExportableAutoScalingGroupField::RecommendationOptionsProjectedUtilizationMetricsGpuMemoryPercentageMaximum;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExportableAutoScalingGroupField>(hashCode);
          }

          return ExportableAutoScalingGroupField::NOT_SET;
        }

        Aws::String GetNameForExportableAutoScalingGroupField(ExportableAutoScalingGroupField enumValue)
        {
          switch(enumValue)
          {
          case ExportableAutoScalingGroupField::NOT_SET:
            return {};
          case ExportableAutoScalingGroupField::AccountId:
            return "AccountId";
          case ExportableAutoScalingGroupField::AutoScalingGroupArn:
            return "AutoScalingGroupArn";
          case ExportableAutoScalingGroupField::AutoScalingGroupName:
            return "AutoScalingGroupName";
          case ExportableAutoScalingGroupField::Finding:
            return "Finding";
          case ExportableAutoScalingGroupField::UtilizationMetricsCpuMaximum:
            return "UtilizationMetricsCpuMaximum";
          case ExportableAutoScalingGroupField::UtilizationMetricsMemoryMaximum:
            return "UtilizationMetricsMemoryMaximum";
          case ExportableAutoScalingGroupField::UtilizationMetricsEbsReadOpsPerSecondMaximum:
            return "UtilizationMetricsEbsReadOpsPerSecondMaximum";
          case ExportableAutoScalingGroupField::UtilizationMetricsEbsWriteOpsPerSecondMaximum:
            return "UtilizationMetricsEbsWriteOpsPerSecondMaximum";
          case ExportableAutoScalingGroupField::UtilizationMetricsEbsReadBytesPerSecondMaximum:
            return "UtilizationMetricsEbsReadBytesPerSecondMaximum";
          case ExportableAutoScalingGroupField::UtilizationMetricsEbsWriteBytesPerSecondMaximum:
            return "UtilizationMetricsEbsWriteBytesPerSecondMaximum";
          case ExportableAutoScalingGroupField::UtilizationMetricsDiskReadOpsPerSecondMaximum:
            return "UtilizationMetricsDiskReadOpsPerSecondMaximum";
          case ExportableAutoScalingGroupField::UtilizationMetricsDiskWriteOpsPerSecondMaximum:
            return "UtilizationMetricsDiskWriteOpsPerSecondMaximum";
          case ExportableAutoScalingGroupField::UtilizationMetricsDiskReadBytesPerSecondMaximum:
            return "UtilizationMetricsDiskReadBytesPerSecondMaximum";
          case ExportableAutoScalingGroupField::UtilizationMetricsDiskWriteBytesPerSecondMaximum:
            return "UtilizationMetricsDiskWriteBytesPerSecondMaximum";
          case ExportableAutoScalingGroupField::UtilizationMetricsNetworkInBytesPerSecondMaximum:
            return "UtilizationMetricsNetworkInBytesPerSecondMaximum";
          case ExportableAutoScalingGroupField::UtilizationMetricsNetworkOutBytesPerSecondMaximum:
            return "UtilizationMetricsNetworkOutBytesPerSecondMaximum";
          case ExportableAutoScalingGroupField::UtilizationMetricsNetworkPacketsInPerSecondMaximum:
            return "UtilizationMetricsNetworkPacketsInPerSecondMaximum";
          case ExportableAutoScalingGroupField::UtilizationMetricsNetworkPacketsOutPerSecondMaximum:
            return "UtilizationMetricsNetworkPacketsOutPerSecondMaximum";
          case ExportableAutoScalingGroupField::LookbackPeriodInDays:
            return "LookbackPeriodInDays";
          case ExportableAutoScalingGroupField::CurrentConfigurationInstanceType:
            return "CurrentConfigurationInstanceType";
          case ExportableAutoScalingGroupField::CurrentConfigurationDesiredCapacity:
            return "CurrentConfigurationDesiredCapacity";
          case ExportableAutoScalingGroupField::CurrentConfigurationMinSize:
            return "CurrentConfigurationMinSize";
          case ExportableAutoScalingGroupField::CurrentConfigurationMaxSize:
            return "CurrentConfigurationMaxSize";
          case ExportableAutoScalingGroupField::CurrentOnDemandPrice:
            return "CurrentOnDemandPrice";
          case ExportableAutoScalingGroupField::CurrentStandardOneYearNoUpfrontReservedPrice:
            return "CurrentStandardOneYearNoUpfrontReservedPrice";
          case ExportableAutoScalingGroupField::CurrentStandardThreeYearNoUpfrontReservedPrice:
            return "CurrentStandardThreeYearNoUpfrontReservedPrice";
          case ExportableAutoScalingGroupField::CurrentVCpus:
            return "CurrentVCpus";
          case ExportableAutoScalingGroupField::CurrentMemory:
            return "CurrentMemory";
          case ExportableAutoScalingGroupField::CurrentStorage:
            return "CurrentStorage";
          case ExportableAutoScalingGroupField::CurrentNetwork:
            return "CurrentNetwork";
          case ExportableAutoScalingGroupField::RecommendationOptionsConfigurationInstanceType:
            return "RecommendationOptionsConfigurationInstanceType";
          case ExportableAutoScalingGroupField::RecommendationOptionsConfigurationDesiredCapacity:
            return "RecommendationOptionsConfigurationDesiredCapacity";
          case ExportableAutoScalingGroupField::RecommendationOptionsConfigurationMinSize:
            return "RecommendationOptionsConfigurationMinSize";
          case ExportableAutoScalingGroupField::RecommendationOptionsConfigurationMaxSize:
            return "RecommendationOptionsConfigurationMaxSize";
          case ExportableAutoScalingGroupField::RecommendationOptionsProjectedUtilizationMetricsCpuMaximum:
            return "RecommendationOptionsProjectedUtilizationMetricsCpuMaximum";
          case ExportableAutoScalingGroupField::RecommendationOptionsProjectedUtilizationMetricsMemoryMaximum:
            return "RecommendationOptionsProjectedUtilizationMetricsMemoryMaximum";
          case ExportableAutoScalingGroupField::RecommendationOptionsPerformanceRisk:
            return "RecommendationOptionsPerformanceRisk";
          case ExportableAutoScalingGroupField::RecommendationOptionsOnDemandPrice:
            return "RecommendationOptionsOnDemandPrice";
          case ExportableAutoScalingGroupField::RecommendationOptionsStandardOneYearNoUpfrontReservedPrice:
            return "RecommendationOptionsStandardOneYearNoUpfrontReservedPrice";
          case ExportableAutoScalingGroupField::RecommendationOptionsStandardThreeYearNoUpfrontReservedPrice:
            return "RecommendationOptionsStandardThreeYearNoUpfrontReservedPrice";
          case ExportableAutoScalingGroupField::RecommendationOptionsVcpus:
            return "RecommendationOptionsVcpus";
          case ExportableAutoScalingGroupField::RecommendationOptionsMemory:
            return "RecommendationOptionsMemory";
          case ExportableAutoScalingGroupField::RecommendationOptionsStorage:
            return "RecommendationOptionsStorage";
          case ExportableAutoScalingGroupField::RecommendationOptionsNetwork:
            return "RecommendationOptionsNetwork";
          case ExportableAutoScalingGroupField::LastRefreshTimestamp:
            return "LastRefreshTimestamp";
          case ExportableAutoScalingGroupField::CurrentPerformanceRisk:
            return "CurrentPerformanceRisk";
          case ExportableAutoScalingGroupField::RecommendationOptionsSavingsOpportunityPercentage:
            return "RecommendationOptionsSavingsOpportunityPercentage";
          case ExportableAutoScalingGroupField::RecommendationOptionsEstimatedMonthlySavingsCurrency:
            return "RecommendationOptionsEstimatedMonthlySavingsCurrency";
          case ExportableAutoScalingGroupField::RecommendationOptionsEstimatedMonthlySavingsValue:
            return "RecommendationOptionsEstimatedMonthlySavingsValue";
          case ExportableAutoScalingGroupField::EffectiveRecommendationPreferencesCpuVendorArchitectures:
            return "EffectiveRecommendationPreferencesCpuVendorArchitectures";
          case ExportableAutoScalingGroupField::EffectiveRecommendationPreferencesEnhancedInfrastructureMetrics:
            return "EffectiveRecommendationPreferencesEnhancedInfrastructureMetrics";
          case ExportableAutoScalingGroupField::EffectiveRecommendationPreferencesInferredWorkloadTypes:
            return "EffectiveRecommendationPreferencesInferredWorkloadTypes";
          case ExportableAutoScalingGroupField::InferredWorkloadTypes:
            return "InferredWorkloadTypes";
          case ExportableAutoScalingGroupField::RecommendationOptionsMigrationEffort:
            return "RecommendationOptionsMigrationEffort";
          case ExportableAutoScalingGroupField::CurrentInstanceGpuInfo:
            return "CurrentInstanceGpuInfo";
          case ExportableAutoScalingGroupField::RecommendationOptionsInstanceGpuInfo:
            return "RecommendationOptionsInstanceGpuInfo";
          case ExportableAutoScalingGroupField::UtilizationMetricsGpuPercentageMaximum:
            return "UtilizationMetricsGpuPercentageMaximum";
          case ExportableAutoScalingGroupField::UtilizationMetricsGpuMemoryPercentageMaximum:
            return "UtilizationMetricsGpuMemoryPercentageMaximum";
          case ExportableAutoScalingGroupField::RecommendationOptionsProjectedUtilizationMetricsGpuPercentageMaximum:
            return "RecommendationOptionsProjectedUtilizationMetricsGpuPercentageMaximum";
          case ExportableAutoScalingGroupField::RecommendationOptionsProjectedUtilizationMetricsGpuMemoryPercentageMaximum:
            return "RecommendationOptionsProjectedUtilizationMetricsGpuMemoryPercentageMaximum";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExportableAutoScalingGroupFieldMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
