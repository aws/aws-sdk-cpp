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
    AWS_CONNECT_API HistoricalMetric();
    AWS_CONNECT_API HistoricalMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API HistoricalMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the metric.</p>
     */
    inline const HistoricalMetricName& GetName() const{ return m_name; }

    /**
     * <p>The name of the metric.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the metric.</p>
     */
    inline void SetName(const HistoricalMetricName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the metric.</p>
     */
    inline void SetName(HistoricalMetricName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the metric.</p>
     */
    inline HistoricalMetric& WithName(const HistoricalMetricName& value) { SetName(value); return *this;}

    /**
     * <p>The name of the metric.</p>
     */
    inline HistoricalMetric& WithName(HistoricalMetricName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The threshold for the metric, used with service level metrics.</p>
     */
    inline const Threshold& GetThreshold() const{ return m_threshold; }

    /**
     * <p>The threshold for the metric, used with service level metrics.</p>
     */
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }

    /**
     * <p>The threshold for the metric, used with service level metrics.</p>
     */
    inline void SetThreshold(const Threshold& value) { m_thresholdHasBeenSet = true; m_threshold = value; }

    /**
     * <p>The threshold for the metric, used with service level metrics.</p>
     */
    inline void SetThreshold(Threshold&& value) { m_thresholdHasBeenSet = true; m_threshold = std::move(value); }

    /**
     * <p>The threshold for the metric, used with service level metrics.</p>
     */
    inline HistoricalMetric& WithThreshold(const Threshold& value) { SetThreshold(value); return *this;}

    /**
     * <p>The threshold for the metric, used with service level metrics.</p>
     */
    inline HistoricalMetric& WithThreshold(Threshold&& value) { SetThreshold(std::move(value)); return *this;}


    /**
     * <p>The statistic for the metric.</p>
     */
    inline const Statistic& GetStatistic() const{ return m_statistic; }

    /**
     * <p>The statistic for the metric.</p>
     */
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }

    /**
     * <p>The statistic for the metric.</p>
     */
    inline void SetStatistic(const Statistic& value) { m_statisticHasBeenSet = true; m_statistic = value; }

    /**
     * <p>The statistic for the metric.</p>
     */
    inline void SetStatistic(Statistic&& value) { m_statisticHasBeenSet = true; m_statistic = std::move(value); }

    /**
     * <p>The statistic for the metric.</p>
     */
    inline HistoricalMetric& WithStatistic(const Statistic& value) { SetStatistic(value); return *this;}

    /**
     * <p>The statistic for the metric.</p>
     */
    inline HistoricalMetric& WithStatistic(Statistic&& value) { SetStatistic(std::move(value)); return *this;}


    /**
     * <p>The unit for the metric.</p>
     */
    inline const Unit& GetUnit() const{ return m_unit; }

    /**
     * <p>The unit for the metric.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The unit for the metric.</p>
     */
    inline void SetUnit(const Unit& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit for the metric.</p>
     */
    inline void SetUnit(Unit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The unit for the metric.</p>
     */
    inline HistoricalMetric& WithUnit(const Unit& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit for the metric.</p>
     */
    inline HistoricalMetric& WithUnit(Unit&& value) { SetUnit(std::move(value)); return *this;}

  private:

    HistoricalMetricName m_name;
    bool m_nameHasBeenSet = false;

    Threshold m_threshold;
    bool m_thresholdHasBeenSet = false;

    Statistic m_statistic;
    bool m_statisticHasBeenSet = false;

    Unit m_unit;
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
