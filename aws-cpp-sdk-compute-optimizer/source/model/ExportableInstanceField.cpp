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

        static const int AccountId_HASH = HashingUtils::HashString("AccountId");
        static const int InstanceArn_HASH = HashingUtils::HashString("InstanceArn");
        static const int InstanceName_HASH = HashingUtils::HashString("InstanceName");
        static const int Finding_HASH = HashingUtils::HashString("Finding");
        static const int LookbackPeriodInDays_HASH = HashingUtils::HashString("LookbackPeriodInDays");
        static const int CurrentInstanceType_HASH = HashingUtils::HashString("CurrentInstanceType");
        static const int UtilizationMetricsCpuMaximum_HASH = HashingUtils::HashString("UtilizationMetricsCpuMaximum");
        static const int UtilizationMetricsMemoryMaximum_HASH = HashingUtils::HashString("UtilizationMetricsMemoryMaximum");
        static const int UtilizationMetricsEbsReadOpsPerSecondMaximum_HASH = HashingUtils::HashString("UtilizationMetricsEbsReadOpsPerSecondMaximum");
        static const int UtilizationMetricsEbsWriteOpsPerSecondMaximum_HASH = HashingUtils::HashString("UtilizationMetricsEbsWriteOpsPerSecondMaximum");
        static const int UtilizationMetricsEbsReadBytesPerSecondMaximum_HASH = HashingUtils::HashString("UtilizationMetricsEbsReadBytesPerSecondMaximum");
        static const int UtilizationMetricsEbsWriteBytesPerSecondMaximum_HASH = HashingUtils::HashString("UtilizationMetricsEbsWriteBytesPerSecondMaximum");
        static const int CurrentOnDemandPrice_HASH = HashingUtils::HashString("CurrentOnDemandPrice");
        static const int CurrentStandardOneYearNoUpfrontReservedPrice_HASH = HashingUtils::HashString("CurrentStandardOneYearNoUpfrontReservedPrice");
        static const int CurrentStandardThreeYearNoUpfrontReservedPrice_HASH = HashingUtils::HashString("CurrentStandardThreeYearNoUpfrontReservedPrice");
        static const int CurrentVCpus_HASH = HashingUtils::HashString("CurrentVCpus");
        static const int CurrentMemory_HASH = HashingUtils::HashString("CurrentMemory");
        static const int CurrentStorage_HASH = HashingUtils::HashString("CurrentStorage");
        static const int CurrentNetwork_HASH = HashingUtils::HashString("CurrentNetwork");
        static const int RecommendationOptionsInstanceType_HASH = HashingUtils::HashString("RecommendationOptionsInstanceType");
        static const int RecommendationOptionsProjectedUtilizationMetricsCpuMaximum_HASH = HashingUtils::HashString("RecommendationOptionsProjectedUtilizationMetricsCpuMaximum");
        static const int RecommendationOptionsProjectedUtilizationMetricsMemoryMaximum_HASH = HashingUtils::HashString("RecommendationOptionsProjectedUtilizationMetricsMemoryMaximum");
        static const int RecommendationOptionsPerformanceRisk_HASH = HashingUtils::HashString("RecommendationOptionsPerformanceRisk");
        static const int RecommendationOptionsVcpus_HASH = HashingUtils::HashString("RecommendationOptionsVcpus");
        static const int RecommendationOptionsMemory_HASH = HashingUtils::HashString("RecommendationOptionsMemory");
        static const int RecommendationOptionsStorage_HASH = HashingUtils::HashString("RecommendationOptionsStorage");
        static const int RecommendationOptionsNetwork_HASH = HashingUtils::HashString("RecommendationOptionsNetwork");
        static const int RecommendationOptionsOnDemandPrice_HASH = HashingUtils::HashString("RecommendationOptionsOnDemandPrice");
        static const int RecommendationOptionsStandardOneYearNoUpfrontReservedPrice_HASH = HashingUtils::HashString("RecommendationOptionsStandardOneYearNoUpfrontReservedPrice");
        static const int RecommendationOptionsStandardThreeYearNoUpfrontReservedPrice_HASH = HashingUtils::HashString("RecommendationOptionsStandardThreeYearNoUpfrontReservedPrice");
        static const int RecommendationsSourcesRecommendationSourceArn_HASH = HashingUtils::HashString("RecommendationsSourcesRecommendationSourceArn");
        static const int RecommendationsSourcesRecommendationSourceType_HASH = HashingUtils::HashString("RecommendationsSourcesRecommendationSourceType");
        static const int LastRefreshTimestamp_HASH = HashingUtils::HashString("LastRefreshTimestamp");


        ExportableInstanceField GetExportableInstanceFieldForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
          case ExportableInstanceField::AccountId:
            return "AccountId";
          case ExportableInstanceField::InstanceArn:
            return "InstanceArn";
          case ExportableInstanceField::InstanceName:
            return "InstanceName";
          case ExportableInstanceField::Finding:
            return "Finding";
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
