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
#include <aws/application-autoscaling/model/ServiceNamespace.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-autoscaling/model/ScalableDimension.h>
#include <aws/core/utils/DateTime.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ApplicationAutoScaling
{
namespace Model
{

  /**
   * <p>An object representing a scalable target.</p>
   */
  class AWS_APPLICATIONAUTOSCALING_API ScalableTarget
  {
  public:
    ScalableTarget();
    ScalableTarget(const Aws::Utils::Json::JsonValue& jsonValue);
    ScalableTarget& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The namespace for the AWS service that the scalable target is associated
     * with. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the Amazon Web Services General Reference.</p>
     */
    inline const ServiceNamespace& GetServiceNamespace() const{ return m_serviceNamespace; }

    /**
     * <p>The namespace for the AWS service that the scalable target is associated
     * with. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the Amazon Web Services General Reference.</p>
     */
    inline void SetServiceNamespace(const ServiceNamespace& value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace = value; }

    /**
     * <p>The namespace for the AWS service that the scalable target is associated
     * with. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the Amazon Web Services General Reference.</p>
     */
    inline void SetServiceNamespace(ServiceNamespace&& value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace = value; }

    /**
     * <p>The namespace for the AWS service that the scalable target is associated
     * with. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the Amazon Web Services General Reference.</p>
     */
    inline ScalableTarget& WithServiceNamespace(const ServiceNamespace& value) { SetServiceNamespace(value); return *this;}

    /**
     * <p>The namespace for the AWS service that the scalable target is associated
     * with. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the Amazon Web Services General Reference.</p>
     */
    inline ScalableTarget& WithServiceNamespace(ServiceNamespace&& value) { SetServiceNamespace(value); return *this;}

    /**
     * <p>The unique identifier string for the resource associated with the scalable
     * target. For Amazon ECS services, this value is the resource type, followed by
     * the cluster name, and then the service name, such as
     * <code>service/default/sample-webapp</code>.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The unique identifier string for the resource associated with the scalable
     * target. For Amazon ECS services, this value is the resource type, followed by
     * the cluster name, and then the service name, such as
     * <code>service/default/sample-webapp</code>.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The unique identifier string for the resource associated with the scalable
     * target. For Amazon ECS services, this value is the resource type, followed by
     * the cluster name, and then the service name, such as
     * <code>service/default/sample-webapp</code>.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The unique identifier string for the resource associated with the scalable
     * target. For Amazon ECS services, this value is the resource type, followed by
     * the cluster name, and then the service name, such as
     * <code>service/default/sample-webapp</code>.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The unique identifier string for the resource associated with the scalable
     * target. For Amazon ECS services, this value is the resource type, followed by
     * the cluster name, and then the service name, such as
     * <code>service/default/sample-webapp</code>.</p>
     */
    inline ScalableTarget& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The unique identifier string for the resource associated with the scalable
     * target. For Amazon ECS services, this value is the resource type, followed by
     * the cluster name, and then the service name, such as
     * <code>service/default/sample-webapp</code>.</p>
     */
    inline ScalableTarget& WithResourceId(Aws::String&& value) { SetResourceId(value); return *this;}

    /**
     * <p>The unique identifier string for the resource associated with the scalable
     * target. For Amazon ECS services, this value is the resource type, followed by
     * the cluster name, and then the service name, such as
     * <code>service/default/sample-webapp</code>.</p>
     */
    inline ScalableTarget& WithResourceId(const char* value) { SetResourceId(value); return *this;}

    /**
     * <p>The scalable dimension associated with the scalable target. The scalable
     * dimension contains the service namespace, the resource type, and the scaling
     * property, such as <code>ecs:service:DesiredCount</code> for the desired task
     * count for an Amazon ECS service.</p>
     */
    inline const ScalableDimension& GetScalableDimension() const{ return m_scalableDimension; }

    /**
     * <p>The scalable dimension associated with the scalable target. The scalable
     * dimension contains the service namespace, the resource type, and the scaling
     * property, such as <code>ecs:service:DesiredCount</code> for the desired task
     * count for an Amazon ECS service.</p>
     */
    inline void SetScalableDimension(const ScalableDimension& value) { m_scalableDimensionHasBeenSet = true; m_scalableDimension = value; }

    /**
     * <p>The scalable dimension associated with the scalable target. The scalable
     * dimension contains the service namespace, the resource type, and the scaling
     * property, such as <code>ecs:service:DesiredCount</code> for the desired task
     * count for an Amazon ECS service.</p>
     */
    inline void SetScalableDimension(ScalableDimension&& value) { m_scalableDimensionHasBeenSet = true; m_scalableDimension = value; }

    /**
     * <p>The scalable dimension associated with the scalable target. The scalable
     * dimension contains the service namespace, the resource type, and the scaling
     * property, such as <code>ecs:service:DesiredCount</code> for the desired task
     * count for an Amazon ECS service.</p>
     */
    inline ScalableTarget& WithScalableDimension(const ScalableDimension& value) { SetScalableDimension(value); return *this;}

    /**
     * <p>The scalable dimension associated with the scalable target. The scalable
     * dimension contains the service namespace, the resource type, and the scaling
     * property, such as <code>ecs:service:DesiredCount</code> for the desired task
     * count for an Amazon ECS service.</p>
     */
    inline ScalableTarget& WithScalableDimension(ScalableDimension&& value) { SetScalableDimension(value); return *this;}

    /**
     * <p>The minimum value for this scalable target to scale in to in response to
     * scaling activities.</p>
     */
    inline long GetMinCapacity() const{ return m_minCapacity; }

    /**
     * <p>The minimum value for this scalable target to scale in to in response to
     * scaling activities.</p>
     */
    inline void SetMinCapacity(long value) { m_minCapacityHasBeenSet = true; m_minCapacity = value; }

    /**
     * <p>The minimum value for this scalable target to scale in to in response to
     * scaling activities.</p>
     */
    inline ScalableTarget& WithMinCapacity(long value) { SetMinCapacity(value); return *this;}

    /**
     * <p>The maximum value for this scalable target to scale out to in response to
     * scaling activities.</p>
     */
    inline long GetMaxCapacity() const{ return m_maxCapacity; }

    /**
     * <p>The maximum value for this scalable target to scale out to in response to
     * scaling activities.</p>
     */
    inline void SetMaxCapacity(long value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }

    /**
     * <p>The maximum value for this scalable target to scale out to in response to
     * scaling activities.</p>
     */
    inline ScalableTarget& WithMaxCapacity(long value) { SetMaxCapacity(value); return *this;}

    /**
     * <p>The ARN of the IAM role that allows Application Auto Scaling to modify your
     * scalable target on your behalf.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>The ARN of the IAM role that allows Application Auto Scaling to modify your
     * scalable target on your behalf.</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The ARN of the IAM role that allows Application Auto Scaling to modify your
     * scalable target on your behalf.</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The ARN of the IAM role that allows Application Auto Scaling to modify your
     * scalable target on your behalf.</p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>The ARN of the IAM role that allows Application Auto Scaling to modify your
     * scalable target on your behalf.</p>
     */
    inline ScalableTarget& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The ARN of the IAM role that allows Application Auto Scaling to modify your
     * scalable target on your behalf.</p>
     */
    inline ScalableTarget& WithRoleARN(Aws::String&& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The ARN of the IAM role that allows Application Auto Scaling to modify your
     * scalable target on your behalf.</p>
     */
    inline ScalableTarget& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}

    /**
     * <p>The Unix timestamp for when the scalable target was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The Unix timestamp for when the scalable target was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The Unix timestamp for when the scalable target was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The Unix timestamp for when the scalable target was created.</p>
     */
    inline ScalableTarget& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The Unix timestamp for when the scalable target was created.</p>
     */
    inline ScalableTarget& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(value); return *this;}

  private:
    ServiceNamespace m_serviceNamespace;
    bool m_serviceNamespaceHasBeenSet;
    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;
    ScalableDimension m_scalableDimension;
    bool m_scalableDimensionHasBeenSet;
    long m_minCapacity;
    bool m_minCapacityHasBeenSet;
    long m_maxCapacity;
    bool m_maxCapacityHasBeenSet;
    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet;
    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
