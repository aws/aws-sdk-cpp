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
#include <aws/application-autoscaling/model/PolicyType.h>
#include <aws/application-autoscaling/model/StepScalingPolicyConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/application-autoscaling/model/Alarm.h>

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
   * <p>An object representing a scaling policy.</p>
   */
  class AWS_APPLICATIONAUTOSCALING_API ScalingPolicy
  {
  public:
    ScalingPolicy();
    ScalingPolicy(const Aws::Utils::Json::JsonValue& jsonValue);
    ScalingPolicy& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The Amazon Resource Name (ARN) of the scaling policy.</p>
     */
    inline const Aws::String& GetPolicyARN() const{ return m_policyARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the scaling policy.</p>
     */
    inline void SetPolicyARN(const Aws::String& value) { m_policyARNHasBeenSet = true; m_policyARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the scaling policy.</p>
     */
    inline void SetPolicyARN(Aws::String&& value) { m_policyARNHasBeenSet = true; m_policyARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the scaling policy.</p>
     */
    inline void SetPolicyARN(const char* value) { m_policyARNHasBeenSet = true; m_policyARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the scaling policy.</p>
     */
    inline ScalingPolicy& WithPolicyARN(const Aws::String& value) { SetPolicyARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the scaling policy.</p>
     */
    inline ScalingPolicy& WithPolicyARN(Aws::String&& value) { SetPolicyARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the scaling policy.</p>
     */
    inline ScalingPolicy& WithPolicyARN(const char* value) { SetPolicyARN(value); return *this;}

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
    inline ScalingPolicy& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the scaling policy.</p>
     */
    inline ScalingPolicy& WithPolicyName(Aws::String&& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the scaling policy.</p>
     */
    inline ScalingPolicy& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}

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
    inline ScalingPolicy& WithServiceNamespace(const ServiceNamespace& value) { SetServiceNamespace(value); return *this;}

    /**
     * <p>The namespace for the AWS service that the scaling policy is associated with.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the Amazon Web Services General Reference.</p>
     */
    inline ScalingPolicy& WithServiceNamespace(ServiceNamespace&& value) { SetServiceNamespace(value); return *this;}

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
    inline ScalingPolicy& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The resource type and unique identifier string for the resource associated
     * with the scaling policy. For Amazon ECS services, the resource type is
     * <code>services</code>, and the identifier is the cluster name and service name;
     * for example, <code>service/default/sample-webapp</code>. For Amazon EC2 Spot
     * fleet requests, the resource type is <code>spot-fleet-request</code>, and the
     * identifier is the Spot fleet request ID; for example,
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     */
    inline ScalingPolicy& WithResourceId(Aws::String&& value) { SetResourceId(value); return *this;}

    /**
     * <p>The resource type and unique identifier string for the resource associated
     * with the scaling policy. For Amazon ECS services, the resource type is
     * <code>services</code>, and the identifier is the cluster name and service name;
     * for example, <code>service/default/sample-webapp</code>. For Amazon EC2 Spot
     * fleet requests, the resource type is <code>spot-fleet-request</code>, and the
     * identifier is the Spot fleet request ID; for example,
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     */
    inline ScalingPolicy& WithResourceId(const char* value) { SetResourceId(value); return *this;}

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
    inline ScalingPolicy& WithScalableDimension(const ScalableDimension& value) { SetScalableDimension(value); return *this;}

    /**
     * <p>The scalable dimension associated with the scaling policy. The scalable
     * dimension contains the service namespace, resource type, and scaling property,
     * such as <code>ecs:service:DesiredCount</code> for the desired task count of an
     * Amazon ECS service, or <code>ec2:spot-fleet-request:TargetCapacity</code> for
     * the target capacity of an Amazon EC2 Spot fleet request.</p>
     */
    inline ScalingPolicy& WithScalableDimension(ScalableDimension&& value) { SetScalableDimension(value); return *this;}

    /**
     * <p>The scaling policy type.</p>
     */
    inline const PolicyType& GetPolicyType() const{ return m_policyType; }

    /**
     * <p>The scaling policy type.</p>
     */
    inline void SetPolicyType(const PolicyType& value) { m_policyTypeHasBeenSet = true; m_policyType = value; }

    /**
     * <p>The scaling policy type.</p>
     */
    inline void SetPolicyType(PolicyType&& value) { m_policyTypeHasBeenSet = true; m_policyType = value; }

    /**
     * <p>The scaling policy type.</p>
     */
    inline ScalingPolicy& WithPolicyType(const PolicyType& value) { SetPolicyType(value); return *this;}

    /**
     * <p>The scaling policy type.</p>
     */
    inline ScalingPolicy& WithPolicyType(PolicyType&& value) { SetPolicyType(value); return *this;}

    /**
     * <p>The configuration for the step scaling policy.</p>
     */
    inline const StepScalingPolicyConfiguration& GetStepScalingPolicyConfiguration() const{ return m_stepScalingPolicyConfiguration; }

    /**
     * <p>The configuration for the step scaling policy.</p>
     */
    inline void SetStepScalingPolicyConfiguration(const StepScalingPolicyConfiguration& value) { m_stepScalingPolicyConfigurationHasBeenSet = true; m_stepScalingPolicyConfiguration = value; }

    /**
     * <p>The configuration for the step scaling policy.</p>
     */
    inline void SetStepScalingPolicyConfiguration(StepScalingPolicyConfiguration&& value) { m_stepScalingPolicyConfigurationHasBeenSet = true; m_stepScalingPolicyConfiguration = value; }

    /**
     * <p>The configuration for the step scaling policy.</p>
     */
    inline ScalingPolicy& WithStepScalingPolicyConfiguration(const StepScalingPolicyConfiguration& value) { SetStepScalingPolicyConfiguration(value); return *this;}

    /**
     * <p>The configuration for the step scaling policy.</p>
     */
    inline ScalingPolicy& WithStepScalingPolicyConfiguration(StepScalingPolicyConfiguration&& value) { SetStepScalingPolicyConfiguration(value); return *this;}

    /**
     * <p>The CloudWatch alarms that are associated with the scaling policy.</p>
     */
    inline const Aws::Vector<Alarm>& GetAlarms() const{ return m_alarms; }

    /**
     * <p>The CloudWatch alarms that are associated with the scaling policy.</p>
     */
    inline void SetAlarms(const Aws::Vector<Alarm>& value) { m_alarmsHasBeenSet = true; m_alarms = value; }

    /**
     * <p>The CloudWatch alarms that are associated with the scaling policy.</p>
     */
    inline void SetAlarms(Aws::Vector<Alarm>&& value) { m_alarmsHasBeenSet = true; m_alarms = value; }

    /**
     * <p>The CloudWatch alarms that are associated with the scaling policy.</p>
     */
    inline ScalingPolicy& WithAlarms(const Aws::Vector<Alarm>& value) { SetAlarms(value); return *this;}

    /**
     * <p>The CloudWatch alarms that are associated with the scaling policy.</p>
     */
    inline ScalingPolicy& WithAlarms(Aws::Vector<Alarm>&& value) { SetAlarms(value); return *this;}

    /**
     * <p>The CloudWatch alarms that are associated with the scaling policy.</p>
     */
    inline ScalingPolicy& AddAlarms(const Alarm& value) { m_alarmsHasBeenSet = true; m_alarms.push_back(value); return *this; }

    /**
     * <p>The CloudWatch alarms that are associated with the scaling policy.</p>
     */
    inline ScalingPolicy& AddAlarms(Alarm&& value) { m_alarmsHasBeenSet = true; m_alarms.push_back(value); return *this; }

    /**
     * <p>The Unix timestamp for when the scaling policy was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The Unix timestamp for when the scaling policy was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The Unix timestamp for when the scaling policy was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The Unix timestamp for when the scaling policy was created.</p>
     */
    inline ScalingPolicy& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The Unix timestamp for when the scaling policy was created.</p>
     */
    inline ScalingPolicy& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(value); return *this;}

  private:
    Aws::String m_policyARN;
    bool m_policyARNHasBeenSet;
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
    Aws::Vector<Alarm> m_alarms;
    bool m_alarmsHasBeenSet;
    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
