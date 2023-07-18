/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/AnalyticsUtteranceMetricName.h>
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
   * order in which to sort the results, for the utterances across the user sessions
   * with the bot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/AnalyticsUtteranceMetric">AWS
   * API Reference</a></p>
   */
  class AnalyticsUtteranceMetric
  {
  public:
    AWS_LEXMODELSV2_API AnalyticsUtteranceMetric();
    AWS_LEXMODELSV2_API AnalyticsUtteranceMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API AnalyticsUtteranceMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The metric for which you want to get utterance summary statistics.</p> <ul>
     * <li> <p> <code>Count</code> – The number of utterances.</p> </li> <li> <p>
     * <code>Missed</code> – The number of utterances that Amazon Lex failed to
     * recognize.</p> </li> <li> <p> <code>Detected</code> – The number of utterances
     * that Amazon Lex managed to detect.</p> </li> <li> <p>
     * <code>UtteranceTimestamp</code> – The date and time of the utterance.</p> </li>
     * </ul>
     */
    inline const AnalyticsUtteranceMetricName& GetName() const{ return m_name; }

    /**
     * <p>The metric for which you want to get utterance summary statistics.</p> <ul>
     * <li> <p> <code>Count</code> – The number of utterances.</p> </li> <li> <p>
     * <code>Missed</code> – The number of utterances that Amazon Lex failed to
     * recognize.</p> </li> <li> <p> <code>Detected</code> – The number of utterances
     * that Amazon Lex managed to detect.</p> </li> <li> <p>
     * <code>UtteranceTimestamp</code> – The date and time of the utterance.</p> </li>
     * </ul>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The metric for which you want to get utterance summary statistics.</p> <ul>
     * <li> <p> <code>Count</code> – The number of utterances.</p> </li> <li> <p>
     * <code>Missed</code> – The number of utterances that Amazon Lex failed to
     * recognize.</p> </li> <li> <p> <code>Detected</code> – The number of utterances
     * that Amazon Lex managed to detect.</p> </li> <li> <p>
     * <code>UtteranceTimestamp</code> – The date and time of the utterance.</p> </li>
     * </ul>
     */
    inline void SetName(const AnalyticsUtteranceMetricName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The metric for which you want to get utterance summary statistics.</p> <ul>
     * <li> <p> <code>Count</code> – The number of utterances.</p> </li> <li> <p>
     * <code>Missed</code> – The number of utterances that Amazon Lex failed to
     * recognize.</p> </li> <li> <p> <code>Detected</code> – The number of utterances
     * that Amazon Lex managed to detect.</p> </li> <li> <p>
     * <code>UtteranceTimestamp</code> – The date and time of the utterance.</p> </li>
     * </ul>
     */
    inline void SetName(AnalyticsUtteranceMetricName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The metric for which you want to get utterance summary statistics.</p> <ul>
     * <li> <p> <code>Count</code> – The number of utterances.</p> </li> <li> <p>
     * <code>Missed</code> – The number of utterances that Amazon Lex failed to
     * recognize.</p> </li> <li> <p> <code>Detected</code> – The number of utterances
     * that Amazon Lex managed to detect.</p> </li> <li> <p>
     * <code>UtteranceTimestamp</code> – The date and time of the utterance.</p> </li>
     * </ul>
     */
    inline AnalyticsUtteranceMetric& WithName(const AnalyticsUtteranceMetricName& value) { SetName(value); return *this;}

    /**
     * <p>The metric for which you want to get utterance summary statistics.</p> <ul>
     * <li> <p> <code>Count</code> – The number of utterances.</p> </li> <li> <p>
     * <code>Missed</code> – The number of utterances that Amazon Lex failed to
     * recognize.</p> </li> <li> <p> <code>Detected</code> – The number of utterances
     * that Amazon Lex managed to detect.</p> </li> <li> <p>
     * <code>UtteranceTimestamp</code> – The date and time of the utterance.</p> </li>
     * </ul>
     */
    inline AnalyticsUtteranceMetric& WithName(AnalyticsUtteranceMetricName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The summary statistic to calculate.</p> <ul> <li> <p> <code>Sum</code> – The
     * total count for the category you provide in <code>name</code>.</p> </li> <li>
     * <p> <code>Average</code> – The total count divided by the number of utterances
     * in the category you provide in <code>name</code>.</p> </li> <li> <p>
     * <code>Max</code> – The highest count in the category you provide in
     * <code>name</code>.</p> </li> </ul>
     */
    inline const AnalyticsMetricStatistic& GetStatistic() const{ return m_statistic; }

    /**
     * <p>The summary statistic to calculate.</p> <ul> <li> <p> <code>Sum</code> – The
     * total count for the category you provide in <code>name</code>.</p> </li> <li>
     * <p> <code>Average</code> – The total count divided by the number of utterances
     * in the category you provide in <code>name</code>.</p> </li> <li> <p>
     * <code>Max</code> – The highest count in the category you provide in
     * <code>name</code>.</p> </li> </ul>
     */
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }

    /**
     * <p>The summary statistic to calculate.</p> <ul> <li> <p> <code>Sum</code> – The
     * total count for the category you provide in <code>name</code>.</p> </li> <li>
     * <p> <code>Average</code> – The total count divided by the number of utterances
     * in the category you provide in <code>name</code>.</p> </li> <li> <p>
     * <code>Max</code> – The highest count in the category you provide in
     * <code>name</code>.</p> </li> </ul>
     */
    inline void SetStatistic(const AnalyticsMetricStatistic& value) { m_statisticHasBeenSet = true; m_statistic = value; }

    /**
     * <p>The summary statistic to calculate.</p> <ul> <li> <p> <code>Sum</code> – The
     * total count for the category you provide in <code>name</code>.</p> </li> <li>
     * <p> <code>Average</code> – The total count divided by the number of utterances
     * in the category you provide in <code>name</code>.</p> </li> <li> <p>
     * <code>Max</code> – The highest count in the category you provide in
     * <code>name</code>.</p> </li> </ul>
     */
    inline void SetStatistic(AnalyticsMetricStatistic&& value) { m_statisticHasBeenSet = true; m_statistic = std::move(value); }

    /**
     * <p>The summary statistic to calculate.</p> <ul> <li> <p> <code>Sum</code> – The
     * total count for the category you provide in <code>name</code>.</p> </li> <li>
     * <p> <code>Average</code> – The total count divided by the number of utterances
     * in the category you provide in <code>name</code>.</p> </li> <li> <p>
     * <code>Max</code> – The highest count in the category you provide in
     * <code>name</code>.</p> </li> </ul>
     */
    inline AnalyticsUtteranceMetric& WithStatistic(const AnalyticsMetricStatistic& value) { SetStatistic(value); return *this;}

    /**
     * <p>The summary statistic to calculate.</p> <ul> <li> <p> <code>Sum</code> – The
     * total count for the category you provide in <code>name</code>.</p> </li> <li>
     * <p> <code>Average</code> – The total count divided by the number of utterances
     * in the category you provide in <code>name</code>.</p> </li> <li> <p>
     * <code>Max</code> – The highest count in the category you provide in
     * <code>name</code>.</p> </li> </ul>
     */
    inline AnalyticsUtteranceMetric& WithStatistic(AnalyticsMetricStatistic&& value) { SetStatistic(std::move(value)); return *this;}


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
    inline AnalyticsUtteranceMetric& WithOrder(const AnalyticsSortOrder& value) { SetOrder(value); return *this;}

    /**
     * <p>Specifies whether to sort the results in ascending or descending order.</p>
     */
    inline AnalyticsUtteranceMetric& WithOrder(AnalyticsSortOrder&& value) { SetOrder(std::move(value)); return *this;}

  private:

    AnalyticsUtteranceMetricName m_name;
    bool m_nameHasBeenSet = false;

    AnalyticsMetricStatistic m_statistic;
    bool m_statisticHasBeenSet = false;

    AnalyticsSortOrder m_order;
    bool m_orderHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
