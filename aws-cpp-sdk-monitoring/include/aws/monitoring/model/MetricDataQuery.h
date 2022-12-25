/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * batch set of data for one metric, or is performing a Metrics Insights query or a
   * math expression. A single <code>GetMetricData</code> call can include up to 500
   * <code>MetricDataQuery</code> structures.</p> <p>When used in
   * <code>PutMetricAlarm</code>, it enables you to create an alarm based on a metric
   * math expression. Each <code>MetricDataQuery</code> in the array specifies either
   * a metric to retrieve, or a math expression to be performed on retrieved metrics.
   * A single <code>PutMetricAlarm</code> call can include up to 20
   * <code>MetricDataQuery</code> structures in the array. The 20 structures can
   * include as many as 10 structures that contain a <code>MetricStat</code>
   * parameter to retrieve a metric, and as many as 10 structures that contain the
   * <code>Expression</code> parameter to perform a math expression. Of those
   * <code>Expression</code> structures, one must have <code>true</code> as the value
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
  class MetricDataQuery
  {
  public:
    AWS_CLOUDWATCH_API MetricDataQuery();
    AWS_CLOUDWATCH_API MetricDataQuery(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API MetricDataQuery& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
     * <p>This field can contain either a Metrics Insights query, or a metric math
     * expression to be performed on the returned data. For more information about
     * Metrics Insights queries, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch-metrics-insights-querylanguage">Metrics
     * Insights query components and syntax</a> in the <i>Amazon CloudWatch User
     * Guide</i>.</p> <p>A math expression can use the <code>Id</code> of the other
     * metrics or queries to refer to those metrics, and can also use the
     * <code>Id</code> of other expressions to use the result of those expressions. For
     * more information about metric math expressions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/using-metric-math.html#metric-math-syntax">Metric
     * Math Syntax and Functions</a> in the <i>Amazon CloudWatch User Guide</i>.</p>
     * <p>Within each MetricDataQuery object, you must specify either
     * <code>Expression</code> or <code>MetricStat</code> but not both.</p>
     */
    inline const Aws::String& GetExpression() const{ return m_expression; }

    /**
     * <p>This field can contain either a Metrics Insights query, or a metric math
     * expression to be performed on the returned data. For more information about
     * Metrics Insights queries, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch-metrics-insights-querylanguage">Metrics
     * Insights query components and syntax</a> in the <i>Amazon CloudWatch User
     * Guide</i>.</p> <p>A math expression can use the <code>Id</code> of the other
     * metrics or queries to refer to those metrics, and can also use the
     * <code>Id</code> of other expressions to use the result of those expressions. For
     * more information about metric math expressions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/using-metric-math.html#metric-math-syntax">Metric
     * Math Syntax and Functions</a> in the <i>Amazon CloudWatch User Guide</i>.</p>
     * <p>Within each MetricDataQuery object, you must specify either
     * <code>Expression</code> or <code>MetricStat</code> but not both.</p>
     */
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }

    /**
     * <p>This field can contain either a Metrics Insights query, or a metric math
     * expression to be performed on the returned data. For more information about
     * Metrics Insights queries, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch-metrics-insights-querylanguage">Metrics
     * Insights query components and syntax</a> in the <i>Amazon CloudWatch User
     * Guide</i>.</p> <p>A math expression can use the <code>Id</code> of the other
     * metrics or queries to refer to those metrics, and can also use the
     * <code>Id</code> of other expressions to use the result of those expressions. For
     * more information about metric math expressions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/using-metric-math.html#metric-math-syntax">Metric
     * Math Syntax and Functions</a> in the <i>Amazon CloudWatch User Guide</i>.</p>
     * <p>Within each MetricDataQuery object, you must specify either
     * <code>Expression</code> or <code>MetricStat</code> but not both.</p>
     */
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }

    /**
     * <p>This field can contain either a Metrics Insights query, or a metric math
     * expression to be performed on the returned data. For more information about
     * Metrics Insights queries, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch-metrics-insights-querylanguage">Metrics
     * Insights query components and syntax</a> in the <i>Amazon CloudWatch User
     * Guide</i>.</p> <p>A math expression can use the <code>Id</code> of the other
     * metrics or queries to refer to those metrics, and can also use the
     * <code>Id</code> of other expressions to use the result of those expressions. For
     * more information about metric math expressions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/using-metric-math.html#metric-math-syntax">Metric
     * Math Syntax and Functions</a> in the <i>Amazon CloudWatch User Guide</i>.</p>
     * <p>Within each MetricDataQuery object, you must specify either
     * <code>Expression</code> or <code>MetricStat</code> but not both.</p>
     */
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }

    /**
     * <p>This field can contain either a Metrics Insights query, or a metric math
     * expression to be performed on the returned data. For more information about
     * Metrics Insights queries, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch-metrics-insights-querylanguage">Metrics
     * Insights query components and syntax</a> in the <i>Amazon CloudWatch User
     * Guide</i>.</p> <p>A math expression can use the <code>Id</code> of the other
     * metrics or queries to refer to those metrics, and can also use the
     * <code>Id</code> of other expressions to use the result of those expressions. For
     * more information about metric math expressions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/using-metric-math.html#metric-math-syntax">Metric
     * Math Syntax and Functions</a> in the <i>Amazon CloudWatch User Guide</i>.</p>
     * <p>Within each MetricDataQuery object, you must specify either
     * <code>Expression</code> or <code>MetricStat</code> but not both.</p>
     */
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }

    /**
     * <p>This field can contain either a Metrics Insights query, or a metric math
     * expression to be performed on the returned data. For more information about
     * Metrics Insights queries, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch-metrics-insights-querylanguage">Metrics
     * Insights query components and syntax</a> in the <i>Amazon CloudWatch User
     * Guide</i>.</p> <p>A math expression can use the <code>Id</code> of the other
     * metrics or queries to refer to those metrics, and can also use the
     * <code>Id</code> of other expressions to use the result of those expressions. For
     * more information about metric math expressions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/using-metric-math.html#metric-math-syntax">Metric
     * Math Syntax and Functions</a> in the <i>Amazon CloudWatch User Guide</i>.</p>
     * <p>Within each MetricDataQuery object, you must specify either
     * <code>Expression</code> or <code>MetricStat</code> but not both.</p>
     */
    inline MetricDataQuery& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}

    /**
     * <p>This field can contain either a Metrics Insights query, or a metric math
     * expression to be performed on the returned data. For more information about
     * Metrics Insights queries, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch-metrics-insights-querylanguage">Metrics
     * Insights query components and syntax</a> in the <i>Amazon CloudWatch User
     * Guide</i>.</p> <p>A math expression can use the <code>Id</code> of the other
     * metrics or queries to refer to those metrics, and can also use the
     * <code>Id</code> of other expressions to use the result of those expressions. For
     * more information about metric math expressions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/using-metric-math.html#metric-math-syntax">Metric
     * Math Syntax and Functions</a> in the <i>Amazon CloudWatch User Guide</i>.</p>
     * <p>Within each MetricDataQuery object, you must specify either
     * <code>Expression</code> or <code>MetricStat</code> but not both.</p>
     */
    inline MetricDataQuery& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}

    /**
     * <p>This field can contain either a Metrics Insights query, or a metric math
     * expression to be performed on the returned data. For more information about
     * Metrics Insights queries, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch-metrics-insights-querylanguage">Metrics
     * Insights query components and syntax</a> in the <i>Amazon CloudWatch User
     * Guide</i>.</p> <p>A math expression can use the <code>Id</code> of the other
     * metrics or queries to refer to those metrics, and can also use the
     * <code>Id</code> of other expressions to use the result of those expressions. For
     * more information about metric math expressions, see <a
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
     * shown. If Label is omitted, CloudWatch generates a default.</p> <p>You can put
     * dynamic expressions into a label, so that it is more descriptive. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/graph-dynamic-labels.html">Using
     * Dynamic Labels</a>.</p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }

    /**
     * <p>A human-readable label for this metric or expression. This is especially
     * useful if this is an expression, so that you know what the value represents. If
     * the metric or expression is shown in a CloudWatch dashboard widget, the label is
     * shown. If Label is omitted, CloudWatch generates a default.</p> <p>You can put
     * dynamic expressions into a label, so that it is more descriptive. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/graph-dynamic-labels.html">Using
     * Dynamic Labels</a>.</p>
     */
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }

    /**
     * <p>A human-readable label for this metric or expression. This is especially
     * useful if this is an expression, so that you know what the value represents. If
     * the metric or expression is shown in a CloudWatch dashboard widget, the label is
     * shown. If Label is omitted, CloudWatch generates a default.</p> <p>You can put
     * dynamic expressions into a label, so that it is more descriptive. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/graph-dynamic-labels.html">Using
     * Dynamic Labels</a>.</p>
     */
    inline void SetLabel(const Aws::String& value) { m_labelHasBeenSet = true; m_label = value; }

    /**
     * <p>A human-readable label for this metric or expression. This is especially
     * useful if this is an expression, so that you know what the value represents. If
     * the metric or expression is shown in a CloudWatch dashboard widget, the label is
     * shown. If Label is omitted, CloudWatch generates a default.</p> <p>You can put
     * dynamic expressions into a label, so that it is more descriptive. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/graph-dynamic-labels.html">Using
     * Dynamic Labels</a>.</p>
     */
    inline void SetLabel(Aws::String&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }

    /**
     * <p>A human-readable label for this metric or expression. This is especially
     * useful if this is an expression, so that you know what the value represents. If
     * the metric or expression is shown in a CloudWatch dashboard widget, the label is
     * shown. If Label is omitted, CloudWatch generates a default.</p> <p>You can put
     * dynamic expressions into a label, so that it is more descriptive. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/graph-dynamic-labels.html">Using
     * Dynamic Labels</a>.</p>
     */
    inline void SetLabel(const char* value) { m_labelHasBeenSet = true; m_label.assign(value); }

    /**
     * <p>A human-readable label for this metric or expression. This is especially
     * useful if this is an expression, so that you know what the value represents. If
     * the metric or expression is shown in a CloudWatch dashboard widget, the label is
     * shown. If Label is omitted, CloudWatch generates a default.</p> <p>You can put
     * dynamic expressions into a label, so that it is more descriptive. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/graph-dynamic-labels.html">Using
     * Dynamic Labels</a>.</p>
     */
    inline MetricDataQuery& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}

    /**
     * <p>A human-readable label for this metric or expression. This is especially
     * useful if this is an expression, so that you know what the value represents. If
     * the metric or expression is shown in a CloudWatch dashboard widget, the label is
     * shown. If Label is omitted, CloudWatch generates a default.</p> <p>You can put
     * dynamic expressions into a label, so that it is more descriptive. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/graph-dynamic-labels.html">Using
     * Dynamic Labels</a>.</p>
     */
    inline MetricDataQuery& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}

    /**
     * <p>A human-readable label for this metric or expression. This is especially
     * useful if this is an expression, so that you know what the value represents. If
     * the metric or expression is shown in a CloudWatch dashboard widget, the label is
     * shown. If Label is omitted, CloudWatch generates a default.</p> <p>You can put
     * dynamic expressions into a label, so that it is more descriptive. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/graph-dynamic-labels.html">Using
     * Dynamic Labels</a>.</p>
     */
    inline MetricDataQuery& WithLabel(const char* value) { SetLabel(value); return *this;}


    /**
     * <p>When used in <code>GetMetricData</code>, this option indicates whether to
     * return the timestamps and raw data values of this metric. If you are performing
     * this call just to do math expressions and do not also need the raw data
     * returned, you can specify <code>false</code>. If you omit this, the default of
     * <code>true</code> is used.</p> <p>When used in <code>PutMetricAlarm</code>,
     * specify <code>true</code> for the one expression result to use as the alarm. For
     * all other metrics and expressions in the same <code>PutMetricAlarm</code>
     * operation, specify <code>ReturnData</code> as False.</p>
     */
    inline bool GetReturnData() const{ return m_returnData; }

    /**
     * <p>When used in <code>GetMetricData</code>, this option indicates whether to
     * return the timestamps and raw data values of this metric. If you are performing
     * this call just to do math expressions and do not also need the raw data
     * returned, you can specify <code>false</code>. If you omit this, the default of
     * <code>true</code> is used.</p> <p>When used in <code>PutMetricAlarm</code>,
     * specify <code>true</code> for the one expression result to use as the alarm. For
     * all other metrics and expressions in the same <code>PutMetricAlarm</code>
     * operation, specify <code>ReturnData</code> as False.</p>
     */
    inline bool ReturnDataHasBeenSet() const { return m_returnDataHasBeenSet; }

    /**
     * <p>When used in <code>GetMetricData</code>, this option indicates whether to
     * return the timestamps and raw data values of this metric. If you are performing
     * this call just to do math expressions and do not also need the raw data
     * returned, you can specify <code>false</code>. If you omit this, the default of
     * <code>true</code> is used.</p> <p>When used in <code>PutMetricAlarm</code>,
     * specify <code>true</code> for the one expression result to use as the alarm. For
     * all other metrics and expressions in the same <code>PutMetricAlarm</code>
     * operation, specify <code>ReturnData</code> as False.</p>
     */
    inline void SetReturnData(bool value) { m_returnDataHasBeenSet = true; m_returnData = value; }

    /**
     * <p>When used in <code>GetMetricData</code>, this option indicates whether to
     * return the timestamps and raw data values of this metric. If you are performing
     * this call just to do math expressions and do not also need the raw data
     * returned, you can specify <code>false</code>. If you omit this, the default of
     * <code>true</code> is used.</p> <p>When used in <code>PutMetricAlarm</code>,
     * specify <code>true</code> for the one expression result to use as the alarm. For
     * all other metrics and expressions in the same <code>PutMetricAlarm</code>
     * operation, specify <code>ReturnData</code> as False.</p>
     */
    inline MetricDataQuery& WithReturnData(bool value) { SetReturnData(value); return *this;}


    /**
     * <p>The granularity, in seconds, of the returned data points. For metrics with
     * regular resolution, a period can be as short as one minute (60 seconds) and must
     * be a multiple of 60. For high-resolution metrics that are collected at intervals
     * of less than one minute, the period can be 1, 5, 10, 30, 60, or any multiple of
     * 60. High-resolution metrics are those metrics stored by a
     * <code>PutMetricData</code> operation that includes a <code>StorageResolution of
     * 1 second</code>.</p>
     */
    inline int GetPeriod() const{ return m_period; }

    /**
     * <p>The granularity, in seconds, of the returned data points. For metrics with
     * regular resolution, a period can be as short as one minute (60 seconds) and must
     * be a multiple of 60. For high-resolution metrics that are collected at intervals
     * of less than one minute, the period can be 1, 5, 10, 30, 60, or any multiple of
     * 60. High-resolution metrics are those metrics stored by a
     * <code>PutMetricData</code> operation that includes a <code>StorageResolution of
     * 1 second</code>.</p>
     */
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }

    /**
     * <p>The granularity, in seconds, of the returned data points. For metrics with
     * regular resolution, a period can be as short as one minute (60 seconds) and must
     * be a multiple of 60. For high-resolution metrics that are collected at intervals
     * of less than one minute, the period can be 1, 5, 10, 30, 60, or any multiple of
     * 60. High-resolution metrics are those metrics stored by a
     * <code>PutMetricData</code> operation that includes a <code>StorageResolution of
     * 1 second</code>.</p>
     */
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }

    /**
     * <p>The granularity, in seconds, of the returned data points. For metrics with
     * regular resolution, a period can be as short as one minute (60 seconds) and must
     * be a multiple of 60. For high-resolution metrics that are collected at intervals
     * of less than one minute, the period can be 1, 5, 10, 30, 60, or any multiple of
     * 60. High-resolution metrics are those metrics stored by a
     * <code>PutMetricData</code> operation that includes a <code>StorageResolution of
     * 1 second</code>.</p>
     */
    inline MetricDataQuery& WithPeriod(int value) { SetPeriod(value); return *this;}


    /**
     * <p>The ID of the account where the metrics are located.</p> <p>If you are
     * performing a <code>GetMetricData</code> operation in a monitoring account, use
     * this to specify which account to retrieve this metric from.</p> <p>If you are
     * performing a <code>PutMetricAlarm</code> operation, use this to specify which
     * account contains the metric that the alarm is watching.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The ID of the account where the metrics are located.</p> <p>If you are
     * performing a <code>GetMetricData</code> operation in a monitoring account, use
     * this to specify which account to retrieve this metric from.</p> <p>If you are
     * performing a <code>PutMetricAlarm</code> operation, use this to specify which
     * account contains the metric that the alarm is watching.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The ID of the account where the metrics are located.</p> <p>If you are
     * performing a <code>GetMetricData</code> operation in a monitoring account, use
     * this to specify which account to retrieve this metric from.</p> <p>If you are
     * performing a <code>PutMetricAlarm</code> operation, use this to specify which
     * account contains the metric that the alarm is watching.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The ID of the account where the metrics are located.</p> <p>If you are
     * performing a <code>GetMetricData</code> operation in a monitoring account, use
     * this to specify which account to retrieve this metric from.</p> <p>If you are
     * performing a <code>PutMetricAlarm</code> operation, use this to specify which
     * account contains the metric that the alarm is watching.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The ID of the account where the metrics are located.</p> <p>If you are
     * performing a <code>GetMetricData</code> operation in a monitoring account, use
     * this to specify which account to retrieve this metric from.</p> <p>If you are
     * performing a <code>PutMetricAlarm</code> operation, use this to specify which
     * account contains the metric that the alarm is watching.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The ID of the account where the metrics are located.</p> <p>If you are
     * performing a <code>GetMetricData</code> operation in a monitoring account, use
     * this to specify which account to retrieve this metric from.</p> <p>If you are
     * performing a <code>PutMetricAlarm</code> operation, use this to specify which
     * account contains the metric that the alarm is watching.</p>
     */
    inline MetricDataQuery& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The ID of the account where the metrics are located.</p> <p>If you are
     * performing a <code>GetMetricData</code> operation in a monitoring account, use
     * this to specify which account to retrieve this metric from.</p> <p>If you are
     * performing a <code>PutMetricAlarm</code> operation, use this to specify which
     * account contains the metric that the alarm is watching.</p>
     */
    inline MetricDataQuery& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the account where the metrics are located.</p> <p>If you are
     * performing a <code>GetMetricData</code> operation in a monitoring account, use
     * this to specify which account to retrieve this metric from.</p> <p>If you are
     * performing a <code>PutMetricAlarm</code> operation, use this to specify which
     * account contains the metric that the alarm is watching.</p>
     */
    inline MetricDataQuery& WithAccountId(const char* value) { SetAccountId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    MetricStat m_metricStat;
    bool m_metricStatHasBeenSet = false;

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;

    Aws::String m_label;
    bool m_labelHasBeenSet = false;

    bool m_returnData;
    bool m_returnDataHasBeenSet = false;

    int m_period;
    bool m_periodHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
