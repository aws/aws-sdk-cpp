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

        static constexpr uint32_t AccountId_HASH = ConstExprHashingUtils::HashString("AccountId");
        static constexpr uint32_t FunctionArn_HASH = ConstExprHashingUtils::HashString("FunctionArn");
        static constexpr uint32_t FunctionVersion_HASH = ConstExprHashingUtils::HashString("FunctionVersion");
        static constexpr uint32_t Finding_HASH = ConstExprHashingUtils::HashString("Finding");
        static constexpr uint32_t FindingReasonCodes_HASH = ConstExprHashingUtils::HashString("FindingReasonCodes");
        static constexpr uint32_t NumberOfInvocations_HASH = ConstExprHashingUtils::HashString("NumberOfInvocations");
        static constexpr uint32_t UtilizationMetricsDurationMaximum_HASH = ConstExprHashingUtils::HashString("UtilizationMetricsDurationMaximum");
        static constexpr uint32_t UtilizationMetricsDurationAverage_HASH = ConstExprHashingUtils::HashString("UtilizationMetricsDurationAverage");
        static constexpr uint32_t UtilizationMetricsMemoryMaximum_HASH = ConstExprHashingUtils::HashString("UtilizationMetricsMemoryMaximum");
        static constexpr uint32_t UtilizationMetricsMemoryAverage_HASH = ConstExprHashingUtils::HashString("UtilizationMetricsMemoryAverage");
        static constexpr uint32_t LookbackPeriodInDays_HASH = ConstExprHashingUtils::HashString("LookbackPeriodInDays");
        static constexpr uint32_t CurrentConfigurationMemorySize_HASH = ConstExprHashingUtils::HashString("CurrentConfigurationMemorySize");
        static constexpr uint32_t CurrentConfigurationTimeout_HASH = ConstExprHashingUtils::HashString("CurrentConfigurationTimeout");
        static constexpr uint32_t CurrentCostTotal_HASH = ConstExprHashingUtils::HashString("CurrentCostTotal");
        static constexpr uint32_t CurrentCostAverage_HASH = ConstExprHashingUtils::HashString("CurrentCostAverage");
        static constexpr uint32_t RecommendationOptionsConfigurationMemorySize_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsConfigurationMemorySize");
        static constexpr uint32_t RecommendationOptionsCostLow_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsCostLow");
        static constexpr uint32_t RecommendationOptionsCostHigh_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsCostHigh");
        static constexpr uint32_t RecommendationOptionsProjectedUtilizationMetricsDurationLowerBound_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsProjectedUtilizationMetricsDurationLowerBound");
        static constexpr uint32_t RecommendationOptionsProjectedUtilizationMetricsDurationUpperBound_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsProjectedUtilizationMetricsDurationUpperBound");
        static constexpr uint32_t RecommendationOptionsProjectedUtilizationMetricsDurationExpected_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsProjectedUtilizationMetricsDurationExpected");
        static constexpr uint32_t LastRefreshTimestamp_HASH = ConstExprHashingUtils::HashString("LastRefreshTimestamp");
        static constexpr uint32_t CurrentPerformanceRisk_HASH = ConstExprHashingUtils::HashString("CurrentPerformanceRisk");
        static constexpr uint32_t RecommendationOptionsSavingsOpportunityPercentage_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsSavingsOpportunityPercentage");
        static constexpr uint32_t RecommendationOptionsEstimatedMonthlySavingsCurrency_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsEstimatedMonthlySavingsCurrency");
        static constexpr uint32_t RecommendationOptionsEstimatedMonthlySavingsValue_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsEstimatedMonthlySavingsValue");
        static constexpr uint32_t Tags_HASH = ConstExprHashingUtils::HashString("Tags");


        ExportableLambdaFunctionField GetExportableLambdaFunctionFieldForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
