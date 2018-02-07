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
#include <aws/autoscaling-plans/model/TargetTrackingConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AutoScalingPlans
{
namespace Model
{

  /**
   * <p>Specifies the scaling configuration for a scalable resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-plans-2018-01-06/ScalingInstruction">AWS
   * API Reference</a></p>
   */
  class AWS_AUTOSCALINGPLANS_API ScalingInstruction
  {
  public:
    ScalingInstruction();
    ScalingInstruction(const Aws::Utils::Json::JsonValue& jsonValue);
    ScalingInstruction& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The namespace of the AWS service.</p>
     */
    inline const ServiceNamespace& GetServiceNamespace() const{ return m_serviceNamespace; }

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
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot fleet request ID. Example:
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
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot fleet request ID. Example:
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
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot fleet request ID. Example:
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
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot fleet request ID. Example:
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
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot fleet request ID. Example:
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
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot fleet request ID. Example:
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
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot fleet request ID. Example:
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
     * The target capacity of a Spot fleet request.</p> </li> <li> <p>
     * <code>dynamodb:table:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:table:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:index:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>dynamodb:index:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>rds:cluster:ReadReplicaCount</code> - The count of Aurora Replicas in an
     * Aurora DB cluster. Available for Aurora MySQL-compatible edition.</p> </li>
     * </ul>
     */
    inline const ScalableDimension& GetScalableDimension() const{ return m_scalableDimension; }

    /**
     * <p>The scalable dimension associated with the resource.</p> <ul> <li> <p>
     * <code>autoscaling:autoScalingGroup:DesiredCapacity</code> - The desired capacity
     * of an Auto Scaling group.</p> </li> <li> <p>
     * <code>ecs:service:DesiredCount</code> - The desired task count of an ECS
     * service.</p> </li> <li> <p> <code>ec2:spot-fleet-request:TargetCapacity</code> -
     * The target capacity of a Spot fleet request.</p> </li> <li> <p>
     * <code>dynamodb:table:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:table:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:index:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>dynamodb:index:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>rds:cluster:ReadReplicaCount</code> - The count of Aurora Replicas in an
     * Aurora DB cluster. Available for Aurora MySQL-compatible edition.</p> </li>
     * </ul>
     */
    inline void SetScalableDimension(const ScalableDimension& value) { m_scalableDimensionHasBeenSet = true; m_scalableDimension = value; }

    /**
     * <p>The scalable dimension associated with the resource.</p> <ul> <li> <p>
     * <code>autoscaling:autoScalingGroup:DesiredCapacity</code> - The desired capacity
     * of an Auto Scaling group.</p> </li> <li> <p>
     * <code>ecs:service:DesiredCount</code> - The desired task count of an ECS
     * service.</p> </li> <li> <p> <code>ec2:spot-fleet-request:TargetCapacity</code> -
     * The target capacity of a Spot fleet request.</p> </li> <li> <p>
     * <code>dynamodb:table:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:table:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:index:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>dynamodb:index:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>rds:cluster:ReadReplicaCount</code> - The count of Aurora Replicas in an
     * Aurora DB cluster. Available for Aurora MySQL-compatible edition.</p> </li>
     * </ul>
     */
    inline void SetScalableDimension(ScalableDimension&& value) { m_scalableDimensionHasBeenSet = true; m_scalableDimension = std::move(value); }

    /**
     * <p>The scalable dimension associated with the resource.</p> <ul> <li> <p>
     * <code>autoscaling:autoScalingGroup:DesiredCapacity</code> - The desired capacity
     * of an Auto Scaling group.</p> </li> <li> <p>
     * <code>ecs:service:DesiredCount</code> - The desired task count of an ECS
     * service.</p> </li> <li> <p> <code>ec2:spot-fleet-request:TargetCapacity</code> -
     * The target capacity of a Spot fleet request.</p> </li> <li> <p>
     * <code>dynamodb:table:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:table:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:index:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>dynamodb:index:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>rds:cluster:ReadReplicaCount</code> - The count of Aurora Replicas in an
     * Aurora DB cluster. Available for Aurora MySQL-compatible edition.</p> </li>
     * </ul>
     */
    inline ScalingInstruction& WithScalableDimension(const ScalableDimension& value) { SetScalableDimension(value); return *this;}

    /**
     * <p>The scalable dimension associated with the resource.</p> <ul> <li> <p>
     * <code>autoscaling:autoScalingGroup:DesiredCapacity</code> - The desired capacity
     * of an Auto Scaling group.</p> </li> <li> <p>
     * <code>ecs:service:DesiredCount</code> - The desired task count of an ECS
     * service.</p> </li> <li> <p> <code>ec2:spot-fleet-request:TargetCapacity</code> -
     * The target capacity of a Spot fleet request.</p> </li> <li> <p>
     * <code>dynamodb:table:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:table:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:index:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>dynamodb:index:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>rds:cluster:ReadReplicaCount</code> - The count of Aurora Replicas in an
     * Aurora DB cluster. Available for Aurora MySQL-compatible edition.</p> </li>
     * </ul>
     */
    inline ScalingInstruction& WithScalableDimension(ScalableDimension&& value) { SetScalableDimension(std::move(value)); return *this;}


    /**
     * <p>The minimum value to scale to in response to a scale in event.</p>
     */
    inline int GetMinCapacity() const{ return m_minCapacity; }

    /**
     * <p>The minimum value to scale to in response to a scale in event.</p>
     */
    inline void SetMinCapacity(int value) { m_minCapacityHasBeenSet = true; m_minCapacity = value; }

    /**
     * <p>The minimum value to scale to in response to a scale in event.</p>
     */
    inline ScalingInstruction& WithMinCapacity(int value) { SetMinCapacity(value); return *this;}


    /**
     * <p>The maximum value to scale to in response to a scale out event.</p>
     */
    inline int GetMaxCapacity() const{ return m_maxCapacity; }

    /**
     * <p>The maximum value to scale to in response to a scale out event.</p>
     */
    inline void SetMaxCapacity(int value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }

    /**
     * <p>The maximum value to scale to in response to a scale out event.</p>
     */
    inline ScalingInstruction& WithMaxCapacity(int value) { SetMaxCapacity(value); return *this;}


    /**
     * <p>The target tracking scaling policies (up to 10).</p>
     */
    inline const Aws::Vector<TargetTrackingConfiguration>& GetTargetTrackingConfigurations() const{ return m_targetTrackingConfigurations; }

    /**
     * <p>The target tracking scaling policies (up to 10).</p>
     */
    inline void SetTargetTrackingConfigurations(const Aws::Vector<TargetTrackingConfiguration>& value) { m_targetTrackingConfigurationsHasBeenSet = true; m_targetTrackingConfigurations = value; }

    /**
     * <p>The target tracking scaling policies (up to 10).</p>
     */
    inline void SetTargetTrackingConfigurations(Aws::Vector<TargetTrackingConfiguration>&& value) { m_targetTrackingConfigurationsHasBeenSet = true; m_targetTrackingConfigurations = std::move(value); }

    /**
     * <p>The target tracking scaling policies (up to 10).</p>
     */
    inline ScalingInstruction& WithTargetTrackingConfigurations(const Aws::Vector<TargetTrackingConfiguration>& value) { SetTargetTrackingConfigurations(value); return *this;}

    /**
     * <p>The target tracking scaling policies (up to 10).</p>
     */
    inline ScalingInstruction& WithTargetTrackingConfigurations(Aws::Vector<TargetTrackingConfiguration>&& value) { SetTargetTrackingConfigurations(std::move(value)); return *this;}

    /**
     * <p>The target tracking scaling policies (up to 10).</p>
     */
    inline ScalingInstruction& AddTargetTrackingConfigurations(const TargetTrackingConfiguration& value) { m_targetTrackingConfigurationsHasBeenSet = true; m_targetTrackingConfigurations.push_back(value); return *this; }

    /**
     * <p>The target tracking scaling policies (up to 10).</p>
     */
    inline ScalingInstruction& AddTargetTrackingConfigurations(TargetTrackingConfiguration&& value) { m_targetTrackingConfigurationsHasBeenSet = true; m_targetTrackingConfigurations.push_back(std::move(value)); return *this; }

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
  };

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
