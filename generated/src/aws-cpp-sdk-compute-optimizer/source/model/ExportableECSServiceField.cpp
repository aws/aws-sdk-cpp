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

        static const int AccountId_HASH = HashingUtils::HashString("AccountId");
        static const int ServiceArn_HASH = HashingUtils::HashString("ServiceArn");
        static const int LookbackPeriodInDays_HASH = HashingUtils::HashString("LookbackPeriodInDays");
        static const int LastRefreshTimestamp_HASH = HashingUtils::HashString("LastRefreshTimestamp");
        static const int LaunchType_HASH = HashingUtils::HashString("LaunchType");
        static const int CurrentPerformanceRisk_HASH = HashingUtils::HashString("CurrentPerformanceRisk");
        static const int CurrentServiceConfigurationMemory_HASH = HashingUtils::HashString("CurrentServiceConfigurationMemory");
        static const int CurrentServiceConfigurationCpu_HASH = HashingUtils::HashString("CurrentServiceConfigurationCpu");
        static const int CurrentServiceConfigurationTaskDefinitionArn_HASH = HashingUtils::HashString("CurrentServiceConfigurationTaskDefinitionArn");
        static const int CurrentServiceConfigurationAutoScalingConfiguration_HASH = HashingUtils::HashString("CurrentServiceConfigurationAutoScalingConfiguration");
        static const int CurrentServiceContainerConfigurations_HASH = HashingUtils::HashString("CurrentServiceContainerConfigurations");
        static const int UtilizationMetricsCpuMaximum_HASH = HashingUtils::HashString("UtilizationMetricsCpuMaximum");
        static const int UtilizationMetricsMemoryMaximum_HASH = HashingUtils::HashString("UtilizationMetricsMemoryMaximum");
        static const int Finding_HASH = HashingUtils::HashString("Finding");
        static const int FindingReasonCodes_HASH = HashingUtils::HashString("FindingReasonCodes");
        static const int RecommendationOptionsMemory_HASH = HashingUtils::HashString("RecommendationOptionsMemory");
        static const int RecommendationOptionsCpu_HASH = HashingUtils::HashString("RecommendationOptionsCpu");
        static const int RecommendationOptionsSavingsOpportunityPercentage_HASH = HashingUtils::HashString("RecommendationOptionsSavingsOpportunityPercentage");
        static const int RecommendationOptionsEstimatedMonthlySavingsCurrency_HASH = HashingUtils::HashString("RecommendationOptionsEstimatedMonthlySavingsCurrency");
        static const int RecommendationOptionsEstimatedMonthlySavingsValue_HASH = HashingUtils::HashString("RecommendationOptionsEstimatedMonthlySavingsValue");
        static const int RecommendationOptionsContainerRecommendations_HASH = HashingUtils::HashString("RecommendationOptionsContainerRecommendations");
        static const int RecommendationOptionsProjectedUtilizationMetricsCpuMaximum_HASH = HashingUtils::HashString("RecommendationOptionsProjectedUtilizationMetricsCpuMaximum");
        static const int RecommendationOptionsProjectedUtilizationMetricsMemoryMaximum_HASH = HashingUtils::HashString("RecommendationOptionsProjectedUtilizationMetricsMemoryMaximum");


        ExportableECSServiceField GetExportableECSServiceFieldForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
