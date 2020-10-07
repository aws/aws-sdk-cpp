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

        static const int AccountId_HASH = HashingUtils::HashString("AccountId");
        static const int AutoScalingGroupArn_HASH = HashingUtils::HashString("AutoScalingGroupArn");
        static const int AutoScalingGroupName_HASH = HashingUtils::HashString("AutoScalingGroupName");
        static const int Finding_HASH = HashingUtils::HashString("Finding");
        static const int UtilizationMetricsCpuMaximum_HASH = HashingUtils::HashString("UtilizationMetricsCpuMaximum");
        static const int UtilizationMetricsMemoryMaximum_HASH = HashingUtils::HashString("UtilizationMetricsMemoryMaximum");
        static const int UtilizationMetricsEbsReadOpsPerSecondMaximum_HASH = HashingUtils::HashString("UtilizationMetricsEbsReadOpsPerSecondMaximum");
        static const int UtilizationMetricsEbsWriteOpsPerSecondMaximum_HASH = HashingUtils::HashString("UtilizationMetricsEbsWriteOpsPerSecondMaximum");
        static const int UtilizationMetricsEbsReadBytesPerSecondMaximum_HASH = HashingUtils::HashString("UtilizationMetricsEbsReadBytesPerSecondMaximum");
        static const int UtilizationMetricsEbsWriteBytesPerSecondMaximum_HASH = HashingUtils::HashString("UtilizationMetricsEbsWriteBytesPerSecondMaximum");
        static const int LookbackPeriodInDays_HASH = HashingUtils::HashString("LookbackPeriodInDays");
        static const int CurrentConfigurationInstanceType_HASH = HashingUtils::HashString("CurrentConfigurationInstanceType");
        static const int CurrentConfigurationDesiredCapacity_HASH = HashingUtils::HashString("CurrentConfigurationDesiredCapacity");
        static const int CurrentConfigurationMinSize_HASH = HashingUtils::HashString("CurrentConfigurationMinSize");
        static const int CurrentConfigurationMaxSize_HASH = HashingUtils::HashString("CurrentConfigurationMaxSize");
        static const int CurrentOnDemandPrice_HASH = HashingUtils::HashString("CurrentOnDemandPrice");
        static const int CurrentStandardOneYearNoUpfrontReservedPrice_HASH = HashingUtils::HashString("CurrentStandardOneYearNoUpfrontReservedPrice");
        static const int CurrentStandardThreeYearNoUpfrontReservedPrice_HASH = HashingUtils::HashString("CurrentStandardThreeYearNoUpfrontReservedPrice");
        static const int CurrentVCpus_HASH = HashingUtils::HashString("CurrentVCpus");
        static const int CurrentMemory_HASH = HashingUtils::HashString("CurrentMemory");
        static const int CurrentStorage_HASH = HashingUtils::HashString("CurrentStorage");
        static const int CurrentNetwork_HASH = HashingUtils::HashString("CurrentNetwork");
        static const int RecommendationOptionsConfigurationInstanceType_HASH = HashingUtils::HashString("RecommendationOptionsConfigurationInstanceType");
        static const int RecommendationOptionsConfigurationDesiredCapacity_HASH = HashingUtils::HashString("RecommendationOptionsConfigurationDesiredCapacity");
        static const int RecommendationOptionsConfigurationMinSize_HASH = HashingUtils::HashString("RecommendationOptionsConfigurationMinSize");
        static const int RecommendationOptionsConfigurationMaxSize_HASH = HashingUtils::HashString("RecommendationOptionsConfigurationMaxSize");
        static const int RecommendationOptionsProjectedUtilizationMetricsCpuMaximum_HASH = HashingUtils::HashString("RecommendationOptionsProjectedUtilizationMetricsCpuMaximum");
        static const int RecommendationOptionsProjectedUtilizationMetricsMemoryMaximum_HASH = HashingUtils::HashString("RecommendationOptionsProjectedUtilizationMetricsMemoryMaximum");
        static const int RecommendationOptionsPerformanceRisk_HASH = HashingUtils::HashString("RecommendationOptionsPerformanceRisk");
        static const int RecommendationOptionsOnDemandPrice_HASH = HashingUtils::HashString("RecommendationOptionsOnDemandPrice");
        static const int RecommendationOptionsStandardOneYearNoUpfrontReservedPrice_HASH = HashingUtils::HashString("RecommendationOptionsStandardOneYearNoUpfrontReservedPrice");
        static const int RecommendationOptionsStandardThreeYearNoUpfrontReservedPrice_HASH = HashingUtils::HashString("RecommendationOptionsStandardThreeYearNoUpfrontReservedPrice");
        static const int RecommendationOptionsVcpus_HASH = HashingUtils::HashString("RecommendationOptionsVcpus");
        static const int RecommendationOptionsMemory_HASH = HashingUtils::HashString("RecommendationOptionsMemory");
        static const int RecommendationOptionsStorage_HASH = HashingUtils::HashString("RecommendationOptionsStorage");
        static const int RecommendationOptionsNetwork_HASH = HashingUtils::HashString("RecommendationOptionsNetwork");
        static const int LastRefreshTimestamp_HASH = HashingUtils::HashString("LastRefreshTimestamp");


        ExportableAutoScalingGroupField GetExportableAutoScalingGroupFieldForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
