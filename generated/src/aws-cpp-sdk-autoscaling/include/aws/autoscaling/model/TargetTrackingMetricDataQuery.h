﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling/model/TargetTrackingMetricStat.h>
#include <utility>

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
   * <p>The metric data to return. Also defines whether this call is returning data
   * for one metric only, or whether it is performing a math expression on the values
   * of returned metric statistics to create a new time series. A time series is a
   * series of data points, each of which is associated with a
   * timestamp.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/TargetTrackingMetricDataQuery">AWS
   * API Reference</a></p>
   */
  class TargetTrackingMetricDataQuery
  {
  public:
    AWS_AUTOSCALING_API TargetTrackingMetricDataQuery() = default;
    AWS_AUTOSCALING_API TargetTrackingMetricDataQuery(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API TargetTrackingMetricDataQuery& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A short name that identifies the object's results in the response. This name
     * must be unique among all <code>TargetTrackingMetricDataQuery</code> objects
     * specified for a single scaling policy. If you are performing math expressions on
     * this set of data, this name represents that data and can serve as a variable in
     * the mathematical expression. The valid characters are letters, numbers, and
     * underscores. The first character must be a lowercase letter. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    TargetTrackingMetricDataQuery& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The math expression to perform on the returned data, if this object is
     * performing a math expression. This expression can use the <code>Id</code> of the
     * other metrics to refer to those metrics, and can also use the <code>Id</code> of
     * other expressions to use the result of those expressions. </p> <p>Conditional:
     * Within each <code>TargetTrackingMetricDataQuery</code> object, you must specify
     * either <code>Expression</code> or <code>MetricStat</code>, but not both.</p>
     */
    inline const Aws::String& GetExpression() const { return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    template<typename ExpressionT = Aws::String>
    void SetExpression(ExpressionT&& value) { m_expressionHasBeenSet = true; m_expression = std::forward<ExpressionT>(value); }
    template<typename ExpressionT = Aws::String>
    TargetTrackingMetricDataQuery& WithExpression(ExpressionT&& value) { SetExpression(std::forward<ExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the metric data to return.</p> <p>Conditional: Within each
     * <code>TargetTrackingMetricDataQuery</code> object, you must specify either
     * <code>Expression</code> or <code>MetricStat</code>, but not both.</p>
     */
    inline const TargetTrackingMetricStat& GetMetricStat() const { return m_metricStat; }
    inline bool MetricStatHasBeenSet() const { return m_metricStatHasBeenSet; }
    template<typename MetricStatT = TargetTrackingMetricStat>
    void SetMetricStat(MetricStatT&& value) { m_metricStatHasBeenSet = true; m_metricStat = std::forward<MetricStatT>(value); }
    template<typename MetricStatT = TargetTrackingMetricStat>
    TargetTrackingMetricDataQuery& WithMetricStat(MetricStatT&& value) { SetMetricStat(std::forward<MetricStatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A human-readable label for this metric or expression. This is especially
     * useful if this is a math expression, so that you know what the value
     * represents.</p>
     */
    inline const Aws::String& GetLabel() const { return m_label; }
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
    template<typename LabelT = Aws::String>
    void SetLabel(LabelT&& value) { m_labelHasBeenSet = true; m_label = std::forward<LabelT>(value); }
    template<typename LabelT = Aws::String>
    TargetTrackingMetricDataQuery& WithLabel(LabelT&& value) { SetLabel(std::forward<LabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The period of the metric in seconds. The default value is 60. Accepted
     * values are 10, 30, and 60. For high resolution metric, set the value to less
     * than 60. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/policy-creating-high-resolution-metrics.html">Create
     * a target tracking policy using high-resolution metrics for faster response</a>.
     * </p>
     */
    inline int GetPeriod() const { return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }
    inline TargetTrackingMetricDataQuery& WithPeriod(int value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to return the timestamps and raw data values of this
     * metric. </p> <p>If you use any math expressions, specify <code>true</code> for
     * this value for only the final math expression that the metric specification is
     * based on. You must specify <code>false</code> for <code>ReturnData</code> for
     * all the other metrics and expressions used in the metric specification.</p>
     * <p>If you are only retrieving metrics and not performing any math expressions,
     * do not specify anything for <code>ReturnData</code>. This sets it to its default
     * (<code>true</code>).</p>
     */
    inline bool GetReturnData() const { return m_returnData; }
    inline bool ReturnDataHasBeenSet() const { return m_returnDataHasBeenSet; }
    inline void SetReturnData(bool value) { m_returnDataHasBeenSet = true; m_returnData = value; }
    inline TargetTrackingMetricDataQuery& WithReturnData(bool value) { SetReturnData(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;

    TargetTrackingMetricStat m_metricStat;
    bool m_metricStatHasBeenSet = false;

    Aws::String m_label;
    bool m_labelHasBeenSet = false;

    int m_period{0};
    bool m_periodHasBeenSet = false;

    bool m_returnData{false};
    bool m_returnDataHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
