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
    custom_resource_ResourceType_Property,
    comprehend_document_classifier_endpoint_DesiredInferenceUnits,
    comprehend_entity_recognizer_endpoint_DesiredInferenceUnits,
    lambda_function_ProvisionedConcurrency,
    cassandra_table_ReadCapacityUnits,
    cassandra_table_WriteCapacityUnits,
    kafka_broker_storage_VolumeSize
  };

namespace ScalableDimensionMapper
{
AWS_APPLICATIONAUTOSCALING_API ScalableDimension GetScalableDimensionForName(const Aws::String& name);

AWS_APPLICATIONAUTOSCALING_API Aws::String GetNameForScalableDimension(ScalableDimension value);
} // namespace ScalableDimensionMapper
} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
