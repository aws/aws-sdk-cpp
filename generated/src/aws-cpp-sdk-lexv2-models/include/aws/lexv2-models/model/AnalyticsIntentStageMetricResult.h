/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/AnalyticsIntentStageMetricName.h>
#include <aws/lexv2-models/model/AnalyticsMetricStatistic.h>
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
   * <p>An object containing the results for an intent stage metric you
   * requested.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/AnalyticsIntentStageMetricResult">AWS
   * API Reference</a></p>
   */
  class AnalyticsIntentStageMetricResult
  {
  public:
    AWS_LEXMODELSV2_API AnalyticsIntentStageMetricResult();
    AWS_LEXMODELSV2_API AnalyticsIntentStageMetricResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API AnalyticsIntentStageMetricResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The metric that you requested.</p> <ul> <li> <p> <code>Count</code> – The
     * number of times the intent stage occurred.</p> </li> <li> <p>
     * <code>Success</code> – The number of times the intent stage succeeded.</p> </li>
     * <li> <p> <code>Failure</code> – The number of times the intent stage failed.</p>
     * </li> <li> <p> <code>Dropped</code> – The number of times the user dropped the
     * intent stage.</p> </li> <li> <p> <code>Retry</code> – The number of times the
     * bot tried to elicit a response from the user at this stage.</p> </li> </ul>
     */
    inline const AnalyticsIntentStageMetricName& GetName() const{ return m_name; }

    /**
     * <p>The metric that you requested.</p> <ul> <li> <p> <code>Count</code> – The
     * number of times the intent stage occurred.</p> </li> <li> <p>
     * <code>Success</code> – The number of times the intent stage succeeded.</p> </li>
     * <li> <p> <code>Failure</code> – The number of times the intent stage failed.</p>
     * </li> <li> <p> <code>Dropped</code> – The number of times the user dropped the
     * intent stage.</p> </li> <li> <p> <code>Retry</code> – The number of times the
     * bot tried to elicit a response from the user at this stage.</p> </li> </ul>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The metric that you requested.</p> <ul> <li> <p> <code>Count</code> – The
     * number of times the intent stage occurred.</p> </li> <li> <p>
     * <code>Success</code> – The number of times the intent stage succeeded.</p> </li>
     * <li> <p> <code>Failure</code> – The number of times the intent stage failed.</p>
     * </li> <li> <p> <code>Dropped</code> – The number of times the user dropped the
     * intent stage.</p> </li> <li> <p> <code>Retry</code> – The number of times the
     * bot tried to elicit a response from the user at this stage.</p> </li> </ul>
     */
    inline void SetName(const AnalyticsIntentStageMetricName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The metric that you requested.</p> <ul> <li> <p> <code>Count</code> – The
     * number of times the intent stage occurred.</p> </li> <li> <p>
     * <code>Success</code> – The number of times the intent stage succeeded.</p> </li>
     * <li> <p> <code>Failure</code> – The number of times the intent stage failed.</p>
     * </li> <li> <p> <code>Dropped</code> – The number of times the user dropped the
     * intent stage.</p> </li> <li> <p> <code>Retry</code> – The number of times the
     * bot tried to elicit a response from the user at this stage.</p> </li> </ul>
     */
    inline void SetName(AnalyticsIntentStageMetricName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The metric that you requested.</p> <ul> <li> <p> <code>Count</code> – The
     * number of times the intent stage occurred.</p> </li> <li> <p>
     * <code>Success</code> – The number of times the intent stage succeeded.</p> </li>
     * <li> <p> <code>Failure</code> – The number of times the intent stage failed.</p>
     * </li> <li> <p> <code>Dropped</code> – The number of times the user dropped the
     * intent stage.</p> </li> <li> <p> <code>Retry</code> – The number of times the
     * bot tried to elicit a response from the user at this stage.</p> </li> </ul>
     */
    inline AnalyticsIntentStageMetricResult& WithName(const AnalyticsIntentStageMetricName& value) { SetName(value); return *this;}

    /**
     * <p>The metric that you requested.</p> <ul> <li> <p> <code>Count</code> – The
     * number of times the intent stage occurred.</p> </li> <li> <p>
     * <code>Success</code> – The number of times the intent stage succeeded.</p> </li>
     * <li> <p> <code>Failure</code> – The number of times the intent stage failed.</p>
     * </li> <li> <p> <code>Dropped</code> – The number of times the user dropped the
     * intent stage.</p> </li> <li> <p> <code>Retry</code> – The number of times the
     * bot tried to elicit a response from the user at this stage.</p> </li> </ul>
     */
    inline AnalyticsIntentStageMetricResult& WithName(AnalyticsIntentStageMetricName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The summary statistic that you requested to calculate.</p> <ul> <li> <p>
     * <code>Sum</code> – The total count for the category you provide in
     * <code>name</code>.</p> </li> <li> <p> <code>Average</code> – The total count
     * divided by the number of intent stages in the category you provide in
     * <code>name</code>.</p> </li> <li> <p> <code>Max</code> – The highest count in
     * the category you provide in <code>name</code>.</p> </li> </ul>
     */
    inline const AnalyticsMetricStatistic& GetStatistic() const{ return m_statistic; }

    /**
     * <p>The summary statistic that you requested to calculate.</p> <ul> <li> <p>
     * <code>Sum</code> – The total count for the category you provide in
     * <code>name</code>.</p> </li> <li> <p> <code>Average</code> – The total count
     * divided by the number of intent stages in the category you provide in
     * <code>name</code>.</p> </li> <li> <p> <code>Max</code> – The highest count in
     * the category you provide in <code>name</code>.</p> </li> </ul>
     */
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }

    /**
     * <p>The summary statistic that you requested to calculate.</p> <ul> <li> <p>
     * <code>Sum</code> – The total count for the category you provide in
     * <code>name</code>.</p> </li> <li> <p> <code>Average</code> – The total count
     * divided by the number of intent stages in the category you provide in
     * <code>name</code>.</p> </li> <li> <p> <code>Max</code> – The highest count in
     * the category you provide in <code>name</code>.</p> </li> </ul>
     */
    inline void SetStatistic(const AnalyticsMetricStatistic& value) { m_statisticHasBeenSet = true; m_statistic = value; }

    /**
     * <p>The summary statistic that you requested to calculate.</p> <ul> <li> <p>
     * <code>Sum</code> – The total count for the category you provide in
     * <code>name</code>.</p> </li> <li> <p> <code>Average</code> – The total count
     * divided by the number of intent stages in the category you provide in
     * <code>name</code>.</p> </li> <li> <p> <code>Max</code> – The highest count in
     * the category you provide in <code>name</code>.</p> </li> </ul>
     */
    inline void SetStatistic(AnalyticsMetricStatistic&& value) { m_statisticHasBeenSet = true; m_statistic = std::move(value); }

    /**
     * <p>The summary statistic that you requested to calculate.</p> <ul> <li> <p>
     * <code>Sum</code> – The total count for the category you provide in
     * <code>name</code>.</p> </li> <li> <p> <code>Average</code> – The total count
     * divided by the number of intent stages in the category you provide in
     * <code>name</code>.</p> </li> <li> <p> <code>Max</code> – The highest count in
     * the category you provide in <code>name</code>.</p> </li> </ul>
     */
    inline AnalyticsIntentStageMetricResult& WithStatistic(const AnalyticsMetricStatistic& value) { SetStatistic(value); return *this;}

    /**
     * <p>The summary statistic that you requested to calculate.</p> <ul> <li> <p>
     * <code>Sum</code> – The total count for the category you provide in
     * <code>name</code>.</p> </li> <li> <p> <code>Average</code> – The total count
     * divided by the number of intent stages in the category you provide in
     * <code>name</code>.</p> </li> <li> <p> <code>Max</code> – The highest count in
     * the category you provide in <code>name</code>.</p> </li> </ul>
     */
    inline AnalyticsIntentStageMetricResult& WithStatistic(AnalyticsMetricStatistic&& value) { SetStatistic(std::move(value)); return *this;}


    /**
     * <p>The value of the summary statistic for the metric that you requested.</p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>The value of the summary statistic for the metric that you requested.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the summary statistic for the metric that you requested.</p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the summary statistic for the metric that you requested.</p>
     */
    inline AnalyticsIntentStageMetricResult& WithValue(double value) { SetValue(value); return *this;}

  private:

    AnalyticsIntentStageMetricName m_name;
    bool m_nameHasBeenSet = false;

    AnalyticsMetricStatistic m_statistic;
    bool m_statisticHasBeenSet = false;

    double m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
