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
  enum class ScalableDimension
  {
    NOT_SET,
    autoscaling_autoScalingGroup_DesiredCapacity,
    ecs_service_DesiredCount,
    ec2_spot_fleet_request_TargetCapacity,
    rds_cluster_ReadReplicaCount,
    dynamodb_table_ReadCapacityUnits,
    dynamodb_table_WriteCapacityUnits,
    dynamodb_index_ReadCapacityUnits,
    dynamodb_index_WriteCapacityUnits
  };

namespace ScalableDimensionMapper
{
AWS_AUTOSCALINGPLANS_API ScalableDimension GetScalableDimensionForName(const Aws::String& name);

AWS_AUTOSCALINGPLANS_API Aws::String GetNameForScalableDimension(ScalableDimension value);
} // namespace ScalableDimensionMapper
} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
