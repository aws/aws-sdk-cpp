/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/application-autoscaling/ApplicationAutoScalingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-autoscaling/model/ServiceNamespace.h>
#include <aws/application-autoscaling/model/ScalableDimension.h>
#include <aws/application-autoscaling/model/PolicyType.h>
#include <aws/application-autoscaling/model/StepScalingPolicyConfiguration.h>

namespace Aws
{
namespace ApplicationAutoScaling
{
namespace Model
{

  /**
   */
  class AWS_APPLICATIONAUTOSCALING_API PutScalingPolicyRequest : public ApplicationAutoScalingRequest
  {
  public:
    PutScalingPolicyRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the scaling policy.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The name of the scaling policy.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name of the scaling policy.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name of the scaling policy.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The name of the scaling policy.</p>
     */
    inline PutScalingPolicyRequest& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the scaling policy.</p>
     */
    inline PutScalingPolicyRequest& WithPolicyName(Aws::String&& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the scaling policy.</p>
     */
    inline PutScalingPolicyRequest& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}

    /**
     * <p>The AWS service namespace of the scalable target that this scaling policy
     * applies to. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the Amazon Web Services General Reference.</p>
     */
    inline const ServiceNamespace& GetServiceNamespace() const{ return m_serviceNamespace; }

    /**
     * <p>The AWS service namespace of the scalable target that this scaling policy
     * applies to. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the Amazon Web Services General Reference.</p>
     */
    inline void SetServiceNamespace(const ServiceNamespace& value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace = value; }

    /**
     * <p>The AWS service namespace of the scalable target that this scaling policy
     * applies to. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the Amazon Web Services General Reference.</p>
     */
    inline void SetServiceNamespace(ServiceNamespace&& value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace = value; }

    /**
     * <p>The AWS service namespace of the scalable target that this scaling policy
     * applies to. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the Amazon Web Services General Reference.</p>
     */
    inline PutScalingPolicyRequest& WithServiceNamespace(const ServiceNamespace& value) { SetServiceNamespace(value); return *this;}

    /**
     * <p>The AWS service namespace of the scalable target that this scaling policy
     * applies to. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the Amazon Web Services General Reference.</p>
     */
    inline PutScalingPolicyRequest& WithServiceNamespace(ServiceNamespace&& value) { SetServiceNamespace(value); return *this;}

    /**
     * <p>The unique resource identifier string for the scalable target that this
     * scaling policy applies to. For Amazon ECS services, the resource type is
     * <code>services</code>, and the identifier is the cluster name and service name;
     * for example, <code>service/default/sample-webapp</code>. For Amazon EC2 Spot
     * fleet requests, the resource type is <code>spot-fleet-request</code>, and the
     * identifier is the Spot fleet request ID; for example,
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The unique resource identifier string for the scalable target that this
     * scaling policy applies to. For Amazon ECS services, the resource type is
     * <code>services</code>, and the identifier is the cluster name and service name;
     * for example, <code>service/default/sample-webapp</code>. For Amazon EC2 Spot
     * fleet requests, the resource type is <code>spot-fleet-request</code>, and the
     * identifier is the Spot fleet request ID; for example,
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The unique resource identifier string for the scalable target that this
     * scaling policy applies to. For Amazon ECS services, the resource type is
     * <code>services</code>, and the identifier is the cluster name and service name;
     * for example, <code>service/default/sample-webapp</code>. For Amazon EC2 Spot
     * fleet requests, the resource type is <code>spot-fleet-request</code>, and the
     * identifier is the Spot fleet request ID; for example,
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The unique resource identifier string for the scalable target that this
     * scaling policy applies to. For Amazon ECS services, the resource type is
     * <code>services</code>, and the identifier is the cluster name and service name;
     * for example, <code>service/default/sample-webapp</code>. For Amazon EC2 Spot
     * fleet requests, the resource type is <code>spot-fleet-request</code>, and the
     * identifier is the Spot fleet request ID; for example,
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The unique resource identifier string for the scalable target that this
     * scaling policy applies to. For Amazon ECS services, the resource type is
     * <code>services</code>, and the identifier is the cluster name and service name;
     * for example, <code>service/default/sample-webapp</code>. For Amazon EC2 Spot
     * fleet requests, the resource type is <code>spot-fleet-request</code>, and the
     * identifier is the Spot fleet request ID; for example,
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     */
    inline PutScalingPolicyRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The unique resource identifier string for the scalable target that this
     * scaling policy applies to. For Amazon ECS services, the resource type is
     * <code>services</code>, and the identifier is the cluster name and service name;
     * for example, <code>service/default/sample-webapp</code>. For Amazon EC2 Spot
     * fleet requests, the resource type is <code>spot-fleet-request</code>, and the
     * identifier is the Spot fleet request ID; for example,
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     */
    inline PutScalingPolicyRequest& WithResourceId(Aws::String&& value) { SetResourceId(value); return *this;}

