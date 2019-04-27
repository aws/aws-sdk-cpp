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
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/monitoring/model/MetricStat.h>
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
namespace CloudWatch
{
namespace Model
{

  /**
   * <p>This structure is used in both <code>GetMetricData</code> and
   * <code>PutMetricAlarm</code>. The supported use of this structure is different
   * for those two operations.</p> <p>When used in <code>GetMetricData</code>, it
   * indicates the metric data to return, and whether this call is just retrieving a
   * batch set of data for one metric, or is performing a math expression on metric
   * data. A single <code>GetMetricData</code> call can include up to 100
   * <code>MetricDataQuery</code> structures.</p> <p>When used in
   * <code>PutMetricAlarm</code>, it enables you to create an alarm based on a metric
   * math expression. Each <code>MetricDataQuery</code> in the array specifies either
   * a metric to retrieve, or a math expression to be performed on retrieved metrics.
   * A single <code>PutMetricAlarm</code> call can include up to 20
   * <code>MetricDataQuery</code> structures in the array. The 20 structures can
   * include as many as 10 structures that contain a <code>MetricStat</code>
   * parameter to retrieve a metric, and as many as 10 structures that contain the
   * <code>Expression</code> parameter to perform a math expression. Of those
   * <code>Expression</code> structures, one must have <code>True</code> as the value
   * for <code>ReturnData</code>. The result of this expression is the value the
   * alarm watches.</p> <p>Any expression used in a <code>PutMetricAlarm</code>
   * operation must return a single time series. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/using-metric-math.html#metric-math-syntax">Metric
   * Math Syntax and Functions</a> in the <i>Amazon CloudWatch User Guide</i>.</p>
   * <p>Some of the parameters of this structure also have different uses whether you
   * are using this structure in a <code>GetMetricData</code> operation or a
   * <code>PutMetricAlarm</code> operation. These differences are explained in the
   * following parameter list.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/MetricDataQuery">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDWATCH_API MetricDataQuery
  {
  public:
    MetricDataQuery();
    MetricDataQuery(const Aws::Utils::Xml::XmlNode& xmlNode);
    MetricDataQuery& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>A short name used to tie this object to the results in the response. This
     * name must be unique within a single call to <code>GetMetricData</code>. If you
     * are performing math expressions on this set of data, this name represents that
     * data and can serve as a variable in the mathematical expression. The valid
     * characters are letters, numbers, and underscore. The first character must be a
     * lowercase letter.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A short name used to tie this object to the results in the response. This
     * name must be unique within a single call to <code>GetMetricData</code>. If you
     * are performing math expressions on this set of data, this name represents that
     * data and can serve as a variable in the mathematical expression. The valid
     * characters are letters, numbers, and underscore. The first character must be a
     * lowercase letter.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>A short name used to tie this object to the results in the response. This
     * name must be unique within a single call to <code>GetMetricData</code>. If you
     * are performing math expressions on this set of data, this name represents that
     * data and can serve as a variable in the mathematical expression. The valid
     * characters are letters, numbers, and underscore. The first character must be a
     * lowercase letter.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>A short name used to tie this object to the results in the response. This
     * name must be unique within a single call to <code>GetMetricData</code>. If you
     * are performing math expressions on this set of data, this name represents that
     * data and can serve as a variable in the mathematical expression. The valid
     * characters are letters, numbers, and underscore. The first character must be a
     * lowercase letter.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>A short name used to tie this object to the results in the response. This
     * name must be unique within a single call to <code>GetMetricData</code>. If you
     * are performing math expressions on this set of data, this name represents that
     * data and can serve as a variable in the mathematical expression. The valid
     * characters are letters, numbers, and underscore. The first character must be a
     * lowercase letter.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>A short name used to tie this object to the results in the response. This
     * name must be unique within a single call to <code>GetMetricData</code>. If you
     * are performing math expressions on this set of data, this name represents that
     * data and can serve as a variable in the mathematical expression. The valid
     * characters are letters, numbers, and underscore. The first character must be a
     * lowercase letter.</p>
     */
    inline MetricDataQuery& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A short name used to tie this object to the results in the response. This
     * name must be unique within a single call to <code>GetMetricData</code>. If you
     * are performing math expressions on this set of data, this name represents that
     * data and can serve as a variable in the mathematical expression. The valid
     * characters are letters, numbers, and underscore. The first character must be a
     * lowercase letter.</p>
     */
    inline MetricDataQuery& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A short name used to tie this object to the results in the response. This
     * name must be unique within a single call to <code>GetMetricData</code>. If you
     * are performing math expressions on this set of data, this name represents that
     * data and can serve as a variable in the mathematical expression. The valid
     * characters are letters, numbers, and underscore. The first character must be a
     * lowercase letter.</p>
     */
    inline MetricDataQuery& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The metric to be returned, along with statistics, period, and units. Use this
     * parameter only if this object is retrieving a metric and not performing a math
     * expression on returned data.</p> <p>Within one MetricDataQuery object, you must
     * specify either <code>Expression</code> or <code>MetricStat</code> but not
     * both.</p>
     */
    inline const MetricStat& GetMetricStat() const{ return m_metricStat; }

