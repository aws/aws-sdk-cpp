/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/AdjustmentType.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>An automatic scaling configuration, which describes how the policy adds or
   * removes instances, the cooldown period, and the number of EC2 instances that
   * will be added each time the CloudWatch metric alarm condition is
   * satisfied.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/SimpleScalingPolicyConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API SimpleScalingPolicyConfiguration
  {
  public:
    SimpleScalingPolicyConfiguration();
    SimpleScalingPolicyConfiguration(Aws::Utils::Json::JsonView jsonValue);
    SimpleScalingPolicyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The way in which EC2 instances are added (if <code>ScalingAdjustment</code>
     * is a positive number) or terminated (if <code>ScalingAdjustment</code> is a
     * negative number) each time the scaling activity is triggered.
     * <code>CHANGE_IN_CAPACITY</code> is the default. <code>CHANGE_IN_CAPACITY</code>
     * indicates that the EC2 instance count increments or decrements by
     * <code>ScalingAdjustment</code>, which should be expressed as an integer.
     * <code>PERCENT_CHANGE_IN_CAPACITY</code> indicates the instance count increments
     * or decrements by the percentage specified by <code>ScalingAdjustment</code>,
     * which should be expressed as an integer. For example, 20 indicates an increase
     * in 20% increments of cluster capacity. <code>EXACT_CAPACITY</code> indicates the
     * scaling activity results in an instance group with the number of EC2 instances
     * specified by <code>ScalingAdjustment</code>, which should be expressed as a
     * positive integer.</p>
     */
    inline const AdjustmentType& GetAdjustmentType() const{ return m_adjustmentType; }

    /**
     * <p>The way in which EC2 instances are added (if <code>ScalingAdjustment</code>
     * is a positive number) or terminated (if <code>ScalingAdjustment</code> is a
     * negative number) each time the scaling activity is triggered.
     * <code>CHANGE_IN_CAPACITY</code> is the default. <code>CHANGE_IN_CAPACITY</code>
     * indicates that the EC2 instance count increments or decrements by
     * <code>ScalingAdjustment</code>, which should be expressed as an integer.
     * <code>PERCENT_CHANGE_IN_CAPACITY</code> indicates the instance count increments
     * or decrements by the percentage specified by <code>ScalingAdjustment</code>,
     * which should be expressed as an integer. For example, 20 indicates an increase
     * in 20% increments of cluster capacity. <code>EXACT_CAPACITY</code> indicates the
     * scaling activity results in an instance group with the number of EC2 instances
     * specified by <code>ScalingAdjustment</code>, which should be expressed as a
     * positive integer.</p>
     */
    inline bool AdjustmentTypeHasBeenSet() const { return m_adjustmentTypeHasBeenSet; }

    /**
     * <p>The way in which EC2 instances are added (if <code>ScalingAdjustment</code>
     * is a positive number) or terminated (if <code>ScalingAdjustment</code> is a
     * negative number) each time the scaling activity is triggered.
     * <code>CHANGE_IN_CAPACITY</code> is the default. <code>CHANGE_IN_CAPACITY</code>
     * indicates that the EC2 instance count increments or decrements by
     * <code>ScalingAdjustment</code>, which should be expressed as an integer.
     * <code>PERCENT_CHANGE_IN_CAPACITY</code> indicates the instance count increments
     * or decrements by the percentage specified by <code>ScalingAdjustment</code>,
     * which should be expressed as an integer. For example, 20 indicates an increase
     * in 20% increments of cluster capacity. <code>EXACT_CAPACITY</code> indicates the
     * scaling activity results in an instance group with the number of EC2 instances
     * specified by <code>ScalingAdjustment</code>, which should be expressed as a
     * positive integer.</p>
     */
    inline void SetAdjustmentType(const AdjustmentType& value) { m_adjustmentTypeHasBeenSet = true; m_adjustmentType = value; }

    /**
     * <p>The way in which EC2 instances are added (if <code>ScalingAdjustment</code>
     * is a positive number) or terminated (if <code>ScalingAdjustment</code> is a
     * negative number) each time the scaling activity is triggered.
     * <code>CHANGE_IN_CAPACITY</code> is the default. <code>CHANGE_IN_CAPACITY</code>
     * indicates that the EC2 instance count increments or decrements by
     * <code>ScalingAdjustment</code>, which should be expressed as an integer.
     * <code>PERCENT_CHANGE_IN_CAPACITY</code> indicates the instance count increments
     * or decrements by the percentage specified by <code>ScalingAdjustment</code>,
     * which should be expressed as an integer. For example, 20 indicates an increase
     * in 20% increments of cluster capacity. <code>EXACT_CAPACITY</code> indicates the
     * scaling activity results in an instance group with the number of EC2 instances
     * specified by <code>ScalingAdjustment</code>, which should be expressed as a
     * positive integer.</p>
     */
    inline void SetAdjustmentType(AdjustmentType&& value) { m_adjustmentTypeHasBeenSet = true; m_adjustmentType = std::move(value); }

    /**
     * <p>The way in which EC2 instances are added (if <code>ScalingAdjustment</code>
     * is a positive number) or terminated (if <code>ScalingAdjustment</code> is a
     * negative number) each time the scaling activity is triggered.
     * <code>CHANGE_IN_CAPACITY</code> is the default. <code>CHANGE_IN_CAPACITY</code>
     * indicates that the EC2 instance count increments or decrements by
     * <code>ScalingAdjustment</code>, which should be expressed as an integer.
     * <code>PERCENT_CHANGE_IN_CAPACITY</code> indicates the instance count increments
     * or decrements by the percentage specified by <code>ScalingAdjustment</code>,
     * which should be expressed as an integer. For example, 20 indicates an increase
     * in 20% increments of cluster capacity. <code>EXACT_CAPACITY</code> indicates the
     * scaling activity results in an instance group with the number of EC2 instances
     * specified by <code>ScalingAdjustment</code>, which should be expressed as a
     * positive integer.</p>
     */
    inline SimpleScalingPolicyConfiguration& WithAdjustmentType(const AdjustmentType& value) { SetAdjustmentType(value); return *this;}

    /**
     * <p>The way in which EC2 instances are added (if <code>ScalingAdjustment</code>
     * is a positive number) or terminated (if <code>ScalingAdjustment</code> is a
     * negative number) each time the scaling activity is triggered.
     * <code>CHANGE_IN_CAPACITY</code> is the default. <code>CHANGE_IN_CAPACITY</code>
     * indicates that the EC2 instance count increments or decrements by
     * <code>ScalingAdjustment</code>, which should be expressed as an integer.
     * <code>PERCENT_CHANGE_IN_CAPACITY</code> indicates the instance count increments
     * or decrements by the percentage specified by <code>ScalingAdjustment</code>,
     * which should be expressed as an integer. For example, 20 indicates an increase
     * in 20% increments of cluster capacity. <code>EXACT_CAPACITY</code> indicates the
     * scaling activity results in an instance group with the number of EC2 instances
     * specified by <code>ScalingAdjustment</code>, which should be expressed as a
     * positive integer.</p>
     */
    inline SimpleScalingPolicyConfiguration& WithAdjustmentType(AdjustmentType&& value) { SetAdjustmentType(std::move(value)); return *this;}


    /**
     * <p>The amount by which to scale in or scale out, based on the specified
     * <code>AdjustmentType</code>. A positive value adds to the instance group's EC2
     * instance count while a negative number removes instances. If
     * <code>AdjustmentType</code> is set to <code>EXACT_CAPACITY</code>, the number
     * should only be a positive integer. If <code>AdjustmentType</code> is set to
     * <code>PERCENT_CHANGE_IN_CAPACITY</code>, the value should express the percentage
     * as an integer. For example, -20 indicates a decrease in 20% increments of
     * cluster capacity.</p>
     */
    inline int GetScalingAdjustment() const{ return m_scalingAdjustment; }

    /**
     * <p>The amount by which to scale in or scale out, based on the specified
     * <code>AdjustmentType</code>. A positive value adds to the instance group's EC2
     * instance count while a negative number removes instances. If
     * <code>AdjustmentType</code> is set to <code>EXACT_CAPACITY</code>, the number
     * should only be a positive integer. If <code>AdjustmentType</code> is set to
     * <code>PERCENT_CHANGE_IN_CAPACITY</code>, the value should express the percentage
     * as an integer. For example, -20 indicates a decrease in 20% increments of
     * cluster capacity.</p>
     */
    inline bool ScalingAdjustmentHasBeenSet() const { return m_scalingAdjustmentHasBeenSet; }

    /**
     * <p>The amount by which to scale in or scale out, based on the specified
     * <code>AdjustmentType</code>. A positive value adds to the instance group's EC2
     * instance count while a negative number removes instances. If
     * <code>AdjustmentType</code> is set to <code>EXACT_CAPACITY</code>, the number
     * should only be a positive integer. If <code>AdjustmentType</code> is set to
     * <code>PERCENT_CHANGE_IN_CAPACITY</code>, the value should express the percentage
     * as an integer. For example, -20 indicates a decrease in 20% increments of
     * cluster capacity.</p>
     */
    inline void SetScalingAdjustment(int value) { m_scalingAdjustmentHasBeenSet = true; m_scalingAdjustment = value; }

    /**
     * <p>The amount by which to scale in or scale out, based on the specified
     * <code>AdjustmentType</code>. A positive value adds to the instance group's EC2
     * instance count while a negative number removes instances. If
     * <code>AdjustmentType</code> is set to <code>EXACT_CAPACITY</code>, the number
     * should only be a positive integer. If <code>AdjustmentType</code> is set to
     * <code>PERCENT_CHANGE_IN_CAPACITY</code>, the value should express the percentage
     * as an integer. For example, -20 indicates a decrease in 20% increments of
     * cluster capacity.</p>
     */
    inline SimpleScalingPolicyConfiguration& WithScalingAdjustment(int value) { SetScalingAdjustment(value); return *this;}


    /**
     * <p>The amount of time, in seconds, after a scaling activity completes before any
     * further trigger-related scaling activities can start. The default value is
     * 0.</p>
     */
    inline int GetCoolDown() const{ return m_coolDown; }

    /**
     * <p>The amount of time, in seconds, after a scaling activity completes before any
     * further trigger-related scaling activities can start. The default value is
     * 0.</p>
     */
    inline bool CoolDownHasBeenSet() const { return m_coolDownHasBeenSet; }

    /**
     * <p>The amount of time, in seconds, after a scaling activity completes before any
     * further trigger-related scaling activities can start. The default value is
     * 0.</p>
     */
    inline void SetCoolDown(int value) { m_coolDownHasBeenSet = true; m_coolDown = value; }

    /**
     * <p>The amount of time, in seconds, after a scaling activity completes before any
     * further trigger-related scaling activities can start. The default value is
     * 0.</p>
     */
    inline SimpleScalingPolicyConfiguration& WithCoolDown(int value) { SetCoolDown(value); return *this;}

  private:

    AdjustmentType m_adjustmentType;
    bool m_adjustmentTypeHasBeenSet;

    int m_scalingAdjustment;
    bool m_scalingAdjustmentHasBeenSet;

    int m_coolDown;
    bool m_coolDownHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
