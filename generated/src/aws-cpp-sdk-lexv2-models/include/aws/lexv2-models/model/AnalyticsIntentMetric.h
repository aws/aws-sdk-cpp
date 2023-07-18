/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/AnalyticsIntentMetricName.h>
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
   * order in which to sort the results, for the intents in the bot.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/AnalyticsIntentMetric">AWS
   * API Reference</a></p>
   */
  class AnalyticsIntentMetric
  {
  public:
    AWS_LEXMODELSV2_API AnalyticsIntentMetric();
    AWS_LEXMODELSV2_API AnalyticsIntentMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API AnalyticsIntentMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The metric for which you want to get intent summary statistics.</p> <ul> <li>
     * <p> <code>Count</code> – The number of times the intent was invoked.</p> </li>
     * <li> <p> <code>Success</code> – The number of times the intent succeeded.</p>
     * </li> <li> <p> <code>Failure</code> – The number of times the intent failed.</p>
     * </li> <li> <p> <code>Switched</code> – The number of times there was a switch to
     * a different intent.</p> </li> <li> <p> <code>Dropped</code> – The number of
     * times the user dropped the intent.</p> </li> </ul>
     */
    inline const AnalyticsIntentMetricName& GetName() const{ return m_name; }

    /**
     * <p>The metric for which you want to get intent summary statistics.</p> <ul> <li>
     * <p> <code>Count</code> – The number of times the intent was invoked.</p> </li>
     * <li> <p> <code>Success</code> – The number of times the intent succeeded.</p>
     * </li> <li> <p> <code>Failure</code> – The number of times the intent failed.</p>
     * </li> <li> <p> <code>Switched</code> – The number of times there was a switch to
     * a different intent.</p> </li> <li> <p> <code>Dropped</code> – The number of
     * times the user dropped the intent.</p> </li> </ul>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The metric for which you want to get intent summary statistics.</p> <ul> <li>
     * <p> <code>Count</code> – The number of times the intent was invoked.</p> </li>
     * <li> <p> <code>Success</code> – The number of times the intent succeeded.</p>
     * </li> <li> <p> <code>Failure</code> – The number of times the intent failed.</p>
     * </li> <li> <p> <code>Switched</code> – The number of times there was a switch to
     * a different intent.</p> </li> <li> <p> <code>Dropped</code> – The number of
     * times the user dropped the intent.</p> </li> </ul>
     */
    inline void SetName(const AnalyticsIntentMetricName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The metric for which you want to get intent summary statistics.</p> <ul> <li>
     * <p> <code>Count</code> – The number of times the intent was invoked.</p> </li>
     * <li> <p> <code>Success</code> – The number of times the intent succeeded.</p>
     * </li> <li> <p> <code>Failure</code> – The number of times the intent failed.</p>
     * </li> <li> <p> <code>Switched</code> – The number of times there was a switch to
     * a different intent.</p> </li> <li> <p> <code>Dropped</code> – The number of
     * times the user dropped the intent.</p> </li> </ul>
     */
    inline void SetName(AnalyticsIntentMetricName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The metric for which you want to get intent summary statistics.</p> <ul> <li>
     * <p> <code>Count</code> – The number of times the intent was invoked.</p> </li>
     * <li> <p> <code>Success</code> – The number of times the intent succeeded.</p>
     * </li> <li> <p> <code>Failure</code> – The number of times the intent failed.</p>
     * </li> <li> <p> <code>Switched</code> – The number of times there was a switch to
     * a different intent.</p> </li> <li> <p> <code>Dropped</code> – The number of
     * times the user dropped the intent.</p> </li> </ul>
     */
    inline AnalyticsIntentMetric& WithName(const AnalyticsIntentMetricName& value) { SetName(value); return *this;}

    /**
     * <p>The metric for which you want to get intent summary statistics.</p> <ul> <li>
     * <p> <code>Count</code> – The number of times the intent was invoked.</p> </li>
     * <li> <p> <code>Success</code> – The number of times the intent succeeded.</p>
     * </li> <li> <p> <code>Failure</code> – The number of times the intent failed.</p>
     * </li> <li> <p> <code>Switched</code> – The number of times there was a switch to
     * a different intent.</p> </li> <li> <p> <code>Dropped</code> – The number of
     * times the user dropped the intent.</p> </li> </ul>
     */
    inline AnalyticsIntentMetric& WithName(AnalyticsIntentMetricName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The summary statistic to calculate.</p> <ul> <li> <p> <code>Sum</code> – The
     * total count for the category you provide in <code>name</code>.</p> </li> <li>
     * <p> <code>Average</code> – The total count divided by the number of intents in
     * the category you provide in <code>name</code>.</p> </li> <li> <p>
     * <code>Max</code> – The highest count in the category you provide in
     * <code>name</code>.</p> </li> </ul>
     */
    inline const AnalyticsMetricStatistic& GetStatistic() const{ return m_statistic; }

    /**
     * <p>The summary statistic to calculate.</p> <ul> <li> <p> <code>Sum</code> – The
     * total count for the category you provide in <code>name</code>.</p> </li> <li>
     * <p> <code>Average</code> – The total count divided by the number of intents in
     * the category you provide in <code>name</code>.</p> </li> <li> <p>
     * <code>Max</code> – The highest count in the category you provide in
     * <code>name</code>.</p> </li> </ul>
     */
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }

    /**
     * <p>The summary statistic to calculate.</p> <ul> <li> <p> <code>Sum</code> – The
     * total count for the category you provide in <code>name</code>.</p> </li> <li>
     * <p> <code>Average</code> – The total count divided by the number of intents in
     * the category you provide in <code>name</code>.</p> </li> <li> <p>
     * <code>Max</code> – The highest count in the category you provide in
     * <code>name</code>.</p> </li> </ul>
     */
    inline void SetStatistic(const AnalyticsMetricStatistic& value) { m_statisticHasBeenSet = true; m_statistic = value; }

    /**
     * <p>The summary statistic to calculate.</p> <ul> <li> <p> <code>Sum</code> – The
     * total count for the category you provide in <code>name</code>.</p> </li> <li>
     * <p> <code>Average</code> – The total count divided by the number of intents in
     * the category you provide in <code>name</code>.</p> </li> <li> <p>
     * <code>Max</code> – The highest count in the category you provide in
     * <code>name</code>.</p> </li> </ul>
     */
    inline void SetStatistic(AnalyticsMetricStatistic&& value) { m_statisticHasBeenSet = true; m_statistic = std::move(value); }

    /**
     * <p>The summary statistic to calculate.</p> <ul> <li> <p> <code>Sum</code> – The
     * total count for the category you provide in <code>name</code>.</p> </li> <li>
     * <p> <code>Average</code> – The total count divided by the number of intents in
     * the category you provide in <code>name</code>.</p> </li> <li> <p>
     * <code>Max</code> – The highest count in the category you provide in
     * <code>name</code>.</p> </li> </ul>
     */
    inline AnalyticsIntentMetric& WithStatistic(const AnalyticsMetricStatistic& value) { SetStatistic(value); return *this;}

    /**
     * <p>The summary statistic to calculate.</p> <ul> <li> <p> <code>Sum</code> – The
     * total count for the category you provide in <code>name</code>.</p> </li> <li>
     * <p> <code>Average</code> – The total count divided by the number of intents in
     * the category you provide in <code>name</code>.</p> </li> <li> <p>
     * <code>Max</code> – The highest count in the category you provide in
     * <code>name</code>.</p> </li> </ul>
     */
    inline AnalyticsIntentMetric& WithStatistic(AnalyticsMetricStatistic&& value) { SetStatistic(std::move(value)); return *this;}


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
    inline AnalyticsIntentMetric& WithOrder(const AnalyticsSortOrder& value) { SetOrder(value); return *this;}

    /**
     * <p>Specifies whether to sort the results in ascending or descending order.</p>
     */
    inline AnalyticsIntentMetric& WithOrder(AnalyticsSortOrder&& value) { SetOrder(std::move(value)); return *this;}

  private:

    AnalyticsIntentMetricName m_name;
    bool m_nameHasBeenSet = false;

    AnalyticsMetricStatistic m_statistic;
    bool m_statisticHasBeenSet = false;

    AnalyticsSortOrder m_order;
    bool m_orderHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
