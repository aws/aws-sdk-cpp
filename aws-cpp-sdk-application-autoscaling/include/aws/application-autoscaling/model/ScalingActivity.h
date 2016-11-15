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
   * <p>An object representing a scaling activity.</p>
   */
  class AWS_APPLICATIONAUTOSCALING_API ScalingActivity
  {
  public:
    ScalingActivity();
    ScalingActivity(const Aws::Utils::Json::JsonValue& jsonValue);
    ScalingActivity& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The unique identifier string for the scaling activity.</p>
     */
    inline const Aws::String& GetActivityId() const{ return m_activityId; }

    /**
     * <p>The unique identifier string for the scaling activity.</p>
     */
    inline void SetActivityId(const Aws::String& value) { m_activityIdHasBeenSet = true; m_activityId = value; }

    /**
     * <p>The unique identifier string for the scaling activity.</p>
     */
    inline void SetActivityId(Aws::String&& value) { m_activityIdHasBeenSet = true; m_activityId = value; }

    /**
     * <p>The unique identifier string for the scaling activity.</p>
     */
    inline void SetActivityId(const char* value) { m_activityIdHasBeenSet = true; m_activityId.assign(value); }

    /**
     * <p>The unique identifier string for the scaling activity.</p>
     */
    inline ScalingActivity& WithActivityId(const Aws::String& value) { SetActivityId(value); return *this;}

    /**
     * <p>The unique identifier string for the scaling activity.</p>
     */
    inline ScalingActivity& WithActivityId(Aws::String&& value) { SetActivityId(value); return *this;}

    /**
     * <p>The unique identifier string for the scaling activity.</p>
     */
    inline ScalingActivity& WithActivityId(const char* value) { SetActivityId(value); return *this;}

    /**
     * <p>The namespace for the AWS service that the scaling activity is associated
     * with. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the Amazon Web Services General Reference.</p>
     */
    inline const ServiceNamespace& GetServiceNamespace() const{ return m_serviceNamespace; }

    /**
     * <p>The namespace for the AWS service that the scaling activity is associated
     * with. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the Amazon Web Services General Reference.</p>
     */
    inline void SetServiceNamespace(const ServiceNamespace& value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace = value; }

    /**
     * <p>The namespace for the AWS service that the scaling activity is associated
     * with. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the Amazon Web Services General Reference.</p>
     */
    inline void SetServiceNamespace(ServiceNamespace&& value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace = value; }

    /**
     * <p>The namespace for the AWS service that the scaling activity is associated
     * with. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the Amazon Web Services General Reference.</p>
     */
    inline ScalingActivity& WithServiceNamespace(const ServiceNamespace& value) { SetServiceNamespace(value); return *this;}

    /**
     * <p>The namespace for the AWS service that the scaling activity is associated
     * with. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the Amazon Web Services General Reference.</p>
     */
    inline ScalingActivity& WithServiceNamespace(ServiceNamespace&& value) { SetServiceNamespace(value); return *this;}

    /**
     * <p>The resource type and unique identifier string for the resource associated
     * with the scaling activity. For Amazon ECS services, the resource type is
     * <code>services</code>, and the identifier is the cluster name and service name;
     * for example, <code>service/default/sample-webapp</code>. For Amazon EC2 Spot
     * fleet requests, the resource type is <code>spot-fleet-request</code>, and the
     * identifier is the Spot fleet request ID; for example,
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The resource type and unique identifier string for the resource associated
     * with the scaling activity. For Amazon ECS services, the resource type is
     * <code>services</code>, and the identifier is the cluster name and service name;
     * for example, <code>service/default/sample-webapp</code>. For Amazon EC2 Spot
     * fleet requests, the resource type is <code>spot-fleet-request</code>, and the
     * identifier is the Spot fleet request ID; for example,
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The resource type and unique identifier string for the resource associated
     * with the scaling activity. For Amazon ECS services, the resource type is
     * <code>services</code>, and the identifier is the cluster name and service name;
     * for example, <code>service/default/sample-webapp</code>. For Amazon EC2 Spot
     * fleet requests, the resource type is <code>spot-fleet-request</code>, and the
     * identifier is the Spot fleet request ID; for example,
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The resource type and unique identifier string for the resource associated
     * with the scaling activity. For Amazon ECS services, the resource type is
     * <code>services</code>, and the identifier is the cluster name and service name;
     * for example, <code>service/default/sample-webapp</code>. For Amazon EC2 Spot
     * fleet requests, the resource type is <code>spot-fleet-request</code>, and the
     * identifier is the Spot fleet request ID; for example,
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The resource type and unique identifier string for the resource associated
     * with the scaling activity. For Amazon ECS services, the resource type is
     * <code>services</code>, and the identifier is the cluster name and service name;
     * for example, <code>service/default/sample-webapp</code>. For Amazon EC2 Spot
     * fleet requests, the resource type is <code>spot-fleet-request</code>, and the
     * identifier is the Spot fleet request ID; for example,
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     */
    inline ScalingActivity& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The resource type and unique identifier string for the resource associated
     * with the scaling activity. For Amazon ECS services, the resource type is
     * <code>services</code>, and the identifier is the cluster name and service name;
     * for example, <code>service/default/sample-webapp</code>. For Amazon EC2 Spot
     * fleet requests, the resource type is <code>spot-fleet-request</code>, and the
     * identifier is the Spot fleet request ID; for example,
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     */
    inline ScalingActivity& WithResourceId(Aws::String&& value) { SetResourceId(value); return *this;}

    /**
     * <p>The resource type and unique identifier string for the resource associated
     * with the scaling activity. For Amazon ECS services, the resource type is
     * <code>services</code>, and the identifier is the cluster name and service name;
     * for example, <code>service/default/sample-webapp</code>. For Amazon EC2 Spot
     * fleet requests, the resource type is <code>spot-fleet-request</code>, and the
     * identifier is the Spot fleet request ID; for example,
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     */
    inline ScalingActivity& WithResourceId(const char* value) { SetResourceId(value); return *this;}

    /**
     * <p>The scalable dimension associated with the scaling activity. The scalable
     * dimension contains the service namespace, resource type, and scaling property,
     * such as <code>ecs:service:DesiredCount</code> for the desired task count of an
     * Amazon ECS service, or <code>ec2:spot-fleet-request:TargetCapacity</code> for
     * the target capacity of an Amazon EC2 Spot fleet request.</p>
     */
    inline const ScalableDimension& GetScalableDimension() const{ return m_scalableDimension; }

    /**
     * <p>The scalable dimension associated with the scaling activity. The scalable
     * dimension contains the service namespace, resource type, and scaling property,
     * such as <code>ecs:service:DesiredCount</code> for the desired task count of an
     * Amazon ECS service, or <code>ec2:spot-fleet-request:TargetCapacity</code> for
     * the target capacity of an Amazon EC2 Spot fleet request.</p>
     */
    inline void SetScalableDimension(const ScalableDimension& value) { m_scalableDimensionHasBeenSet = true; m_scalableDimension = value; }

    /**
     * <p>The scalable dimension associated with the scaling activity. The scalable
     * dimension contains the service namespace, resource type, and scaling property,
     * such as <code>ecs:service:DesiredCount</code> for the desired task count of an
     * Amazon ECS service, or <code>ec2:spot-fleet-request:TargetCapacity</code> for
     * the target capacity of an Amazon EC2 Spot fleet request.</p>
     */
    inline void SetScalableDimension(ScalableDimension&& value) { m_scalableDimensionHasBeenSet = true; m_scalableDimension = value; }

    /**
     * <p>The scalable dimension associated with the scaling activity. The scalable
     * dimension contains the service namespace, resource type, and scaling property,
     * such as <code>ecs:service:DesiredCount</code> for the desired task count of an
     * Amazon ECS service, or <code>ec2:spot-fleet-request:TargetCapacity</code> for
     * the target capacity of an Amazon EC2 Spot fleet request.</p>
     */
    inline ScalingActivity& WithScalableDimension(const ScalableDimension& value) { SetScalableDimension(value); return *this;}

    /**
     * <p>The scalable dimension associated with the scaling activity. The scalable
     * dimension contains the service namespace, resource type, and scaling property,
     * such as <code>ecs:service:DesiredCount</code> for the desired task count of an
     * Amazon ECS service, or <code>ec2:spot-fleet-request:TargetCapacity</code> for
     * the target capacity of an Amazon EC2 Spot fleet request.</p>
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
