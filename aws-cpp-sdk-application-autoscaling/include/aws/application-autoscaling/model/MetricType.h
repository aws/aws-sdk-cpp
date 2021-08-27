/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ApplicationAutoScaling
{
namespace Model
{
  enum class MetricType
  {
    NOT_SET,
    DynamoDBReadCapacityUtilization,
    DynamoDBWriteCapacityUtilization,
    ALBRequestCountPerTarget,
    RDSReaderAverageCPUUtilization,
    RDSReaderAverageDatabaseConnections,
    EC2SpotFleetRequestAverageCPUUtilization,
    EC2SpotFleetRequestAverageNetworkIn,
    EC2SpotFleetRequestAverageNetworkOut,
    SageMakerVariantInvocationsPerInstance,
    ECSServiceAverageCPUUtilization,
    ECSServiceAverageMemoryUtilization,
    AppStreamAverageCapacityUtilization,
    ComprehendInferenceUtilization,
    LambdaProvisionedConcurrencyUtilization,
    CassandraReadCapacityUtilization,
    CassandraWriteCapacityUtilization,
    KafkaBrokerStorageUtilization
  };

namespace MetricTypeMapper
{
AWS_APPLICATIONAUTOSCALING_API MetricType GetMetricTypeForName(const Aws::String& name);

AWS_APPLICATIONAUTOSCALING_API Aws::String GetNameForMetricType(MetricType value);
} // namespace MetricTypeMapper
} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
