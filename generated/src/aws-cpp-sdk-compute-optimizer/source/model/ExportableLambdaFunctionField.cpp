/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/ExportableLambdaFunctionField.h>
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
      namespace ExportableLambdaFunctionFieldMapper
      {

        static const int AccountId_HASH = HashingUtils::HashString("AccountId");
        static const int FunctionArn_HASH = HashingUtils::HashString("FunctionArn");
        static const int FunctionVersion_HASH = HashingUtils::HashString("FunctionVersion");
        static const int Finding_HASH = HashingUtils::HashString("Finding");
        static const int FindingReasonCodes_HASH = HashingUtils::HashString("FindingReasonCodes");
        static const int NumberOfInvocations_HASH = HashingUtils::HashString("NumberOfInvocations");
        static const int UtilizationMetricsDurationMaximum_HASH = HashingUtils::HashString("UtilizationMetricsDurationMaximum");
        static const int UtilizationMetricsDurationAverage_HASH = HashingUtils::HashString("UtilizationMetricsDurationAverage");
        static const int UtilizationMetricsMemoryMaximum_HASH = HashingUtils::HashString("UtilizationMetricsMemoryMaximum");
        static const int UtilizationMetricsMemoryAverage_HASH = HashingUtils::HashString("UtilizationMetricsMemoryAverage");
        static const int LookbackPeriodInDays_HASH = HashingUtils::HashString("LookbackPeriodInDays");
        static const int CurrentConfigurationMemorySize_HASH = HashingUtils::HashString("CurrentConfigurationMemorySize");
        static const int CurrentConfigurationTimeout_HASH = HashingUtils::HashString("CurrentConfigurationTimeout");
        static const int CurrentCostTotal_HASH = HashingUtils::HashString("CurrentCostTotal");
        static const int CurrentCostAverage_HASH = HashingUtils::HashString("CurrentCostAverage");
        static const int RecommendationOptionsConfigurationMemorySize_HASH = HashingUtils::HashString("RecommendationOptionsConfigurationMemorySize");
        static const int RecommendationOptionsCostLow_HASH = HashingUtils::HashString("RecommendationOptionsCostLow");
        static const int RecommendationOptionsCostHigh_HASH = HashingUtils::HashString("RecommendationOptionsCostHigh");
        static const int RecommendationOptionsProjectedUtilizationMetricsDurationLowerBound_HASH = HashingUtils::HashString("RecommendationOptionsProjectedUtilizationMetricsDurationLowerBound");
        static const int RecommendationOptionsProjectedUtilizationMetricsDurationUpperBound_HASH = HashingUtils::HashString("RecommendationOptionsProjectedUtilizationMetricsDurationUpperBound");
        static const int RecommendationOptionsProjectedUtilizationMetricsDurationExpected_HASH = HashingUtils::HashString("RecommendationOptionsProjectedUtilizationMetricsDurationExpected");
        static const int LastRefreshTimestamp_HASH = HashingUtils::HashString("LastRefreshTimestamp");
        static const int CurrentPerformanceRisk_HASH = HashingUtils::HashString("CurrentPerformanceRisk");
        static const int RecommendationOptionsSavingsOpportunityPercentage_HASH = HashingUtils::HashString("RecommendationOptionsSavingsOpportunityPercentage");
        static const int RecommendationOptionsEstimatedMonthlySavingsCurrency_HASH = HashingUtils::HashString("RecommendationOptionsEstimatedMonthlySavingsCurrency");
        static const int RecommendationOptionsEstimatedMonthlySavingsValue_HASH = HashingUtils::HashString("RecommendationOptionsEstimatedMonthlySavingsValue");
        static const int Tags_HASH = HashingUtils::HashString("Tags");
        static const int EffectiveRecommendationPreferencesSavingsEstimationMode_HASH = HashingUtils::HashString("EffectiveRecommendationPreferencesSavingsEstimationMode");
        static const int RecommendationOptionsSavingsOpportunityAfterDiscountsPercentage_HASH = HashingUtils::HashString("RecommendationOptionsSavingsOpportunityAfterDiscountsPercentage");
        static const int RecommendationOptionsEstimatedMonthlySavingsCurrencyAfterDiscounts_HASH = HashingUtils::HashString("RecommendationOptionsEstimatedMonthlySavingsCurrencyAfterDiscounts");
        static const int RecommendationOptionsEstimatedMonthlySavingsValueAfterDiscounts_HASH = HashingUtils::HashString("RecommendationOptionsEstimatedMonthlySavingsValueAfterDiscounts");


        ExportableLambdaFunctionField GetExportableLambdaFunctionFieldForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AccountId_HASH)
          {
            return ExportableLambdaFunctionField::AccountId;
          }
          else if (hashCode == FunctionArn_HASH)
          {
            return ExportableLambdaFunctionField::FunctionArn;
          }
          else if (hashCode == FunctionVersion_HASH)
          {
            return ExportableLambdaFunctionField::FunctionVersion;
          }
          else if (hashCode == Finding_HASH)
          {
            return ExportableLambdaFunctionField::Finding;
          }
          else if (hashCode == FindingReasonCodes_HASH)
          {
            return ExportableLambdaFunctionField::FindingReasonCodes;
          }
          else if (hashCode == NumberOfInvocations_HASH)
          {
            return ExportableLambdaFunctionField::NumberOfInvocations;
          }
          else if (hashCode == UtilizationMetricsDurationMaximum_HASH)
          {
            return ExportableLambdaFunctionField::UtilizationMetricsDurationMaximum;
          }
          else if (hashCode == UtilizationMetricsDurationAverage_HASH)
          {
            return ExportableLambdaFunctionField::UtilizationMetricsDurationAverage;
          }
          else if (hashCode == UtilizationMetricsMemoryMaximum_HASH)
          {
            return ExportableLambdaFunctionField::UtilizationMetricsMemoryMaximum;
          }
          else if (hashCode == UtilizationMetricsMemoryAverage_HASH)
          {
            return ExportableLambdaFunctionField::UtilizationMetricsMemoryAverage;
          }
          else if (hashCode == LookbackPeriodInDays_HASH)
          {
            return ExportableLambdaFunctionField::LookbackPeriodInDays;
          }
          else if (hashCode == CurrentConfigurationMemorySize_HASH)
          {
            return ExportableLambdaFunctionField::CurrentConfigurationMemorySize;
          }
          else if (hashCode == CurrentConfigurationTimeout_HASH)
          {
            return ExportableLambdaFunctionField::CurrentConfigurationTimeout;
          }
          else if (hashCode == CurrentCostTotal_HASH)
          {
            return ExportableLambdaFunctionField::CurrentCostTotal;
          }
          else if (hashCode == CurrentCostAverage_HASH)
          {
            return ExportableLambdaFunctionField::CurrentCostAverage;
          }
          else if (hashCode == RecommendationOptionsConfigurationMemorySize_HASH)
          {
            return ExportableLambdaFunctionField::RecommendationOptionsConfigurationMemorySize;
          }
          else if (hashCode == RecommendationOptionsCostLow_HASH)
          {
            return ExportableLambdaFunctionField::RecommendationOptionsCostLow;
          }
          else if (hashCode == RecommendationOptionsCostHigh_HASH)
          {
            return ExportableLambdaFunctionField::RecommendationOptionsCostHigh;
          }
          else if (hashCode == RecommendationOptionsProjectedUtilizationMetricsDurationLowerBound_HASH)
          {
            return ExportableLambdaFunctionField::RecommendationOptionsProjectedUtilizationMetricsDurationLowerBound;
          }
          else if (hashCode == RecommendationOptionsProjectedUtilizationMetricsDurationUpperBound_HASH)
          {
            return ExportableLambdaFunctionField::RecommendationOptionsProjectedUtilizationMetricsDurationUpperBound;
          }
          else if (hashCode == RecommendationOptionsProjectedUtilizationMetricsDurationExpected_HASH)
          {
            return ExportableLambdaFunctionField::RecommendationOptionsProjectedUtilizationMetricsDurationExpected;
          }
          else if (hashCode == LastRefreshTimestamp_HASH)
          {
            return ExportableLambdaFunctionField::LastRefreshTimestamp;
          }
          else if (hashCode == CurrentPerformanceRisk_HASH)
          {
            return ExportableLambdaFunctionField::CurrentPerformanceRisk;
          }
          else if (hashCode == RecommendationOptionsSavingsOpportunityPercentage_HASH)
          {
            return ExportableLambdaFunctionField::RecommendationOptionsSavingsOpportunityPercentage;
          }
          else if (hashCode == RecommendationOptionsEstimatedMonthlySavingsCurrency_HASH)
          {
            return ExportableLambdaFunctionField::RecommendationOptionsEstimatedMonthlySavingsCurrency;
          }
          else if (hashCode == RecommendationOptionsEstimatedMonthlySavingsValue_HASH)
          {
            return ExportableLambdaFunctionField::RecommendationOptionsEstimatedMonthlySavingsValue;
          }
          else if (hashCode == Tags_HASH)
          {
            return ExportableLambdaFunctionField::Tags;
          }
          else if (hashCode == EffectiveRecommendationPreferencesSavingsEstimationMode_HASH)
          {
            return ExportableLambdaFunctionField::EffectiveRecommendationPreferencesSavingsEstimationMode;
          }
          else if (hashCode == RecommendationOptionsSavingsOpportunityAfterDiscountsPercentage_HASH)
          {
            return ExportableLambdaFunctionField::RecommendationOptionsSavingsOpportunityAfterDiscountsPercentage;
          }
          else if (hashCode == RecommendationOptionsEstimatedMonthlySavingsCurrencyAfterDiscounts_HASH)
          {
            return ExportableLambdaFunctionField::RecommendationOptionsEstimatedMonthlySavingsCurrencyAfterDiscounts;
          }
          else if (hashCode == RecommendationOptionsEstimatedMonthlySavingsValueAfterDiscounts_HASH)
          {
            return ExportableLambdaFunctionField::RecommendationOptionsEstimatedMonthlySavingsValueAfterDiscounts;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExportableLambdaFunctionField>(hashCode);
          }

          return ExportableLambdaFunctionField::NOT_SET;
        }

        Aws::String GetNameForExportableLambdaFunctionField(ExportableLambdaFunctionField enumValue)
        {
          switch(enumValue)
          {
          case ExportableLambdaFunctionField::NOT_SET:
            return {};
          case ExportableLambdaFunctionField::AccountId:
            return "AccountId";
          case ExportableLambdaFunctionField::FunctionArn:
            return "FunctionArn";
          case ExportableLambdaFunctionField::FunctionVersion:
            return "FunctionVersion";
          case ExportableLambdaFunctionField::Finding:
            return "Finding";
          case ExportableLambdaFunctionField::FindingReasonCodes:
            return "FindingReasonCodes";
          case ExportableLambdaFunctionField::NumberOfInvocations:
            return "NumberOfInvocations";
          case ExportableLambdaFunctionField::UtilizationMetricsDurationMaximum:
            return "UtilizationMetricsDurationMaximum";
          case ExportableLambdaFunctionField::UtilizationMetricsDurationAverage:
            return "UtilizationMetricsDurationAverage";
          case ExportableLambdaFunctionField::UtilizationMetricsMemoryMaximum:
            return "UtilizationMetricsMemoryMaximum";
          case ExportableLambdaFunctionField::UtilizationMetricsMemoryAverage:
            return "UtilizationMetricsMemoryAverage";
          case ExportableLambdaFunctionField::LookbackPeriodInDays:
            return "LookbackPeriodInDays";
          case ExportableLambdaFunctionField::CurrentConfigurationMemorySize:
            return "CurrentConfigurationMemorySize";
          case ExportableLambdaFunctionField::CurrentConfigurationTimeout:
            return "CurrentConfigurationTimeout";
          case ExportableLambdaFunctionField::CurrentCostTotal:
            return "CurrentCostTotal";
          case ExportableLambdaFunctionField::CurrentCostAverage:
            return "CurrentCostAverage";
          case ExportableLambdaFunctionField::RecommendationOptionsConfigurationMemorySize:
            return "RecommendationOptionsConfigurationMemorySize";
          case ExportableLambdaFunctionField::RecommendationOptionsCostLow:
            return "RecommendationOptionsCostLow";
          case ExportableLambdaFunctionField::RecommendationOptionsCostHigh:
            return "RecommendationOptionsCostHigh";
          case ExportableLambdaFunctionField::RecommendationOptionsProjectedUtilizationMetricsDurationLowerBound:
            return "RecommendationOptionsProjectedUtilizationMetricsDurationLowerBound";
          case ExportableLambdaFunctionField::RecommendationOptionsProjectedUtilizationMetricsDurationUpperBound:
            return "RecommendationOptionsProjectedUtilizationMetricsDurationUpperBound";
          case ExportableLambdaFunctionField::RecommendationOptionsProjectedUtilizationMetricsDurationExpected:
            return "RecommendationOptionsProjectedUtilizationMetricsDurationExpected";
          case ExportableLambdaFunctionField::LastRefreshTimestamp:
            return "LastRefreshTimestamp";
          case ExportableLambdaFunctionField::CurrentPerformanceRisk:
            return "CurrentPerformanceRisk";
          case ExportableLambdaFunctionField::RecommendationOptionsSavingsOpportunityPercentage:
            return "RecommendationOptionsSavingsOpportunityPercentage";
          case ExportableLambdaFunctionField::RecommendationOptionsEstimatedMonthlySavingsCurrency:
            return "RecommendationOptionsEstimatedMonthlySavingsCurrency";
          case ExportableLambdaFunctionField::RecommendationOptionsEstimatedMonthlySavingsValue:
            return "RecommendationOptionsEstimatedMonthlySavingsValue";
          case ExportableLambdaFunctionField::Tags:
            return "Tags";
          case ExportableLambdaFunctionField::EffectiveRecommendationPreferencesSavingsEstimationMode:
            return "EffectiveRecommendationPreferencesSavingsEstimationMode";
          case ExportableLambdaFunctionField::RecommendationOptionsSavingsOpportunityAfterDiscountsPercentage:
            return "RecommendationOptionsSavingsOpportunityAfterDiscountsPercentage";
          case ExportableLambdaFunctionField::RecommendationOptionsEstimatedMonthlySavingsCurrencyAfterDiscounts:
            return "RecommendationOptionsEstimatedMonthlySavingsCurrencyAfterDiscounts";
          case ExportableLambdaFunctionField::RecommendationOptionsEstimatedMonthlySavingsValueAfterDiscounts:
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

      } // namespace ExportableLambdaFunctionFieldMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
