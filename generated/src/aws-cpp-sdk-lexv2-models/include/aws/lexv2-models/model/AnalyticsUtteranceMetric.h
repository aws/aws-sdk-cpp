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
    AWS_LEXMODELSV2_API AnalyticsUtteranceMetric() = default;
    AWS_LEXMODELSV2_API AnalyticsUtteranceMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API AnalyticsUtteranceMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The metric for which you want to get utterance summary statistics.</p> <ul>
     * <li> <p> <code>Count</code> – The number of utterances.</p> </li> <li> <p>
     * <code>Missed</code> – The number of utterances that Amazon Lex failed to
     * recognize.</p> </li> <li> <p> <code>Detected</code> – The number of utterances
     * that Amazon Lex managed to detect.</p> </li> <li> <p>
     * <code>UtteranceTimestamp</code> – The date and time of the utterance.</p> </li>
     * </ul>
     */
    inline AnalyticsUtteranceMetricName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(AnalyticsUtteranceMetricName value) { m_nameHasBeenSet = true; m_name = value; }
    inline AnalyticsUtteranceMetric& WithName(AnalyticsUtteranceMetricName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The summary statistic to calculate.</p> <ul> <li> <p> <code>Sum</code> – The
     * total count for the category you provide in <code>name</code>.</p> </li> <li>
     * <p> <code>Average</code> – The total count divided by the number of utterances
     * in the category you provide in <code>name</code>.</p> </li> <li> <p>
     * <code>Max</code> – The highest count in the category you provide in
     * <code>name</code>.</p> </li> </ul>
     */
    inline AnalyticsMetricStatistic GetStatistic() const { return m_statistic; }
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }
    inline void SetStatistic(AnalyticsMetricStatistic value) { m_statisticHasBeenSet = true; m_statistic = value; }
    inline AnalyticsUtteranceMetric& WithStatistic(AnalyticsMetricStatistic value) { SetStatistic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to sort the results in ascending or descending order.</p>
     */
    inline AnalyticsSortOrder GetOrder() const { return m_order; }
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }
    inline void SetOrder(AnalyticsSortOrder value) { m_orderHasBeenSet = true; m_order = value; }
    inline AnalyticsUtteranceMetric& WithOrder(AnalyticsSortOrder value) { SetOrder(value); return *this;}
    ///@}
  private:

    AnalyticsUtteranceMetricName m_name{AnalyticsUtteranceMetricName::NOT_SET};
    bool m_nameHasBeenSet = false;

    AnalyticsMetricStatistic m_statistic{AnalyticsMetricStatistic::NOT_SET};
    bool m_statisticHasBeenSet = false;

    AnalyticsSortOrder m_order{AnalyticsSortOrder::NOT_SET};
    bool m_orderHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
