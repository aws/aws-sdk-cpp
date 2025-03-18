/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-signals/model/MetricStat.h>
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
namespace ApplicationSignals
{
namespace Model
{

  /**
   * <p>Use this structure to define a metric or metric math expression that you want
   * to use as for a service level objective. </p> <p>Each
   * <code>MetricDataQuery</code> in the <code>MetricDataQueries</code> array
   * specifies either a metric to retrieve, or a metric math expression to be
   * performed on retrieved metrics. A single <code>MetricDataQueries</code> array
   * can include as many as 20 <code>MetricDataQuery</code> structures in the array.
   * The 20 structures can include as many as 10 structures that contain a
   * <code>MetricStat</code> parameter to retrieve a metric, and as many as 10
   * structures that contain the <code>Expression</code> parameter to perform a math
   * expression. Of those <code>Expression</code> structures, exactly one must have
   * true as the value for <code>ReturnData</code>. The result of this expression
   * used for the SLO.</p> <p>For more information about metric math expressions, see
   * <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/using-metric-math.html">CloudWatchUse
   * metric math</a>.</p> <p>Within each <code>MetricDataQuery</code> object, you
   * must specify either <code>Expression</code> or <code>MetricStat</code> but not
   * both.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/MetricDataQuery">AWS
   * API Reference</a></p>
   */
  class MetricDataQuery
  {
  public:
    AWS_APPLICATIONSIGNALS_API MetricDataQuery() = default;
    AWS_APPLICATIONSIGNALS_API MetricDataQuery(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API MetricDataQuery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A short name used to tie this object to the results in the response. This
     * <code>Id</code> must be unique within a <code>MetricDataQueries</code> array. If
     * you are performing math expressions on this set of data, this name represents
     * that data and can serve as a variable in the metric math expression. The valid
     * characters are letters, numbers, and underscore. The first character must be a
     * lowercase letter.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    MetricDataQuery& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A metric to be used directly for the SLO, or to be used in the math
     * expression that will be used for the SLO.</p> <p>Within one
     * <code>MetricDataQuery</code> object, you must specify either
     * <code>Expression</code> or <code>MetricStat</code> but not both.</p>
     */
    inline const MetricStat& GetMetricStat() const { return m_metricStat; }
    inline bool MetricStatHasBeenSet() const { return m_metricStatHasBeenSet; }
    template<typename MetricStatT = MetricStat>
    void SetMetricStat(MetricStatT&& value) { m_metricStatHasBeenSet = true; m_metricStat = std::forward<MetricStatT>(value); }
    template<typename MetricStatT = MetricStat>
    MetricDataQuery& WithMetricStat(MetricStatT&& value) { SetMetricStat(std::forward<MetricStatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This field can contain a metric math expression to be performed on the other
     * metrics that you are retrieving within this <code>MetricDataQueries</code>
     * structure. </p> <p>A math expression can use the <code>Id</code> of the other
     * metrics or queries to refer to those metrics, and can also use the
     * <code>Id</code> of other expressions to use the result of those expressions. For
     * more information about metric math expressions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/using-metric-math.html#metric-math-syntax">Metric
     * Math Syntax and Functions</a> in the <i>Amazon CloudWatch User Guide</i>.</p>
     * <p>Within each <code>MetricDataQuery</code> object, you must specify either
     * <code>Expression</code> or <code>MetricStat</code> but not both.</p>
     */
    inline const Aws::String& GetExpression() const { return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    template<typename ExpressionT = Aws::String>
    void SetExpression(ExpressionT&& value) { m_expressionHasBeenSet = true; m_expression = std::forward<ExpressionT>(value); }
    template<typename ExpressionT = Aws::String>
    MetricDataQuery& WithExpression(ExpressionT&& value) { SetExpression(std::forward<ExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A human-readable label for this metric or expression. This is especially
     * useful if this is an expression, so that you know what the value represents. If
     * the metric or expression is shown in a CloudWatch dashboard widget, the label is
     * shown. If <code>Label</code> is omitted, CloudWatch generates a default.</p>
     * <p>You can put dynamic expressions into a label, so that it is more descriptive.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/graph-dynamic-labels.html">Using
     * Dynamic Labels</a>.</p>
     */
    inline const Aws::String& GetLabel() const { return m_label; }
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
    template<typename LabelT = Aws::String>
    void SetLabel(LabelT&& value) { m_labelHasBeenSet = true; m_label = std::forward<LabelT>(value); }
    template<typename LabelT = Aws::String>
    MetricDataQuery& WithLabel(LabelT&& value) { SetLabel(std::forward<LabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this only if you are using a metric math expression for the SLO. Specify
     * <code>true</code> for <code>ReturnData</code> for only the one expression result
     * to use as the alarm. For all other metrics and expressions in the same
     * <code>CreateServiceLevelObjective</code> operation, specify
     * <code>ReturnData</code> as <code>false</code>.</p>
     */
    inline bool GetReturnData() const { return m_returnData; }
    inline bool ReturnDataHasBeenSet() const { return m_returnDataHasBeenSet; }
    inline void SetReturnData(bool value) { m_returnDataHasBeenSet = true; m_returnData = value; }
    inline MetricDataQuery& WithReturnData(bool value) { SetReturnData(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The granularity, in seconds, of the returned data points for this metric. For
     * metrics with regular resolution, a period can be as short as one minute (60
     * seconds) and must be a multiple of 60. For high-resolution metrics that are
     * collected at intervals of less than one minute, the period can be 1, 5, 10, 30,
     * 60, or any multiple of 60. High-resolution metrics are those metrics stored by a
     * <code>PutMetricData</code> call that includes a <code>StorageResolution</code>
     * of 1 second.</p> <p>If the <code>StartTime</code> parameter specifies a time
     * stamp that is greater than 3 hours ago, you must specify the period as follows
     * or no data points in that time range is returned:</p> <ul> <li> <p>Start time
     * between 3 hours and 15 days ago - Use a multiple of 60 seconds (1 minute).</p>
     * </li> <li> <p>Start time between 15 and 63 days ago - Use a multiple of 300
     * seconds (5 minutes).</p> </li> <li> <p>Start time greater than 63 days ago - Use
     * a multiple of 3600 seconds (1 hour).</p> </li> </ul>
     */
    inline int GetPeriod() const { return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }
    inline MetricDataQuery& WithPeriod(int value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the account where this metric is located. If you are performing
     * this operation in a monitoring account, use this to specify which source account
     * to retrieve this metric from.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    MetricDataQuery& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    MetricStat m_metricStat;
    bool m_metricStatHasBeenSet = false;

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;

    Aws::String m_label;
    bool m_labelHasBeenSet = false;

    bool m_returnData{false};
    bool m_returnDataHasBeenSet = false;

    int m_period{0};
    bool m_periodHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
