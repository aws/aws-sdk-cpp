/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/ContainerServiceMetricName.h>
#include <aws/core/utils/DateTime.h>
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
  class GetContainerServiceMetricDataRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API GetContainerServiceMetricDataRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetContainerServiceMetricData"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the container service for which to get metric data.</p>
     */
    inline const Aws::String& GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    template<typename ServiceNameT = Aws::String>
    void SetServiceName(ServiceNameT&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::forward<ServiceNameT>(value); }
    template<typename ServiceNameT = Aws::String>
    GetContainerServiceMetricDataRequest& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metric for which you want to return information.</p> <p>Valid container
     * service metric names are listed below, along with the most useful statistics to
     * include in your request, and the published unit value.</p> <ul> <li> <p>
     * <code>CPUUtilization</code> - The average percentage of compute units that are
     * currently in use across all nodes of the container service. This metric
     * identifies the processing power required to run containers on each node of the
     * container service.</p> <p>Statistics: The most useful statistics are
     * <code>Maximum</code> and <code>Average</code>.</p> <p>Unit: The published unit
     * is <code>Percent</code>.</p> </li> <li> <p> <code>MemoryUtilization</code> - The
     * average percentage of available memory that is currently in use across all nodes
     * of the container service. This metric identifies the memory required to run
     * containers on each node of the container service.</p> <p>Statistics: The most
     * useful statistics are <code>Maximum</code> and <code>Average</code>.</p>
     * <p>Unit: The published unit is <code>Percent</code>.</p> </li> </ul>
     */
    inline ContainerServiceMetricName GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    inline void SetMetricName(ContainerServiceMetricName value) { m_metricNameHasBeenSet = true; m_metricName = value; }
    inline GetContainerServiceMetricDataRequest& WithMetricName(ContainerServiceMetricName value) { SetMetricName(value); return *this;}
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
    GetContainerServiceMetricDataRequest& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
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
    GetContainerServiceMetricDataRequest& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The granularity, in seconds, of the returned data points.</p> <p>All
     * container service metric data is available in 5-minute (300 seconds)
     * granularity.</p>
     */
    inline int GetPeriod() const { return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }
    inline GetContainerServiceMetricDataRequest& WithPeriod(int value) { SetPeriod(value); return *this;}
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
     * <code>Average</code> - The value of <code>Sum</code> / <code>SampleCount</code>
     * during the specified period. By comparing this statistic with the
     * <code>Minimum</code> and <code>Maximum</code> values, you can determine the full
     * scope of a metric and how close the average use is to the <code>Minimum</code>
     * and <code>Maximum</code> values. This comparison helps you to know when to
     * increase or decrease your resources.</p> </li> <li> <p> <code>SampleCount</code>
     * - The count, or number, of data points used for the statistical calculation.</p>
     * </li> </ul>
     */
    inline const Aws::Vector<MetricStatistic>& GetStatistics() const { return m_statistics; }
    inline bool StatisticsHasBeenSet() const { return m_statisticsHasBeenSet; }
    template<typename StatisticsT = Aws::Vector<MetricStatistic>>
    void SetStatistics(StatisticsT&& value) { m_statisticsHasBeenSet = true; m_statistics = std::forward<StatisticsT>(value); }
    template<typename StatisticsT = Aws::Vector<MetricStatistic>>
    GetContainerServiceMetricDataRequest& WithStatistics(StatisticsT&& value) { SetStatistics(std::forward<StatisticsT>(value)); return *this;}
    inline GetContainerServiceMetricDataRequest& AddStatistics(MetricStatistic value) { m_statisticsHasBeenSet = true; m_statistics.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    ContainerServiceMetricName m_metricName{ContainerServiceMetricName::NOT_SET};
    bool m_metricNameHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    int m_period{0};
    bool m_periodHasBeenSet = false;

    Aws::Vector<MetricStatistic> m_statistics;
    bool m_statisticsHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