    /**
     * <p>The metric to be returned, along with statistics, period, and units. Use this
     * parameter only if this object is retrieving a metric and not performing a math
     * expression on returned data.</p> <p>Within one MetricDataQuery object, you must
     * specify either <code>Expression</code> or <code>MetricStat</code> but not
     * both.</p>
     */
    inline bool MetricStatHasBeenSet() const { return m_metricStatHasBeenSet; }

    /**
     * <p>The metric to be returned, along with statistics, period, and units. Use this
     * parameter only if this object is retrieving a metric and not performing a math
     * expression on returned data.</p> <p>Within one MetricDataQuery object, you must
     * specify either <code>Expression</code> or <code>MetricStat</code> but not
     * both.</p>
     */
    inline void SetMetricStat(const MetricStat& value) { m_metricStatHasBeenSet = true; m_metricStat = value; }

    /**
     * <p>The metric to be returned, along with statistics, period, and units. Use this
     * parameter only if this object is retrieving a metric and not performing a math
     * expression on returned data.</p> <p>Within one MetricDataQuery object, you must
     * specify either <code>Expression</code> or <code>MetricStat</code> but not
     * both.</p>
     */
    inline void SetMetricStat(MetricStat&& value) { m_metricStatHasBeenSet = true; m_metricStat = std::move(value); }

    /**
     * <p>The metric to be returned, along with statistics, period, and units. Use this
     * parameter only if this object is retrieving a metric and not performing a math
     * expression on returned data.</p> <p>Within one MetricDataQuery object, you must
     * specify either <code>Expression</code> or <code>MetricStat</code> but not
     * both.</p>
     */
    inline MetricDataQuery& WithMetricStat(const MetricStat& value) { SetMetricStat(value); return *this;}

    /**
     * <p>The metric to be returned, along with statistics, period, and units. Use this
     * parameter only if this object is retrieving a metric and not performing a math
     * expression on returned data.</p> <p>Within one MetricDataQuery object, you must
     * specify either <code>Expression</code> or <code>MetricStat</code> but not
     * both.</p>
     */
    inline MetricDataQuery& WithMetricStat(MetricStat&& value) { SetMetricStat(std::move(value)); return *this;}


    /**
     * <p>The math expression to be performed on the returned data, if this object is
     * performing a math expression. This expression can use the <code>Id</code> of the
     * other metrics to refer to those metrics, and can also use the <code>Id</code> of
     * other expressions to use the result of those expressions. For more information
     * about metric math expressions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/using-metric-math.html#metric-math-syntax">Metric
     * Math Syntax and Functions</a> in the <i>Amazon CloudWatch User Guide</i>.</p>
     * <p>Within each MetricDataQuery object, you must specify either
     * <code>Expression</code> or <code>MetricStat</code> but not both.</p>
     */
    inline const Aws::String& GetExpression() const{ return m_expression; }

    /**
     * <p>The math expression to be performed on the returned data, if this object is
     * performing a math expression. This expression can use the <code>Id</code> of the
     * other metrics to refer to those metrics, and can also use the <code>Id</code> of
     * other expressions to use the result of those expressions. For more information
     * about metric math expressions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/using-metric-math.html#metric-math-syntax">Metric
     * Math Syntax and Functions</a> in the <i>Amazon CloudWatch User Guide</i>.</p>
     * <p>Within each MetricDataQuery object, you must specify either
     * <code>Expression</code> or <code>MetricStat</code> but not both.</p>
     */
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }

