/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/AutoScalingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling/model/StepAdjustment.h>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /*
  */
  class AWS_AUTOSCALING_API PutScalingPolicyRequest : public AutoScalingRequest
  {
  public:
    PutScalingPolicyRequest();
    Aws::String SerializePayload() const override;


    /*
     <p>The name or ARN of the group.</p>
    */
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }
    /*
     <p>The name or ARN of the group.</p>
    */
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupName = value; }

    /*
     <p>The name or ARN of the group.</p>
    */
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupName.assign(value); }

    /*
     <p>The name or ARN of the group.</p>
    */
    inline PutScalingPolicyRequest&  WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /*
     <p>The name or ARN of the group.</p>
    */
    inline PutScalingPolicyRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}

    /*
     <p>The name of the policy.</p>
    */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }
    /*
     <p>The name of the policy.</p>
    */
    inline void SetPolicyName(const Aws::String& value) { m_policyName = value; }

    /*
     <p>The name of the policy.</p>
    */
    inline void SetPolicyName(const char* value) { m_policyName.assign(value); }

    /*
     <p>The name of the policy.</p>
    */
    inline PutScalingPolicyRequest&  WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /*
     <p>The name of the policy.</p>
    */
    inline PutScalingPolicyRequest& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}

    
    inline const Aws::String& GetPolicyType() const{ return m_policyType; }
    
    inline void SetPolicyType(const Aws::String& value) { m_policyTypeHasBeenSet = true; m_policyType = value; }

    
    inline void SetPolicyType(const char* value) { m_policyTypeHasBeenSet = true; m_policyType.assign(value); }

    
    inline PutScalingPolicyRequest&  WithPolicyType(const Aws::String& value) { SetPolicyType(value); return *this;}

    
    inline PutScalingPolicyRequest& WithPolicyType(const char* value) { SetPolicyType(value); return *this;}

    /*
     <p>Specifies whether the <code>ScalingAdjustment</code> is an absolute number or a percentage of the current capacity. Valid values are <code>ChangeInCapacity</code>, <code>ExactCapacity</code>, and <code>PercentChangeInCapacity</code>.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/as-scale-based-on-demand.html">Dynamic Scaling</a> in the <i>Auto Scaling Developer Guide</i>.</p>
    */
    inline const Aws::String& GetAdjustmentType() const{ return m_adjustmentType; }
    /*
     <p>Specifies whether the <code>ScalingAdjustment</code> is an absolute number or a percentage of the current capacity. Valid values are <code>ChangeInCapacity</code>, <code>ExactCapacity</code>, and <code>PercentChangeInCapacity</code>.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/as-scale-based-on-demand.html">Dynamic Scaling</a> in the <i>Auto Scaling Developer Guide</i>.</p>
    */
    inline void SetAdjustmentType(const Aws::String& value) { m_adjustmentType = value; }

    /*
     <p>Specifies whether the <code>ScalingAdjustment</code> is an absolute number or a percentage of the current capacity. Valid values are <code>ChangeInCapacity</code>, <code>ExactCapacity</code>, and <code>PercentChangeInCapacity</code>.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/as-scale-based-on-demand.html">Dynamic Scaling</a> in the <i>Auto Scaling Developer Guide</i>.</p>
    */
    inline void SetAdjustmentType(const char* value) { m_adjustmentType.assign(value); }

    /*
     <p>Specifies whether the <code>ScalingAdjustment</code> is an absolute number or a percentage of the current capacity. Valid values are <code>ChangeInCapacity</code>, <code>ExactCapacity</code>, and <code>PercentChangeInCapacity</code>.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/as-scale-based-on-demand.html">Dynamic Scaling</a> in the <i>Auto Scaling Developer Guide</i>.</p>
    */
    inline PutScalingPolicyRequest&  WithAdjustmentType(const Aws::String& value) { SetAdjustmentType(value); return *this;}

    /*
     <p>Specifies whether the <code>ScalingAdjustment</code> is an absolute number or a percentage of the current capacity. Valid values are <code>ChangeInCapacity</code>, <code>ExactCapacity</code>, and <code>PercentChangeInCapacity</code>.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/as-scale-based-on-demand.html">Dynamic Scaling</a> in the <i>Auto Scaling Developer Guide</i>.</p>
    */
    inline PutScalingPolicyRequest& WithAdjustmentType(const char* value) { SetAdjustmentType(value); return *this;}

    /*
     <p>Used with <code>AdjustmentType</code> with the value <code>PercentChangeInCapacity</code>, the scaling policy changes the <code>DesiredCapacity</code> of the Auto Scaling group by at least the number of instances specified in the value. </p> <p>You will get a <code>ValidationError</code> if you use <code>MinAdjustmentStep</code> on a policy with an <code>AdjustmentType</code> other than <code>PercentChangeInCapacity</code>.</p>
    */
    inline long GetMinAdjustmentStep() const{ return m_minAdjustmentStep; }
    /*
     <p>Used with <code>AdjustmentType</code> with the value <code>PercentChangeInCapacity</code>, the scaling policy changes the <code>DesiredCapacity</code> of the Auto Scaling group by at least the number of instances specified in the value. </p> <p>You will get a <code>ValidationError</code> if you use <code>MinAdjustmentStep</code> on a policy with an <code>AdjustmentType</code> other than <code>PercentChangeInCapacity</code>.</p>
    */
    inline void SetMinAdjustmentStep(long value) { m_minAdjustmentStepHasBeenSet = true; m_minAdjustmentStep = value; }

    /*
     <p>Used with <code>AdjustmentType</code> with the value <code>PercentChangeInCapacity</code>, the scaling policy changes the <code>DesiredCapacity</code> of the Auto Scaling group by at least the number of instances specified in the value. </p> <p>You will get a <code>ValidationError</code> if you use <code>MinAdjustmentStep</code> on a policy with an <code>AdjustmentType</code> other than <code>PercentChangeInCapacity</code>.</p>
    */
    inline PutScalingPolicyRequest&  WithMinAdjustmentStep(long value) { SetMinAdjustmentStep(value); return *this;}

    
    inline long GetMinAdjustmentMagnitude() const{ return m_minAdjustmentMagnitude; }
    
    inline void SetMinAdjustmentMagnitude(long value) { m_minAdjustmentMagnitudeHasBeenSet = true; m_minAdjustmentMagnitude = value; }

    
    inline PutScalingPolicyRequest&  WithMinAdjustmentMagnitude(long value) { SetMinAdjustmentMagnitude(value); return *this;}

    /*
     <p>The number of instances by which to scale. <code>AdjustmentType</code> determines the interpretation of this number (e.g., as an absolute number or as a percentage of the existing Auto Scaling group size). A positive increment adds to the current capacity and a negative value removes from the current capacity.</p>
    */
    inline long GetScalingAdjustment() const{ return m_scalingAdjustment; }
    /*
     <p>The number of instances by which to scale. <code>AdjustmentType</code> determines the interpretation of this number (e.g., as an absolute number or as a percentage of the existing Auto Scaling group size). A positive increment adds to the current capacity and a negative value removes from the current capacity.</p>
    */
    inline void SetScalingAdjustment(long value) { m_scalingAdjustmentHasBeenSet = true; m_scalingAdjustment = value; }

    /*
     <p>The number of instances by which to scale. <code>AdjustmentType</code> determines the interpretation of this number (e.g., as an absolute number or as a percentage of the existing Auto Scaling group size). A positive increment adds to the current capacity and a negative value removes from the current capacity.</p>
    */
    inline PutScalingPolicyRequest&  WithScalingAdjustment(long value) { SetScalingAdjustment(value); return *this;}

    /*
     <p>The amount of time, in seconds, after a scaling activity completes and before the next scaling activity can start.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/Cooldown.html">Understanding Auto Scaling Cooldowns</a> in the <i>Auto Scaling Developer Guide</i>.</p>
    */
    inline long GetCooldown() const{ return m_cooldown; }
    /*
     <p>The amount of time, in seconds, after a scaling activity completes and before the next scaling activity can start.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/Cooldown.html">Understanding Auto Scaling Cooldowns</a> in the <i>Auto Scaling Developer Guide</i>.</p>
    */
    inline void SetCooldown(long value) { m_cooldownHasBeenSet = true; m_cooldown = value; }

    /*
     <p>The amount of time, in seconds, after a scaling activity completes and before the next scaling activity can start.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/AutoScaling/latest/DeveloperGuide/Cooldown.html">Understanding Auto Scaling Cooldowns</a> in the <i>Auto Scaling Developer Guide</i>.</p>
    */
    inline PutScalingPolicyRequest&  WithCooldown(long value) { SetCooldown(value); return *this;}

    
    inline const Aws::String& GetMetricAggregationType() const{ return m_metricAggregationType; }
    
    inline void SetMetricAggregationType(const Aws::String& value) { m_metricAggregationTypeHasBeenSet = true; m_metricAggregationType = value; }

    
    inline void SetMetricAggregationType(const char* value) { m_metricAggregationTypeHasBeenSet = true; m_metricAggregationType.assign(value); }

    
    inline PutScalingPolicyRequest&  WithMetricAggregationType(const Aws::String& value) { SetMetricAggregationType(value); return *this;}

    
    inline PutScalingPolicyRequest& WithMetricAggregationType(const char* value) { SetMetricAggregationType(value); return *this;}

    
    inline const Aws::Vector<StepAdjustment>& GetStepAdjustments() const{ return m_stepAdjustments; }
    
    inline void SetStepAdjustments(const Aws::Vector<StepAdjustment>& value) { m_stepAdjustmentsHasBeenSet = true; m_stepAdjustments = value; }

    
    inline PutScalingPolicyRequest&  WithStepAdjustments(const Aws::Vector<StepAdjustment>& value) { SetStepAdjustments(value); return *this;}

    
    inline PutScalingPolicyRequest& AddStepAdjustments(const StepAdjustment& value) { m_stepAdjustmentsHasBeenSet = true; m_stepAdjustments.push_back(value); return *this; }

    
    inline long GetEstimatedInstanceWarmup() const{ return m_estimatedInstanceWarmup; }
    
    inline void SetEstimatedInstanceWarmup(long value) { m_estimatedInstanceWarmupHasBeenSet = true; m_estimatedInstanceWarmup = value; }

    
    inline PutScalingPolicyRequest&  WithEstimatedInstanceWarmup(long value) { SetEstimatedInstanceWarmup(value); return *this;}

  private:
    Aws::String m_autoScalingGroupName;
    Aws::String m_policyName;
    Aws::String m_policyType;
    bool m_policyTypeHasBeenSet;
    Aws::String m_adjustmentType;
    long m_minAdjustmentStep;
    bool m_minAdjustmentStepHasBeenSet;
    long m_minAdjustmentMagnitude;
    bool m_minAdjustmentMagnitudeHasBeenSet;
    long m_scalingAdjustment;
    bool m_scalingAdjustmentHasBeenSet;
    long m_cooldown;
    bool m_cooldownHasBeenSet;
    Aws::String m_metricAggregationType;
    bool m_metricAggregationTypeHasBeenSet;
    Aws::Vector<StepAdjustment> m_stepAdjustments;
    bool m_stepAdjustmentsHasBeenSet;
    long m_estimatedInstanceWarmup;
    bool m_estimatedInstanceWarmupHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