    /**
     * <p>The unique resource identifier string for the scalable target that this
     * scaling policy applies to. For Amazon ECS services, the resource type is
     * <code>services</code>, and the identifier is the cluster name and service name;
     * for example, <code>service/default/sample-webapp</code>. For Amazon EC2 Spot
     * fleet requests, the resource type is <code>spot-fleet-request</code>, and the
     * identifier is the Spot fleet request ID; for example,
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     */
    inline PutScalingPolicyRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}

    /**
     * <p>The scalable dimension of the scalable target that this scaling policy
     * applies to. The scalable dimension contains the service namespace, resource
     * type, and scaling property, such as <code>ecs:service:DesiredCount</code> for
     * the desired task count of an Amazon ECS service, or
     * <code>ec2:spot-fleet-request:TargetCapacity</code> for the target capacity of an
     * Amazon EC2 Spot fleet request.</p>
     */
    inline const ScalableDimension& GetScalableDimension() const{ return m_scalableDimension; }

    /**
     * <p>The scalable dimension of the scalable target that this scaling policy
     * applies to. The scalable dimension contains the service namespace, resource
     * type, and scaling property, such as <code>ecs:service:DesiredCount</code> for
     * the desired task count of an Amazon ECS service, or
     * <code>ec2:spot-fleet-request:TargetCapacity</code> for the target capacity of an
     * Amazon EC2 Spot fleet request.</p>
     */
    inline void SetScalableDimension(const ScalableDimension& value) { m_scalableDimensionHasBeenSet = true; m_scalableDimension = value; }

    /**
     * <p>The scalable dimension of the scalable target that this scaling policy
     * applies to. The scalable dimension contains the service namespace, resource
     * type, and scaling property, such as <code>ecs:service:DesiredCount</code> for
     * the desired task count of an Amazon ECS service, or
     * <code>ec2:spot-fleet-request:TargetCapacity</code> for the target capacity of an
     * Amazon EC2 Spot fleet request.</p>
     */
    inline void SetScalableDimension(ScalableDimension&& value) { m_scalableDimensionHasBeenSet = true; m_scalableDimension = value; }

    /**
     * <p>The scalable dimension of the scalable target that this scaling policy
     * applies to. The scalable dimension contains the service namespace, resource
     * type, and scaling property, such as <code>ecs:service:DesiredCount</code> for
     * the desired task count of an Amazon ECS service, or
     * <code>ec2:spot-fleet-request:TargetCapacity</code> for the target capacity of an
     * Amazon EC2 Spot fleet request.</p>
     */
    inline PutScalingPolicyRequest& WithScalableDimension(const ScalableDimension& value) { SetScalableDimension(value); return *this;}

    /**
     * <p>The scalable dimension of the scalable target that this scaling policy
     * applies to. The scalable dimension contains the service namespace, resource
     * type, and scaling property, such as <code>ecs:service:DesiredCount</code> for
     * the desired task count of an Amazon ECS service, or
     * <code>ec2:spot-fleet-request:TargetCapacity</code> for the target capacity of an
     * Amazon EC2 Spot fleet request.</p>
     */
    inline PutScalingPolicyRequest& WithScalableDimension(ScalableDimension&& value) { SetScalableDimension(value); return *this;}

    /**
     * <p>The policy type. If you are creating a new policy, this parameter is
     * required. If you are updating an existing policy, this parameter is not
     * required.</p>
     */
    inline const PolicyType& GetPolicyType() const{ return m_policyType; }

