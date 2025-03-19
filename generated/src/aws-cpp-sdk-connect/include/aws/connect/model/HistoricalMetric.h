/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/HistoricalMetricName.h>
#include <aws/connect/model/Threshold.h>
#include <aws/connect/model/Statistic.h>
#include <aws/connect/model/Unit.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Contains information about a historical metric. For a description of each
   * metric, see <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html">Historical
   * Metrics Definitions</a> in the <i>Amazon Connect Administrator
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/HistoricalMetric">AWS
   * API Reference</a></p>
   */
  class HistoricalMetric
  {
  public:
    AWS_CONNECT_API HistoricalMetric() = default;
    AWS_CONNECT_API HistoricalMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API HistoricalMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the metric.</p>
     */
    inline HistoricalMetricName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(HistoricalMetricName value) { m_nameHasBeenSet = true; m_name = value; }
    inline HistoricalMetric& WithName(HistoricalMetricName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The threshold for the metric, used with service level metrics.</p>
     */
    inline const Threshold& GetThreshold() const { return m_threshold; }
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }
    template<typename ThresholdT = Threshold>
    void SetThreshold(ThresholdT&& value) { m_thresholdHasBeenSet = true; m_threshold = std::forward<ThresholdT>(value); }
    template<typename ThresholdT = Threshold>
    HistoricalMetric& WithThreshold(ThresholdT&& value) { SetThreshold(std::forward<ThresholdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The statistic for the metric.</p>
     */
    inline Statistic GetStatistic() const { return m_statistic; }
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }
    inline void SetStatistic(Statistic value) { m_statisticHasBeenSet = true; m_statistic = value; }
    inline HistoricalMetric& WithStatistic(Statistic value) { SetStatistic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit for the metric.</p>
     */
    inline Unit GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(Unit value) { m_unitHasBeenSet = true; m_unit = value; }
    inline HistoricalMetric& WithUnit(Unit value) { SetUnit(value); return *this;}
    ///@}
  private:

    HistoricalMetricName m_name{HistoricalMetricName::NOT_SET};
    bool m_nameHasBeenSet = false;

    Threshold m_threshold;
    bool m_thresholdHasBeenSet = false;

    Statistic m_statistic{Statistic::NOT_SET};
    bool m_statisticHasBeenSet = false;

    Unit m_unit{Unit::NOT_SET};
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
