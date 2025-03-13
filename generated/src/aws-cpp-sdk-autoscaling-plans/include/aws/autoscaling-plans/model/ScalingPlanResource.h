/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ScalingPlanResource
  {
  public:
    AWS_AUTOSCALINGPLANS_API ScalingPlanResource() = default;
    AWS_AUTOSCALINGPLANS_API ScalingPlanResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUTOSCALINGPLANS_API ScalingPlanResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUTOSCALINGPLANS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the scaling plan.</p>
     */
    inline const Aws::String& GetScalingPlanName() const { return m_scalingPlanName; }
    inline bool ScalingPlanNameHasBeenSet() const { return m_scalingPlanNameHasBeenSet; }
    template<typename ScalingPlanNameT = Aws::String>
    void SetScalingPlanName(ScalingPlanNameT&& value) { m_scalingPlanNameHasBeenSet = true; m_scalingPlanName = std::forward<ScalingPlanNameT>(value); }
    template<typename ScalingPlanNameT = Aws::String>
    ScalingPlanResource& WithScalingPlanName(ScalingPlanNameT&& value) { SetScalingPlanName(std::forward<ScalingPlanNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the scaling plan.</p>
     */
    inline long long GetScalingPlanVersion() const { return m_scalingPlanVersion; }
    inline bool ScalingPlanVersionHasBeenSet() const { return m_scalingPlanVersionHasBeenSet; }
    inline void SetScalingPlanVersion(long long value) { m_scalingPlanVersionHasBeenSet = true; m_scalingPlanVersion = value; }
    inline ScalingPlanResource& WithScalingPlanVersion(long long value) { SetScalingPlanVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the AWS service.</p>
     */
    inline ServiceNamespace GetServiceNamespace() const { return m_serviceNamespace; }
    inline bool ServiceNamespaceHasBeenSet() const { return m_serviceNamespaceHasBeenSet; }
    inline void SetServiceNamespace(ServiceNamespace value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace = value; }
    inline ScalingPlanResource& WithServiceNamespace(ServiceNamespace value) { SetServiceNamespace(value); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    ScalingPlanResource& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
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
    inline ScalableDimension GetScalableDimension() const { return m_scalableDimension; }
    inline bool ScalableDimensionHasBeenSet() const { return m_scalableDimensionHasBeenSet; }
    inline void SetScalableDimension(ScalableDimension value) { m_scalableDimensionHasBeenSet = true; m_scalableDimension = value; }
    inline ScalingPlanResource& WithScalableDimension(ScalableDimension value) { SetScalableDimension(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scaling policies.</p>
     */
    inline const Aws::Vector<ScalingPolicy>& GetScalingPolicies() const { return m_scalingPolicies; }
    inline bool ScalingPoliciesHasBeenSet() const { return m_scalingPoliciesHasBeenSet; }
    template<typename ScalingPoliciesT = Aws::Vector<ScalingPolicy>>
    void SetScalingPolicies(ScalingPoliciesT&& value) { m_scalingPoliciesHasBeenSet = true; m_scalingPolicies = std::forward<ScalingPoliciesT>(value); }
    template<typename ScalingPoliciesT = Aws::Vector<ScalingPolicy>>
    ScalingPlanResource& WithScalingPolicies(ScalingPoliciesT&& value) { SetScalingPolicies(std::forward<ScalingPoliciesT>(value)); return *this;}
    template<typename ScalingPoliciesT = ScalingPolicy>
    ScalingPlanResource& AddScalingPolicies(ScalingPoliciesT&& value) { m_scalingPoliciesHasBeenSet = true; m_scalingPolicies.emplace_back(std::forward<ScalingPoliciesT>(value)); return *this; }
    ///@}

    ///@{
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
    inline ScalingStatusCode GetScalingStatusCode() const { return m_scalingStatusCode; }
    inline bool ScalingStatusCodeHasBeenSet() const { return m_scalingStatusCodeHasBeenSet; }
    inline void SetScalingStatusCode(ScalingStatusCode value) { m_scalingStatusCodeHasBeenSet = true; m_scalingStatusCode = value; }
    inline ScalingPlanResource& WithScalingStatusCode(ScalingStatusCode value) { SetScalingStatusCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A simple message about the current scaling status of the resource.</p>
     */
    inline const Aws::String& GetScalingStatusMessage() const { return m_scalingStatusMessage; }
    inline bool ScalingStatusMessageHasBeenSet() const { return m_scalingStatusMessageHasBeenSet; }
    template<typename ScalingStatusMessageT = Aws::String>
    void SetScalingStatusMessage(ScalingStatusMessageT&& value) { m_scalingStatusMessageHasBeenSet = true; m_scalingStatusMessage = std::forward<ScalingStatusMessageT>(value); }
    template<typename ScalingStatusMessageT = Aws::String>
    ScalingPlanResource& WithScalingStatusMessage(ScalingStatusMessageT&& value) { SetScalingStatusMessage(std::forward<ScalingStatusMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_scalingPlanName;
    bool m_scalingPlanNameHasBeenSet = false;

    long long m_scalingPlanVersion{0};
    bool m_scalingPlanVersionHasBeenSet = false;

    ServiceNamespace m_serviceNamespace{ServiceNamespace::NOT_SET};
    bool m_serviceNamespaceHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    ScalableDimension m_scalableDimension{ScalableDimension::NOT_SET};
    bool m_scalableDimensionHasBeenSet = false;

    Aws::Vector<ScalingPolicy> m_scalingPolicies;
    bool m_scalingPoliciesHasBeenSet = false;

    ScalingStatusCode m_scalingStatusCode{ScalingStatusCode::NOT_SET};
    bool m_scalingStatusCodeHasBeenSet = false;

    Aws::String m_scalingStatusMessage;
    bool m_scalingStatusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
