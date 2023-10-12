/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/ExportableVolumeField.h>
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
      namespace ExportableVolumeFieldMapper
      {

        static constexpr uint32_t AccountId_HASH = ConstExprHashingUtils::HashString("AccountId");
        static constexpr uint32_t VolumeArn_HASH = ConstExprHashingUtils::HashString("VolumeArn");
        static constexpr uint32_t Finding_HASH = ConstExprHashingUtils::HashString("Finding");
        static constexpr uint32_t UtilizationMetricsVolumeReadOpsPerSecondMaximum_HASH = ConstExprHashingUtils::HashString("UtilizationMetricsVolumeReadOpsPerSecondMaximum");
        static constexpr uint32_t UtilizationMetricsVolumeWriteOpsPerSecondMaximum_HASH = ConstExprHashingUtils::HashString("UtilizationMetricsVolumeWriteOpsPerSecondMaximum");
        static constexpr uint32_t UtilizationMetricsVolumeReadBytesPerSecondMaximum_HASH = ConstExprHashingUtils::HashString("UtilizationMetricsVolumeReadBytesPerSecondMaximum");
        static constexpr uint32_t UtilizationMetricsVolumeWriteBytesPerSecondMaximum_HASH = ConstExprHashingUtils::HashString("UtilizationMetricsVolumeWriteBytesPerSecondMaximum");
        static constexpr uint32_t LookbackPeriodInDays_HASH = ConstExprHashingUtils::HashString("LookbackPeriodInDays");
        static constexpr uint32_t CurrentConfigurationVolumeType_HASH = ConstExprHashingUtils::HashString("CurrentConfigurationVolumeType");
        static constexpr uint32_t CurrentConfigurationVolumeBaselineIOPS_HASH = ConstExprHashingUtils::HashString("CurrentConfigurationVolumeBaselineIOPS");
        static constexpr uint32_t CurrentConfigurationVolumeBaselineThroughput_HASH = ConstExprHashingUtils::HashString("CurrentConfigurationVolumeBaselineThroughput");
        static constexpr uint32_t CurrentConfigurationVolumeBurstIOPS_HASH = ConstExprHashingUtils::HashString("CurrentConfigurationVolumeBurstIOPS");
        static constexpr uint32_t CurrentConfigurationVolumeBurstThroughput_HASH = ConstExprHashingUtils::HashString("CurrentConfigurationVolumeBurstThroughput");
        static constexpr uint32_t CurrentConfigurationVolumeSize_HASH = ConstExprHashingUtils::HashString("CurrentConfigurationVolumeSize");
        static constexpr uint32_t CurrentMonthlyPrice_HASH = ConstExprHashingUtils::HashString("CurrentMonthlyPrice");
        static constexpr uint32_t RecommendationOptionsConfigurationVolumeType_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsConfigurationVolumeType");
        static constexpr uint32_t RecommendationOptionsConfigurationVolumeBaselineIOPS_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsConfigurationVolumeBaselineIOPS");
        static constexpr uint32_t RecommendationOptionsConfigurationVolumeBaselineThroughput_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsConfigurationVolumeBaselineThroughput");
        static constexpr uint32_t RecommendationOptionsConfigurationVolumeBurstIOPS_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsConfigurationVolumeBurstIOPS");
        static constexpr uint32_t RecommendationOptionsConfigurationVolumeBurstThroughput_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsConfigurationVolumeBurstThroughput");
        static constexpr uint32_t RecommendationOptionsConfigurationVolumeSize_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsConfigurationVolumeSize");
        static constexpr uint32_t RecommendationOptionsMonthlyPrice_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsMonthlyPrice");
        static constexpr uint32_t RecommendationOptionsPerformanceRisk_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsPerformanceRisk");
        static constexpr uint32_t LastRefreshTimestamp_HASH = ConstExprHashingUtils::HashString("LastRefreshTimestamp");
        static constexpr uint32_t CurrentPerformanceRisk_HASH = ConstExprHashingUtils::HashString("CurrentPerformanceRisk");
        static constexpr uint32_t RecommendationOptionsSavingsOpportunityPercentage_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsSavingsOpportunityPercentage");
        static constexpr uint32_t RecommendationOptionsEstimatedMonthlySavingsCurrency_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsEstimatedMonthlySavingsCurrency");
        static constexpr uint32_t RecommendationOptionsEstimatedMonthlySavingsValue_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsEstimatedMonthlySavingsValue");
        static constexpr uint32_t RootVolume_HASH = ConstExprHashingUtils::HashString("RootVolume");
        static constexpr uint32_t Tags_HASH = ConstExprHashingUtils::HashString("Tags");
        static constexpr uint32_t CurrentConfigurationRootVolume_HASH = ConstExprHashingUtils::HashString("CurrentConfigurationRootVolume");


        ExportableVolumeField GetExportableVolumeFieldForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AccountId_HASH)
          {
            return ExportableVolumeField::AccountId;
          }
          else if (hashCode == VolumeArn_HASH)
          {
            return ExportableVolumeField::VolumeArn;
          }
          else if (hashCode == Finding_HASH)
          {
            return ExportableVolumeField::Finding;
          }
          else if (hashCode == UtilizationMetricsVolumeReadOpsPerSecondMaximum_HASH)
          {
            return ExportableVolumeField::UtilizationMetricsVolumeReadOpsPerSecondMaximum;
          }
          else if (hashCode == UtilizationMetricsVolumeWriteOpsPerSecondMaximum_HASH)
          {
            return ExportableVolumeField::UtilizationMetricsVolumeWriteOpsPerSecondMaximum;
          }
          else if (hashCode == UtilizationMetricsVolumeReadBytesPerSecondMaximum_HASH)
          {
            return ExportableVolumeField::UtilizationMetricsVolumeReadBytesPerSecondMaximum;
          }
          else if (hashCode == UtilizationMetricsVolumeWriteBytesPerSecondMaximum_HASH)
          {
            return ExportableVolumeField::UtilizationMetricsVolumeWriteBytesPerSecondMaximum;
          }
          else if (hashCode == LookbackPeriodInDays_HASH)
          {
            return ExportableVolumeField::LookbackPeriodInDays;
          }
          else if (hashCode == CurrentConfigurationVolumeType_HASH)
          {
            return ExportableVolumeField::CurrentConfigurationVolumeType;
          }
          else if (hashCode == CurrentConfigurationVolumeBaselineIOPS_HASH)
          {
            return ExportableVolumeField::CurrentConfigurationVolumeBaselineIOPS;
          }
          else if (hashCode == CurrentConfigurationVolumeBaselineThroughput_HASH)
          {
            return ExportableVolumeField::CurrentConfigurationVolumeBaselineThroughput;
          }
          else if (hashCode == CurrentConfigurationVolumeBurstIOPS_HASH)
          {
            return ExportableVolumeField::CurrentConfigurationVolumeBurstIOPS;
          }
          else if (hashCode == CurrentConfigurationVolumeBurstThroughput_HASH)
          {
            return ExportableVolumeField::CurrentConfigurationVolumeBurstThroughput;
          }
          else if (hashCode == CurrentConfigurationVolumeSize_HASH)
          {
            return ExportableVolumeField::CurrentConfigurationVolumeSize;
          }
          else if (hashCode == CurrentMonthlyPrice_HASH)
          {
            return ExportableVolumeField::CurrentMonthlyPrice;
          }
          else if (hashCode == RecommendationOptionsConfigurationVolumeType_HASH)
          {
            return ExportableVolumeField::RecommendationOptionsConfigurationVolumeType;
          }
          else if (hashCode == RecommendationOptionsConfigurationVolumeBaselineIOPS_HASH)
          {
            return ExportableVolumeField::RecommendationOptionsConfigurationVolumeBaselineIOPS;
          }
          else if (hashCode == RecommendationOptionsConfigurationVolumeBaselineThroughput_HASH)
          {
            return ExportableVolumeField::RecommendationOptionsConfigurationVolumeBaselineThroughput;
          }
          else if (hashCode == RecommendationOptionsConfigurationVolumeBurstIOPS_HASH)
          {
            return ExportableVolumeField::RecommendationOptionsConfigurationVolumeBurstIOPS;
          }
          else if (hashCode == RecommendationOptionsConfigurationVolumeBurstThroughput_HASH)
          {
            return ExportableVolumeField::RecommendationOptionsConfigurationVolumeBurstThroughput;
          }
          else if (hashCode == RecommendationOptionsConfigurationVolumeSize_HASH)
          {
            return ExportableVolumeField::RecommendationOptionsConfigurationVolumeSize;
          }
          else if (hashCode == RecommendationOptionsMonthlyPrice_HASH)
          {
            return ExportableVolumeField::RecommendationOptionsMonthlyPrice;
          }
          else if (hashCode == RecommendationOptionsPerformanceRisk_HASH)
          {
            return ExportableVolumeField::RecommendationOptionsPerformanceRisk;
          }
          else if (hashCode == LastRefreshTimestamp_HASH)
          {
            return ExportableVolumeField::LastRefreshTimestamp;
          }
          else if (hashCode == CurrentPerformanceRisk_HASH)
          {
            return ExportableVolumeField::CurrentPerformanceRisk;
          }
          else if (hashCode == RecommendationOptionsSavingsOpportunityPercentage_HASH)
          {
            return ExportableVolumeField::RecommendationOptionsSavingsOpportunityPercentage;
          }
          else if (hashCode == RecommendationOptionsEstimatedMonthlySavingsCurrency_HASH)
          {
            return ExportableVolumeField::RecommendationOptionsEstimatedMonthlySavingsCurrency;
          }
          else if (hashCode == RecommendationOptionsEstimatedMonthlySavingsValue_HASH)
          {
            return ExportableVolumeField::RecommendationOptionsEstimatedMonthlySavingsValue;
          }
          else if (hashCode == RootVolume_HASH)
          {
            return ExportableVolumeField::RootVolume;
          }
          else if (hashCode == Tags_HASH)
          {
            return ExportableVolumeField::Tags;
          }
          else if (hashCode == CurrentConfigurationRootVolume_HASH)
          {
            return ExportableVolumeField::CurrentConfigurationRootVolume;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExportableVolumeField>(hashCode);
          }

          return ExportableVolumeField::NOT_SET;
        }

        Aws::String GetNameForExportableVolumeField(ExportableVolumeField enumValue)
        {
          switch(enumValue)
          {
          case ExportableVolumeField::NOT_SET:
            return {};
          case ExportableVolumeField::AccountId:
            return "AccountId";
          case ExportableVolumeField::VolumeArn:
            return "VolumeArn";
          case ExportableVolumeField::Finding:
            return "Finding";
          case ExportableVolumeField::UtilizationMetricsVolumeReadOpsPerSecondMaximum:
            return "UtilizationMetricsVolumeReadOpsPerSecondMaximum";
          case ExportableVolumeField::UtilizationMetricsVolumeWriteOpsPerSecondMaximum:
            return "UtilizationMetricsVolumeWriteOpsPerSecondMaximum";
          case ExportableVolumeField::UtilizationMetricsVolumeReadBytesPerSecondMaximum:
            return "UtilizationMetricsVolumeReadBytesPerSecondMaximum";
          case ExportableVolumeField::UtilizationMetricsVolumeWriteBytesPerSecondMaximum:
            return "UtilizationMetricsVolumeWriteBytesPerSecondMaximum";
          case ExportableVolumeField::LookbackPeriodInDays:
            return "LookbackPeriodInDays";
          case ExportableVolumeField::CurrentConfigurationVolumeType:
            return "CurrentConfigurationVolumeType";
          case ExportableVolumeField::CurrentConfigurationVolumeBaselineIOPS:
            return "CurrentConfigurationVolumeBaselineIOPS";
          case ExportableVolumeField::CurrentConfigurationVolumeBaselineThroughput:
            return "CurrentConfigurationVolumeBaselineThroughput";
          case ExportableVolumeField::CurrentConfigurationVolumeBurstIOPS:
            return "CurrentConfigurationVolumeBurstIOPS";
          case ExportableVolumeField::CurrentConfigurationVolumeBurstThroughput:
            return "CurrentConfigurationVolumeBurstThroughput";
          case ExportableVolumeField::CurrentConfigurationVolumeSize:
            return "CurrentConfigurationVolumeSize";
          case ExportableVolumeField::CurrentMonthlyPrice:
            return "CurrentMonthlyPrice";
          case ExportableVolumeField::RecommendationOptionsConfigurationVolumeType:
            return "RecommendationOptionsConfigurationVolumeType";
          case ExportableVolumeField::RecommendationOptionsConfigurationVolumeBaselineIOPS:
            return "RecommendationOptionsConfigurationVolumeBaselineIOPS";
          case ExportableVolumeField::RecommendationOptionsConfigurationVolumeBaselineThroughput:
            return "RecommendationOptionsConfigurationVolumeBaselineThroughput";
          case ExportableVolumeField::RecommendationOptionsConfigurationVolumeBurstIOPS:
            return "RecommendationOptionsConfigurationVolumeBurstIOPS";
          case ExportableVolumeField::RecommendationOptionsConfigurationVolumeBurstThroughput:
            return "RecommendationOptionsConfigurationVolumeBurstThroughput";
          case ExportableVolumeField::RecommendationOptionsConfigurationVolumeSize:
            return "RecommendationOptionsConfigurationVolumeSize";
          case ExportableVolumeField::RecommendationOptionsMonthlyPrice:
            return "RecommendationOptionsMonthlyPrice";
          case ExportableVolumeField::RecommendationOptionsPerformanceRisk:
            return "RecommendationOptionsPerformanceRisk";
          case ExportableVolumeField::LastRefreshTimestamp:
            return "LastRefreshTimestamp";
          case ExportableVolumeField::CurrentPerformanceRisk:
            return "CurrentPerformanceRisk";
          case ExportableVolumeField::RecommendationOptionsSavingsOpportunityPercentage:
            return "RecommendationOptionsSavingsOpportunityPercentage";
          case ExportableVolumeField::RecommendationOptionsEstimatedMonthlySavingsCurrency:
            return "RecommendationOptionsEstimatedMonthlySavingsCurrency";
          case ExportableVolumeField::RecommendationOptionsEstimatedMonthlySavingsValue:
            return "RecommendationOptionsEstimatedMonthlySavingsValue";
          case ExportableVolumeField::RootVolume:
            return "RootVolume";
          case ExportableVolumeField::Tags:
            return "Tags";
          case ExportableVolumeField::CurrentConfigurationRootVolume:
            return "CurrentConfigurationRootVolume";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExportableVolumeFieldMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
