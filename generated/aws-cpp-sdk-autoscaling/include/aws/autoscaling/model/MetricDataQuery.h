﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling/model/MetricStat.h>
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
   * series of data points, each of which is associated with a timestamp.</p> <p>For
   * more information and examples, see <a
   * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/predictive-scaling-customized-metric-specification.html">Advanced
   * predictive scaling policy configurations using custom metrics</a> in the
   * <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/MetricDataQuery">AWS
   * API Reference</a></p>
   */
  class AWS_AUTOSCALING_API MetricDataQuery
  {
  public:
    MetricDataQuery();
    MetricDataQuery(const Aws::Utils::Xml::XmlNode& xmlNode);
    MetricDataQuery& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>A short name that identifies the object's results in the response. This name
     * must be unique among all <code>MetricDataQuery</code> objects specified for a
     * single scaling policy. If you are performing math expressions on this set of
     * data, this name represents that data and can serve as a variable in the
     * mathematical expression. The valid characters are letters, numbers, and
     * underscores. The first character must be a lowercase letter. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A short name that identifies the object's results in the response. This name
     * must be unique among all <code>MetricDataQuery</code> objects specified for a
     * single scaling policy. If you are performing math expressions on this set of
     * data, this name represents that data and can serve as a variable in the
     * mathematical expression. The valid characters are letters, numbers, and
     * underscores. The first character must be a lowercase letter. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>A short name that identifies the object's results in the response. This name
     * must be unique among all <code>MetricDataQuery</code> objects specified for a
     * single scaling policy. If you are performing math expressions on this set of
     * data, this name represents that data and can serve as a variable in the
     * mathematical expression. The valid characters are letters, numbers, and
     * underscores. The first character must be a lowercase letter. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>A short name that identifies the object's results in the response. This name
     * must be unique among all <code>MetricDataQuery</code> objects specified for a
     * single scaling policy. If you are performing math expressions on this set of
     * data, this name represents that data and can serve as a variable in the
     * mathematical expression. The valid characters are letters, numbers, and
     * underscores. The first character must be a lowercase letter. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>A short name that identifies the object's results in the response. This name
     * must be unique among all <code>MetricDataQuery</code> objects specified for a
     * single scaling policy. If you are performing math expressions on this set of
     * data, this name represents that data and can serve as a variable in the
     * mathematical expression. The valid characters are letters, numbers, and
     * underscores. The first character must be a lowercase letter. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>A short name that identifies the object's results in the response. This name
     * must be unique among all <code>MetricDataQuery</code> objects specified for a
     * single scaling policy. If you are performing math expressions on this set of
     * data, this name represents that data and can serve as a variable in the
     * mathematical expression. The valid characters are letters, numbers, and
     * underscores. The first character must be a lowercase letter. </p>
     */
    inline MetricDataQuery& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A short name that identifies the object's results in the response. This name
     * must be unique among all <code>MetricDataQuery</code> objects specified for a
     * single scaling policy. If you are performing math expressions on this set of
     * data, this name represents that data and can serve as a variable in the
     * mathematical expression. The valid characters are letters, numbers, and
     * underscores. The first character must be a lowercase letter. </p>
     */
    inline MetricDataQuery& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A short name that identifies the object's results in the response. This name
     * must be unique among all <code>MetricDataQuery</code> objects specified for a
     * single scaling policy. If you are performing math expressions on this set of
     * data, this name represents that data and can serve as a variable in the
     * mathematical expression. The valid characters are letters, numbers, and
     * underscores. The first character must be a lowercase letter. </p>
     */
    inline MetricDataQuery& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The math expression to perform on the returned data, if this object is
     * performing a math expression. This expression can use the <code>Id</code> of the
     * other metrics to refer to those metrics, and can also use the <code>Id</code> of
     * other expressions to use the result of those expressions. </p> <p>Conditional:
     * Within each <code>MetricDataQuery</code> object, you must specify either
     * <code>Expression</code> or <code>MetricStat</code>, but not both.</p>
     */
    inline const Aws::String& GetExpression() const{ return m_expression; }

    /**
     * <p>The math expression to perform on the returned data, if this object is
     * performing a math expression. This expression can use the <code>Id</code> of the
     * other metrics to refer to those metrics, and can also use the <code>Id</code> of
     * other expressions to use the result of those expressions. </p> <p>Conditional:
     * Within each <code>MetricDataQuery</code> object, you must specify either
     * <code>Expression</code> or <code>MetricStat</code>, but not both.</p>
     */
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }

    /**
     * <p>The math expression to perform on the returned data, if this object is
     * performing a math expression. This expression can use the <code>Id</code> of the
     * other metrics to refer to those metrics, and can also use the <code>Id</code> of
     * other expressions to use the result of those expressions. </p> <p>Conditional:
     * Within each <code>MetricDataQuery</code> object, you must specify either
     * <code>Expression</code> or <code>MetricStat</code>, but not both.</p>
     */
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }

    /**
     * <p>The math expression to perform on the returned data, if this object is
     * performing a math expression. This expression can use the <code>Id</code> of the
     * other metrics to refer to those metrics, and can also use the <code>Id</code> of
     * other expressions to use the result of those expressions. </p> <p>Conditional:
     * Within each <code>MetricDataQuery</code> object, you must specify either
     * <code>Expression</code> or <code>MetricStat</code>, but not both.</p>
     */
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }

    /**
     * <p>The math expression to perform on the returned data, if this object is
     * performing a math expression. This expression can use the <code>Id</code> of the
     * other metrics to refer to those metrics, and can also use the <code>Id</code> of
     * other expressions to use the result of those expressions. </p> <p>Conditional:
     * Within each <code>MetricDataQuery</code> object, you must specify either
     * <code>Expression</code> or <code>MetricStat</code>, but not both.</p>
     */
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }

    /**
     * <p>The math expression to perform on the returned data, if this object is
     * performing a math expression. This expression can use the <code>Id</code> of the
     * other metrics to refer to those metrics, and can also use the <code>Id</code> of
     * other expressions to use the result of those expressions. </p> <p>Conditional:
     * Within each <code>MetricDataQuery</code> object, you must specify either
     * <code>Expression</code> or <code>MetricStat</code>, but not both.</p>
     */
    inline MetricDataQuery& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}

    /**
     * <p>The math expression to perform on the returned data, if this object is
     * performing a math expression. This expression can use the <code>Id</code> of the
     * other metrics to refer to those metrics, and can also use the <code>Id</code> of
     * other expressions to use the result of those expressions. </p> <p>Conditional:
     * Within each <code>MetricDataQuery</code> object, you must specify either
     * <code>Expression</code> or <code>MetricStat</code>, but not both.</p>
     */
    inline MetricDataQuery& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}

    /**
     * <p>The math expression to perform on the returned data, if this object is
     * performing a math expression. This expression can use the <code>Id</code> of the
     * other metrics to refer to those metrics, and can also use the <code>Id</code> of
     * other expressions to use the result of those expressions. </p> <p>Conditional:
     * Within each <code>MetricDataQuery</code> object, you must specify either
     * <code>Expression</code> or <code>MetricStat</code>, but not both.</p>
     */
    inline MetricDataQuery& WithExpression(const char* value) { SetExpression(value); return *this;}


    /**
     * <p>Information about the metric data to return.</p> <p>Conditional: Within each
     * <code>MetricDataQuery</code> object, you must specify either
     * <code>Expression</code> or <code>MetricStat</code>, but not both.</p>
     */
    inline const MetricStat& GetMetricStat() const{ return m_metricStat; }

    /**
     * <p>Information about the metric data to return.</p> <p>Conditional: Within each
     * <code>MetricDataQuery</code> object, you must specify either
     * <code>Expression</code> or <code>MetricStat</code>, but not both.</p>
     */
    inline bool MetricStatHasBeenSet() const { return m_metricStatHasBeenSet; }

    /**
     * <p>Information about the metric data to return.</p> <p>Conditional: Within each
     * <code>MetricDataQuery</code> object, you must specify either
     * <code>Expression</code> or <code>MetricStat</code>, but not both.</p>
     */
    inline void SetMetricStat(const MetricStat& value) { m_metricStatHasBeenSet = true; m_metricStat = value; }

    /**
     * <p>Information about the metric data to return.</p> <p>Conditional: Within each
     * <code>MetricDataQuery</code> object, you must specify either
     * <code>Expression</code> or <code>MetricStat</code>, but not both.</p>
     */
    inline void SetMetricStat(MetricStat&& value) { m_metricStatHasBeenSet = true; m_metricStat = std::move(value); }

    /**
     * <p>Information about the metric data to return.</p> <p>Conditional: Within each
     * <code>MetricDataQuery</code> object, you must specify either
     * <code>Expression</code> or <code>MetricStat</code>, but not both.</p>
     */
    inline MetricDataQuery& WithMetricStat(const MetricStat& value) { SetMetricStat(value); return *this;}

    /**
     * <p>Information about the metric data to return.</p> <p>Conditional: Within each
     * <code>MetricDataQuery</code> object, you must specify either
     * <code>Expression</code> or <code>MetricStat</code>, but not both.</p>
     */
    inline MetricDataQuery& WithMetricStat(MetricStat&& value) { SetMetricStat(std::move(value)); return *this;}


    /**
     * <p>A human-readable label for this metric or expression. This is especially
     * useful if this is a math expression, so that you know what the value
     * represents.</p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }

    /**
     * <p>A human-readable label for this metric or expression. This is especially
     * useful if this is a math expression, so that you know what the value
     * represents.</p>
     */
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }

    /**
     * <p>A human-readable label for this metric or expression. This is especially
     * useful if this is a math expression, so that you know what the value
     * represents.</p>
     */
    inline void SetLabel(const Aws::String& value) { m_labelHasBeenSet = true; m_label = value; }

    /**
     * <p>A human-readable label for this metric or expression. This is especially
     * useful if this is a math expression, so that you know what the value
     * represents.</p>
     */
    inline void SetLabel(Aws::String&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }

    /**
     * <p>A human-readable label for this metric or expression. This is especially
     * useful if this is a math expression, so that you know what the value
     * represents.</p>
     */
    inline void SetLabel(const char* value) { m_labelHasBeenSet = true; m_label.assign(value); }

    /**
     * <p>A human-readable label for this metric or expression. This is especially
     * useful if this is a math expression, so that you know what the value
     * represents.</p>
     */
    inline MetricDataQuery& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}

    /**
     * <p>A human-readable label for this metric or expression. This is especially
     * useful if this is a math expression, so that you know what the value
     * represents.</p>
     */
    inline MetricDataQuery& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}

    /**
     * <p>A human-readable label for this metric or expression. This is especially
     * useful if this is a math expression, so that you know what the value
     * represents.</p>
     */
    inline MetricDataQuery& WithLabel(const char* value) { SetLabel(value); return *this;}


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
    inline bool GetReturnData() const{ return m_returnData; }

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
    inline bool ReturnDataHasBeenSet() const { return m_returnDataHasBeenSet; }

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
    inline void SetReturnData(bool value) { m_returnDataHasBeenSet = true; m_returnData = value; }

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
    inline MetricDataQuery& WithReturnData(bool value) { SetReturnData(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_expression;
    bool m_expressionHasBeenSet;

    MetricStat m_metricStat;
    bool m_metricStatHasBeenSet;

    Aws::String m_label;
    bool m_labelHasBeenSet;

    bool m_returnData;
    bool m_returnDataHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