    /**
     * <p>The math expression to be performed on the returned data, if this object is
     * performing a math expression. This expression can use the <code>Id</code> of the
     * other metrics to refer to those metrics, and can also use the <code>Id</code> of
     * other expressions to use the result of those expressions. For more information
     * about metric math expressions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/using-metric-math.html#metric-math-syntax">Metric
     * Math Syntax and Functions</a> in the <i>Amazon CloudWatch User Guide</i>.</p>
     * <p>Within each MetricDataQuery object, you must specify either
     * <code>Expression</code> or <code>MetricStat</code> but not both.</p>
     */
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }

    /**
     * <p>The math expression to be performed on the returned data, if this object is
     * performing a math expression. This expression can use the <code>Id</code> of the
     * other metrics to refer to those metrics, and can also use the <code>Id</code> of
     * other expressions to use the result of those expressions. For more information
     * about metric math expressions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/using-metric-math.html#metric-math-syntax">Metric
     * Math Syntax and Functions</a> in the <i>Amazon CloudWatch User Guide</i>.</p>
     * <p>Within each MetricDataQuery object, you must specify either
     * <code>Expression</code> or <code>MetricStat</code> but not both.</p>
     */
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }

    /**
     * <p>The math expression to be performed on the returned data, if this object is
     * performing a math expression. This expression can use the <code>Id</code> of the
     * other metrics to refer to those metrics, and can also use the <code>Id</code> of
     * other expressions to use the result of those expressions. For more information
     * about metric math expressions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/using-metric-math.html#metric-math-syntax">Metric
     * Math Syntax and Functions</a> in the <i>Amazon CloudWatch User Guide</i>.</p>
     * <p>Within each MetricDataQuery object, you must specify either
     * <code>Expression</code> or <code>MetricStat</code> but not both.</p>
     */
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }

    /**
     * <p>The math expression to be performed on the returned data, if this object is
     * performing a math expression. This expression can use the <code>Id</code> of the
     * other metrics to refer to those metrics, and can also use the <code>Id</code> of
     * other expressions to use the result of those expressions. For more information
     * about metric math expressions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/using-metric-math.html#metric-math-syntax">Metric
     * Math Syntax and Functions</a> in the <i>Amazon CloudWatch User Guide</i>.</p>
     * <p>Within each MetricDataQuery object, you must specify either
     * <code>Expression</code> or <code>MetricStat</code> but not both.</p>
     */
    inline MetricDataQuery& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}

    /**
     * <p>The math expression to be performed on the returned data, if this object is
     * performing a math expression. This expression can use the <code>Id</code> of the
     * other metrics to refer to those metrics, and can also use the <code>Id</code> of
     * other expressions to use the result of those expressions. For more information
     * about metric math expressions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/using-metric-math.html#metric-math-syntax">Metric
     * Math Syntax and Functions</a> in the <i>Amazon CloudWatch User Guide</i>.</p>
     * <p>Within each MetricDataQuery object, you must specify either
     * <code>Expression</code> or <code>MetricStat</code> but not both.</p>
     */
    inline MetricDataQuery& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}

    /**
     * <p>The math expression to be performed on the returned data, if this object is
     * performing a math expression. This expression can use the <code>Id</code> of the
     * other metrics to refer to those metrics, and can also use the <code>Id</code> of
     * other expressions to use the result of those expressions. For more information
     * about metric math expressions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/using-metric-math.html#metric-math-syntax">Metric
     * Math Syntax and Functions</a> in the <i>Amazon CloudWatch User Guide</i>.</p>
     * <p>Within each MetricDataQuery object, you must specify either
     * <code>Expression</code> or <code>MetricStat</code> but not both.</p>
     */
    inline MetricDataQuery& WithExpression(const char* value) { SetExpression(value); return *this;}


    /**
     * <p>A human-readable label for this metric or expression. This is especially
     * useful if this is an expression, so that you know what the value represents. If
     * the metric or expression is shown in a CloudWatch dashboard widget, the label is
     * shown. If Label is omitted, CloudWatch generates a default.</p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }

    /**
     * <p>A human-readable label for this metric or expression. This is especially
     * useful if this is an expression, so that you know what the value represents. If
     * the metric or expression is shown in a CloudWatch dashboard widget, the label is
     * shown. If Label is omitted, CloudWatch generates a default.</p>
     */
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }

    /**
     * <p>A human-readable label for this metric or expression. This is especially
     * useful if this is an expression, so that you know what the value represents. If
     * the metric or expression is shown in a CloudWatch dashboard widget, the label is
     * shown. If Label is omitted, CloudWatch generates a default.</p>
     */
    inline void SetLabel(const Aws::String& value) { m_labelHasBeenSet = true; m_label = value; }

    /**
     * <p>A human-readable label for this metric or expression. This is especially
     * useful if this is an expression, so that you know what the value represents. If
     * the metric or expression is shown in a CloudWatch dashboard widget, the label is
     * shown. If Label is omitted, CloudWatch generates a default.</p>
     */
    inline void SetLabel(Aws::String&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }

    /**
     * <p>A human-readable label for this metric or expression. This is especially
     * useful if this is an expression, so that you know what the value represents. If
     * the metric or expression is shown in a CloudWatch dashboard widget, the label is
     * shown. If Label is omitted, CloudWatch generates a default.</p>
     */
    inline void SetLabel(const char* value) { m_labelHasBeenSet = true; m_label.assign(value); }

    /**
     * <p>A human-readable label for this metric or expression. This is especially
     * useful if this is an expression, so that you know what the value represents. If
     * the metric or expression is shown in a CloudWatch dashboard widget, the label is
     * shown. If Label is omitted, CloudWatch generates a default.</p>
     */
    inline MetricDataQuery& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}

    /**
     * <p>A human-readable label for this metric or expression. This is especially
     * useful if this is an expression, so that you know what the value represents. If
     * the metric or expression is shown in a CloudWatch dashboard widget, the label is
     * shown. If Label is omitted, CloudWatch generates a default.</p>
     */
    inline MetricDataQuery& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}

    /**
     * <p>A human-readable label for this metric or expression. This is especially
     * useful if this is an expression, so that you know what the value represents. If
     * the metric or expression is shown in a CloudWatch dashboard widget, the label is
     * shown. If Label is omitted, CloudWatch generates a default.</p>
     */
    inline MetricDataQuery& WithLabel(const char* value) { SetLabel(value); return *this;}


    /**
     * <p>When used in <code>GetMetricData</code>, this option indicates whether to
     * return the timestamps and raw data values of this metric. If you are performing
     * this call just to do math expressions and do not also need the raw data
     * returned, you can specify <code>False</code>. If you omit this, the default of
     * <code>True</code> is used.</p> <p>When used in <code>PutMetricAlarm</code>,
     * specify <code>True</code> for the one expression result to use as the alarm. For
     * all other metrics and expressions in the same <code>PutMetricAlarm</code>
     * operation, specify <code>ReturnData</code> as False.</p>
     */
    inline bool GetReturnData() const{ return m_returnData; }

    /**
     * <p>When used in <code>GetMetricData</code>, this option indicates whether to
     * return the timestamps and raw data values of this metric. If you are performing
     * this call just to do math expressions and do not also need the raw data
     * returned, you can specify <code>False</code>. If you omit this, the default of
     * <code>True</code> is used.</p> <p>When used in <code>PutMetricAlarm</code>,
     * specify <code>True</code> for the one expression result to use as the alarm. For
     * all other metrics and expressions in the same <code>PutMetricAlarm</code>
     * operation, specify <code>ReturnData</code> as False.</p>
     */
    inline bool ReturnDataHasBeenSet() const { return m_returnDataHasBeenSet; }

    /**
     * <p>When used in <code>GetMetricData</code>, this option indicates whether to
     * return the timestamps and raw data values of this metric. If you are performing
     * this call just to do math expressions and do not also need the raw data
     * returned, you can specify <code>False</code>. If you omit this, the default of
     * <code>True</code> is used.</p> <p>When used in <code>PutMetricAlarm</code>,
     * specify <code>True</code> for the one expression result to use as the alarm. For
     * all other metrics and expressions in the same <code>PutMetricAlarm</code>
     * operation, specify <code>ReturnData</code> as False.</p>
     */
    inline void SetReturnData(bool value) { m_returnDataHasBeenSet = true; m_returnData = value; }

    /**
     * <p>When used in <code>GetMetricData</code>, this option indicates whether to
     * return the timestamps and raw data values of this metric. If you are performing
     * this call just to do math expressions and do not also need the raw data
     * returned, you can specify <code>False</code>. If you omit this, the default of
     * <code>True</code> is used.</p> <p>When used in <code>PutMetricAlarm</code>,
     * specify <code>True</code> for the one expression result to use as the alarm. For
     * all other metrics and expressions in the same <code>PutMetricAlarm</code>
     * operation, specify <code>ReturnData</code> as False.</p>
     */
    inline MetricDataQuery& WithReturnData(bool value) { SetReturnData(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    MetricStat m_metricStat;
    bool m_metricStatHasBeenSet;

    Aws::String m_expression;
    bool m_expressionHasBeenSet;

    Aws::String m_label;
    bool m_labelHasBeenSet;

    bool m_returnData;
    bool m_returnDataHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
