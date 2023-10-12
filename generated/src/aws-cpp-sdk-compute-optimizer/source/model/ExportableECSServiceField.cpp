/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/ExportableECSServiceField.h>
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
      namespace ExportableECSServiceFieldMapper
      {

        static constexpr uint32_t AccountId_HASH = ConstExprHashingUtils::HashString("AccountId");
        static constexpr uint32_t ServiceArn_HASH = ConstExprHashingUtils::HashString("ServiceArn");
        static constexpr uint32_t LookbackPeriodInDays_HASH = ConstExprHashingUtils::HashString("LookbackPeriodInDays");
        static constexpr uint32_t LastRefreshTimestamp_HASH = ConstExprHashingUtils::HashString("LastRefreshTimestamp");
        static constexpr uint32_t LaunchType_HASH = ConstExprHashingUtils::HashString("LaunchType");
        static constexpr uint32_t CurrentPerformanceRisk_HASH = ConstExprHashingUtils::HashString("CurrentPerformanceRisk");
        static constexpr uint32_t CurrentServiceConfigurationMemory_HASH = ConstExprHashingUtils::HashString("CurrentServiceConfigurationMemory");
        static constexpr uint32_t CurrentServiceConfigurationCpu_HASH = ConstExprHashingUtils::HashString("CurrentServiceConfigurationCpu");
        static constexpr uint32_t CurrentServiceConfigurationTaskDefinitionArn_HASH = ConstExprHashingUtils::HashString("CurrentServiceConfigurationTaskDefinitionArn");
        static constexpr uint32_t CurrentServiceConfigurationAutoScalingConfiguration_HASH = ConstExprHashingUtils::HashString("CurrentServiceConfigurationAutoScalingConfiguration");
        static constexpr uint32_t CurrentServiceContainerConfigurations_HASH = ConstExprHashingUtils::HashString("CurrentServiceContainerConfigurations");
        static constexpr uint32_t UtilizationMetricsCpuMaximum_HASH = ConstExprHashingUtils::HashString("UtilizationMetricsCpuMaximum");
        static constexpr uint32_t UtilizationMetricsMemoryMaximum_HASH = ConstExprHashingUtils::HashString("UtilizationMetricsMemoryMaximum");
        static constexpr uint32_t Finding_HASH = ConstExprHashingUtils::HashString("Finding");
        static constexpr uint32_t FindingReasonCodes_HASH = ConstExprHashingUtils::HashString("FindingReasonCodes");
        static constexpr uint32_t RecommendationOptionsMemory_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsMemory");
        static constexpr uint32_t RecommendationOptionsCpu_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsCpu");
        static constexpr uint32_t RecommendationOptionsSavingsOpportunityPercentage_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsSavingsOpportunityPercentage");
        static constexpr uint32_t RecommendationOptionsEstimatedMonthlySavingsCurrency_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsEstimatedMonthlySavingsCurrency");
        static constexpr uint32_t RecommendationOptionsEstimatedMonthlySavingsValue_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsEstimatedMonthlySavingsValue");
        static constexpr uint32_t RecommendationOptionsContainerRecommendations_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsContainerRecommendations");
        static constexpr uint32_t RecommendationOptionsProjectedUtilizationMetricsCpuMaximum_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsProjectedUtilizationMetricsCpuMaximum");
        static constexpr uint32_t RecommendationOptionsProjectedUtilizationMetricsMemoryMaximum_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsProjectedUtilizationMetricsMemoryMaximum");
        static constexpr uint32_t Tags_HASH = ConstExprHashingUtils::HashString("Tags");


        ExportableECSServiceField GetExportableECSServiceFieldForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AccountId_HASH)
          {
            return ExportableECSServiceField::AccountId;
          }
          else if (hashCode == ServiceArn_HASH)
          {
            return ExportableECSServiceField::ServiceArn;
          }
          else if (hashCode == LookbackPeriodInDays_HASH)
          {
            return ExportableECSServiceField::LookbackPeriodInDays;
          }
          else if (hashCode == LastRefreshTimestamp_HASH)
          {
            return ExportableECSServiceField::LastRefreshTimestamp;
          }
          else if (hashCode == LaunchType_HASH)
          {
            return ExportableECSServiceField::LaunchType;
          }
          else if (hashCode == CurrentPerformanceRisk_HASH)
          {
            return ExportableECSServiceField::CurrentPerformanceRisk;
          }
          else if (hashCode == CurrentServiceConfigurationMemory_HASH)
          {
            return ExportableECSServiceField::CurrentServiceConfigurationMemory;
          }
          else if (hashCode == CurrentServiceConfigurationCpu_HASH)
          {
            return ExportableECSServiceField::CurrentServiceConfigurationCpu;
          }
          else if (hashCode == CurrentServiceConfigurationTaskDefinitionArn_HASH)
          {
            return ExportableECSServiceField::CurrentServiceConfigurationTaskDefinitionArn;
          }
          else if (hashCode == CurrentServiceConfigurationAutoScalingConfiguration_HASH)
          {
            return ExportableECSServiceField::CurrentServiceConfigurationAutoScalingConfiguration;
          }
          else if (hashCode == CurrentServiceContainerConfigurations_HASH)
          {
            return ExportableECSServiceField::CurrentServiceContainerConfigurations;
          }
          else if (hashCode == UtilizationMetricsCpuMaximum_HASH)
          {
            return ExportableECSServiceField::UtilizationMetricsCpuMaximum;
          }
          else if (hashCode == UtilizationMetricsMemoryMaximum_HASH)
          {
            return ExportableECSServiceField::UtilizationMetricsMemoryMaximum;
          }
          else if (hashCode == Finding_HASH)
          {
            return ExportableECSServiceField::Finding;
          }
          else if (hashCode == FindingReasonCodes_HASH)
          {
            return ExportableECSServiceField::FindingReasonCodes;
          }
          else if (hashCode == RecommendationOptionsMemory_HASH)
          {
            return ExportableECSServiceField::RecommendationOptionsMemory;
          }
          else if (hashCode == RecommendationOptionsCpu_HASH)
          {
            return ExportableECSServiceField::RecommendationOptionsCpu;
          }
          else if (hashCode == RecommendationOptionsSavingsOpportunityPercentage_HASH)
          {
            return ExportableECSServiceField::RecommendationOptionsSavingsOpportunityPercentage;
          }
          else if (hashCode == RecommendationOptionsEstimatedMonthlySavingsCurrency_HASH)
          {
            return ExportableECSServiceField::RecommendationOptionsEstimatedMonthlySavingsCurrency;
          }
          else if (hashCode == RecommendationOptionsEstimatedMonthlySavingsValue_HASH)
          {
            return ExportableECSServiceField::RecommendationOptionsEstimatedMonthlySavingsValue;
          }
          else if (hashCode == RecommendationOptionsContainerRecommendations_HASH)
          {
            return ExportableECSServiceField::RecommendationOptionsContainerRecommendations;
          }
          else if (hashCode == RecommendationOptionsProjectedUtilizationMetricsCpuMaximum_HASH)
          {
            return ExportableECSServiceField::RecommendationOptionsProjectedUtilizationMetricsCpuMaximum;
          }
          else if (hashCode == RecommendationOptionsProjectedUtilizationMetricsMemoryMaximum_HASH)
          {
            return ExportableECSServiceField::RecommendationOptionsProjectedUtilizationMetricsMemoryMaximum;
          }
          else if (hashCode == Tags_HASH)
          {
            return ExportableECSServiceField::Tags;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExportableECSServiceField>(hashCode);
          }

          return ExportableECSServiceField::NOT_SET;
        }

        Aws::String GetNameForExportableECSServiceField(ExportableECSServiceField enumValue)
        {
          switch(enumValue)
          {
          case ExportableECSServiceField::NOT_SET:
            return {};
          case ExportableECSServiceField::AccountId:
            return "AccountId";
          case ExportableECSServiceField::ServiceArn:
            return "ServiceArn";
          case ExportableECSServiceField::LookbackPeriodInDays:
            return "LookbackPeriodInDays";
          case ExportableECSServiceField::LastRefreshTimestamp:
            return "LastRefreshTimestamp";
          case ExportableECSServiceField::LaunchType:
            return "LaunchType";
          case ExportableECSServiceField::CurrentPerformanceRisk:
            return "CurrentPerformanceRisk";
          case ExportableECSServiceField::CurrentServiceConfigurationMemory:
            return "CurrentServiceConfigurationMemory";
          case ExportableECSServiceField::CurrentServiceConfigurationCpu:
            return "CurrentServiceConfigurationCpu";
          case ExportableECSServiceField::CurrentServiceConfigurationTaskDefinitionArn:
            return "CurrentServiceConfigurationTaskDefinitionArn";
          case ExportableECSServiceField::CurrentServiceConfigurationAutoScalingConfiguration:
            return "CurrentServiceConfigurationAutoScalingConfiguration";
          case ExportableECSServiceField::CurrentServiceContainerConfigurations:
            return "CurrentServiceContainerConfigurations";
          case ExportableECSServiceField::UtilizationMetricsCpuMaximum:
            return "UtilizationMetricsCpuMaximum";
          case ExportableECSServiceField::UtilizationMetricsMemoryMaximum:
            return "UtilizationMetricsMemoryMaximum";
          case ExportableECSServiceField::Finding:
            return "Finding";
          case ExportableECSServiceField::FindingReasonCodes:
            return "FindingReasonCodes";
          case ExportableECSServiceField::RecommendationOptionsMemory:
            return "RecommendationOptionsMemory";
          case ExportableECSServiceField::RecommendationOptionsCpu:
            return "RecommendationOptionsCpu";
          case ExportableECSServiceField::RecommendationOptionsSavingsOpportunityPercentage:
            return "RecommendationOptionsSavingsOpportunityPercentage";
          case ExportableECSServiceField::RecommendationOptionsEstimatedMonthlySavingsCurrency:
            return "RecommendationOptionsEstimatedMonthlySavingsCurrency";
          case ExportableECSServiceField::RecommendationOptionsEstimatedMonthlySavingsValue:
            return "RecommendationOptionsEstimatedMonthlySavingsValue";
          case ExportableECSServiceField::RecommendationOptionsContainerRecommendations:
            return "RecommendationOptionsContainerRecommendations";
          case ExportableECSServiceField::RecommendationOptionsProjectedUtilizationMetricsCpuMaximum:
            return "RecommendationOptionsProjectedUtilizationMetricsCpuMaximum";
          case ExportableECSServiceField::RecommendationOptionsProjectedUtilizationMetricsMemoryMaximum:
            return "RecommendationOptionsProjectedUtilizationMetricsMemoryMaximum";
          case ExportableECSServiceField::Tags:
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

      } // namespace ExportableECSServiceFieldMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
