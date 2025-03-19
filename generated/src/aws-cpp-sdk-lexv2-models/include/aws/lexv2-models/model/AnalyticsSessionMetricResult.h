/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/AnalyticsSessionMetricName.h>
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
   * <p>An object containing the results for a session metric you
   * requested.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/AnalyticsSessionMetricResult">AWS
   * API Reference</a></p>
   */
  class AnalyticsSessionMetricResult
  {
  public:
    AWS_LEXMODELSV2_API AnalyticsSessionMetricResult() = default;
    AWS_LEXMODELSV2_API AnalyticsSessionMetricResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API AnalyticsSessionMetricResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The metric that you requested.</p> <ul> <li> <p> <code>Count</code> – The
     * number of sessions.</p> </li> <li> <p> <code>Success</code> – The number of
     * sessions that succeeded.</p> </li> <li> <p> <code>Failure</code> – The number of
     * sessions that failed.</p> </li> <li> <p> <code>Dropped</code> – The number of
     * sessions that the user dropped.</p> </li> <li> <p> <code>Duration</code> – The
     * duration of sessions.</p> </li> <li> <p> <code>TurnPersession</code> – The
     * number of turns in the sessions.</p> </li> <li> <p> <code>Concurrency</code> –
     * The number of sessions occurring in the same period of time.</p> </li> </ul>
     */
    inline AnalyticsSessionMetricName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(AnalyticsSessionMetricName value) { m_nameHasBeenSet = true; m_name = value; }
    inline AnalyticsSessionMetricResult& WithName(AnalyticsSessionMetricName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The summary statistic that you requested to calculate.</p> <ul> <li> <p>
     * <code>Sum</code> – The total count for the category you provide in
     * <code>name</code>.</p> </li> <li> <p> <code>Average</code> – The total count
     * divided by the number of sessions in the category you provide in
     * <code>name</code>.</p> </li> <li> <p> <code>Max</code> – The highest count in
     * the category you provide in <code>name</code>.</p> </li> </ul>
     */
    inline AnalyticsMetricStatistic GetStatistic() const { return m_statistic; }
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }
    inline void SetStatistic(AnalyticsMetricStatistic value) { m_statisticHasBeenSet = true; m_statistic = value; }
    inline AnalyticsSessionMetricResult& WithStatistic(AnalyticsMetricStatistic value) { SetStatistic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the summary statistic for the metric that you requested.</p>
     */
    inline double GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }
    inline AnalyticsSessionMetricResult& WithValue(double value) { SetValue(value); return *this;}
    ///@}
  private:

    AnalyticsSessionMetricName m_name{AnalyticsSessionMetricName::NOT_SET};
    bool m_nameHasBeenSet = false;

    AnalyticsMetricStatistic m_statistic{AnalyticsMetricStatistic::NOT_SET};
    bool m_statisticHasBeenSet = false;

    double m_value{0.0};
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
