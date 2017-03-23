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
  class AWS_APPLICATIONAUTOSCALING_API DeregisterScalableTargetRequest : public ApplicationAutoScalingRequest
  {
  public:
    DeregisterScalableTargetRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The namespace of the AWS service. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the <i>Amazon Web Services General Reference</i>.</p>
     */
    inline const ServiceNamespace& GetServiceNamespace() const{ return m_serviceNamespace; }

    /**
     * <p>The namespace of the AWS service. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the <i>Amazon Web Services General Reference</i>.</p>
     */
    inline void SetServiceNamespace(const ServiceNamespace& value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace = value; }

    /**
     * <p>The namespace of the AWS service. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the <i>Amazon Web Services General Reference</i>.</p>
     */
    inline void SetServiceNamespace(ServiceNamespace&& value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace = value; }

    /**
     * <p>The namespace of the AWS service. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the <i>Amazon Web Services General Reference</i>.</p>
     */
    inline DeregisterScalableTargetRequest& WithServiceNamespace(const ServiceNamespace& value) { SetServiceNamespace(value); return *this;}

    /**
     * <p>The namespace of the AWS service. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the <i>Amazon Web Services General Reference</i>.</p>
     */
    inline DeregisterScalableTargetRequest& WithServiceNamespace(ServiceNamespace&& value) { SetServiceNamespace(value); return *this;}

    /**
     * <p>The identifier of the resource associated with the scalable target. This
     * string consists of the resource type and unique identifier.</p> <ul> <li> <p>ECS
     * service - The resource type is <code>service</code> and the unique identifier is
     * the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot fleet request ID. Example:
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     * </li> <li> <p>EMR cluster - The resource type is <code>instancegroup</code> and
     * the unique identifier is the cluster ID and instance group ID. Example:
     * <code>instancegroup/j-2EEZNYKUA1NTV/ig-1791Y4E1L8YI0</code>.</p> </li> <li>
     * <p>AppStream 2.0 fleet - The resource type is <code>fleet</code> and the unique
     * identifier is the fleet name. Example: <code>fleet/sample-fleet</code>.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The identifier of the resource associated with the scalable target. This
     * string consists of the resource type and unique identifier.</p> <ul> <li> <p>ECS
     * service - The resource type is <code>service</code> and the unique identifier is
     * the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot fleet request ID. Example:
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     * </li> <li> <p>EMR cluster - The resource type is <code>instancegroup</code> and
     * the unique identifier is the cluster ID and instance group ID. Example:
     * <code>instancegroup/j-2EEZNYKUA1NTV/ig-1791Y4E1L8YI0</code>.</p> </li> <li>
     * <p>AppStream 2.0 fleet - The resource type is <code>fleet</code> and the unique
     * identifier is the fleet name. Example: <code>fleet/sample-fleet</code>.</p>
     * </li> </ul>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The identifier of the resource associated with the scalable target. This
     * string consists of the resource type and unique identifier.</p> <ul> <li> <p>ECS
     * service - The resource type is <code>service</code> and the unique identifier is
     * the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot fleet request ID. Example:
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     * </li> <li> <p>EMR cluster - The resource type is <code>instancegroup</code> and
     * the unique identifier is the cluster ID and instance group ID. Example:
     * <code>instancegroup/j-2EEZNYKUA1NTV/ig-1791Y4E1L8YI0</code>.</p> </li> <li>
     * <p>AppStream 2.0 fleet - The resource type is <code>fleet</code> and the unique
     * identifier is the fleet name. Example: <code>fleet/sample-fleet</code>.</p>
     * </li> </ul>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The identifier of the resource associated with the scalable target. This
     * string consists of the resource type and unique identifier.</p> <ul> <li> <p>ECS
     * service - The resource type is <code>service</code> and the unique identifier is
     * the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot fleet request ID. Example:
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     * </li> <li> <p>EMR cluster - The resource type is <code>instancegroup</code> and
     * the unique identifier is the cluster ID and instance group ID. Example:
     * <code>instancegroup/j-2EEZNYKUA1NTV/ig-1791Y4E1L8YI0</code>.</p> </li> <li>
     * <p>AppStream 2.0 fleet - The resource type is <code>fleet</code> and the unique
     * identifier is the fleet name. Example: <code>fleet/sample-fleet</code>.</p>
     * </li> </ul>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The identifier of the resource associated with the scalable target. This
     * string consists of the resource type and unique identifier.</p> <ul> <li> <p>ECS
     * service - The resource type is <code>service</code> and the unique identifier is
     * the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot fleet request ID. Example:
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     * </li> <li> <p>EMR cluster - The resource type is <code>instancegroup</code> and
     * the unique identifier is the cluster ID and instance group ID. Example:
     * <code>instancegroup/j-2EEZNYKUA1NTV/ig-1791Y4E1L8YI0</code>.</p> </li> <li>
     * <p>AppStream 2.0 fleet - The resource type is <code>fleet</code> and the unique
     * identifier is the fleet name. Example: <code>fleet/sample-fleet</code>.</p>
     * </li> </ul>
     */
    inline DeregisterScalableTargetRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The identifier of the resource associated with the scalable target. This
     * string consists of the resource type and unique identifier.</p> <ul> <li> <p>ECS
     * service - The resource type is <code>service</code> and the unique identifier is
     * the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot fleet request ID. Example:
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     * </li> <li> <p>EMR cluster - The resource type is <code>instancegroup</code> and
     * the unique identifier is the cluster ID and instance group ID. Example:
     * <code>instancegroup/j-2EEZNYKUA1NTV/ig-1791Y4E1L8YI0</code>.</p> </li> <li>
     * <p>AppStream 2.0 fleet - The resource type is <code>fleet</code> and the unique
     * identifier is the fleet name. Example: <code>fleet/sample-fleet</code>.</p>
     * </li> </ul>
     */
    inline DeregisterScalableTargetRequest& WithResourceId(Aws::String&& value) { SetResourceId(value); return *this;}

    /**
     * <p>The identifier of the resource associated with the scalable target. This
     * string consists of the resource type and unique identifier.</p> <ul> <li> <p>ECS
     * service - The resource type is <code>service</code> and the unique identifier is
     * the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot fleet request
     * - The resource type is <code>spot-fleet-request</code> and the unique identifier
     * is the Spot fleet request ID. Example:
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     * </li> <li> <p>EMR cluster - The resource type is <code>instancegroup</code> and
     * the unique identifier is the cluster ID and instance group ID. Example:
     * <code>instancegroup/j-2EEZNYKUA1NTV/ig-1791Y4E1L8YI0</code>.</p> </li> <li>
     * <p>AppStream 2.0 fleet - The resource type is <code>fleet</code> and the unique
     * identifier is the fleet name. Example: <code>fleet/sample-fleet</code>.</p>
     * </li> </ul>
     */
    inline DeregisterScalableTargetRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}

    /**
     * <p>The scalable dimension associated with the scalable target. This string
     * consists of the service namespace, resource type, and scaling property.</p> <ul>
     * <li> <p> <code>ecs:service:DesiredCount</code> - The desired task count of an
     * ECS service.</p> </li> <li> <p>
     * <code>ec2:spot-fleet-request:TargetCapacity</code> - The target capacity of a
     * Spot fleet request.</p> </li> <li> <p>
     * <code>elasticmapreduce:instancegroup:InstanceCount</code> - The instance count
     * of an EMR Instance Group.</p> </li> <li> <p>
     * <code>appstream:fleet:DesiredCapacity</code> - The desired capacity of an
     * AppStream 2.0 fleet.</p> </li> </ul>
     */
    inline const ScalableDimension& GetScalableDimension() const{ return m_scalableDimension; }

    /**
     * <p>The scalable dimension associated with the scalable target. This string
     * consists of the service namespace, resource type, and scaling property.</p> <ul>
     * <li> <p> <code>ecs:service:DesiredCount</code> - The desired task count of an
     * ECS service.</p> </li> <li> <p>
     * <code>ec2:spot-fleet-request:TargetCapacity</code> - The target capacity of a
     * Spot fleet request.</p> </li> <li> <p>
     * <code>elasticmapreduce:instancegroup:InstanceCount</code> - The instance count
     * of an EMR Instance Group.</p> </li> <li> <p>
     * <code>appstream:fleet:DesiredCapacity</code> - The desired capacity of an
     * AppStream 2.0 fleet.</p> </li> </ul>
     */
    inline void SetScalableDimension(const ScalableDimension& value) { m_scalableDimensionHasBeenSet = true; m_scalableDimension = value; }

    /**
     * <p>The scalable dimension associated with the scalable target. This string
     * consists of the service namespace, resource type, and scaling property.</p> <ul>
     * <li> <p> <code>ecs:service:DesiredCount</code> - The desired task count of an
     * ECS service.</p> </li> <li> <p>
     * <code>ec2:spot-fleet-request:TargetCapacity</code> - The target capacity of a
     * Spot fleet request.</p> </li> <li> <p>
     * <code>elasticmapreduce:instancegroup:InstanceCount</code> - The instance count
     * of an EMR Instance Group.</p> </li> <li> <p>
     * <code>appstream:fleet:DesiredCapacity</code> - The desired capacity of an
     * AppStream 2.0 fleet.</p> </li> </ul>
     */
    inline void SetScalableDimension(ScalableDimension&& value) { m_scalableDimensionHasBeenSet = true; m_scalableDimension = value; }

    /**
     * <p>The scalable dimension associated with the scalable target. This string
     * consists of the service namespace, resource type, and scaling property.</p> <ul>
     * <li> <p> <code>ecs:service:DesiredCount</code> - The desired task count of an
     * ECS service.</p> </li> <li> <p>
     * <code>ec2:spot-fleet-request:TargetCapacity</code> - The target capacity of a
     * Spot fleet request.</p> </li> <li> <p>
     * <code>elasticmapreduce:instancegroup:InstanceCount</code> - The instance count
     * of an EMR Instance Group.</p> </li> <li> <p>
     * <code>appstream:fleet:DesiredCapacity</code> - The desired capacity of an
     * AppStream 2.0 fleet.</p> </li> </ul>
     */
    inline DeregisterScalableTargetRequest& WithScalableDimension(const ScalableDimension& value) { SetScalableDimension(value); return *this;}

    /**
     * <p>The scalable dimension associated with the scalable target. This string
     * consists of the service namespace, resource type, and scaling property.</p> <ul>
     * <li> <p> <code>ecs:service:DesiredCount</code> - The desired task count of an
     * ECS service.</p> </li> <li> <p>
     * <code>ec2:spot-fleet-request:TargetCapacity</code> - The target capacity of a
     * Spot fleet request.</p> </li> <li> <p>
     * <code>elasticmapreduce:instancegroup:InstanceCount</code> - The instance count
     * of an EMR Instance Group.</p> </li> <li> <p>
     * <code>appstream:fleet:DesiredCapacity</code> - The desired capacity of an
     * AppStream 2.0 fleet.</p> </li> </ul>
     */
    inline DeregisterScalableTargetRequest& WithScalableDimension(ScalableDimension&& value) { SetScalableDimension(value); return *this;}

  private:
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
