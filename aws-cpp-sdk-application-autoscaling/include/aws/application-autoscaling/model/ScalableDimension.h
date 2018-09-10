﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  enum class ScalableDimension
  {
    NOT_SET,
    ecs_service_DesiredCount,
    ec2_spot_fleet_request_TargetCapacity,
    elasticmapreduce_instancegroup_InstanceCount,
    appstream_fleet_DesiredCapacity,
    dynamodb_table_ReadCapacityUnits,
    dynamodb_table_WriteCapacityUnits,
    dynamodb_index_ReadCapacityUnits,
    dynamodb_index_WriteCapacityUnits,
    rds_cluster_ReadReplicaCount,
    sagemaker_variant_DesiredInstanceCount,
    custom_resource_ResourceType_Property
  };

namespace ScalableDimensionMapper
{
AWS_APPLICATIONAUTOSCALING_API ScalableDimension GetScalableDimensionForName(const Aws::String& name);

AWS_APPLICATIONAUTOSCALING_API Aws::String GetNameForScalableDimension(ScalableDimension value);
} // namespace ScalableDimensionMapper
} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
