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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-autoscaling/model/ServiceNamespace.h>
#include <aws/application-autoscaling/model/ScalableDimension.h>
#include <aws/core/utils/DateTime.h>
#include <aws/application-autoscaling/model/ScalingActivityStatusCode.h>

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
   * <p>Represents a scaling activity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/ScalingActivity">AWS
   * API Reference</a></p>
   */
  class AWS_APPLICATIONAUTOSCALING_API ScalingActivity
  {
  public:
    ScalingActivity();
    ScalingActivity(const Aws::Utils::Json::JsonValue& jsonValue);
    ScalingActivity& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The unique identifier of the scaling activity.</p>
     */
    inline const Aws::String& GetActivityId() const{ return m_activityId; }

    /**
     * <p>The unique identifier of the scaling activity.</p>
     */
    inline void SetActivityId(const Aws::String& value) { m_activityIdHasBeenSet = true; m_activityId = value; }

    /**
     * <p>The unique identifier of the scaling activity.</p>
     */
    inline void SetActivityId(Aws::String&& value) { m_activityIdHasBeenSet = true; m_activityId = value; }

    /**
     * <p>The unique identifier of the scaling activity.</p>
     */
    inline void SetActivityId(const char* value) { m_activityIdHasBeenSet = true; m_activityId.assign(value); }

    /**
     * <p>The unique identifier of the scaling activity.</p>
     */
    inline ScalingActivity& WithActivityId(const Aws::String& value) { SetActivityId(value); return *this;}

    /**
     * <p>The unique identifier of the scaling activity.</p>
     */
    inline ScalingActivity& WithActivityId(Aws::String&& value) { SetActivityId(value); return *this;}

    /**
     * <p>The unique identifier of the scaling activity.</p>
     */
    inline ScalingActivity& WithActivityId(const char* value) { SetActivityId(value); return *this;}

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
    inline ScalingActivity& WithServiceNamespace(const ServiceNamespace& value) { SetServiceNamespace(value); return *this;}

    /**
     * <p>The namespace of the AWS service. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the <i>Amazon Web Services General Reference</i>.</p>
     */
    inline ScalingActivity& WithServiceNamespace(ServiceNamespace&& value) { SetServiceNamespace(value); return *this;}

    /**
     * <p>The identifier of the resource associated with the scaling activity. This
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
     * <p>The identifier of the resource associated with the scaling activity. This
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
     * <p>The identifier of the resource associated with the scaling activity. This
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
     * <p>The identifier of the resource associated with the scaling activity. This
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
     * <p>The identifier of the resource associated with the scaling activity. This
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
    inline ScalingActivity& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The identifier of the resource associated with the scaling activity. This
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
    inline ScalingActivity& WithResourceId(Aws::String&& value) { SetResourceId(value); return *this;}

    /**
     * <p>The identifier of the resource associated with the scaling activity. This
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
    inline ScalingActivity& WithResourceId(const char* value) { SetResourceId(value); return *this;}

    /**
     * <p>The scalable dimension. This string consists of the service namespace,
     * resource type, and scaling property.</p> <ul> <li> <p>
     * <code>ecs:service:DesiredCount</code> - The desired task count of an ECS
     * service.</p> </li> <li> <p> <code>ec2:spot-fleet-request:TargetCapacity</code> -
     * The target capacity of a Spot fleet request.</p> </li> <li> <p>
     * <code>elasticmapreduce:instancegroup:InstanceCount</code> - The instance count
     * of an EMR Instance Group.</p> </li> <li> <p>
     * <code>appstream:fleet:DesiredCapacity</code> - The desired capacity of an
     * AppStream 2.0 fleet.</p> </li> </ul>
     */
    inline const ScalableDimension& GetScalableDimension() const{ return m_scalableDimension; }

    /**
     * <p>The scalable dimension. This string consists of the service namespace,
     * resource type, and scaling property.</p> <ul> <li> <p>
     * <code>ecs:service:DesiredCount</code> - The desired task count of an ECS
     * service.</p> </li> <li> <p> <code>ec2:spot-fleet-request:TargetCapacity</code> -
     * The target capacity of a Spot fleet request.</p> </li> <li> <p>
     * <code>elasticmapreduce:instancegroup:InstanceCount</code> - The instance count
     * of an EMR Instance Group.</p> </li> <li> <p>
     * <code>appstream:fleet:DesiredCapacity</code> - The desired capacity of an
     * AppStream 2.0 fleet.</p> </li> </ul>
     */
    inline void SetScalableDimension(const ScalableDimension& value) { m_scalableDimensionHasBeenSet = true; m_scalableDimension = value; }

    /**
     * <p>The scalable dimension. This string consists of the service namespace,
     * resource type, and scaling property.</p> <ul> <li> <p>
     * <code>ecs:service:DesiredCount</code> - The desired task count of an ECS
     * service.</p> </li> <li> <p> <code>ec2:spot-fleet-request:TargetCapacity</code> -
     * The target capacity of a Spot fleet request.</p> </li> <li> <p>
     * <code>elasticmapreduce:instancegroup:InstanceCount</code> - The instance count
     * of an EMR Instance Group.</p> </li> <li> <p>
     * <code>appstream:fleet:DesiredCapacity</code> - The desired capacity of an
     * AppStream 2.0 fleet.</p> </li> </ul>
     */
    inline void SetScalableDimension(ScalableDimension&& value) { m_scalableDimensionHasBeenSet = true; m_scalableDimension = value; }

    /**
     * <p>The scalable dimension. This string consists of the service namespace,
     * resource type, and scaling property.</p> <ul> <li> <p>
     * <code>ecs:service:DesiredCount</code> - The desired task count of an ECS
     * service.</p> </li> <li> <p> <code>ec2:spot-fleet-request:TargetCapacity</code> -
     * The target capacity of a Spot fleet request.</p> </li> <li> <p>
     * <code>elasticmapreduce:instancegroup:InstanceCount</code> - The instance count
     * of an EMR Instance Group.</p> </li> <li> <p>
     * <code>appstream:fleet:DesiredCapacity</code> - The desired capacity of an
     * AppStream 2.0 fleet.</p> </li> </ul>
     */
    inline ScalingActivity& WithScalableDimension(const ScalableDimension& value) { SetScalableDimension(value); return *this;}

    /**
     * <p>The scalable dimension. This string consists of the service namespace,
     * resource type, and scaling property.</p> <ul> <li> <p>
     * <code>ecs:service:DesiredCount</code> - The desired task count of an ECS
     * service.</p> </li> <li> <p> <code>ec2:spot-fleet-request:TargetCapacity</code> -
     * The target capacity of a Spot fleet request.</p> </li> <li> <p>
     * <code>elasticmapreduce:instancegroup:InstanceCount</code> - The instance count
     * of an EMR Instance Group.</p> </li> <li> <p>
     * <code>appstream:fleet:DesiredCapacity</code> - The desired capacity of an
     * AppStream 2.0 fleet.</p> </li> </ul>
     */
    inline ScalingActivity& WithScalableDimension(ScalableDimension&& value) { SetScalableDimension(value); return *this;}

    /**
     * <p>A simple description of what action the scaling activity intends to
     * accomplish.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A simple description of what action the scaling activity intends to
     * accomplish.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A simple description of what action the scaling activity intends to
     * accomplish.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A simple description of what action the scaling activity intends to
     * accomplish.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A simple description of what action the scaling activity intends to
     * accomplish.</p>
     */
    inline ScalingActivity& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A simple description of what action the scaling activity intends to
     * accomplish.</p>
     */
    inline ScalingActivity& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>A simple description of what action the scaling activity intends to
     * accomplish.</p>
     */
    inline ScalingActivity& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>A simple description of what caused the scaling activity to happen.</p>
     */
    inline const Aws::String& GetCause() const{ return m_cause; }

    /**
     * <p>A simple description of what caused the scaling activity to happen.</p>
     */
    inline void SetCause(const Aws::String& value) { m_causeHasBeenSet = true; m_cause = value; }

    /**
     * <p>A simple description of what caused the scaling activity to happen.</p>
     */
    inline void SetCause(Aws::String&& value) { m_causeHasBeenSet = true; m_cause = value; }

    /**
     * <p>A simple description of what caused the scaling activity to happen.</p>
     */
    inline void SetCause(const char* value) { m_causeHasBeenSet = true; m_cause.assign(value); }

    /**
     * <p>A simple description of what caused the scaling activity to happen.</p>
     */
    inline ScalingActivity& WithCause(const Aws::String& value) { SetCause(value); return *this;}

    /**
     * <p>A simple description of what caused the scaling activity to happen.</p>
     */
    inline ScalingActivity& WithCause(Aws::String&& value) { SetCause(value); return *this;}

    /**
     * <p>A simple description of what caused the scaling activity to happen.</p>
     */
    inline ScalingActivity& WithCause(const char* value) { SetCause(value); return *this;}

    /**
     * <p>The Unix timestamp for when the scaling activity began.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The Unix timestamp for when the scaling activity began.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The Unix timestamp for when the scaling activity began.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The Unix timestamp for when the scaling activity began.</p>
     */
    inline ScalingActivity& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The Unix timestamp for when the scaling activity began.</p>
     */
    inline ScalingActivity& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(value); return *this;}

    /**
     * <p>The Unix timestamp for when the scaling activity ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The Unix timestamp for when the scaling activity ended.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The Unix timestamp for when the scaling activity ended.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The Unix timestamp for when the scaling activity ended.</p>
     */
    inline ScalingActivity& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The Unix timestamp for when the scaling activity ended.</p>
     */
    inline ScalingActivity& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(value); return *this;}

    /**
     * <p>Indicates the status of the scaling activity.</p>
     */
    inline const ScalingActivityStatusCode& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>Indicates the status of the scaling activity.</p>
     */
    inline void SetStatusCode(const ScalingActivityStatusCode& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>Indicates the status of the scaling activity.</p>
     */
    inline void SetStatusCode(ScalingActivityStatusCode&& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>Indicates the status of the scaling activity.</p>
     */
    inline ScalingActivity& WithStatusCode(const ScalingActivityStatusCode& value) { SetStatusCode(value); return *this;}

    /**
     * <p>Indicates the status of the scaling activity.</p>
     */
    inline ScalingActivity& WithStatusCode(ScalingActivityStatusCode&& value) { SetStatusCode(value); return *this;}

    /**
     * <p>A simple message about the current status of the scaling activity.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>A simple message about the current status of the scaling activity.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>A simple message about the current status of the scaling activity.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>A simple message about the current status of the scaling activity.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>A simple message about the current status of the scaling activity.</p>
     */
    inline ScalingActivity& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>A simple message about the current status of the scaling activity.</p>
     */
    inline ScalingActivity& WithStatusMessage(Aws::String&& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>A simple message about the current status of the scaling activity.</p>
     */
    inline ScalingActivity& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The details about the scaling activity.</p>
     */
    inline const Aws::String& GetDetails() const{ return m_details; }

    /**
     * <p>The details about the scaling activity.</p>
     */
    inline void SetDetails(const Aws::String& value) { m_detailsHasBeenSet = true; m_details = value; }

    /**
     * <p>The details about the scaling activity.</p>
     */
    inline void SetDetails(Aws::String&& value) { m_detailsHasBeenSet = true; m_details = value; }

    /**
     * <p>The details about the scaling activity.</p>
     */
    inline void SetDetails(const char* value) { m_detailsHasBeenSet = true; m_details.assign(value); }

    /**
     * <p>The details about the scaling activity.</p>
     */
    inline ScalingActivity& WithDetails(const Aws::String& value) { SetDetails(value); return *this;}

    /**
     * <p>The details about the scaling activity.</p>
     */
    inline ScalingActivity& WithDetails(Aws::String&& value) { SetDetails(value); return *this;}

    /**
     * <p>The details about the scaling activity.</p>
     */
    inline ScalingActivity& WithDetails(const char* value) { SetDetails(value); return *this;}

  private:
    Aws::String m_activityId;
    bool m_activityIdHasBeenSet;
    ServiceNamespace m_serviceNamespace;
    bool m_serviceNamespaceHasBeenSet;
    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;
    ScalableDimension m_scalableDimension;
    bool m_scalableDimensionHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::String m_cause;
    bool m_causeHasBeenSet;
    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;
    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;
    ScalingActivityStatusCode m_statusCode;
    bool m_statusCodeHasBeenSet;
    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet;
    Aws::String m_details;
    bool m_detailsHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
