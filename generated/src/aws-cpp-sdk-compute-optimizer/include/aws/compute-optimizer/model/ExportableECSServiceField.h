/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{
  enum class ExportableECSServiceField
  {
    NOT_SET,
    AccountId,
    ServiceArn,
    LookbackPeriodInDays,
    LastRefreshTimestamp,
    LaunchType,
    CurrentPerformanceRisk,
    CurrentServiceConfigurationMemory,
    CurrentServiceConfigurationCpu,
    CurrentServiceConfigurationTaskDefinitionArn,
    CurrentServiceConfigurationAutoScalingConfiguration,
    CurrentServiceContainerConfigurations,
    UtilizationMetricsCpuMaximum,
    UtilizationMetricsMemoryMaximum,
    Finding,
    FindingReasonCodes,
    RecommendationOptionsMemory,
    RecommendationOptionsCpu,
    RecommendationOptionsSavingsOpportunityPercentage,
    RecommendationOptionsEstimatedMonthlySavingsCurrency,
    RecommendationOptionsEstimatedMonthlySavingsValue,
    RecommendationOptionsContainerRecommendations,
    RecommendationOptionsProjectedUtilizationMetricsCpuMaximum,
    RecommendationOptionsProjectedUtilizationMetricsMemoryMaximum
  };

namespace ExportableECSServiceFieldMapper
{
AWS_COMPUTEOPTIMIZER_API ExportableECSServiceField GetExportableECSServiceFieldForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForExportableECSServiceField(ExportableECSServiceField value);
} // namespace ExportableECSServiceFieldMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
