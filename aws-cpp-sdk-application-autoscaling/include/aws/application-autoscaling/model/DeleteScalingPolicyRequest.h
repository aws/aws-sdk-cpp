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

namespace Aws
{
namespace ApplicationAutoScaling
{
namespace Model
{

  /**
   */
  class AWS_APPLICATIONAUTOSCALING_API DeleteScalingPolicyRequest : public ApplicationAutoScalingRequest
  {
  public:
    DeleteScalingPolicyRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the scaling policy to delete.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The name of the scaling policy to delete.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name of the scaling policy to delete.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name of the scaling policy to delete.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The name of the scaling policy to delete.</p>
     */
    inline DeleteScalingPolicyRequest& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the scaling policy to delete.</p>
     */
    inline DeleteScalingPolicyRequest& WithPolicyName(Aws::String&& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the scaling policy to delete.</p>
     */
    inline DeleteScalingPolicyRequest& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}

    /**
     * <p>The namespace for the AWS service that the scaling policy is associated with.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the Amazon Web Services General Reference.</p>
     */
    inline const ServiceNamespace& GetServiceNamespace() const{ return m_serviceNamespace; }

    /**
     * <p>The namespace for the AWS service that the scaling policy is associated with.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the Amazon Web Services General Reference.</p>
     */
    inline void SetServiceNamespace(const ServiceNamespace& value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace = value; }

    /**
     * <p>The namespace for the AWS service that the scaling policy is associated with.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the Amazon Web Services General Reference.</p>
     */
    inline void SetServiceNamespace(ServiceNamespace&& value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace = value; }

    /**
     * <p>The namespace for the AWS service that the scaling policy is associated with.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the Amazon Web Services General Reference.</p>
     */
    inline DeleteScalingPolicyRequest& WithServiceNamespace(const ServiceNamespace& value) { SetServiceNamespace(value); return *this;}

    /**
     * <p>The namespace for the AWS service that the scaling policy is associated with.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the Amazon Web Services General Reference.</p>
     */
    inline DeleteScalingPolicyRequest& WithServiceNamespace(ServiceNamespace&& value) { SetServiceNamespace(value); return *this;}

    /**
     * <p>The resource type and unique identifier string for the resource associated
     * with the scaling policy. For Amazon ECS services, the resource type is
     * <code>services</code>, and the identifier is the cluster name and service name;
     * for example, <code>service/default/sample-webapp</code>. For Amazon EC2 Spot
     * fleet requests, the resource type is <code>spot-fleet-request</code>, and the
     * identifier is the Spot fleet request ID; for example,
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The resource type and unique identifier string for the resource associated
     * with the scaling policy. For Amazon ECS services, the resource type is
     * <code>services</code>, and the identifier is the cluster name and service name;
     * for example, <code>service/default/sample-webapp</code>. For Amazon EC2 Spot
     * fleet requests, the resource type is <code>spot-fleet-request</code>, and the
     * identifier is the Spot fleet request ID; for example,
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The resource type and unique identifier string for the resource associated
     * with the scaling policy. For Amazon ECS services, the resource type is
     * <code>services</code>, and the identifier is the cluster name and service name;
     * for example, <code>service/default/sample-webapp</code>. For Amazon EC2 Spot
     * fleet requests, the resource type is <code>spot-fleet-request</code>, and the
     * identifier is the Spot fleet request ID; for example,
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The resource type and unique identifier string for the resource associated
     * with the scaling policy. For Amazon ECS services, the resource type is
     * <code>services</code>, and the identifier is the cluster name and service name;
     * for example, <code>service/default/sample-webapp</code>. For Amazon EC2 Spot
     * fleet requests, the resource type is <code>spot-fleet-request</code>, and the
     * identifier is the Spot fleet request ID; for example,
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The resource type and unique identifier string for the resource associated
     * with the scaling policy. For Amazon ECS services, the resource type is
     * <code>services</code>, and the identifier is the cluster name and service name;
     * for example, <code>service/default/sample-webapp</code>. For Amazon EC2 Spot
     * fleet requests, the resource type is <code>spot-fleet-request</code>, and the
     * identifier is the Spot fleet request ID; for example,
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     */
    inline DeleteScalingPolicyRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The resource type and unique identifier string for the resource associated
     * with the scaling policy. For Amazon ECS services, the resource type is
     * <code>services</code>, and the identifier is the cluster name and service name;
     * for example, <code>service/default/sample-webapp</code>. For Amazon EC2 Spot
     * fleet requests, the resource type is <code>spot-fleet-request</code>, and the
     * identifier is the Spot fleet request ID; for example,
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     */
    inline DeleteScalingPolicyRequest& WithResourceId(Aws::String&& value) { SetResourceId(value); return *this;}

