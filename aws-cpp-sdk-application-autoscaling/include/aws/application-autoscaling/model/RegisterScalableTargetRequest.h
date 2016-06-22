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
#include <aws/application-autoscaling/model/ServiceNamespace.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-autoscaling/model/ScalableDimension.h>

namespace Aws
{
namespace ApplicationAutoScaling
{
namespace Model
{

  /**
   */
  class AWS_APPLICATIONAUTOSCALING_API RegisterScalableTargetRequest : public ApplicationAutoScalingRequest
  {
  public:
    RegisterScalableTargetRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The namespace for the AWS service that the scalable target is associated
     * with. For Amazon ECS services, the namespace value is <code>ecs</code>. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the Amazon Web Services General Reference.</p>
     */
    inline const ServiceNamespace& GetServiceNamespace() const{ return m_serviceNamespace; }

    /**
     * <p>The namespace for the AWS service that the scalable target is associated
     * with. For Amazon ECS services, the namespace value is <code>ecs</code>. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the Amazon Web Services General Reference.</p>
     */
    inline void SetServiceNamespace(const ServiceNamespace& value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace = value; }

    /**
     * <p>The namespace for the AWS service that the scalable target is associated
     * with. For Amazon ECS services, the namespace value is <code>ecs</code>. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the Amazon Web Services General Reference.</p>
     */
    inline void SetServiceNamespace(ServiceNamespace&& value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace = value; }

    /**
     * <p>The namespace for the AWS service that the scalable target is associated
     * with. For Amazon ECS services, the namespace value is <code>ecs</code>. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the Amazon Web Services General Reference.</p>
     */
    inline RegisterScalableTargetRequest& WithServiceNamespace(const ServiceNamespace& value) { SetServiceNamespace(value); return *this;}

    /**
     * <p>The namespace for the AWS service that the scalable target is associated
     * with. For Amazon ECS services, the namespace value is <code>ecs</code>. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the Amazon Web Services General Reference.</p>
     */
    inline RegisterScalableTargetRequest& WithServiceNamespace(ServiceNamespace&& value) { SetServiceNamespace(value); return *this;}

    /**
     * <p>The unique identifier string for the resource to associate with the scalable
     * target. For Amazon ECS services, this value is the resource type, followed by
     * the cluster name and service name, such as
     * <code>service/default/sample-webapp</code>.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The unique identifier string for the resource to associate with the scalable
     * target. For Amazon ECS services, this value is the resource type, followed by
     * the cluster name and service name, such as
     * <code>service/default/sample-webapp</code>.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The unique identifier string for the resource to associate with the scalable
     * target. For Amazon ECS services, this value is the resource type, followed by
     * the cluster name and service name, such as
     * <code>service/default/sample-webapp</code>.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The unique identifier string for the resource to associate with the scalable
     * target. For Amazon ECS services, this value is the resource type, followed by
     * the cluster name and service name, such as
     * <code>service/default/sample-webapp</code>.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The unique identifier string for the resource to associate with the scalable
     * target. For Amazon ECS services, this value is the resource type, followed by
     * the cluster name and service name, such as
     * <code>service/default/sample-webapp</code>.</p>
     */
    inline RegisterScalableTargetRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The unique identifier string for the resource to associate with the scalable
     * target. For Amazon ECS services, this value is the resource type, followed by
     * the cluster name and service name, such as
     * <code>service/default/sample-webapp</code>.</p>
     */
    inline RegisterScalableTargetRequest& WithResourceId(Aws::String&& value) { SetResourceId(value); return *this;}

    /**
     * <p>The unique identifier string for the resource to associate with the scalable
     * target. For Amazon ECS services, this value is the resource type, followed by
     * the cluster name and service name, such as
     * <code>service/default/sample-webapp</code>.</p>
     */
    inline RegisterScalableTargetRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}

    /**
     * <p>The scalable dimension associated with the scalable target. The scalable
     * dimension contains the service namespace, resource type, and scaling property,
     * such as <code>ecs:service:DesiredCount</code> for the desired task count of an
     * Amazon ECS service.</p>
     */
    inline const ScalableDimension& GetScalableDimension() const{ return m_scalableDimension; }

    /**
     * <p>The scalable dimension associated with the scalable target. The scalable
     * dimension contains the service namespace, resource type, and scaling property,
     * such as <code>ecs:service:DesiredCount</code> for the desired task count of an
     * Amazon ECS service.</p>
     */
    inline void SetScalableDimension(const ScalableDimension& value) { m_scalableDimensionHasBeenSet = true; m_scalableDimension = value; }

