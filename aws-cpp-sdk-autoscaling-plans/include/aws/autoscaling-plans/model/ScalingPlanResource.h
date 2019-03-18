/*
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
#include <aws/autoscaling-plans/AutoScalingPlans_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling-plans/model/ServiceNamespace.h>
#include <aws/autoscaling-plans/model/ScalableDimension.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling-plans/model/ScalingStatusCode.h>
#include <aws/autoscaling-plans/model/ScalingPolicy.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AutoScalingPlans
{
namespace Model
{

  /**
   * <p>Represents a scalable resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-plans-2018-01-06/ScalingPlanResource">AWS
   * API Reference</a></p>
   */
  class AWS_AUTOSCALINGPLANS_API ScalingPlanResource
  {
  public:
    ScalingPlanResource();
    ScalingPlanResource(Aws::Utils::Json::JsonView jsonValue);
    ScalingPlanResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the scaling plan.</p>
     */
    inline const Aws::String& GetScalingPlanName() const{ return m_scalingPlanName; }

    /**
     * <p>The name of the scaling plan.</p>
     */
    inline bool ScalingPlanNameHasBeenSet() const { return m_scalingPlanNameHasBeenSet; }

    /**
     * <p>The name of the scaling plan.</p>
     */
    inline void SetScalingPlanName(const Aws::String& value) { m_scalingPlanNameHasBeenSet = true; m_scalingPlanName = value; }

    /**
     * <p>The name of the scaling plan.</p>
     */
    inline void SetScalingPlanName(Aws::String&& value) { m_scalingPlanNameHasBeenSet = true; m_scalingPlanName = std::move(value); }

    /**
     * <p>The name of the scaling plan.</p>
     */
    inline void SetScalingPlanName(const char* value) { m_scalingPlanNameHasBeenSet = true; m_scalingPlanName.assign(value); }

    /**
     * <p>The name of the scaling plan.</p>
     */
    inline ScalingPlanResource& WithScalingPlanName(const Aws::String& value) { SetScalingPlanName(value); return *this;}

    /**
     * <p>The name of the scaling plan.</p>
     */
    inline ScalingPlanResource& WithScalingPlanName(Aws::String&& value) { SetScalingPlanName(std::move(value)); return *this;}

    /**
     * <p>The name of the scaling plan.</p>
     */
    inline ScalingPlanResource& WithScalingPlanName(const char* value) { SetScalingPlanName(value); return *this;}


    /**
     * <p>The version number of the scaling plan.</p>
     */
    inline long long GetScalingPlanVersion() const{ return m_scalingPlanVersion; }

    /**
     * <p>The version number of the scaling plan.</p>
     */
    inline bool ScalingPlanVersionHasBeenSet() const { return m_scalingPlanVersionHasBeenSet; }

    /**
     * <p>The version number of the scaling plan.</p>
     */
    inline void SetScalingPlanVersion(long long value) { m_scalingPlanVersionHasBeenSet = true; m_scalingPlanVersion = value; }

    /**
     * <p>The version number of the scaling plan.</p>
     */
    inline ScalingPlanResource& WithScalingPlanVersion(long long value) { SetScalingPlanVersion(value); return *this;}


    /**
     * <p>The namespace of the AWS service.</p>
     */
    inline const ServiceNamespace& GetServiceNamespace() const{ return m_serviceNamespace; }

    /**
     * <p>The namespace of the AWS service.</p>
     */
    inline bool ServiceNamespaceHasBeenSet() const { return m_serviceNamespaceHasBeenSet; }

    /**
     * <p>The namespace of the AWS service.</p>
     */
    inline void SetServiceNamespace(const ServiceNamespace& value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace = value; }

    /**
     * <p>The namespace of the AWS service.</p>
     */
    inline void SetServiceNamespace(ServiceNamespace&& value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace = std::move(value); }

    /**
     * <p>The namespace of the AWS service.</p>
     */
    inline ScalingPlanResource& WithServiceNamespace(const ServiceNamespace& value) { SetServiceNamespace(value); return *this;}

    /**
     * <p>The namespace of the AWS service.</p>
     */
    inline ScalingPlanResource& WithServiceNamespace(ServiceNamespace&& value) { SetServiceNamespace(std::move(value)); return *this;}


    /**
     * <p>The ID of the resource. This string consists of the resource type and unique
     * identifier.</p> <ul> <li> <p>Auto Scaling group - The resource type is
     * <code>autoScalingGroup</code> and the unique identifier is the name of the Auto
     * Scaling group. Example: <code>autoScalingGroup/my-asg</code>.</p> </li> <li>
     * <p>ECS service - The resource type is <code>service</code> and the unique
     * identifier is the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot Fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot Fleet request ID. Example:
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     * </li> <li> <p>DynamoDB table - The resource type is <code>table</code> and the
     * unique identifier is the resource ID. Example: <code>table/my-table</code>.</p>
     * </li> <li> <p>DynamoDB global secondary index - The resource type is
     * <code>index</code> and the unique identifier is the resource ID. Example:
     * <code>table/my-table/index/my-table-index</code>.</p> </li> <li> <p>Aurora DB
     * cluster - The resource type is <code>cluster</code> and the unique identifier is
     * the cluster name. Example: <code>cluster:my-db-cluster</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the resource. This string consists of the resource type and unique
     * identifier.</p> <ul> <li> <p>Auto Scaling group - The resource type is
     * <code>autoScalingGroup</code> and the unique identifier is the name of the Auto
     * Scaling group. Example: <code>autoScalingGroup/my-asg</code>.</p> </li> <li>
     * <p>ECS service - The resource type is <code>service</code> and the unique
     * identifier is the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot Fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot Fleet request ID. Example:
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     * </li> <li> <p>DynamoDB table - The resource type is <code>table</code> and the
     * unique identifier is the resource ID. Example: <code>table/my-table</code>.</p>
     * </li> <li> <p>DynamoDB global secondary index - The resource type is
     * <code>index</code> and the unique identifier is the resource ID. Example:
     * <code>table/my-table/index/my-table-index</code>.</p> </li> <li> <p>Aurora DB
     * cluster - The resource type is <code>cluster</code> and the unique identifier is
     * the cluster name. Example: <code>cluster:my-db-cluster</code>.</p> </li> </ul>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The ID of the resource. This string consists of the resource type and unique
     * identifier.</p> <ul> <li> <p>Auto Scaling group - The resource type is
     * <code>autoScalingGroup</code> and the unique identifier is the name of the Auto
     * Scaling group. Example: <code>autoScalingGroup/my-asg</code>.</p> </li> <li>
     * <p>ECS service - The resource type is <code>service</code> and the unique
     * identifier is the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot Fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot Fleet request ID. Example:
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     * </li> <li> <p>DynamoDB table - The resource type is <code>table</code> and the
     * unique identifier is the resource ID. Example: <code>table/my-table</code>.</p>
     * </li> <li> <p>DynamoDB global secondary index - The resource type is
     * <code>index</code> and the unique identifier is the resource ID. Example:
     * <code>table/my-table/index/my-table-index</code>.</p> </li> <li> <p>Aurora DB
     * cluster - The resource type is <code>cluster</code> and the unique identifier is
     * the cluster name. Example: <code>cluster:my-db-cluster</code>.</p> </li> </ul>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the resource. This string consists of the resource type and unique
     * identifier.</p> <ul> <li> <p>Auto Scaling group - The resource type is
     * <code>autoScalingGroup</code> and the unique identifier is the name of the Auto
     * Scaling group. Example: <code>autoScalingGroup/my-asg</code>.</p> </li> <li>
     * <p>ECS service - The resource type is <code>service</code> and the unique
     * identifier is the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot Fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot Fleet request ID. Example:
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     * </li> <li> <p>DynamoDB table - The resource type is <code>table</code> and the
     * unique identifier is the resource ID. Example: <code>table/my-table</code>.</p>
     * </li> <li> <p>DynamoDB global secondary index - The resource type is
     * <code>index</code> and the unique identifier is the resource ID. Example:
     * <code>table/my-table/index/my-table-index</code>.</p> </li> <li> <p>Aurora DB
     * cluster - The resource type is <code>cluster</code> and the unique identifier is
     * the cluster name. Example: <code>cluster:my-db-cluster</code>.</p> </li> </ul>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The ID of the resource. This string consists of the resource type and unique
     * identifier.</p> <ul> <li> <p>Auto Scaling group - The resource type is
     * <code>autoScalingGroup</code> and the unique identifier is the name of the Auto
     * Scaling group. Example: <code>autoScalingGroup/my-asg</code>.</p> </li> <li>
     * <p>ECS service - The resource type is <code>service</code> and the unique
     * identifier is the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot Fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot Fleet request ID. Example:
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     * </li> <li> <p>DynamoDB table - The resource type is <code>table</code> and the
     * unique identifier is the resource ID. Example: <code>table/my-table</code>.</p>
     * </li> <li> <p>DynamoDB global secondary index - The resource type is
     * <code>index</code> and the unique identifier is the resource ID. Example:
     * <code>table/my-table/index/my-table-index</code>.</p> </li> <li> <p>Aurora DB
     * cluster - The resource type is <code>cluster</code> and the unique identifier is
     * the cluster name. Example: <code>cluster:my-db-cluster</code>.</p> </li> </ul>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The ID of the resource. This string consists of the resource type and unique
     * identifier.</p> <ul> <li> <p>Auto Scaling group - The resource type is
     * <code>autoScalingGroup</code> and the unique identifier is the name of the Auto
     * Scaling group. Example: <code>autoScalingGroup/my-asg</code>.</p> </li> <li>
     * <p>ECS service - The resource type is <code>service</code> and the unique
     * identifier is the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot Fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot Fleet request ID. Example:
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     * </li> <li> <p>DynamoDB table - The resource type is <code>table</code> and the
     * unique identifier is the resource ID. Example: <code>table/my-table</code>.</p>
     * </li> <li> <p>DynamoDB global secondary index - The resource type is
     * <code>index</code> and the unique identifier is the resource ID. Example:
     * <code>table/my-table/index/my-table-index</code>.</p> </li> <li> <p>Aurora DB
     * cluster - The resource type is <code>cluster</code> and the unique identifier is
     * the cluster name. Example: <code>cluster:my-db-cluster</code>.</p> </li> </ul>
     */
    inline ScalingPlanResource& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the resource. This string consists of the resource type and unique
     * identifier.</p> <ul> <li> <p>Auto Scaling group - The resource type is
     * <code>autoScalingGroup</code> and the unique identifier is the name of the Auto
     * Scaling group. Example: <code>autoScalingGroup/my-asg</code>.</p> </li> <li>
     * <p>ECS service - The resource type is <code>service</code> and the unique
     * identifier is the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot Fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot Fleet request ID. Example:
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     * </li> <li> <p>DynamoDB table - The resource type is <code>table</code> and the
     * unique identifier is the resource ID. Example: <code>table/my-table</code>.</p>
     * </li> <li> <p>DynamoDB global secondary index - The resource type is
     * <code>index</code> and the unique identifier is the resource ID. Example:
     * <code>table/my-table/index/my-table-index</code>.</p> </li> <li> <p>Aurora DB
     * cluster - The resource type is <code>cluster</code> and the unique identifier is
     * the cluster name. Example: <code>cluster:my-db-cluster</code>.</p> </li> </ul>
     */
    inline ScalingPlanResource& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resource. This string consists of the resource type and unique
     * identifier.</p> <ul> <li> <p>Auto Scaling group - The resource type is
     * <code>autoScalingGroup</code> and the unique identifier is the name of the Auto
     * Scaling group. Example: <code>autoScalingGroup/my-asg</code>.</p> </li> <li>
     * <p>ECS service - The resource type is <code>service</code> and the unique
     * identifier is the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot Fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot Fleet request ID. Example:
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     * </li> <li> <p>DynamoDB table - The resource type is <code>table</code> and the
     * unique identifier is the resource ID. Example: <code>table/my-table</code>.</p>
     * </li> <li> <p>DynamoDB global secondary index - The resource type is
     * <code>index</code> and the unique identifier is the resource ID. Example:
     * <code>table/my-table/index/my-table-index</code>.</p> </li> <li> <p>Aurora DB
     * cluster - The resource type is <code>cluster</code> and the unique identifier is
     * the cluster name. Example: <code>cluster:my-db-cluster</code>.</p> </li> </ul>
     */
    inline ScalingPlanResource& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The scalable dimension for the resource.</p> <ul> <li> <p>
     * <code>autoscaling:autoScalingGroup:DesiredCapacity</code> - The desired capacity
     * of an Auto Scaling group.</p> </li> <li> <p>
     * <code>ecs:service:DesiredCount</code> - The desired task count of an ECS
     * service.</p> </li> <li> <p> <code>ec2:spot-fleet-request:TargetCapacity</code> -
     * The target capacity of a Spot Fleet request.</p> </li> <li> <p>
     * <code>dynamodb:table:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:table:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:index:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>dynamodb:index:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>rds:cluster:ReadReplicaCount</code> - The count of Aurora Replicas in an
     * Aurora DB cluster. Available for Aurora MySQL-compatible edition and Aurora
     * PostgreSQL-compatible edition.</p> </li> </ul>
     */
    inline const ScalableDimension& GetScalableDimension() const{ return m_scalableDimension; }

    /**
     * <p>The scalable dimension for the resource.</p> <ul> <li> <p>
     * <code>autoscaling:autoScalingGroup:DesiredCapacity</code> - The desired capacity
     * of an Auto Scaling group.</p> </li> <li> <p>
     * <code>ecs:service:DesiredCount</code> - The desired task count of an ECS
     * service.</p> </li> <li> <p> <code>ec2:spot-fleet-request:TargetCapacity</code> -
     * The target capacity of a Spot Fleet request.</p> </li> <li> <p>
     * <code>dynamodb:table:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:table:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:index:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>dynamodb:index:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>rds:cluster:ReadReplicaCount</code> - The count of Aurora Replicas in an
     * Aurora DB cluster. Available for Aurora MySQL-compatible edition and Aurora
     * PostgreSQL-compatible edition.</p> </li> </ul>
     */
    inline bool ScalableDimensionHasBeenSet() const { return m_scalableDimensionHasBeenSet; }

    /**
     * <p>The scalable dimension for the resource.</p> <ul> <li> <p>
     * <code>autoscaling:autoScalingGroup:DesiredCapacity</code> - The desired capacity
     * of an Auto Scaling group.</p> </li> <li> <p>
     * <code>ecs:service:DesiredCount</code> - The desired task count of an ECS
     * service.</p> </li> <li> <p> <code>ec2:spot-fleet-request:TargetCapacity</code> -
     * The target capacity of a Spot Fleet request.</p> </li> <li> <p>
     * <code>dynamodb:table:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:table:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:index:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>dynamodb:index:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>rds:cluster:ReadReplicaCount</code> - The count of Aurora Replicas in an
     * Aurora DB cluster. Available for Aurora MySQL-compatible edition and Aurora
     * PostgreSQL-compatible edition.</p> </li> </ul>
     */
    inline void SetScalableDimension(const ScalableDimension& value) { m_scalableDimensionHasBeenSet = true; m_scalableDimension = value; }

    /**
     * <p>The scalable dimension for the resource.</p> <ul> <li> <p>
     * <code>autoscaling:autoScalingGroup:DesiredCapacity</code> - The desired capacity
     * of an Auto Scaling group.</p> </li> <li> <p>
     * <code>ecs:service:DesiredCount</code> - The desired task count of an ECS
     * service.</p> </li> <li> <p> <code>ec2:spot-fleet-request:TargetCapacity</code> -
     * The target capacity of a Spot Fleet request.</p> </li> <li> <p>
     * <code>dynamodb:table:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:table:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:index:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>dynamodb:index:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>rds:cluster:ReadReplicaCount</code> - The count of Aurora Replicas in an
     * Aurora DB cluster. Available for Aurora MySQL-compatible edition and Aurora
     * PostgreSQL-compatible edition.</p> </li> </ul>
     */
    inline void SetScalableDimension(ScalableDimension&& value) { m_scalableDimensionHasBeenSet = true; m_scalableDimension = std::move(value); }

    /**
     * <p>The scalable dimension for the resource.</p> <ul> <li> <p>
     * <code>autoscaling:autoScalingGroup:DesiredCapacity</code> - The desired capacity
     * of an Auto Scaling group.</p> </li> <li> <p>
     * <code>ecs:service:DesiredCount</code> - The desired task count of an ECS
     * service.</p> </li> <li> <p> <code>ec2:spot-fleet-request:TargetCapacity</code> -
     * The target capacity of a Spot Fleet request.</p> </li> <li> <p>
     * <code>dynamodb:table:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:table:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:index:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>dynamodb:index:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>rds:cluster:ReadReplicaCount</code> - The count of Aurora Replicas in an
     * Aurora DB cluster. Available for Aurora MySQL-compatible edition and Aurora
     * PostgreSQL-compatible edition.</p> </li> </ul>
     */
    inline ScalingPlanResource& WithScalableDimension(const ScalableDimension& value) { SetScalableDimension(value); return *this;}

    /**
     * <p>The scalable dimension for the resource.</p> <ul> <li> <p>
     * <code>autoscaling:autoScalingGroup:DesiredCapacity</code> - The desired capacity
     * of an Auto Scaling group.</p> </li> <li> <p>
     * <code>ecs:service:DesiredCount</code> - The desired task count of an ECS
     * service.</p> </li> <li> <p> <code>ec2:spot-fleet-request:TargetCapacity</code> -
     * The target capacity of a Spot Fleet request.</p> </li> <li> <p>
     * <code>dynamodb:table:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:table:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:index:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>dynamodb:index:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>rds:cluster:ReadReplicaCount</code> - The count of Aurora Replicas in an
     * Aurora DB cluster. Available for Aurora MySQL-compatible edition and Aurora
     * PostgreSQL-compatible edition.</p> </li> </ul>
     */
    inline ScalingPlanResource& WithScalableDimension(ScalableDimension&& value) { SetScalableDimension(std::move(value)); return *this;}


    /**
     * <p>The scaling policies.</p>
     */
    inline const Aws::Vector<ScalingPolicy>& GetScalingPolicies() const{ return m_scalingPolicies; }

    /**
     * <p>The scaling policies.</p>
     */
    inline bool ScalingPoliciesHasBeenSet() const { return m_scalingPoliciesHasBeenSet; }

    /**
     * <p>The scaling policies.</p>
     */
    inline void SetScalingPolicies(const Aws::Vector<ScalingPolicy>& value) { m_scalingPoliciesHasBeenSet = true; m_scalingPolicies = value; }

    /**
     * <p>The scaling policies.</p>
     */
    inline void SetScalingPolicies(Aws::Vector<ScalingPolicy>&& value) { m_scalingPoliciesHasBeenSet = true; m_scalingPolicies = std::move(value); }

    /**
     * <p>The scaling policies.</p>
     */
    inline ScalingPlanResource& WithScalingPolicies(const Aws::Vector<ScalingPolicy>& value) { SetScalingPolicies(value); return *this;}

    /**
     * <p>The scaling policies.</p>
     */
    inline ScalingPlanResource& WithScalingPolicies(Aws::Vector<ScalingPolicy>&& value) { SetScalingPolicies(std::move(value)); return *this;}

    /**
     * <p>The scaling policies.</p>
     */
    inline ScalingPlanResource& AddScalingPolicies(const ScalingPolicy& value) { m_scalingPoliciesHasBeenSet = true; m_scalingPolicies.push_back(value); return *this; }

    /**
     * <p>The scaling policies.</p>
     */
    inline ScalingPlanResource& AddScalingPolicies(ScalingPolicy&& value) { m_scalingPoliciesHasBeenSet = true; m_scalingPolicies.push_back(std::move(value)); return *this; }


    /**
     * <p>The scaling status of the resource.</p> <ul> <li> <p> <code>Active</code> -
     * The scaling configuration is active.</p> </li> <li> <p> <code>Inactive</code> -
     * The scaling configuration is not active because the scaling plan is being
     * created or the scaling configuration could not be applied. Check the status
     * message for more information.</p> </li> <li> <p> <code>PartiallyActive</code> -
     * The scaling configuration is partially active because the scaling plan is being
     * created or deleted or the scaling configuration could not be fully applied.
     * Check the status message for more information.</p> </li> </ul>
     */
    inline const ScalingStatusCode& GetScalingStatusCode() const{ return m_scalingStatusCode; }

    /**
     * <p>The scaling status of the resource.</p> <ul> <li> <p> <code>Active</code> -
     * The scaling configuration is active.</p> </li> <li> <p> <code>Inactive</code> -
     * The scaling configuration is not active because the scaling plan is being
     * created or the scaling configuration could not be applied. Check the status
     * message for more information.</p> </li> <li> <p> <code>PartiallyActive</code> -
     * The scaling configuration is partially active because the scaling plan is being
     * created or deleted or the scaling configuration could not be fully applied.
     * Check the status message for more information.</p> </li> </ul>
     */
    inline bool ScalingStatusCodeHasBeenSet() const { return m_scalingStatusCodeHasBeenSet; }

    /**
     * <p>The scaling status of the resource.</p> <ul> <li> <p> <code>Active</code> -
     * The scaling configuration is active.</p> </li> <li> <p> <code>Inactive</code> -
     * The scaling configuration is not active because the scaling plan is being
     * created or the scaling configuration could not be applied. Check the status
     * message for more information.</p> </li> <li> <p> <code>PartiallyActive</code> -
     * The scaling configuration is partially active because the scaling plan is being
     * created or deleted or the scaling configuration could not be fully applied.
     * Check the status message for more information.</p> </li> </ul>
     */
    inline void SetScalingStatusCode(const ScalingStatusCode& value) { m_scalingStatusCodeHasBeenSet = true; m_scalingStatusCode = value; }

    /**
     * <p>The scaling status of the resource.</p> <ul> <li> <p> <code>Active</code> -
     * The scaling configuration is active.</p> </li> <li> <p> <code>Inactive</code> -
     * The scaling configuration is not active because the scaling plan is being
     * created or the scaling configuration could not be applied. Check the status
     * message for more information.</p> </li> <li> <p> <code>PartiallyActive</code> -
     * The scaling configuration is partially active because the scaling plan is being
     * created or deleted or the scaling configuration could not be fully applied.
     * Check the status message for more information.</p> </li> </ul>
     */
    inline void SetScalingStatusCode(ScalingStatusCode&& value) { m_scalingStatusCodeHasBeenSet = true; m_scalingStatusCode = std::move(value); }

    /**
     * <p>The scaling status of the resource.</p> <ul> <li> <p> <code>Active</code> -
     * The scaling configuration is active.</p> </li> <li> <p> <code>Inactive</code> -
     * The scaling configuration is not active because the scaling plan is being
     * created or the scaling configuration could not be applied. Check the status
     * message for more information.</p> </li> <li> <p> <code>PartiallyActive</code> -
     * The scaling configuration is partially active because the scaling plan is being
     * created or deleted or the scaling configuration could not be fully applied.
     * Check the status message for more information.</p> </li> </ul>
     */
    inline ScalingPlanResource& WithScalingStatusCode(const ScalingStatusCode& value) { SetScalingStatusCode(value); return *this;}

    /**
     * <p>The scaling status of the resource.</p> <ul> <li> <p> <code>Active</code> -
     * The scaling configuration is active.</p> </li> <li> <p> <code>Inactive</code> -
     * The scaling configuration is not active because the scaling plan is being
     * created or the scaling configuration could not be applied. Check the status
     * message for more information.</p> </li> <li> <p> <code>PartiallyActive</code> -
     * The scaling configuration is partially active because the scaling plan is being
     * created or deleted or the scaling configuration could not be fully applied.
     * Check the status message for more information.</p> </li> </ul>
     */
    inline ScalingPlanResource& WithScalingStatusCode(ScalingStatusCode&& value) { SetScalingStatusCode(std::move(value)); return *this;}


    /**
     * <p>A simple message about the current scaling status of the resource.</p>
     */
    inline const Aws::String& GetScalingStatusMessage() const{ return m_scalingStatusMessage; }

    /**
     * <p>A simple message about the current scaling status of the resource.</p>
     */
    inline bool ScalingStatusMessageHasBeenSet() const { return m_scalingStatusMessageHasBeenSet; }

    /**
     * <p>A simple message about the current scaling status of the resource.</p>
     */
    inline void SetScalingStatusMessage(const Aws::String& value) { m_scalingStatusMessageHasBeenSet = true; m_scalingStatusMessage = value; }

    /**
     * <p>A simple message about the current scaling status of the resource.</p>
     */
    inline void SetScalingStatusMessage(Aws::String&& value) { m_scalingStatusMessageHasBeenSet = true; m_scalingStatusMessage = std::move(value); }

    /**
     * <p>A simple message about the current scaling status of the resource.</p>
     */
    inline void SetScalingStatusMessage(const char* value) { m_scalingStatusMessageHasBeenSet = true; m_scalingStatusMessage.assign(value); }

    /**
     * <p>A simple message about the current scaling status of the resource.</p>
     */
    inline ScalingPlanResource& WithScalingStatusMessage(const Aws::String& value) { SetScalingStatusMessage(value); return *this;}

    /**
     * <p>A simple message about the current scaling status of the resource.</p>
     */
    inline ScalingPlanResource& WithScalingStatusMessage(Aws::String&& value) { SetScalingStatusMessage(std::move(value)); return *this;}

    /**
     * <p>A simple message about the current scaling status of the resource.</p>
     */
    inline ScalingPlanResource& WithScalingStatusMessage(const char* value) { SetScalingStatusMessage(value); return *this;}

  private:

    Aws::String m_scalingPlanName;
    bool m_scalingPlanNameHasBeenSet;

    long long m_scalingPlanVersion;
    bool m_scalingPlanVersionHasBeenSet;

    ServiceNamespace m_serviceNamespace;
    bool m_serviceNamespaceHasBeenSet;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;

    ScalableDimension m_scalableDimension;
    bool m_scalableDimensionHasBeenSet;

    Aws::Vector<ScalingPolicy> m_scalingPolicies;
    bool m_scalingPoliciesHasBeenSet;

    ScalingStatusCode m_scalingStatusCode;
    bool m_scalingStatusCodeHasBeenSet;

    Aws::String m_scalingStatusMessage;
    bool m_scalingStatusMessageHasBeenSet;
  };

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
