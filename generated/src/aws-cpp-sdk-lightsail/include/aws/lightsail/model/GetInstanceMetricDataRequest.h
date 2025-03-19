/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/InstanceMetricName.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lightsail/model/MetricUnit.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/MetricStatistic.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class GetInstanceMetricDataRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API GetInstanceMetricDataRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetInstanceMetricData"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the instance for which you want to get metrics data.</p>
     */
    inline const Aws::String& GetInstanceName() const { return m_instanceName; }
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }
    template<typename InstanceNameT = Aws::String>
    void SetInstanceName(InstanceNameT&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::forward<InstanceNameT>(value); }
    template<typename InstanceNameT = Aws::String>
    GetInstanceMetricDataRequest& WithInstanceName(InstanceNameT&& value) { SetInstanceName(std::forward<InstanceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metric for which you want to return information.</p> <p>Valid instance
     * metric names are listed below, along with the most useful
     * <code>statistics</code> to include in your request, and the published
     * <code>unit</code> value.</p> <ul> <li> <p> <b>
     * <code>BurstCapacityPercentage</code> </b> - The percentage of CPU performance
     * available for your instance to burst above its baseline. Your instance
     * continuously accrues and consumes burst capacity. Burst capacity stops accruing
     * when your instance's <code>BurstCapacityPercentage</code> reaches 100%. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lightsail/latest/userguide/amazon-lightsail-viewing-instance-burst-capacity">Viewing
     * instance burst capacity in Amazon Lightsail</a>.</p> <p>
     * <code>Statistics</code>: The most useful statistics are <code>Maximum</code> and
     * <code>Average</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Percent</code>.</p> </li> <li> <p> <b> <code>BurstCapacityTime</code> </b>
     * - The available amount of time for your instance to burst at 100% CPU
     * utilization. Your instance continuously accrues and consumes burst capacity.
     * Burst capacity time stops accruing when your instance's
     * <code>BurstCapacityPercentage</code> metric reaches 100%.</p> <p>Burst capacity
     * time is consumed at the full rate only when your instance operates at 100% CPU
     * utilization. For example, if your instance operates at 50% CPU utilization in
     * the burstable zone for a 5-minute period, then it consumes CPU burst capacity
     * minutes at a 50% rate in that period. Your instance consumed 2 minutes and 30
     * seconds of CPU burst capacity minutes in the 5-minute period. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lightsail/latest/userguide/amazon-lightsail-viewing-instance-burst-capacity">Viewing
     * instance burst capacity in Amazon Lightsail</a>.</p> <p>
     * <code>Statistics</code>: The most useful statistics are <code>Maximum</code> and
     * <code>Average</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Seconds</code>.</p> </li> <li> <p> <b> <code>CPUUtilization</code> </b> -
     * The percentage of allocated compute units that are currently in use on the
     * instance. This metric identifies the processing power to run the applications on
     * the instance. Tools in your operating system can show a lower percentage than
     * Lightsail when the instance is not allocated a full processor core.</p> <p>
     * <code>Statistics</code>: The most useful statistics are <code>Maximum</code> and
     * <code>Average</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Percent</code>.</p> </li> <li> <p> <b> <code>NetworkIn</code> </b> - The
     * number of bytes received on all network interfaces by the instance. This metric
     * identifies the volume of incoming network traffic to the instance. The number
     * reported is the number of bytes received during the period. Because this metric
     * is reported in 5-minute intervals, divide the reported number by 300 to find
     * Bytes/second.</p> <p> <code>Statistics</code>: The most useful statistic is
     * <code>Sum</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Bytes</code>.</p> </li> <li> <p> <b> <code>NetworkOut</code> </b> - The
     * number of bytes sent out on all network interfaces by the instance. This metric
     * identifies the volume of outgoing network traffic from the instance. The number
     * reported is the number of bytes sent during the period. Because this metric is
     * reported in 5-minute intervals, divide the reported number by 300 to find
     * Bytes/second.</p> <p> <code>Statistics</code>: The most useful statistic is
     * <code>Sum</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Bytes</code>.</p> </li> <li> <p> <b> <code>StatusCheckFailed</code> </b> -
     * Reports whether the instance passed or failed both the instance status check and
     * the system status check. This metric can be either 0 (passed) or 1 (failed).
     * This metric data is available in 1-minute (60 seconds) granularity.</p> <p>
     * <code>Statistics</code>: The most useful statistic is <code>Sum</code>.</p> <p>
     * <code>Unit</code>: The published unit is <code>Count</code>.</p> </li> <li> <p>
     * <b> <code>StatusCheckFailed_Instance</code> </b> - Reports whether the instance
     * passed or failed the instance status check. This metric can be either 0 (passed)
     * or 1 (failed). This metric data is available in 1-minute (60 seconds)
     * granularity.</p> <p> <code>Statistics</code>: The most useful statistic is
     * <code>Sum</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Count</code>.</p> </li> <li> <p> <b> <code>StatusCheckFailed_System</code>
     * </b> - Reports whether the instance passed or failed the system status check.
     * This metric can be either 0 (passed) or 1 (failed). This metric data is
     * available in 1-minute (60 seconds) granularity.</p> <p> <code>Statistics</code>:
     * The most useful statistic is <code>Sum</code>.</p> <p> <code>Unit</code>: The
     * published unit is <code>Count</code>.</p> </li> <li> <p> <b>
     * <code>MetadataNoToken</code> </b> - Reports the number of times that the
     * instance metadata service was successfully accessed without a token. This metric
     * determines if there are any processes accessing instance metadata by using
     * Instance Metadata Service Version 1, which doesn't use a token. If all requests
     * use token-backed sessions, such as Instance Metadata Service Version 2, then the
     * value is 0.</p> <p> <code>Statistics</code>: The most useful statistic is
     * <code>Sum</code>.</p> <p> <code>Unit</code>: The published unit is
     * <code>Count</code>.</p> </li> </ul>
     */
    inline InstanceMetricName GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    inline void SetMetricName(InstanceMetricName value) { m_metricNameHasBeenSet = true; m_metricName = value; }
    inline GetInstanceMetricDataRequest& WithMetricName(InstanceMetricName value) { SetMetricName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The granularity, in seconds, of the returned data points.</p> <p>The
     * <code>StatusCheckFailed</code>, <code>StatusCheckFailed_Instance</code>, and
     * <code>StatusCheckFailed_System</code> instance metric data is available in
     * 1-minute (60 seconds) granularity. All other instance metric data is available
     * in 5-minute (300 seconds) granularity.</p>
     */
    inline int GetPeriod() const { return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }
    inline GetInstanceMetricDataRequest& WithPeriod(int value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the time period.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    GetInstanceMetricDataRequest& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time of the time period.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    GetInstanceMetricDataRequest& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit for the metric data request. Valid units depend on the metric data
     * being requested. For the valid units to specify with each available metric, see
     * the <code>metricName</code> parameter.</p>
     */
    inline MetricUnit GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(MetricUnit value) { m_unitHasBeenSet = true; m_unit = value; }
    inline GetInstanceMetricDataRequest& WithUnit(MetricUnit value) { SetUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The statistic for the metric.</p> <p>The following statistics are
     * available:</p> <ul> <li> <p> <code>Minimum</code> - The lowest value observed
     * during the specified period. Use this value to determine low volumes of activity
     * for your application.</p> </li> <li> <p> <code>Maximum</code> - The highest
     * value observed during the specified period. Use this value to determine high
     * volumes of activity for your application.</p> </li> <li> <p> <code>Sum</code> -
     * All values submitted for the matching metric added together. You can use this
     * statistic to determine the total volume of a metric.</p> </li> <li> <p>
     * <code>Average</code> - The value of Sum / SampleCount during the specified
     * period. By comparing this statistic with the Minimum and Maximum values, you can
     * determine the full scope of a metric and how close the average use is to the
     * Minimum and Maximum values. This comparison helps you to know when to increase
     * or decrease your resources.</p> </li> <li> <p> <code>SampleCount</code> - The
     * count, or number, of data points used for the statistical calculation.</p> </li>
     * </ul>
     */
    inline const Aws::Vector<MetricStatistic>& GetStatistics() const { return m_statistics; }
    inline bool StatisticsHasBeenSet() const { return m_statisticsHasBeenSet; }
    template<typename StatisticsT = Aws::Vector<MetricStatistic>>
    void SetStatistics(StatisticsT&& value) { m_statisticsHasBeenSet = true; m_statistics = std::forward<StatisticsT>(value); }
    template<typename StatisticsT = Aws::Vector<MetricStatistic>>
    GetInstanceMetricDataRequest& WithStatistics(StatisticsT&& value) { SetStatistics(std::forward<StatisticsT>(value)); return *this;}
    inline GetInstanceMetricDataRequest& AddStatistics(MetricStatistic value) { m_statisticsHasBeenSet = true; m_statistics.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet = false;

    InstanceMetricName m_metricName{InstanceMetricName::NOT_SET};
    bool m_metricNameHasBeenSet = false;

    int m_period{0};
    bool m_periodHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    MetricUnit m_unit{MetricUnit::NOT_SET};
    bool m_unitHasBeenSet = false;

    Aws::Vector<MetricStatistic> m_statistics;
    bool m_statisticsHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
