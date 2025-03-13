/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling-plans/AutoScalingPlans_EXPORTS.h>
#include <aws/autoscaling-plans/model/ServiceNamespace.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling-plans/model/ScalableDimension.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling-plans/model/PredefinedLoadMetricSpecification.h>
#include <aws/autoscaling-plans/model/CustomizedLoadMetricSpecification.h>
#include <aws/autoscaling-plans/model/PredictiveScalingMaxCapacityBehavior.h>
#include <aws/autoscaling-plans/model/PredictiveScalingMode.h>
#include <aws/autoscaling-plans/model/ScalingPolicyUpdateBehavior.h>
#include <aws/autoscaling-plans/model/TargetTrackingConfiguration.h>
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
   * <p>Describes a scaling instruction for a scalable resource in a scaling plan.
   * Each scaling instruction applies to one resource.</p> <p>AWS Auto Scaling
   * creates target tracking scaling policies based on the scaling instructions.
   * Target tracking scaling policies adjust the capacity of your scalable resource
   * as required to maintain resource utilization at the target value that you
   * specified. </p> <p>AWS Auto Scaling also configures predictive scaling for your
   * Amazon EC2 Auto Scaling groups using a subset of parameters, including the load
   * metric, the scaling metric, the target value for the scaling metric, the
   * predictive scaling mode (forecast and scale or forecast only), and the desired
   * behavior when the forecast capacity exceeds the maximum capacity of the
   * resource. With predictive scaling, AWS Auto Scaling generates forecasts with
   * traffic predictions for the two days ahead and schedules scaling actions that
   * proactively add and remove resource capacity to match the forecast. </p>
   *  <p>We recommend waiting a minimum of 24 hours after creating an Auto
   * Scaling group to configure predictive scaling. At minimum, there must be 24
   * hours of historical data to generate a forecast. For more information, see <a
   * href="https://docs.aws.amazon.com/autoscaling/plans/userguide/gs-best-practices.html">Best
   * Practices for AWS Auto Scaling</a> in the <i>AWS Auto Scaling User
   * Guide</i>.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-plans-2018-01-06/ScalingInstruction">AWS
   * API Reference</a></p>
   */
  class ScalingInstruction
  {
  public:
    AWS_AUTOSCALINGPLANS_API ScalingInstruction() = default;
    AWS_AUTOSCALINGPLANS_API ScalingInstruction(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUTOSCALINGPLANS_API ScalingInstruction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUTOSCALINGPLANS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The namespace of the AWS service.</p>
     */
    inline ServiceNamespace GetServiceNamespace() const { return m_serviceNamespace; }
    inline bool ServiceNamespaceHasBeenSet() const { return m_serviceNamespaceHasBeenSet; }
    inline void SetServiceNamespace(ServiceNamespace value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace = value; }
    inline ScalingInstruction& WithServiceNamespace(ServiceNamespace value) { SetServiceNamespace(value); return *this;}
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
    ScalingInstruction& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scalable dimension associated with the resource.</p> <ul> <li> <p>
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
    inline ScalingInstruction& WithScalableDimension(ScalableDimension value) { SetScalableDimension(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum capacity of the resource. </p>
     */
    inline int GetMinCapacity() const { return m_minCapacity; }
    inline bool MinCapacityHasBeenSet() const { return m_minCapacityHasBeenSet; }
    inline void SetMinCapacity(int value) { m_minCapacityHasBeenSet = true; m_minCapacity = value; }
    inline ScalingInstruction& WithMinCapacity(int value) { SetMinCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum capacity of the resource. The exception to this upper limit is if
     * you specify a non-default setting for
     * <b>PredictiveScalingMaxCapacityBehavior</b>. </p>
     */
    inline int GetMaxCapacity() const { return m_maxCapacity; }
    inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }
    inline void SetMaxCapacity(int value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }
    inline ScalingInstruction& WithMaxCapacity(int value) { SetMaxCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target tracking configurations (up to 10). Each of these structures must
     * specify a unique scaling metric and a target value for the metric. </p>
     */
    inline const Aws::Vector<TargetTrackingConfiguration>& GetTargetTrackingConfigurations() const { return m_targetTrackingConfigurations; }
    inline bool TargetTrackingConfigurationsHasBeenSet() const { return m_targetTrackingConfigurationsHasBeenSet; }
    template<typename TargetTrackingConfigurationsT = Aws::Vector<TargetTrackingConfiguration>>
    void SetTargetTrackingConfigurations(TargetTrackingConfigurationsT&& value) { m_targetTrackingConfigurationsHasBeenSet = true; m_targetTrackingConfigurations = std::forward<TargetTrackingConfigurationsT>(value); }
    template<typename TargetTrackingConfigurationsT = Aws::Vector<TargetTrackingConfiguration>>
    ScalingInstruction& WithTargetTrackingConfigurations(TargetTrackingConfigurationsT&& value) { SetTargetTrackingConfigurations(std::forward<TargetTrackingConfigurationsT>(value)); return *this;}
    template<typename TargetTrackingConfigurationsT = TargetTrackingConfiguration>
    ScalingInstruction& AddTargetTrackingConfigurations(TargetTrackingConfigurationsT&& value) { m_targetTrackingConfigurationsHasBeenSet = true; m_targetTrackingConfigurations.emplace_back(std::forward<TargetTrackingConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The predefined load metric to use for predictive scaling. This parameter or a
     * <b>CustomizedLoadMetricSpecification</b> is required when configuring predictive
     * scaling, and cannot be used otherwise. </p>
     */
    inline const PredefinedLoadMetricSpecification& GetPredefinedLoadMetricSpecification() const { return m_predefinedLoadMetricSpecification; }
    inline bool PredefinedLoadMetricSpecificationHasBeenSet() const { return m_predefinedLoadMetricSpecificationHasBeenSet; }
    template<typename PredefinedLoadMetricSpecificationT = PredefinedLoadMetricSpecification>
    void SetPredefinedLoadMetricSpecification(PredefinedLoadMetricSpecificationT&& value) { m_predefinedLoadMetricSpecificationHasBeenSet = true; m_predefinedLoadMetricSpecification = std::forward<PredefinedLoadMetricSpecificationT>(value); }
    template<typename PredefinedLoadMetricSpecificationT = PredefinedLoadMetricSpecification>
    ScalingInstruction& WithPredefinedLoadMetricSpecification(PredefinedLoadMetricSpecificationT&& value) { SetPredefinedLoadMetricSpecification(std::forward<PredefinedLoadMetricSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customized load metric to use for predictive scaling. This parameter or a
     * <b>PredefinedLoadMetricSpecification</b> is required when configuring predictive
     * scaling, and cannot be used otherwise. </p>
     */
    inline const CustomizedLoadMetricSpecification& GetCustomizedLoadMetricSpecification() const { return m_customizedLoadMetricSpecification; }
    inline bool CustomizedLoadMetricSpecificationHasBeenSet() const { return m_customizedLoadMetricSpecificationHasBeenSet; }
    template<typename CustomizedLoadMetricSpecificationT = CustomizedLoadMetricSpecification>
    void SetCustomizedLoadMetricSpecification(CustomizedLoadMetricSpecificationT&& value) { m_customizedLoadMetricSpecificationHasBeenSet = true; m_customizedLoadMetricSpecification = std::forward<CustomizedLoadMetricSpecificationT>(value); }
    template<typename CustomizedLoadMetricSpecificationT = CustomizedLoadMetricSpecification>
    ScalingInstruction& WithCustomizedLoadMetricSpecification(CustomizedLoadMetricSpecificationT&& value) { SetCustomizedLoadMetricSpecification(std::forward<CustomizedLoadMetricSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time, in seconds, to buffer the run time of scheduled scaling
     * actions when scaling out. For example, if the forecast says to add capacity at
     * 10:00 AM, and the buffer time is 5 minutes, then the run time of the
     * corresponding scheduled scaling action will be 9:55 AM. The intention is to give
     * resources time to be provisioned. For example, it can take a few minutes to
     * launch an EC2 instance. The actual amount of time required depends on several
     * factors, such as the size of the instance and whether there are startup scripts
     * to complete. </p> <p>The value must be less than the forecast interval duration
     * of 3600 seconds (60 minutes). The default is 300 seconds. </p> <p>Only valid
     * when configuring predictive scaling. </p>
     */
    inline int GetScheduledActionBufferTime() const { return m_scheduledActionBufferTime; }
    inline bool ScheduledActionBufferTimeHasBeenSet() const { return m_scheduledActionBufferTimeHasBeenSet; }
    inline void SetScheduledActionBufferTime(int value) { m_scheduledActionBufferTimeHasBeenSet = true; m_scheduledActionBufferTime = value; }
    inline ScalingInstruction& WithScheduledActionBufferTime(int value) { SetScheduledActionBufferTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the behavior that should be applied if the forecast capacity
     * approaches or exceeds the maximum capacity specified for the resource. The
     * default value is <code>SetForecastCapacityToMaxCapacity</code>.</p> <p>The
     * following are possible values:</p> <ul> <li> <p>
     * <code>SetForecastCapacityToMaxCapacity</code> - AWS Auto Scaling cannot scale
     * resource capacity higher than the maximum capacity. The maximum capacity is
     * enforced as a hard limit. </p> </li> <li> <p>
     * <code>SetMaxCapacityToForecastCapacity</code> - AWS Auto Scaling may scale
     * resource capacity higher than the maximum capacity to equal but not exceed
     * forecast capacity.</p> </li> <li> <p>
     * <code>SetMaxCapacityAboveForecastCapacity</code> - AWS Auto Scaling may scale
     * resource capacity higher than the maximum capacity by a specified buffer value.
     * The intention is to give the target tracking scaling policy extra capacity if
     * unexpected traffic occurs. </p> </li> </ul> <p>Only valid when configuring
     * predictive scaling.</p>
     */
    inline PredictiveScalingMaxCapacityBehavior GetPredictiveScalingMaxCapacityBehavior() const { return m_predictiveScalingMaxCapacityBehavior; }
    inline bool PredictiveScalingMaxCapacityBehaviorHasBeenSet() const { return m_predictiveScalingMaxCapacityBehaviorHasBeenSet; }
    inline void SetPredictiveScalingMaxCapacityBehavior(PredictiveScalingMaxCapacityBehavior value) { m_predictiveScalingMaxCapacityBehaviorHasBeenSet = true; m_predictiveScalingMaxCapacityBehavior = value; }
    inline ScalingInstruction& WithPredictiveScalingMaxCapacityBehavior(PredictiveScalingMaxCapacityBehavior value) { SetPredictiveScalingMaxCapacityBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the capacity buffer to use when the forecast capacity is close to
     * or exceeds the maximum capacity. The value is specified as a percentage relative
     * to the forecast capacity. For example, if the buffer is 10, this means a 10
     * percent buffer, such that if the forecast capacity is 50, and the maximum
     * capacity is 40, then the effective maximum capacity is 55.</p> <p>Only valid
     * when configuring predictive scaling. Required if the
     * <b>PredictiveScalingMaxCapacityBehavior</b> is set to
     * <code>SetMaxCapacityAboveForecastCapacity</code>, and cannot be used
     * otherwise.</p> <p>The range is 1-100.</p>
     */
    inline int GetPredictiveScalingMaxCapacityBuffer() const { return m_predictiveScalingMaxCapacityBuffer; }
    inline bool PredictiveScalingMaxCapacityBufferHasBeenSet() const { return m_predictiveScalingMaxCapacityBufferHasBeenSet; }
    inline void SetPredictiveScalingMaxCapacityBuffer(int value) { m_predictiveScalingMaxCapacityBufferHasBeenSet = true; m_predictiveScalingMaxCapacityBuffer = value; }
    inline ScalingInstruction& WithPredictiveScalingMaxCapacityBuffer(int value) { SetPredictiveScalingMaxCapacityBuffer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The predictive scaling mode. The default value is
     * <code>ForecastAndScale</code>. Otherwise, AWS Auto Scaling forecasts capacity
     * but does not create any scheduled scaling actions based on the capacity
     * forecast. </p>
     */
    inline PredictiveScalingMode GetPredictiveScalingMode() const { return m_predictiveScalingMode; }
    inline bool PredictiveScalingModeHasBeenSet() const { return m_predictiveScalingModeHasBeenSet; }
    inline void SetPredictiveScalingMode(PredictiveScalingMode value) { m_predictiveScalingModeHasBeenSet = true; m_predictiveScalingMode = value; }
    inline ScalingInstruction& WithPredictiveScalingMode(PredictiveScalingMode value) { SetPredictiveScalingMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Controls whether a resource's externally created scaling policies are kept or
     * replaced. </p> <p>The default value is <code>KeepExternalPolicies</code>. If the
     * parameter is set to <code>ReplaceExternalPolicies</code>, any scaling policies
     * that are external to AWS Auto Scaling are deleted and new target tracking
     * scaling policies created. </p> <p>Only valid when configuring dynamic scaling.
     * </p> <p>Condition: The number of existing policies to be replaced must be less
     * than or equal to 50. If there are more than 50 policies to be replaced, AWS Auto
     * Scaling keeps all existing policies and does not create new ones.</p>
     */
    inline ScalingPolicyUpdateBehavior GetScalingPolicyUpdateBehavior() const { return m_scalingPolicyUpdateBehavior; }
    inline bool ScalingPolicyUpdateBehaviorHasBeenSet() const { return m_scalingPolicyUpdateBehaviorHasBeenSet; }
    inline void SetScalingPolicyUpdateBehavior(ScalingPolicyUpdateBehavior value) { m_scalingPolicyUpdateBehaviorHasBeenSet = true; m_scalingPolicyUpdateBehavior = value; }
    inline ScalingInstruction& WithScalingPolicyUpdateBehavior(ScalingPolicyUpdateBehavior value) { SetScalingPolicyUpdateBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Controls whether dynamic scaling by AWS Auto Scaling is disabled. When
     * dynamic scaling is enabled, AWS Auto Scaling creates target tracking scaling
     * policies based on the specified target tracking configurations. </p> <p>The
     * default is enabled (<code>false</code>). </p>
     */
    inline bool GetDisableDynamicScaling() const { return m_disableDynamicScaling; }
    inline bool DisableDynamicScalingHasBeenSet() const { return m_disableDynamicScalingHasBeenSet; }
    inline void SetDisableDynamicScaling(bool value) { m_disableDynamicScalingHasBeenSet = true; m_disableDynamicScaling = value; }
    inline ScalingInstruction& WithDisableDynamicScaling(bool value) { SetDisableDynamicScaling(value); return *this;}
    ///@}
  private:

    ServiceNamespace m_serviceNamespace{ServiceNamespace::NOT_SET};
    bool m_serviceNamespaceHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    ScalableDimension m_scalableDimension{ScalableDimension::NOT_SET};
    bool m_scalableDimensionHasBeenSet = false;

    int m_minCapacity{0};
    bool m_minCapacityHasBeenSet = false;

    int m_maxCapacity{0};
    bool m_maxCapacityHasBeenSet = false;

    Aws::Vector<TargetTrackingConfiguration> m_targetTrackingConfigurations;
    bool m_targetTrackingConfigurationsHasBeenSet = false;

    PredefinedLoadMetricSpecification m_predefinedLoadMetricSpecification;
    bool m_predefinedLoadMetricSpecificationHasBeenSet = false;

    CustomizedLoadMetricSpecification m_customizedLoadMetricSpecification;
    bool m_customizedLoadMetricSpecificationHasBeenSet = false;

    int m_scheduledActionBufferTime{0};
    bool m_scheduledActionBufferTimeHasBeenSet = false;

    PredictiveScalingMaxCapacityBehavior m_predictiveScalingMaxCapacityBehavior{PredictiveScalingMaxCapacityBehavior::NOT_SET};
    bool m_predictiveScalingMaxCapacityBehaviorHasBeenSet = false;

    int m_predictiveScalingMaxCapacityBuffer{0};
    bool m_predictiveScalingMaxCapacityBufferHasBeenSet = false;

    PredictiveScalingMode m_predictiveScalingMode{PredictiveScalingMode::NOT_SET};
    bool m_predictiveScalingModeHasBeenSet = false;

    ScalingPolicyUpdateBehavior m_scalingPolicyUpdateBehavior{ScalingPolicyUpdateBehavior::NOT_SET};
    bool m_scalingPolicyUpdateBehaviorHasBeenSet = false;

    bool m_disableDynamicScaling{false};
    bool m_disableDynamicScalingHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
