/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling-plans/AutoScalingPlans_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AutoScalingPlans
{
namespace Model
{
  enum class ScalingMetricType
  {
    NOT_SET,
    ASGAverageCPUUtilization,
    ASGAverageNetworkIn,
    ASGAverageNetworkOut,
    DynamoDBReadCapacityUtilization,
    DynamoDBWriteCapacityUtilization,
    ECSServiceAverageCPUUtilization,
    ECSServiceAverageMemoryUtilization,
    ALBRequestCountPerTarget,
    RDSReaderAverageCPUUtilization,
    RDSReaderAverageDatabaseConnections,
    EC2SpotFleetRequestAverageCPUUtilization,
    EC2SpotFleetRequestAverageNetworkIn,
    EC2SpotFleetRequestAverageNetworkOut
  };

namespace ScalingMetricTypeMapper
{
AWS_AUTOSCALINGPLANS_API ScalingMetricType GetScalingMetricTypeForName(const Aws::String& name);

AWS_AUTOSCALINGPLANS_API Aws::String GetNameForScalingMetricType(ScalingMetricType value);
} // namespace ScalingMetricTypeMapper
} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
