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
    AWS_LEXMODELSV2_API AnalyticsSessionMetric();
    AWS_LEXMODELSV2_API AnalyticsSessionMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API AnalyticsSessionMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline const AnalyticsSessionMetricName& GetName() const{ return m_name; }

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
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

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
    inline void SetName(const AnalyticsSessionMetricName& value) { m_nameHasBeenSet = true; m_name = value; }

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
    inline void SetName(AnalyticsSessionMetricName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

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
    inline AnalyticsSessionMetric& WithName(const AnalyticsSessionMetricName& value) { SetName(value); return *this;}

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
    inline AnalyticsSessionMetric& WithName(AnalyticsSessionMetricName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The summary statistic to calculate.</p> <ul> <li> <p> <code>Sum</code> – The
     * total count for the category you provide in <code>name</code>.</p> </li> <li>
     * <p> <code>Average</code> – The total count divided by the number of sessions in
     * the category you provide in <code>name</code>.</p> </li> <li> <p>
     * <code>Max</code> – The highest count in the category you provide in
     * <code>name</code>.</p> </li> </ul>
     */
    inline const AnalyticsMetricStatistic& GetStatistic() const{ return m_statistic; }

    /**
     * <p>The summary statistic to calculate.</p> <ul> <li> <p> <code>Sum</code> – The
     * total count for the category you provide in <code>name</code>.</p> </li> <li>
     * <p> <code>Average</code> – The total count divided by the number of sessions in
     * the category you provide in <code>name</code>.</p> </li> <li> <p>
     * <code>Max</code> – The highest count in the category you provide in
     * <code>name</code>.</p> </li> </ul>
     */
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }

    /**
     * <p>The summary statistic to calculate.</p> <ul> <li> <p> <code>Sum</code> – The
     * total count for the category you provide in <code>name</code>.</p> </li> <li>
     * <p> <code>Average</code> – The total count divided by the number of sessions in
     * the category you provide in <code>name</code>.</p> </li> <li> <p>
     * <code>Max</code> – The highest count in the category you provide in
     * <code>name</code>.</p> </li> </ul>
     */
    inline void SetStatistic(const AnalyticsMetricStatistic& value) { m_statisticHasBeenSet = true; m_statistic = value; }

    /**
     * <p>The summary statistic to calculate.</p> <ul> <li> <p> <code>Sum</code> – The
     * total count for the category you provide in <code>name</code>.</p> </li> <li>
     * <p> <code>Average</code> – The total count divided by the number of sessions in
     * the category you provide in <code>name</code>.</p> </li> <li> <p>
     * <code>Max</code> – The highest count in the category you provide in
     * <code>name</code>.</p> </li> </ul>
     */
    inline void SetStatistic(AnalyticsMetricStatistic&& value) { m_statisticHasBeenSet = true; m_statistic = std::move(value); }

    /**
     * <p>The summary statistic to calculate.</p> <ul> <li> <p> <code>Sum</code> – The
     * total count for the category you provide in <code>name</code>.</p> </li> <li>
     * <p> <code>Average</code> – The total count divided by the number of sessions in
     * the category you provide in <code>name</code>.</p> </li> <li> <p>
     * <code>Max</code> – The highest count in the category you provide in
     * <code>name</code>.</p> </li> </ul>
     */
    inline AnalyticsSessionMetric& WithStatistic(const AnalyticsMetricStatistic& value) { SetStatistic(value); return *this;}

    /**
     * <p>The summary statistic to calculate.</p> <ul> <li> <p> <code>Sum</code> – The
     * total count for the category you provide in <code>name</code>.</p> </li> <li>
     * <p> <code>Average</code> – The total count divided by the number of sessions in
     * the category you provide in <code>name</code>.</p> </li> <li> <p>
     * <code>Max</code> – The highest count in the category you provide in
     * <code>name</code>.</p> </li> </ul>
     */
    inline AnalyticsSessionMetric& WithStatistic(AnalyticsMetricStatistic&& value) { SetStatistic(std::move(value)); return *this;}


    /**
     * <p>Specifies whether to sort the results in ascending or descending order.</p>
     */
    inline const AnalyticsSortOrder& GetOrder() const{ return m_order; }

    /**
     * <p>Specifies whether to sort the results in ascending or descending order.</p>
     */
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }

    /**
     * <p>Specifies whether to sort the results in ascending or descending order.</p>
     */
    inline void SetOrder(const AnalyticsSortOrder& value) { m_orderHasBeenSet = true; m_order = value; }

    /**
     * <p>Specifies whether to sort the results in ascending or descending order.</p>
     */
    inline void SetOrder(AnalyticsSortOrder&& value) { m_orderHasBeenSet = true; m_order = std::move(value); }

    /**
     * <p>Specifies whether to sort the results in ascending or descending order.</p>
     */
    inline AnalyticsSessionMetric& WithOrder(const AnalyticsSortOrder& value) { SetOrder(value); return *this;}

    /**
     * <p>Specifies whether to sort the results in ascending or descending order.</p>
     */
    inline AnalyticsSessionMetric& WithOrder(AnalyticsSortOrder&& value) { SetOrder(std::move(value)); return *this;}

  private:

    AnalyticsSessionMetricName m_name;
    bool m_nameHasBeenSet = false;

    AnalyticsMetricStatistic m_statistic;
    bool m_statisticHasBeenSet = false;

    AnalyticsSortOrder m_order;
    bool m_orderHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
