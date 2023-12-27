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

        static const int AccountId_HASH = HashingUtils::HashString("AccountId");
        static const int VolumeArn_HASH = HashingUtils::HashString("VolumeArn");
        static const int Finding_HASH = HashingUtils::HashString("Finding");
        static const int UtilizationMetricsVolumeReadOpsPerSecondMaximum_HASH = HashingUtils::HashString("UtilizationMetricsVolumeReadOpsPerSecondMaximum");
        static const int UtilizationMetricsVolumeWriteOpsPerSecondMaximum_HASH = HashingUtils::HashString("UtilizationMetricsVolumeWriteOpsPerSecondMaximum");
        static const int UtilizationMetricsVolumeReadBytesPerSecondMaximum_HASH = HashingUtils::HashString("UtilizationMetricsVolumeReadBytesPerSecondMaximum");
        static const int UtilizationMetricsVolumeWriteBytesPerSecondMaximum_HASH = HashingUtils::HashString("UtilizationMetricsVolumeWriteBytesPerSecondMaximum");
        static const int LookbackPeriodInDays_HASH = HashingUtils::HashString("LookbackPeriodInDays");
        static const int CurrentConfigurationVolumeType_HASH = HashingUtils::HashString("CurrentConfigurationVolumeType");
        static const int CurrentConfigurationVolumeBaselineIOPS_HASH = HashingUtils::HashString("CurrentConfigurationVolumeBaselineIOPS");
        static const int CurrentConfigurationVolumeBaselineThroughput_HASH = HashingUtils::HashString("CurrentConfigurationVolumeBaselineThroughput");
        static const int CurrentConfigurationVolumeBurstIOPS_HASH = HashingUtils::HashString("CurrentConfigurationVolumeBurstIOPS");
        static const int CurrentConfigurationVolumeBurstThroughput_HASH = HashingUtils::HashString("CurrentConfigurationVolumeBurstThroughput");
        static const int CurrentConfigurationVolumeSize_HASH = HashingUtils::HashString("CurrentConfigurationVolumeSize");
        static const int CurrentMonthlyPrice_HASH = HashingUtils::HashString("CurrentMonthlyPrice");
        static const int RecommendationOptionsConfigurationVolumeType_HASH = HashingUtils::HashString("RecommendationOptionsConfigurationVolumeType");
        static const int RecommendationOptionsConfigurationVolumeBaselineIOPS_HASH = HashingUtils::HashString("RecommendationOptionsConfigurationVolumeBaselineIOPS");
        static const int RecommendationOptionsConfigurationVolumeBaselineThroughput_HASH = HashingUtils::HashString("RecommendationOptionsConfigurationVolumeBaselineThroughput");
        static const int RecommendationOptionsConfigurationVolumeBurstIOPS_HASH = HashingUtils::HashString("RecommendationOptionsConfigurationVolumeBurstIOPS");
        static const int RecommendationOptionsConfigurationVolumeBurstThroughput_HASH = HashingUtils::HashString("RecommendationOptionsConfigurationVolumeBurstThroughput");
        static const int RecommendationOptionsConfigurationVolumeSize_HASH = HashingUtils::HashString("RecommendationOptionsConfigurationVolumeSize");
        static const int RecommendationOptionsMonthlyPrice_HASH = HashingUtils::HashString("RecommendationOptionsMonthlyPrice");
        static const int RecommendationOptionsPerformanceRisk_HASH = HashingUtils::HashString("RecommendationOptionsPerformanceRisk");
        static const int LastRefreshTimestamp_HASH = HashingUtils::HashString("LastRefreshTimestamp");
        static const int CurrentPerformanceRisk_HASH = HashingUtils::HashString("CurrentPerformanceRisk");
        static const int RecommendationOptionsSavingsOpportunityPercentage_HASH = HashingUtils::HashString("RecommendationOptionsSavingsOpportunityPercentage");
        static const int RecommendationOptionsEstimatedMonthlySavingsCurrency_HASH = HashingUtils::HashString("RecommendationOptionsEstimatedMonthlySavingsCurrency");
        static const int RecommendationOptionsEstimatedMonthlySavingsValue_HASH = HashingUtils::HashString("RecommendationOptionsEstimatedMonthlySavingsValue");
        static const int RootVolume_HASH = HashingUtils::HashString("RootVolume");
        static const int Tags_HASH = HashingUtils::HashString("Tags");
        static const int CurrentConfigurationRootVolume_HASH = HashingUtils::HashString("CurrentConfigurationRootVolume");
        static const int EffectiveRecommendationPreferencesSavingsEstimationMode_HASH = HashingUtils::HashString("EffectiveRecommendationPreferencesSavingsEstimationMode");
        static const int RecommendationOptionsSavingsOpportunityAfterDiscountsPercentage_HASH = HashingUtils::HashString("RecommendationOptionsSavingsOpportunityAfterDiscountsPercentage");
        static const int RecommendationOptionsEstimatedMonthlySavingsCurrencyAfterDiscounts_HASH = HashingUtils::HashString("RecommendationOptionsEstimatedMonthlySavingsCurrencyAfterDiscounts");
        static const int RecommendationOptionsEstimatedMonthlySavingsValueAfterDiscounts_HASH = HashingUtils::HashString("RecommendationOptionsEstimatedMonthlySavingsValueAfterDiscounts");


        ExportableVolumeField GetExportableVolumeFieldForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == EffectiveRecommendationPreferencesSavingsEstimationMode_HASH)
          {
            return ExportableVolumeField::EffectiveRecommendationPreferencesSavingsEstimationMode;
          }
          else if (hashCode == RecommendationOptionsSavingsOpportunityAfterDiscountsPercentage_HASH)
          {
            return ExportableVolumeField::RecommendationOptionsSavingsOpportunityAfterDiscountsPercentage;
          }
          else if (hashCode == RecommendationOptionsEstimatedMonthlySavingsCurrencyAfterDiscounts_HASH)
          {
            return ExportableVolumeField::RecommendationOptionsEstimatedMonthlySavingsCurrencyAfterDiscounts;
          }
          else if (hashCode == RecommendationOptionsEstimatedMonthlySavingsValueAfterDiscounts_HASH)
          {
            return ExportableVolumeField::RecommendationOptionsEstimatedMonthlySavingsValueAfterDiscounts;
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
          case ExportableVolumeField::EffectiveRecommendationPreferencesSavingsEstimationMode:
            return "EffectiveRecommendationPreferencesSavingsEstimationMode";
          case ExportableVolumeField::RecommendationOptionsSavingsOpportunityAfterDiscountsPercentage:
            return "RecommendationOptionsSavingsOpportunityAfterDiscountsPercentage";
          case ExportableVolumeField::RecommendationOptionsEstimatedMonthlySavingsCurrencyAfterDiscounts:
            return "RecommendationOptionsEstimatedMonthlySavingsCurrencyAfterDiscounts";
          case ExportableVolumeField::RecommendationOptionsEstimatedMonthlySavingsValueAfterDiscounts:
            return "RecommendationOptionsEstimatedMonthlySavingsValueAfterDiscounts";
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
