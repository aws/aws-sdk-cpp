/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/AnalyticsSessionMetricName.h>
#include <aws/lexv2-models/model/AnalyticsMetricStatistic.h>
#include <aws/lexv2-models/model/AnalyticsSortOrder.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Contains the metric and the summary statistic you want to calculate, and the
   * order in which to sort the results, for the user sessions with the
   * bot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/AnalyticsSessionMetric">AWS
   * API Reference</a></p>
   */
  class AnalyticsSessionMetric
  {
  public:
    AWS_LEXMODELSV2_API AnalyticsSessionMetric() = default;
    AWS_LEXMODELSV2_API AnalyticsSessionMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API AnalyticsSessionMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The metric for which you want to get session summary statistics.</p> <ul>
     * <li> <p> <code>Count</code> – The number of sessions.</p> </li> <li> <p>
     * <code>Success</code> – The number of sessions that succeeded.</p> </li> <li> <p>
     * <code>Failure</code> – The number of sessions that failed.</p> </li> <li> <p>
     * <code>Dropped</code> – The number of sessions that the user dropped.</p> </li>
     * <li> <p> <code>Duration</code> – The duration of sessions.</p> </li> <li> <p>
     * <code>TurnsPerSession</code> – The number of turns in the sessions.</p> </li>
     * <li> <p> <code>Concurrency</code> – The number of sessions occurring in the same
     * period of time.</p> </li> </ul>
     */
    inline AnalyticsSessionMetricName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(AnalyticsSessionMetricName value) { m_nameHasBeenSet = true; m_name = value; }
    inline AnalyticsSessionMetric& WithName(AnalyticsSessionMetricName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The summary statistic to calculate.</p> <ul> <li> <p> <code>Sum</code> – The
     * total count for the category you provide in <code>name</code>.</p> </li> <li>
     * <p> <code>Average</code> – The total count divided by the number of sessions in
     * the category you provide in <code>name</code>.</p> </li> <li> <p>
     * <code>Max</code> – The highest count in the category you provide in
     * <code>name</code>.</p> </li> </ul>
     */
    inline AnalyticsMetricStatistic GetStatistic() const { return m_statistic; }
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }
    inline void SetStatistic(AnalyticsMetricStatistic value) { m_statisticHasBeenSet = true; m_statistic = value; }
    inline AnalyticsSessionMetric& WithStatistic(AnalyticsMetricStatistic value) { SetStatistic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to sort the results in ascending or descending order.</p>
     */
    inline AnalyticsSortOrder GetOrder() const { return m_order; }
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }
    inline void SetOrder(AnalyticsSortOrder value) { m_orderHasBeenSet = true; m_order = value; }
    inline AnalyticsSessionMetric& WithOrder(AnalyticsSortOrder value) { SetOrder(value); return *this;}
    ///@}
  private:

    AnalyticsSessionMetricName m_name{AnalyticsSessionMetricName::NOT_SET};
    bool m_nameHasBeenSet = false;

    AnalyticsMetricStatistic m_statistic{AnalyticsMetricStatistic::NOT_SET};
    bool m_statisticHasBeenSet = false;

    AnalyticsSortOrder m_order{AnalyticsSortOrder::NOT_SET};
    bool m_orderHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
