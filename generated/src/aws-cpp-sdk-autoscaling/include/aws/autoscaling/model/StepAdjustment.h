/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Describes information used to create a step adjustment for a step scaling
   * policy.</p> <p>For the following examples, suppose that you have an alarm with a
   * breach threshold of 50:</p> <ul> <li> <p>To trigger the adjustment when the
   * metric is greater than or equal to 50 and less than 60, specify a lower bound of
   * 0 and an upper bound of 10.</p> </li> <li> <p>To trigger the adjustment when the
   * metric is greater than 40 and less than or equal to 50, specify a lower bound of
   * -10 and an upper bound of 0.</p> </li> </ul> <p>There are a few rules for the
   * step adjustments for your step policy:</p> <ul> <li> <p>The ranges of your step
   * adjustments can't overlap or have a gap.</p> </li> <li> <p>At most, one step
   * adjustment can have a null lower bound. If one step adjustment has a negative
   * lower bound, then there must be a step adjustment with a null lower bound.</p>
   * </li> <li> <p>At most, one step adjustment can have a null upper bound. If one
   * step adjustment has a positive upper bound, then there must be a step adjustment
   * with a null upper bound.</p> </li> <li> <p>The upper and lower bound can't be
   * null in the same step adjustment.</p> </li> </ul> <p>For more information, see
   * <a
   * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-scaling-simple-step.html#as-scaling-steps">Step
   * adjustments</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/StepAdjustment">AWS
   * API Reference</a></p>
   */
  class StepAdjustment
  {
  public:
    AWS_AUTOSCALING_API StepAdjustment();
    AWS_AUTOSCALING_API StepAdjustment(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API StepAdjustment& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The lower bound for the difference between the alarm threshold and the
     * CloudWatch metric. If the metric value is above the breach threshold, the lower
     * bound is inclusive (the metric must be greater than or equal to the threshold
     * plus the lower bound). Otherwise, it is exclusive (the metric must be greater
     * than the threshold plus the lower bound). A null value indicates negative
     * infinity.</p>
     */
    inline double GetMetricIntervalLowerBound() const{ return m_metricIntervalLowerBound; }

    /**
     * <p>The lower bound for the difference between the alarm threshold and the
     * CloudWatch metric. If the metric value is above the breach threshold, the lower
     * bound is inclusive (the metric must be greater than or equal to the threshold
     * plus the lower bound). Otherwise, it is exclusive (the metric must be greater
     * than the threshold plus the lower bound). A null value indicates negative
     * infinity.</p>
     */
    inline bool MetricIntervalLowerBoundHasBeenSet() const { return m_metricIntervalLowerBoundHasBeenSet; }

    /**
     * <p>The lower bound for the difference between the alarm threshold and the
     * CloudWatch metric. If the metric value is above the breach threshold, the lower
     * bound is inclusive (the metric must be greater than or equal to the threshold
     * plus the lower bound). Otherwise, it is exclusive (the metric must be greater
     * than the threshold plus the lower bound). A null value indicates negative
     * infinity.</p>
     */
    inline void SetMetricIntervalLowerBound(double value) { m_metricIntervalLowerBoundHasBeenSet = true; m_metricIntervalLowerBound = value; }

    /**
     * <p>The lower bound for the difference between the alarm threshold and the
     * CloudWatch metric. If the metric value is above the breach threshold, the lower
     * bound is inclusive (the metric must be greater than or equal to the threshold
     * plus the lower bound). Otherwise, it is exclusive (the metric must be greater
     * than the threshold plus the lower bound). A null value indicates negative
     * infinity.</p>
     */
    inline StepAdjustment& WithMetricIntervalLowerBound(double value) { SetMetricIntervalLowerBound(value); return *this;}


    /**
     * <p>The upper bound for the difference between the alarm threshold and the
     * CloudWatch metric. If the metric value is above the breach threshold, the upper
     * bound is exclusive (the metric must be less than the threshold plus the upper
     * bound). Otherwise, it is inclusive (the metric must be less than or equal to the
     * threshold plus the upper bound). A null value indicates positive infinity.</p>
     * <p>The upper bound must be greater than the lower bound.</p>
     */
    inline double GetMetricIntervalUpperBound() const{ return m_metricIntervalUpperBound; }

    /**
     * <p>The upper bound for the difference between the alarm threshold and the
     * CloudWatch metric. If the metric value is above the breach threshold, the upper
     * bound is exclusive (the metric must be less than the threshold plus the upper
     * bound). Otherwise, it is inclusive (the metric must be less than or equal to the
     * threshold plus the upper bound). A null value indicates positive infinity.</p>
     * <p>The upper bound must be greater than the lower bound.</p>
     */
    inline bool MetricIntervalUpperBoundHasBeenSet() const { return m_metricIntervalUpperBoundHasBeenSet; }

    /**
     * <p>The upper bound for the difference between the alarm threshold and the
     * CloudWatch metric. If the metric value is above the breach threshold, the upper
     * bound is exclusive (the metric must be less than the threshold plus the upper
     * bound). Otherwise, it is inclusive (the metric must be less than or equal to the
     * threshold plus the upper bound). A null value indicates positive infinity.</p>
     * <p>The upper bound must be greater than the lower bound.</p>
     */
    inline void SetMetricIntervalUpperBound(double value) { m_metricIntervalUpperBoundHasBeenSet = true; m_metricIntervalUpperBound = value; }

    /**
     * <p>The upper bound for the difference between the alarm threshold and the
     * CloudWatch metric. If the metric value is above the breach threshold, the upper
     * bound is exclusive (the metric must be less than the threshold plus the upper
     * bound). Otherwise, it is inclusive (the metric must be less than or equal to the
     * threshold plus the upper bound). A null value indicates positive infinity.</p>
     * <p>The upper bound must be greater than the lower bound.</p>
     */
    inline StepAdjustment& WithMetricIntervalUpperBound(double value) { SetMetricIntervalUpperBound(value); return *this;}


    /**
     * <p>The amount by which to scale, based on the specified adjustment type. A
     * positive value adds to the current capacity while a negative number removes from
     * the current capacity.</p> <p>The amount by which to scale. The adjustment is
     * based on the value that you specified in the <code>AdjustmentType</code>
     * property (either an absolute number or a percentage). A positive value adds to
     * the current capacity and a negative number subtracts from the current capacity.
     * </p>
     */
    inline int GetScalingAdjustment() const{ return m_scalingAdjustment; }

    /**
     * <p>The amount by which to scale, based on the specified adjustment type. A
     * positive value adds to the current capacity while a negative number removes from
     * the current capacity.</p> <p>The amount by which to scale. The adjustment is
     * based on the value that you specified in the <code>AdjustmentType</code>
     * property (either an absolute number or a percentage). A positive value adds to
     * the current capacity and a negative number subtracts from the current capacity.
     * </p>
     */
    inline bool ScalingAdjustmentHasBeenSet() const { return m_scalingAdjustmentHasBeenSet; }

    /**
     * <p>The amount by which to scale, based on the specified adjustment type. A
     * positive value adds to the current capacity while a negative number removes from
     * the current capacity.</p> <p>The amount by which to scale. The adjustment is
     * based on the value that you specified in the <code>AdjustmentType</code>
     * property (either an absolute number or a percentage). A positive value adds to
     * the current capacity and a negative number subtracts from the current capacity.
     * </p>
     */
    inline void SetScalingAdjustment(int value) { m_scalingAdjustmentHasBeenSet = true; m_scalingAdjustment = value; }

    /**
     * <p>The amount by which to scale, based on the specified adjustment type. A
     * positive value adds to the current capacity while a negative number removes from
     * the current capacity.</p> <p>The amount by which to scale. The adjustment is
     * based on the value that you specified in the <code>AdjustmentType</code>
     * property (either an absolute number or a percentage). A positive value adds to
     * the current capacity and a negative number subtracts from the current capacity.
     * </p>
     */
    inline StepAdjustment& WithScalingAdjustment(int value) { SetScalingAdjustment(value); return *this;}

  private:

    double m_metricIntervalLowerBound;
    bool m_metricIntervalLowerBoundHasBeenSet = false;

    double m_metricIntervalUpperBound;
    bool m_metricIntervalUpperBoundHasBeenSet = false;

    int m_scalingAdjustment;
    bool m_scalingAdjustmentHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