    /**
     * <p>The scalable dimension associated with the scalable target. The scalable
     * dimension contains the service namespace, resource type, and scaling property,
     * such as <code>ecs:service:DesiredCount</code> for the desired task count of an
     * Amazon ECS service.</p>
     */
    inline void SetScalableDimension(ScalableDimension&& value) { m_scalableDimensionHasBeenSet = true; m_scalableDimension = value; }

    /**
     * <p>The scalable dimension associated with the scalable target. The scalable
     * dimension contains the service namespace, resource type, and scaling property,
     * such as <code>ecs:service:DesiredCount</code> for the desired task count of an
     * Amazon ECS service.</p>
     */
    inline RegisterScalableTargetRequest& WithScalableDimension(const ScalableDimension& value) { SetScalableDimension(value); return *this;}

    /**
     * <p>The scalable dimension associated with the scalable target. The scalable
     * dimension contains the service namespace, resource type, and scaling property,
     * such as <code>ecs:service:DesiredCount</code> for the desired task count of an
     * Amazon ECS service.</p>
     */
    inline RegisterScalableTargetRequest& WithScalableDimension(ScalableDimension&& value) { SetScalableDimension(value); return *this;}

    /**
     * <p>The minimum value for this scalable target to scale in to in response to
     * scaling activities. This parameter is required if you are registering a new
     * scalable target, and it is optional if you are updating an existing one.</p>
     */
    inline int GetMinCapacity() const{ return m_minCapacity; }

    /**
     * <p>The minimum value for this scalable target to scale in to in response to
     * scaling activities. This parameter is required if you are registering a new
     * scalable target, and it is optional if you are updating an existing one.</p>
     */
    inline void SetMinCapacity(int value) { m_minCapacityHasBeenSet = true; m_minCapacity = value; }

    /**
     * <p>The minimum value for this scalable target to scale in to in response to
     * scaling activities. This parameter is required if you are registering a new
     * scalable target, and it is optional if you are updating an existing one.</p>
     */
    inline RegisterScalableTargetRequest& WithMinCapacity(int value) { SetMinCapacity(value); return *this;}

    /**
     * <p>The maximum value for this scalable target to scale out to in response to
     * scaling activities. This parameter is required if you are registering a new
     * scalable target, and it is optional if you are updating an existing one.</p>
     */
    inline int GetMaxCapacity() const{ return m_maxCapacity; }

    /**
     * <p>The maximum value for this scalable target to scale out to in response to
     * scaling activities. This parameter is required if you are registering a new
     * scalable target, and it is optional if you are updating an existing one.</p>
     */
    inline void SetMaxCapacity(int value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }

    /**
     * <p>The maximum value for this scalable target to scale out to in response to
     * scaling activities. This parameter is required if you are registering a new
     * scalable target, and it is optional if you are updating an existing one.</p>
     */
    inline RegisterScalableTargetRequest& WithMaxCapacity(int value) { SetMaxCapacity(value); return *this;}

    /**
     * <p>The ARN of the IAM role that allows Application Auto Scaling to modify your
     * scalable target on your behalf. This parameter is required if you are
     * registering a new scalable target, and it is optional if you are updating an
     * existing one.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>The ARN of the IAM role that allows Application Auto Scaling to modify your
     * scalable target on your behalf. This parameter is required if you are
     * registering a new scalable target, and it is optional if you are updating an
     * existing one.</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The ARN of the IAM role that allows Application Auto Scaling to modify your
     * scalable target on your behalf. This parameter is required if you are
     * registering a new scalable target, and it is optional if you are updating an
     * existing one.</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The ARN of the IAM role that allows Application Auto Scaling to modify your
     * scalable target on your behalf. This parameter is required if you are
     * registering a new scalable target, and it is optional if you are updating an
     * existing one.</p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>The ARN of the IAM role that allows Application Auto Scaling to modify your
     * scalable target on your behalf. This parameter is required if you are
     * registering a new scalable target, and it is optional if you are updating an
     * existing one.</p>
     */
    inline RegisterScalableTargetRequest& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The ARN of the IAM role that allows Application Auto Scaling to modify your
     * scalable target on your behalf. This parameter is required if you are
     * registering a new scalable target, and it is optional if you are updating an
     * existing one.</p>
     */
    inline RegisterScalableTargetRequest& WithRoleARN(Aws::String&& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The ARN of the IAM role that allows Application Auto Scaling to modify your
     * scalable target on your behalf. This parameter is required if you are
     * registering a new scalable target, and it is optional if you are updating an
     * existing one.</p>
     */
    inline RegisterScalableTargetRequest& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}

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
    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
