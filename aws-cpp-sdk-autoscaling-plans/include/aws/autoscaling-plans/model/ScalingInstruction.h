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
#include <aws/autoscaling-plans/model/ServiceNamespace.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling-plans/model/ScalableDimension.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling-plans/model/PredefinedLoadMetricSpecification.h>
#include <aws/autoscaling-plans/model/CustomizedLoadMetricSpecification.h>
#include <aws/autoscaling-plans/model/PredictiveScalingMaxCapacityBehavior.h>
#include <aws/autoscaling-plans/model/PredictiveScalingMode.h>
#include <aws/autoscaling-plans/model/ScalingPolicyUpdateBehavior.h>
#include <aws/autoscaling-plans/model/TargetTrackingConfiguration.h>
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
   * <p>Describes a scaling instruction for a scalable resource.</p> <p>The scaling
   * instruction is used in combination with a scaling plan, which is a set of
   * instructions for configuring dynamic scaling and predictive scaling for the
   * scalable resources in your application. Each scaling instruction applies to one
   * resource.</p> <p>AWS Auto Scaling creates target tracking scaling policies based
   * on the scaling instructions. Target tracking scaling policies adjust the
   * capacity of your scalable resource as required to maintain resource utilization
   * at the target value that you specified. </p> <p>AWS Auto Scaling also configures
   * predictive scaling for your Amazon EC2 Auto Scaling groups using a subset of
   * parameters, including the load metric, the scaling metric, the target value for
   * the scaling metric, the predictive scaling mode (forecast and scale or forecast
   * only), and the desired behavior when the forecast capacity exceeds the maximum
   * capacity of the resource. With predictive scaling, AWS Auto Scaling generates
   * forecasts with traffic predictions for the two days ahead and schedules scaling
   * actions that proactively add and remove resource capacity to match the forecast.
   * </p> <p>We recommend waiting a minimum of 24 hours after creating an Auto
   * Scaling group to configure predictive scaling. At minimum, there must be 24
   * hours of historical data to generate a forecast.</p> <p>For more information,
   * see <a
   * href="https://docs.aws.amazon.com/autoscaling/plans/userguide/auto-scaling-getting-started.html">Getting
   * Started with AWS Auto Scaling</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-plans-2018-01-06/ScalingInstruction">AWS
   * API Reference</a></p>
   */
  class AWS_AUTOSCALINGPLANS_API ScalingInstruction
  {
  public:
    ScalingInstruction();
    ScalingInstruction(Aws::Utils::Json::JsonView jsonValue);
    ScalingInstruction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline ScalingInstruction& WithServiceNamespace(const ServiceNamespace& value) { SetServiceNamespace(value); return *this;}

    /**
     * <p>The namespace of the AWS service.</p>
     */
    inline ScalingInstruction& WithServiceNamespace(ServiceNamespace&& value) { SetServiceNamespace(std::move(value)); return *this;}


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
    inline ScalingInstruction& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

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
    inline ScalingInstruction& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

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
    inline ScalingInstruction& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The scalable dimension associated with the resource.</p> <ul> <li> <p>
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
     * <p>The scalable dimension associated with the resource.</p> <ul> <li> <p>
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
     * <p>The scalable dimension associated with the resource.</p> <ul> <li> <p>
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
     * <p>The scalable dimension associated with the resource.</p> <ul> <li> <p>
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
     * <p>The scalable dimension associated with the resource.</p> <ul> <li> <p>
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
    inline ScalingInstruction& WithScalableDimension(const ScalableDimension& value) { SetScalableDimension(value); return *this;}

    /**
     * <p>The scalable dimension associated with the resource.</p> <ul> <li> <p>
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
    inline ScalingInstruction& WithScalableDimension(ScalableDimension&& value) { SetScalableDimension(std::move(value)); return *this;}


    /**
     * <p>The minimum capacity of the resource. </p>
     */
    inline int GetMinCapacity() const{ return m_minCapacity; }

    /**
     * <p>The minimum capacity of the resource. </p>
     */
    inline bool MinCapacityHasBeenSet() const { return m_minCapacityHasBeenSet; }

    /**
     * <p>The minimum capacity of the resource. </p>
     */
    inline void SetMinCapacity(int value) { m_minCapacityHasBeenSet = true; m_minCapacity = value; }

    /**
     * <p>The minimum capacity of the resource. </p>
     */
    inline ScalingInstruction& WithMinCapacity(int value) { SetMinCapacity(value); return *this;}


    /**
     * <p>The maximum capacity of the resource. The exception to this upper limit is if
     * you specify a non-default setting for
     * <b>PredictiveScalingMaxCapacityBehavior</b>. </p>
     */
    inline int GetMaxCapacity() const{ return m_maxCapacity; }

    /**
     * <p>The maximum capacity of the resource. The exception to this upper limit is if
     * you specify a non-default setting for
     * <b>PredictiveScalingMaxCapacityBehavior</b>. </p>
     */
    inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }

    /**
     * <p>The maximum capacity of the resource. The exception to this upper limit is if
     * you specify a non-default setting for
     * <b>PredictiveScalingMaxCapacityBehavior</b>. </p>
     */
    inline void SetMaxCapacity(int value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }

    /**
     * <p>The maximum capacity of the resource. The exception to this upper limit is if
     * you specify a non-default setting for
     * <b>PredictiveScalingMaxCapacityBehavior</b>. </p>
     */
    inline ScalingInstruction& WithMaxCapacity(int value) { SetMaxCapacity(value); return *this;}


    /**
     * <p>The structure that defines new target tracking configurations (up to 10).
     * Each of these structures includes a specific scaling metric and a target value
     * for the metric, along with various parameters to use with dynamic scaling. </p>
     * <p>With predictive scaling and dynamic scaling, the resource scales based on the
     * target tracking configuration that provides the largest capacity for both scale
     * in and scale out. </p> <p>Condition: The scaling metric must be unique across
     * target tracking configurations.</p>
     */
    inline const Aws::Vector<TargetTrackingConfiguration>& GetTargetTrackingConfigurations() const{ return m_targetTrackingConfigurations; }

    /**
     * <p>The structure that defines new target tracking configurations (up to 10).
     * Each of these structures includes a specific scaling metric and a target value
     * for the metric, along with various parameters to use with dynamic scaling. </p>
     * <p>With predictive scaling and dynamic scaling, the resource scales based on the
     * target tracking configuration that provides the largest capacity for both scale
     * in and scale out. </p> <p>Condition: The scaling metric must be unique across
     * target tracking configurations.</p>
     */
    inline bool TargetTrackingConfigurationsHasBeenSet() const { return m_targetTrackingConfigurationsHasBeenSet; }

    /**
     * <p>The structure that defines new target tracking configurations (up to 10).
     * Each of these structures includes a specific scaling metric and a target value
     * for the metric, along with various parameters to use with dynamic scaling. </p>
     * <p>With predictive scaling and dynamic scaling, the resource scales based on the
     * target tracking configuration that provides the largest capacity for both scale
     * in and scale out. </p> <p>Condition: The scaling metric must be unique across
     * target tracking configurations.</p>
     */
    inline void SetTargetTrackingConfigurations(const Aws::Vector<TargetTrackingConfiguration>& value) { m_targetTrackingConfigurationsHasBeenSet = true; m_targetTrackingConfigurations = value; }

    /**
     * <p>The structure that defines new target tracking configurations (up to 10).
     * Each of these structures includes a specific scaling metric and a target value
     * for the metric, along with various parameters to use with dynamic scaling. </p>
     * <p>With predictive scaling and dynamic scaling, the resource scales based on the
     * target tracking configuration that provides the largest capacity for both scale
     * in and scale out. </p> <p>Condition: The scaling metric must be unique across
     * target tracking configurations.</p>
     */
    inline void SetTargetTrackingConfigurations(Aws::Vector<TargetTrackingConfiguration>&& value) { m_targetTrackingConfigurationsHasBeenSet = true; m_targetTrackingConfigurations = std::move(value); }

    /**
     * <p>The structure that defines new target tracking configurations (up to 10).
     * Each of these structures includes a specific scaling metric and a target value
     * for the metric, along with various parameters to use with dynamic scaling. </p>
     * <p>With predictive scaling and dynamic scaling, the resource scales based on the
     * target tracking configuration that provides the largest capacity for both scale
     * in and scale out. </p> <p>Condition: The scaling metric must be unique across
     * target tracking configurations.</p>
     */
    inline ScalingInstruction& WithTargetTrackingConfigurations(const Aws::Vector<TargetTrackingConfiguration>& value) { SetTargetTrackingConfigurations(value); return *this;}

    /**
     * <p>The structure that defines new target tracking configurations (up to 10).
     * Each of these structures includes a specific scaling metric and a target value
     * for the metric, along with various parameters to use with dynamic scaling. </p>
     * <p>With predictive scaling and dynamic scaling, the resource scales based on the
     * target tracking configuration that provides the largest capacity for both scale
     * in and scale out. </p> <p>Condition: The scaling metric must be unique across
     * target tracking configurations.</p>
     */
    inline ScalingInstruction& WithTargetTrackingConfigurations(Aws::Vector<TargetTrackingConfiguration>&& value) { SetTargetTrackingConfigurations(std::move(value)); return *this;}

    /**
     * <p>The structure that defines new target tracking configurations (up to 10).
     * Each of these structures includes a specific scaling metric and a target value
     * for the metric, along with various parameters to use with dynamic scaling. </p>
     * <p>With predictive scaling and dynamic scaling, the resource scales based on the
     * target tracking configuration that provides the largest capacity for both scale
     * in and scale out. </p> <p>Condition: The scaling metric must be unique across
     * target tracking configurations.</p>
     */
    inline ScalingInstruction& AddTargetTrackingConfigurations(const TargetTrackingConfiguration& value) { m_targetTrackingConfigurationsHasBeenSet = true; m_targetTrackingConfigurations.push_back(value); return *this; }

    /**
     * <p>The structure that defines new target tracking configurations (up to 10).
     * Each of these structures includes a specific scaling metric and a target value
     * for the metric, along with various parameters to use with dynamic scaling. </p>
     * <p>With predictive scaling and dynamic scaling, the resource scales based on the
     * target tracking configuration that provides the largest capacity for both scale
     * in and scale out. </p> <p>Condition: The scaling metric must be unique across
     * target tracking configurations.</p>
     */
    inline ScalingInstruction& AddTargetTrackingConfigurations(TargetTrackingConfiguration&& value) { m_targetTrackingConfigurationsHasBeenSet = true; m_targetTrackingConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>The predefined load metric to use for predictive scaling. This parameter or a
     * <b>CustomizedLoadMetricSpecification</b> is required when configuring predictive
     * scaling, and cannot be used otherwise. </p>
     */
    inline const PredefinedLoadMetricSpecification& GetPredefinedLoadMetricSpecification() const{ return m_predefinedLoadMetricSpecification; }

    /**
     * <p>The predefined load metric to use for predictive scaling. This parameter or a
     * <b>CustomizedLoadMetricSpecification</b> is required when configuring predictive
     * scaling, and cannot be used otherwise. </p>
     */
    inline bool PredefinedLoadMetricSpecificationHasBeenSet() const { return m_predefinedLoadMetricSpecificationHasBeenSet; }

    /**
     * <p>The predefined load metric to use for predictive scaling. This parameter or a
     * <b>CustomizedLoadMetricSpecification</b> is required when configuring predictive
     * scaling, and cannot be used otherwise. </p>
     */
    inline void SetPredefinedLoadMetricSpecification(const PredefinedLoadMetricSpecification& value) { m_predefinedLoadMetricSpecificationHasBeenSet = true; m_predefinedLoadMetricSpecification = value; }

    /**
     * <p>The predefined load metric to use for predictive scaling. This parameter or a
     * <b>CustomizedLoadMetricSpecification</b> is required when configuring predictive
     * scaling, and cannot be used otherwise. </p>
     */
    inline void SetPredefinedLoadMetricSpecification(PredefinedLoadMetricSpecification&& value) { m_predefinedLoadMetricSpecificationHasBeenSet = true; m_predefinedLoadMetricSpecification = std::move(value); }

    /**
     * <p>The predefined load metric to use for predictive scaling. This parameter or a
     * <b>CustomizedLoadMetricSpecification</b> is required when configuring predictive
     * scaling, and cannot be used otherwise. </p>
     */
    inline ScalingInstruction& WithPredefinedLoadMetricSpecification(const PredefinedLoadMetricSpecification& value) { SetPredefinedLoadMetricSpecification(value); return *this;}

    /**
     * <p>The predefined load metric to use for predictive scaling. This parameter or a
     * <b>CustomizedLoadMetricSpecification</b> is required when configuring predictive
     * scaling, and cannot be used otherwise. </p>
     */
    inline ScalingInstruction& WithPredefinedLoadMetricSpecification(PredefinedLoadMetricSpecification&& value) { SetPredefinedLoadMetricSpecification(std::move(value)); return *this;}


    /**
     * <p>The customized load metric to use for predictive scaling. This parameter or a
     * <b>PredefinedLoadMetricSpecification</b> is required when configuring predictive
     * scaling, and cannot be used otherwise. </p>
     */
    inline const CustomizedLoadMetricSpecification& GetCustomizedLoadMetricSpecification() const{ return m_customizedLoadMetricSpecification; }

    /**
     * <p>The customized load metric to use for predictive scaling. This parameter or a
     * <b>PredefinedLoadMetricSpecification</b> is required when configuring predictive
     * scaling, and cannot be used otherwise. </p>
     */
    inline bool CustomizedLoadMetricSpecificationHasBeenSet() const { return m_customizedLoadMetricSpecificationHasBeenSet; }

    /**
     * <p>The customized load metric to use for predictive scaling. This parameter or a
     * <b>PredefinedLoadMetricSpecification</b> is required when configuring predictive
     * scaling, and cannot be used otherwise. </p>
     */
    inline void SetCustomizedLoadMetricSpecification(const CustomizedLoadMetricSpecification& value) { m_customizedLoadMetricSpecificationHasBeenSet = true; m_customizedLoadMetricSpecification = value; }

    /**
     * <p>The customized load metric to use for predictive scaling. This parameter or a
     * <b>PredefinedLoadMetricSpecification</b> is required when configuring predictive
     * scaling, and cannot be used otherwise. </p>
     */
    inline void SetCustomizedLoadMetricSpecification(CustomizedLoadMetricSpecification&& value) { m_customizedLoadMetricSpecificationHasBeenSet = true; m_customizedLoadMetricSpecification = std::move(value); }

    /**
     * <p>The customized load metric to use for predictive scaling. This parameter or a
     * <b>PredefinedLoadMetricSpecification</b> is required when configuring predictive
     * scaling, and cannot be used otherwise. </p>
     */
    inline ScalingInstruction& WithCustomizedLoadMetricSpecification(const CustomizedLoadMetricSpecification& value) { SetCustomizedLoadMetricSpecification(value); return *this;}

    /**
     * <p>The customized load metric to use for predictive scaling. This parameter or a
     * <b>PredefinedLoadMetricSpecification</b> is required when configuring predictive
     * scaling, and cannot be used otherwise. </p>
     */
    inline ScalingInstruction& WithCustomizedLoadMetricSpecification(CustomizedLoadMetricSpecification&& value) { SetCustomizedLoadMetricSpecification(std::move(value)); return *this;}


    /**
     * <p>The amount of time, in seconds, to buffer the run time of scheduled scaling
     * actions when scaling out. For example, if the forecast says to add capacity at
     * 10:00 AM, and the buffer time is 5 minutes, then the run time of the
     * corresponding scheduled scaling action will be 9:55 AM. The intention is to give
     * resources time to be provisioned. For example, it can take a few minutes to
     * launch an EC2 instance. The actual amount of time required depends on several
     * factors, such as the size of the instance and whether there are startup scripts
     * to complete. </p> <p>The value must be less than the forecast interval duration
     * of 3600 seconds (60 minutes). The default is 300 seconds. </p> <p>Only valid
     * when configuring predictive scaling. </p>
     */
    inline int GetScheduledActionBufferTime() const{ return m_scheduledActionBufferTime; }

    /**
     * <p>The amount of time, in seconds, to buffer the run time of scheduled scaling
     * actions when scaling out. For example, if the forecast says to add capacity at
     * 10:00 AM, and the buffer time is 5 minutes, then the run time of the
     * corresponding scheduled scaling action will be 9:55 AM. The intention is to give
     * resources time to be provisioned. For example, it can take a few minutes to
     * launch an EC2 instance. The actual amount of time required depends on several
     * factors, such as the size of the instance and whether there are startup scripts
     * to complete. </p> <p>The value must be less than the forecast interval duration
     * of 3600 seconds (60 minutes). The default is 300 seconds. </p> <p>Only valid
     * when configuring predictive scaling. </p>
     */
    inline bool ScheduledActionBufferTimeHasBeenSet() const { return m_scheduledActionBufferTimeHasBeenSet; }

    /**
     * <p>The amount of time, in seconds, to buffer the run time of scheduled scaling
     * actions when scaling out. For example, if the forecast says to add capacity at
     * 10:00 AM, and the buffer time is 5 minutes, then the run time of the
     * corresponding scheduled scaling action will be 9:55 AM. The intention is to give
     * resources time to be provisioned. For example, it can take a few minutes to
     * launch an EC2 instance. The actual amount of time required depends on several
     * factors, such as the size of the instance and whether there are startup scripts
     * to complete. </p> <p>The value must be less than the forecast interval duration
     * of 3600 seconds (60 minutes). The default is 300 seconds. </p> <p>Only valid
     * when configuring predictive scaling. </p>
     */
    inline void SetScheduledActionBufferTime(int value) { m_scheduledActionBufferTimeHasBeenSet = true; m_scheduledActionBufferTime = value; }

    /**
     * <p>The amount of time, in seconds, to buffer the run time of scheduled scaling
     * actions when scaling out. For example, if the forecast says to add capacity at
     * 10:00 AM, and the buffer time is 5 minutes, then the run time of the
     * corresponding scheduled scaling action will be 9:55 AM. The intention is to give
     * resources time to be provisioned. For example, it can take a few minutes to
     * launch an EC2 instance. The actual amount of time required depends on several
     * factors, such as the size of the instance and whether there are startup scripts
     * to complete. </p> <p>The value must be less than the forecast interval duration
     * of 3600 seconds (60 minutes). The default is 300 seconds. </p> <p>Only valid
     * when configuring predictive scaling. </p>
     */
    inline ScalingInstruction& WithScheduledActionBufferTime(int value) { SetScheduledActionBufferTime(value); return *this;}


    /**
     * <p>Defines the behavior that should be applied if the forecast capacity
     * approaches or exceeds the maximum capacity specified for the resource. The
     * default value is <code>SetForecastCapacityToMaxCapacity</code>.</p> <p>The
     * following are possible values:</p> <ul> <li> <p>
     * <code>SetForecastCapacityToMaxCapacity</code> - AWS Auto Scaling cannot scale
     * resource capacity higher than the maximum capacity. The maximum capacity is
     * enforced as a hard limit. </p> </li> <li> <p>
     * <code>SetMaxCapacityToForecastCapacity</code> - AWS Auto Scaling may scale
     * resource capacity higher than the maximum capacity to equal but not exceed
     * forecast capacity.</p> </li> <li> <p>
     * <code>SetMaxCapacityAboveForecastCapacity</code> - AWS Auto Scaling may scale
     * resource capacity higher than the maximum capacity by a specified buffer value.
     * The intention is to give the target tracking scaling policy extra capacity if
     * unexpected traffic occurs. </p> </li> </ul> <p>Only valid when configuring
     * predictive scaling.</p>
     */
    inline const PredictiveScalingMaxCapacityBehavior& GetPredictiveScalingMaxCapacityBehavior() const{ return m_predictiveScalingMaxCapacityBehavior; }

    /**
     * <p>Defines the behavior that should be applied if the forecast capacity
     * approaches or exceeds the maximum capacity specified for the resource. The
     * default value is <code>SetForecastCapacityToMaxCapacity</code>.</p> <p>The
     * following are possible values:</p> <ul> <li> <p>
     * <code>SetForecastCapacityToMaxCapacity</code> - AWS Auto Scaling cannot scale
     * resource capacity higher than the maximum capacity. The maximum capacity is
     * enforced as a hard limit. </p> </li> <li> <p>
     * <code>SetMaxCapacityToForecastCapacity</code> - AWS Auto Scaling may scale
     * resource capacity higher than the maximum capacity to equal but not exceed
     * forecast capacity.</p> </li> <li> <p>
     * <code>SetMaxCapacityAboveForecastCapacity</code> - AWS Auto Scaling may scale
     * resource capacity higher than the maximum capacity by a specified buffer value.
     * The intention is to give the target tracking scaling policy extra capacity if
     * unexpected traffic occurs. </p> </li> </ul> <p>Only valid when configuring
     * predictive scaling.</p>
     */
    inline bool PredictiveScalingMaxCapacityBehaviorHasBeenSet() const { return m_predictiveScalingMaxCapacityBehaviorHasBeenSet; }

    /**
     * <p>Defines the behavior that should be applied if the forecast capacity
     * approaches or exceeds the maximum capacity specified for the resource. The
     * default value is <code>SetForecastCapacityToMaxCapacity</code>.</p> <p>The
     * following are possible values:</p> <ul> <li> <p>
     * <code>SetForecastCapacityToMaxCapacity</code> - AWS Auto Scaling cannot scale
     * resource capacity higher than the maximum capacity. The maximum capacity is
     * enforced as a hard limit. </p> </li> <li> <p>
     * <code>SetMaxCapacityToForecastCapacity</code> - AWS Auto Scaling may scale
     * resource capacity higher than the maximum capacity to equal but not exceed
     * forecast capacity.</p> </li> <li> <p>
     * <code>SetMaxCapacityAboveForecastCapacity</code> - AWS Auto Scaling may scale
     * resource capacity higher than the maximum capacity by a specified buffer value.
     * The intention is to give the target tracking scaling policy extra capacity if
     * unexpected traffic occurs. </p> </li> </ul> <p>Only valid when configuring
     * predictive scaling.</p>
     */
    inline void SetPredictiveScalingMaxCapacityBehavior(const PredictiveScalingMaxCapacityBehavior& value) { m_predictiveScalingMaxCapacityBehaviorHasBeenSet = true; m_predictiveScalingMaxCapacityBehavior = value; }

    /**
     * <p>Defines the behavior that should be applied if the forecast capacity
     * approaches or exceeds the maximum capacity specified for the resource. The
     * default value is <code>SetForecastCapacityToMaxCapacity</code>.</p> <p>The
     * following are possible values:</p> <ul> <li> <p>
     * <code>SetForecastCapacityToMaxCapacity</code> - AWS Auto Scaling cannot scale
     * resource capacity higher than the maximum capacity. The maximum capacity is
     * enforced as a hard limit. </p> </li> <li> <p>
     * <code>SetMaxCapacityToForecastCapacity</code> - AWS Auto Scaling may scale
     * resource capacity higher than the maximum capacity to equal but not exceed
     * forecast capacity.</p> </li> <li> <p>
     * <code>SetMaxCapacityAboveForecastCapacity</code> - AWS Auto Scaling may scale
     * resource capacity higher than the maximum capacity by a specified buffer value.
     * The intention is to give the target tracking scaling policy extra capacity if
     * unexpected traffic occurs. </p> </li> </ul> <p>Only valid when configuring
     * predictive scaling.</p>
     */
    inline void SetPredictiveScalingMaxCapacityBehavior(PredictiveScalingMaxCapacityBehavior&& value) { m_predictiveScalingMaxCapacityBehaviorHasBeenSet = true; m_predictiveScalingMaxCapacityBehavior = std::move(value); }

    /**
     * <p>Defines the behavior that should be applied if the forecast capacity
     * approaches or exceeds the maximum capacity specified for the resource. The
     * default value is <code>SetForecastCapacityToMaxCapacity</code>.</p> <p>The
     * following are possible values:</p> <ul> <li> <p>
     * <code>SetForecastCapacityToMaxCapacity</code> - AWS Auto Scaling cannot scale
     * resource capacity higher than the maximum capacity. The maximum capacity is
     * enforced as a hard limit. </p> </li> <li> <p>
     * <code>SetMaxCapacityToForecastCapacity</code> - AWS Auto Scaling may scale
     * resource capacity higher than the maximum capacity to equal but not exceed
     * forecast capacity.</p> </li> <li> <p>
     * <code>SetMaxCapacityAboveForecastCapacity</code> - AWS Auto Scaling may scale
     * resource capacity higher than the maximum capacity by a specified buffer value.
     * The intention is to give the target tracking scaling policy extra capacity if
     * unexpected traffic occurs. </p> </li> </ul> <p>Only valid when configuring
     * predictive scaling.</p>
     */
    inline ScalingInstruction& WithPredictiveScalingMaxCapacityBehavior(const PredictiveScalingMaxCapacityBehavior& value) { SetPredictiveScalingMaxCapacityBehavior(value); return *this;}

    /**
     * <p>Defines the behavior that should be applied if the forecast capacity
     * approaches or exceeds the maximum capacity specified for the resource. The
     * default value is <code>SetForecastCapacityToMaxCapacity</code>.</p> <p>The
     * following are possible values:</p> <ul> <li> <p>
     * <code>SetForecastCapacityToMaxCapacity</code> - AWS Auto Scaling cannot scale
     * resource capacity higher than the maximum capacity. The maximum capacity is
     * enforced as a hard limit. </p> </li> <li> <p>
     * <code>SetMaxCapacityToForecastCapacity</code> - AWS Auto Scaling may scale
     * resource capacity higher than the maximum capacity to equal but not exceed
     * forecast capacity.</p> </li> <li> <p>
     * <code>SetMaxCapacityAboveForecastCapacity</code> - AWS Auto Scaling may scale
     * resource capacity higher than the maximum capacity by a specified buffer value.
     * The intention is to give the target tracking scaling policy extra capacity if
     * unexpected traffic occurs. </p> </li> </ul> <p>Only valid when configuring
     * predictive scaling.</p>
     */
    inline ScalingInstruction& WithPredictiveScalingMaxCapacityBehavior(PredictiveScalingMaxCapacityBehavior&& value) { SetPredictiveScalingMaxCapacityBehavior(std::move(value)); return *this;}


    /**
     * <p>The size of the capacity buffer to use when the forecast capacity is close to
     * or exceeds the maximum capacity. The value is specified as a percentage relative
     * to the forecast capacity. For example, if the buffer is 10, this means a 10
     * percent buffer, such that if the forecast capacity is 50, and the maximum
     * capacity is 40, then the effective maximum capacity is 55.</p> <p>Only valid
     * when configuring predictive scaling. Required if the
     * <b>PredictiveScalingMaxCapacityBehavior</b> is set to
     * <code>SetMaxCapacityAboveForecastCapacity</code>, and cannot be used
     * otherwise.</p> <p>The range is 1-100.</p>
     */
    inline int GetPredictiveScalingMaxCapacityBuffer() const{ return m_predictiveScalingMaxCapacityBuffer; }

    /**
     * <p>The size of the capacity buffer to use when the forecast capacity is close to
     * or exceeds the maximum capacity. The value is specified as a percentage relative
     * to the forecast capacity. For example, if the buffer is 10, this means a 10
     * percent buffer, such that if the forecast capacity is 50, and the maximum
     * capacity is 40, then the effective maximum capacity is 55.</p> <p>Only valid
     * when configuring predictive scaling. Required if the
     * <b>PredictiveScalingMaxCapacityBehavior</b> is set to
     * <code>SetMaxCapacityAboveForecastCapacity</code>, and cannot be used
     * otherwise.</p> <p>The range is 1-100.</p>
     */
    inline bool PredictiveScalingMaxCapacityBufferHasBeenSet() const { return m_predictiveScalingMaxCapacityBufferHasBeenSet; }

    /**
     * <p>The size of the capacity buffer to use when the forecast capacity is close to
     * or exceeds the maximum capacity. The value is specified as a percentage relative
     * to the forecast capacity. For example, if the buffer is 10, this means a 10
     * percent buffer, such that if the forecast capacity is 50, and the maximum
     * capacity is 40, then the effective maximum capacity is 55.</p> <p>Only valid
     * when configuring predictive scaling. Required if the
     * <b>PredictiveScalingMaxCapacityBehavior</b> is set to
     * <code>SetMaxCapacityAboveForecastCapacity</code>, and cannot be used
     * otherwise.</p> <p>The range is 1-100.</p>
     */
    inline void SetPredictiveScalingMaxCapacityBuffer(int value) { m_predictiveScalingMaxCapacityBufferHasBeenSet = true; m_predictiveScalingMaxCapacityBuffer = value; }

    /**
     * <p>The size of the capacity buffer to use when the forecast capacity is close to
     * or exceeds the maximum capacity. The value is specified as a percentage relative
     * to the forecast capacity. For example, if the buffer is 10, this means a 10
     * percent buffer, such that if the forecast capacity is 50, and the maximum
     * capacity is 40, then the effective maximum capacity is 55.</p> <p>Only valid
     * when configuring predictive scaling. Required if the
     * <b>PredictiveScalingMaxCapacityBehavior</b> is set to
     * <code>SetMaxCapacityAboveForecastCapacity</code>, and cannot be used
     * otherwise.</p> <p>The range is 1-100.</p>
     */
    inline ScalingInstruction& WithPredictiveScalingMaxCapacityBuffer(int value) { SetPredictiveScalingMaxCapacityBuffer(value); return *this;}


    /**
     * <p>The predictive scaling mode. The default value is
     * <code>ForecastAndScale</code>. Otherwise, AWS Auto Scaling forecasts capacity
     * but does not create any scheduled scaling actions based on the capacity
     * forecast. </p>
     */
    inline const PredictiveScalingMode& GetPredictiveScalingMode() const{ return m_predictiveScalingMode; }

    /**
     * <p>The predictive scaling mode. The default value is
     * <code>ForecastAndScale</code>. Otherwise, AWS Auto Scaling forecasts capacity
     * but does not create any scheduled scaling actions based on the capacity
     * forecast. </p>
     */
    inline bool PredictiveScalingModeHasBeenSet() const { return m_predictiveScalingModeHasBeenSet; }

    /**
     * <p>The predictive scaling mode. The default value is
     * <code>ForecastAndScale</code>. Otherwise, AWS Auto Scaling forecasts capacity
     * but does not create any scheduled scaling actions based on the capacity
     * forecast. </p>
     */
    inline void SetPredictiveScalingMode(const PredictiveScalingMode& value) { m_predictiveScalingModeHasBeenSet = true; m_predictiveScalingMode = value; }

    /**
     * <p>The predictive scaling mode. The default value is
     * <code>ForecastAndScale</code>. Otherwise, AWS Auto Scaling forecasts capacity
     * but does not create any scheduled scaling actions based on the capacity
     * forecast. </p>
     */
    inline void SetPredictiveScalingMode(PredictiveScalingMode&& value) { m_predictiveScalingModeHasBeenSet = true; m_predictiveScalingMode = std::move(value); }

    /**
     * <p>The predictive scaling mode. The default value is
     * <code>ForecastAndScale</code>. Otherwise, AWS Auto Scaling forecasts capacity
     * but does not create any scheduled scaling actions based on the capacity
     * forecast. </p>
     */
    inline ScalingInstruction& WithPredictiveScalingMode(const PredictiveScalingMode& value) { SetPredictiveScalingMode(value); return *this;}

    /**
     * <p>The predictive scaling mode. The default value is
     * <code>ForecastAndScale</code>. Otherwise, AWS Auto Scaling forecasts capacity
     * but does not create any scheduled scaling actions based on the capacity
     * forecast. </p>
     */
    inline ScalingInstruction& WithPredictiveScalingMode(PredictiveScalingMode&& value) { SetPredictiveScalingMode(std::move(value)); return *this;}


    /**
     * <p>Controls whether a resource's externally created scaling policies are kept or
     * replaced. </p> <p>The default value is <code>KeepExternalPolicies</code>. If the
     * parameter is set to <code>ReplaceExternalPolicies</code>, any scaling policies
     * that are external to AWS Auto Scaling are deleted and new target tracking
     * scaling policies created. </p> <p>Only valid when configuring dynamic scaling.
     * </p> <p>Condition: The number of existing policies to be replaced must be less
     * than or equal to 50. If there are more than 50 policies to be replaced, AWS Auto
     * Scaling keeps all existing policies and does not create new ones.</p>
     */
    inline const ScalingPolicyUpdateBehavior& GetScalingPolicyUpdateBehavior() const{ return m_scalingPolicyUpdateBehavior; }

    /**
     * <p>Controls whether a resource's externally created scaling policies are kept or
     * replaced. </p> <p>The default value is <code>KeepExternalPolicies</code>. If the
     * parameter is set to <code>ReplaceExternalPolicies</code>, any scaling policies
     * that are external to AWS Auto Scaling are deleted and new target tracking
     * scaling policies created. </p> <p>Only valid when configuring dynamic scaling.
     * </p> <p>Condition: The number of existing policies to be replaced must be less
     * than or equal to 50. If there are more than 50 policies to be replaced, AWS Auto
     * Scaling keeps all existing policies and does not create new ones.</p>
     */
    inline bool ScalingPolicyUpdateBehaviorHasBeenSet() const { return m_scalingPolicyUpdateBehaviorHasBeenSet; }

    /**
     * <p>Controls whether a resource's externally created scaling policies are kept or
     * replaced. </p> <p>The default value is <code>KeepExternalPolicies</code>. If the
     * parameter is set to <code>ReplaceExternalPolicies</code>, any scaling policies
     * that are external to AWS Auto Scaling are deleted and new target tracking
     * scaling policies created. </p> <p>Only valid when configuring dynamic scaling.
     * </p> <p>Condition: The number of existing policies to be replaced must be less
     * than or equal to 50. If there are more than 50 policies to be replaced, AWS Auto
     * Scaling keeps all existing policies and does not create new ones.</p>
     */
    inline void SetScalingPolicyUpdateBehavior(const ScalingPolicyUpdateBehavior& value) { m_scalingPolicyUpdateBehaviorHasBeenSet = true; m_scalingPolicyUpdateBehavior = value; }

    /**
     * <p>Controls whether a resource's externally created scaling policies are kept or
     * replaced. </p> <p>The default value is <code>KeepExternalPolicies</code>. If the
     * parameter is set to <code>ReplaceExternalPolicies</code>, any scaling policies
     * that are external to AWS Auto Scaling are deleted and new target tracking
     * scaling policies created. </p> <p>Only valid when configuring dynamic scaling.
     * </p> <p>Condition: The number of existing policies to be replaced must be less
     * than or equal to 50. If there are more than 50 policies to be replaced, AWS Auto
     * Scaling keeps all existing policies and does not create new ones.</p>
     */
    inline void SetScalingPolicyUpdateBehavior(ScalingPolicyUpdateBehavior&& value) { m_scalingPolicyUpdateBehaviorHasBeenSet = true; m_scalingPolicyUpdateBehavior = std::move(value); }

    /**
     * <p>Controls whether a resource's externally created scaling policies are kept or
     * replaced. </p> <p>The default value is <code>KeepExternalPolicies</code>. If the
     * parameter is set to <code>ReplaceExternalPolicies</code>, any scaling policies
     * that are external to AWS Auto Scaling are deleted and new target tracking
     * scaling policies created. </p> <p>Only valid when configuring dynamic scaling.
     * </p> <p>Condition: The number of existing policies to be replaced must be less
     * than or equal to 50. If there are more than 50 policies to be replaced, AWS Auto
     * Scaling keeps all existing policies and does not create new ones.</p>
     */
    inline ScalingInstruction& WithScalingPolicyUpdateBehavior(const ScalingPolicyUpdateBehavior& value) { SetScalingPolicyUpdateBehavior(value); return *this;}

    /**
     * <p>Controls whether a resource's externally created scaling policies are kept or
     * replaced. </p> <p>The default value is <code>KeepExternalPolicies</code>. If the
     * parameter is set to <code>ReplaceExternalPolicies</code>, any scaling policies
     * that are external to AWS Auto Scaling are deleted and new target tracking
     * scaling policies created. </p> <p>Only valid when configuring dynamic scaling.
     * </p> <p>Condition: The number of existing policies to be replaced must be less
     * than or equal to 50. If there are more than 50 policies to be replaced, AWS Auto
     * Scaling keeps all existing policies and does not create new ones.</p>
     */
    inline ScalingInstruction& WithScalingPolicyUpdateBehavior(ScalingPolicyUpdateBehavior&& value) { SetScalingPolicyUpdateBehavior(std::move(value)); return *this;}


    /**
     * <p>Controls whether dynamic scaling by AWS Auto Scaling is disabled. When
     * dynamic scaling is enabled, AWS Auto Scaling creates target tracking scaling
     * policies based on the specified target tracking configurations. </p> <p>The
     * default is enabled (<code>false</code>). </p>
     */
    inline bool GetDisableDynamicScaling() const{ return m_disableDynamicScaling; }

    /**
     * <p>Controls whether dynamic scaling by AWS Auto Scaling is disabled. When
     * dynamic scaling is enabled, AWS Auto Scaling creates target tracking scaling
     * policies based on the specified target tracking configurations. </p> <p>The
     * default is enabled (<code>false</code>). </p>
     */
    inline bool DisableDynamicScalingHasBeenSet() const { return m_disableDynamicScalingHasBeenSet; }

    /**
     * <p>Controls whether dynamic scaling by AWS Auto Scaling is disabled. When
     * dynamic scaling is enabled, AWS Auto Scaling creates target tracking scaling
     * policies based on the specified target tracking configurations. </p> <p>The
     * default is enabled (<code>false</code>). </p>
     */
    inline void SetDisableDynamicScaling(bool value) { m_disableDynamicScalingHasBeenSet = true; m_disableDynamicScaling = value; }

    /**
     * <p>Controls whether dynamic scaling by AWS Auto Scaling is disabled. When
     * dynamic scaling is enabled, AWS Auto Scaling creates target tracking scaling
     * policies based on the specified target tracking configurations. </p> <p>The
     * default is enabled (<code>false</code>). </p>
     */
    inline ScalingInstruction& WithDisableDynamicScaling(bool value) { SetDisableDynamicScaling(value); return *this;}

  private:

    ServiceNamespace m_serviceNamespace;
    bool m_serviceNamespaceHasBeenSet;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;

    ScalableDimension m_scalableDimension;
    bool m_scalableDimensionHasBeenSet;

    int m_minCapacity;
    bool m_minCapacityHasBeenSet;

    int m_maxCapacity;
    bool m_maxCapacityHasBeenSet;

    Aws::Vector<TargetTrackingConfiguration> m_targetTrackingConfigurations;
    bool m_targetTrackingConfigurationsHasBeenSet;

    PredefinedLoadMetricSpecification m_predefinedLoadMetricSpecification;
    bool m_predefinedLoadMetricSpecificationHasBeenSet;

    CustomizedLoadMetricSpecification m_customizedLoadMetricSpecification;
    bool m_customizedLoadMetricSpecificationHasBeenSet;

    int m_scheduledActionBufferTime;
    bool m_scheduledActionBufferTimeHasBeenSet;

    PredictiveScalingMaxCapacityBehavior m_predictiveScalingMaxCapacityBehavior;
    bool m_predictiveScalingMaxCapacityBehaviorHasBeenSet;

    int m_predictiveScalingMaxCapacityBuffer;
    bool m_predictiveScalingMaxCapacityBufferHasBeenSet;

    PredictiveScalingMode m_predictiveScalingMode;
    bool m_predictiveScalingModeHasBeenSet;

    ScalingPolicyUpdateBehavior m_scalingPolicyUpdateBehavior;
    bool m_scalingPolicyUpdateBehaviorHasBeenSet;

    bool m_disableDynamicScaling;
    bool m_disableDynamicScalingHasBeenSet;
  };

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
