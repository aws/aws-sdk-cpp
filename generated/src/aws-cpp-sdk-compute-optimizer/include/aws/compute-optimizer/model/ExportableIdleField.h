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
  enum class ExportableIdleField
  {
    NOT_SET,
    AccountId,
    ResourceArn,
    ResourceId,
    ResourceType,
    LastRefreshTimestamp,
    LookbackPeriodInDays,
    SavingsOpportunity,
    SavingsOpportunityAfterDiscount,
    UtilizationMetricsCpuMaximum,
    UtilizationMetricsMemoryMaximum,
    UtilizationMetricsNetworkOutBytesPerSecondMaximum,
    UtilizationMetricsNetworkInBytesPerSecondMaximum,
    UtilizationMetricsDatabaseConnectionsMaximum,
    UtilizationMetricsEBSVolumeReadIOPSMaximum,
    UtilizationMetricsEBSVolumeWriteIOPSMaximum,
    UtilizationMetricsVolumeReadOpsPerSecondMaximum,
    UtilizationMetricsVolumeWriteOpsPerSecondMaximum,
    Finding,
    FindingDescription,
    Tags
  };

namespace ExportableIdleFieldMapper
{
AWS_COMPUTEOPTIMIZER_API ExportableIdleField GetExportableIdleFieldForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForExportableIdleField(ExportableIdleField value);
} // namespace ExportableIdleFieldMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
