/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/RelationalDatabaseMetricName.h>
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
  class GetRelationalDatabaseMetricDataRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API GetRelationalDatabaseMetricDataRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRelationalDatabaseMetricData"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of your database from which to get metric data.</p>
     */
    inline const Aws::String& GetRelationalDatabaseName() const { return m_relationalDatabaseName; }
    inline bool RelationalDatabaseNameHasBeenSet() const { return m_relationalDatabaseNameHasBeenSet; }
    template<typename RelationalDatabaseNameT = Aws::String>
    void SetRelationalDatabaseName(RelationalDatabaseNameT&& value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName = std::forward<RelationalDatabaseNameT>(value); }
    template<typename RelationalDatabaseNameT = Aws::String>
    GetRelationalDatabaseMetricDataRequest& WithRelationalDatabaseName(RelationalDatabaseNameT&& value) { SetRelationalDatabaseName(std::forward<RelationalDatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metric for which you want to return information.</p> <p>Valid relational
     * database metric names are listed below, along with the most useful
     * <code>statistics</code> to include in your request, and the published
     * <code>unit</code> value. All relational database metric data is available in
     * 1-minute (60 seconds) granularity.</p> <ul> <li> <p> <b>
     * <code>CPUUtilization</code> </b> - The percentage of CPU utilization currently
     * in use on the database.</p> <p> <code>Statistics</code>: The most useful
     * statistics are <code>Maximum</code> and <code>Average</code>.</p> <p>
     * <code>Unit</code>: The published unit is <code>Percent</code>.</p> </li> <li>
     * <p> <b> <code>DatabaseConnections</code> </b> - The number of database
     * connections in use.</p> <p> <code>Statistics</code>: The most useful statistics
     * are <code>Maximum</code> and <code>Sum</code>.</p> <p> <code>Unit</code>: The
     * published unit is <code>Count</code>.</p> </li> <li> <p> <b>
     * <code>DiskQueueDepth</code> </b> - The number of outstanding IOs (read/write
     * requests) that are waiting to access the disk.</p> <p> <code>Statistics</code>:
     * The most useful statistic is <code>Sum</code>.</p> <p> <code>Unit</code>: The
     * published unit is <code>Count</code>.</p> </li> <li> <p> <b>
     * <code>FreeStorageSpace</code> </b> - The amount of available storage space.</p>
     * <p> <code>Statistics</code>: The most useful statistic is <code>Sum</code>.</p>
     * <p> <code>Unit</code>: The published unit is <code>Bytes</code>.</p> </li> <li>
     * <p> <b> <code>NetworkReceiveThroughput</code> </b> - The incoming (Receive)
     * network traffic on the database, including both customer database traffic and
     * AWS traffic used for monitoring and replication.</p> <p>
     * <code>Statistics</code>: The most useful statistic is <code>Average</code>.</p>
     * <p> <code>Unit</code>: The published unit is <code>Bytes/Second</code>.</p>
     * </li> <li> <p> <b> <code>NetworkTransmitThroughput</code> </b> - The outgoing
     * (Transmit) network traffic on the database, including both customer database
     * traffic and AWS traffic used for monitoring and replication.</p> <p>
     * <code>Statistics</code>: The most useful statistic is <code>Average</code>.</p>
     * <p> <code>Unit</code>: The published unit is <code>Bytes/Second</code>.</p>
     * </li> </ul>
     */
    inline RelationalDatabaseMetricName GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    inline void SetMetricName(RelationalDatabaseMetricName value) { m_metricNameHasBeenSet = true; m_metricName = value; }
    inline GetRelationalDatabaseMetricDataRequest& WithMetricName(RelationalDatabaseMetricName value) { SetMetricName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The granularity, in seconds, of the returned data points.</p> <p>All
     * relational database metric data is available in 1-minute (60 seconds)
     * granularity.</p>
     */
    inline int GetPeriod() const { return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }
    inline GetRelationalDatabaseMetricDataRequest& WithPeriod(int value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start of the time interval from which to get metric data.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use a start time of October 1, 2018, at 8 PM UTC, then you input
     * <code>1538424000</code> as the start time.</p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    GetRelationalDatabaseMetricDataRequest& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end of the time interval from which to get metric data.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use an end time of October 1, 2018, at 8 PM UTC, then you input
     * <code>1538424000</code> as the end time.</p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    GetRelationalDatabaseMetricDataRequest& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit for the metric data request. Valid units depend on the metric data
     * being requested. For the valid units with each available metric, see the
     * <code>metricName</code> parameter.</p>
     */
    inline MetricUnit GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(MetricUnit value) { m_unitHasBeenSet = true; m_unit = value; }
    inline GetRelationalDatabaseMetricDataRequest& WithUnit(MetricUnit value) { SetUnit(value); return *this;}
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
    GetRelationalDatabaseMetricDataRequest& WithStatistics(StatisticsT&& value) { SetStatistics(std::forward<StatisticsT>(value)); return *this;}
    inline GetRelationalDatabaseMetricDataRequest& AddStatistics(MetricStatistic value) { m_statisticsHasBeenSet = true; m_statistics.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_relationalDatabaseName;
    bool m_relationalDatabaseNameHasBeenSet = false;

    RelationalDatabaseMetricName m_metricName{RelationalDatabaseMetricName::NOT_SET};
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