    /**
     * <p>The policy type. If you are creating a new policy, this parameter is
     * required. If you are updating an existing policy, this parameter is not
     * required.</p>
     */
    inline void SetPolicyType(const PolicyType& value) { m_policyTypeHasBeenSet = true; m_policyType = value; }

    /**
     * <p>The policy type. If you are creating a new policy, this parameter is
     * required. If you are updating an existing policy, this parameter is not
     * required.</p>
     */
    inline void SetPolicyType(PolicyType&& value) { m_policyTypeHasBeenSet = true; m_policyType = value; }

    /**
     * <p>The policy type. If you are creating a new policy, this parameter is
     * required. If you are updating an existing policy, this parameter is not
     * required.</p>
     */
    inline PutScalingPolicyRequest& WithPolicyType(const PolicyType& value) { SetPolicyType(value); return *this;}

    /**
     * <p>The policy type. If you are creating a new policy, this parameter is
     * required. If you are updating an existing policy, this parameter is not
     * required.</p>
     */
    inline PutScalingPolicyRequest& WithPolicyType(PolicyType&& value) { SetPolicyType(value); return *this;}

    /**
     * <p>The configuration for the step scaling policy. If you are creating a new
     * policy, this parameter is required. If you are updating an existing policy, this
     * parameter is not required. For more information, see
     * <a>StepScalingPolicyConfiguration</a> and <a>StepAdjustment</a>.</p>
     */
    inline const StepScalingPolicyConfiguration& GetStepScalingPolicyConfiguration() const{ return m_stepScalingPolicyConfiguration; }

    /**
     * <p>The configuration for the step scaling policy. If you are creating a new
     * policy, this parameter is required. If you are updating an existing policy, this
     * parameter is not required. For more information, see
     * <a>StepScalingPolicyConfiguration</a> and <a>StepAdjustment</a>.</p>
     */
    inline void SetStepScalingPolicyConfiguration(const StepScalingPolicyConfiguration& value) { m_stepScalingPolicyConfigurationHasBeenSet = true; m_stepScalingPolicyConfiguration = value; }

    /**
     * <p>The configuration for the step scaling policy. If you are creating a new
     * policy, this parameter is required. If you are updating an existing policy, this
     * parameter is not required. For more information, see
     * <a>StepScalingPolicyConfiguration</a> and <a>StepAdjustment</a>.</p>
     */
    inline void SetStepScalingPolicyConfiguration(StepScalingPolicyConfiguration&& value) { m_stepScalingPolicyConfigurationHasBeenSet = true; m_stepScalingPolicyConfiguration = value; }

    /**
     * <p>The configuration for the step scaling policy. If you are creating a new
     * policy, this parameter is required. If you are updating an existing policy, this
     * parameter is not required. For more information, see
     * <a>StepScalingPolicyConfiguration</a> and <a>StepAdjustment</a>.</p>
     */
    inline PutScalingPolicyRequest& WithStepScalingPolicyConfiguration(const StepScalingPolicyConfiguration& value) { SetStepScalingPolicyConfiguration(value); return *this;}

    /**
     * <p>The configuration for the step scaling policy. If you are creating a new
     * policy, this parameter is required. If you are updating an existing policy, this
     * parameter is not required. For more information, see
     * <a>StepScalingPolicyConfiguration</a> and <a>StepAdjustment</a>.</p>
     */
    inline PutScalingPolicyRequest& WithStepScalingPolicyConfiguration(StepScalingPolicyConfiguration&& value) { SetStepScalingPolicyConfiguration(value); return *this;}

  private:
    Aws::String m_policyName;
    bool m_policyNameHasBeenSet;
    ServiceNamespace m_serviceNamespace;
    bool m_serviceNamespaceHasBeenSet;
    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;
    ScalableDimension m_scalableDimension;
    bool m_scalableDimensionHasBeenSet;
    PolicyType m_policyType;
    bool m_policyTypeHasBeenSet;
    StepScalingPolicyConfiguration m_stepScalingPolicyConfiguration;
    bool m_stepScalingPolicyConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