    /**
     * <p>The resource type and unique identifier string for the resource associated
     * with the scaling policy. For Amazon ECS services, the resource type is
     * <code>services</code>, and the identifier is the cluster name and service name;
     * for example, <code>service/default/sample-webapp</code>. For Amazon EC2 Spot
     * fleet requests, the resource type is <code>spot-fleet-request</code>, and the
     * identifier is the Spot fleet request ID; for example,
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     */
    inline DeleteScalingPolicyRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}

    /**
     * <p>The scalable dimension associated with the scaling policy. The scalable
     * dimension contains the service namespace, resource type, and scaling property,
     * such as <code>ecs:service:DesiredCount</code> for the desired task count of an
     * Amazon ECS service, or <code>ec2:spot-fleet-request:TargetCapacity</code> for
     * the target capacity of an Amazon EC2 Spot fleet request.</p>
     */
    inline const ScalableDimension& GetScalableDimension() const{ return m_scalableDimension; }

    /**
     * <p>The scalable dimension associated with the scaling policy. The scalable
     * dimension contains the service namespace, resource type, and scaling property,
     * such as <code>ecs:service:DesiredCount</code> for the desired task count of an
     * Amazon ECS service, or <code>ec2:spot-fleet-request:TargetCapacity</code> for
     * the target capacity of an Amazon EC2 Spot fleet request.</p>
     */
    inline void SetScalableDimension(const ScalableDimension& value) { m_scalableDimensionHasBeenSet = true; m_scalableDimension = value; }

    /**
     * <p>The scalable dimension associated with the scaling policy. The scalable
     * dimension contains the service namespace, resource type, and scaling property,
     * such as <code>ecs:service:DesiredCount</code> for the desired task count of an
     * Amazon ECS service, or <code>ec2:spot-fleet-request:TargetCapacity</code> for
     * the target capacity of an Amazon EC2 Spot fleet request.</p>
     */
    inline void SetScalableDimension(ScalableDimension&& value) { m_scalableDimensionHasBeenSet = true; m_scalableDimension = value; }

    /**
     * <p>The scalable dimension associated with the scaling policy. The scalable
     * dimension contains the service namespace, resource type, and scaling property,
     * such as <code>ecs:service:DesiredCount</code> for the desired task count of an
     * Amazon ECS service, or <code>ec2:spot-fleet-request:TargetCapacity</code> for
     * the target capacity of an Amazon EC2 Spot fleet request.</p>
     */
    inline DeleteScalingPolicyRequest& WithScalableDimension(const ScalableDimension& value) { SetScalableDimension(value); return *this;}

    /**
     * <p>The scalable dimension associated with the scaling policy. The scalable
     * dimension contains the service namespace, resource type, and scaling property,
     * such as <code>ecs:service:DesiredCount</code> for the desired task count of an
     * Amazon ECS service, or <code>ec2:spot-fleet-request:TargetCapacity</code> for
     * the target capacity of an Amazon EC2 Spot fleet request.</p>
     */
    inline DeleteScalingPolicyRequest& WithScalableDimension(ScalableDimension&& value) { SetScalableDimension(value); return *this;}

  private:
    Aws::String m_policyName;
    bool m_policyNameHasBeenSet;
    ServiceNamespace m_serviceNamespace;
    bool m_serviceNamespaceHasBeenSet;
    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;
    ScalableDimension m_scalableDimension;
    bool m_scalableDimensionHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
