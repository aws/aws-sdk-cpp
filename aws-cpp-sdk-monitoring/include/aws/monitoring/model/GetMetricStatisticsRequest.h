/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/monitoring/model/StandardUnit.h>
#include <aws/monitoring/model/Dimension.h>
#include <aws/monitoring/model/Statistic.h>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   */
  class AWS_CLOUDWATCH_API GetMetricStatisticsRequest : public CloudWatchRequest
  {
  public:
    GetMetricStatisticsRequest();
    Aws::String SerializePayload() const override;


  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:
    /**
     * <p>The namespace of the metric, with or without spaces.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace of the metric, with or without spaces.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace of the metric, with or without spaces.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace of the metric, with or without spaces.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace of the metric, with or without spaces.</p>
     */
    inline GetMetricStatisticsRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace of the metric, with or without spaces.</p>
     */
    inline GetMetricStatisticsRequest& WithNamespace(Aws::String&& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace of the metric, with or without spaces.</p>
     */
    inline GetMetricStatisticsRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}

    /**
     * <p>The name of the metric, with or without spaces.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The name of the metric, with or without spaces.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The name of the metric, with or without spaces.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The name of the metric, with or without spaces.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>The name of the metric, with or without spaces.</p>
     */
    inline GetMetricStatisticsRequest& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the metric, with or without spaces.</p>
     */
    inline GetMetricStatisticsRequest& WithMetricName(Aws::String&& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the metric, with or without spaces.</p>
     */
    inline GetMetricStatisticsRequest& WithMetricName(const char* value) { SetMetricName(value); return *this;}

    /**
     * <p>The dimensions. CloudWatch treats each unique combination of dimensions as a
     * separate metric. You can't retrieve statistics using combinations of dimensions
     * that were not specially published. You must specify the same dimensions that
     * were used when the metrics were created. For an example, see <a
     * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch_concepts.html#dimension-combinations">Dimension
     * Combinations</a> in the <i>Amazon CloudWatch User Guide</i>.</p>
     */
    inline const Aws::Vector<Dimension>& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>The dimensions. CloudWatch treats each unique combination of dimensions as a
     * separate metric. You can't retrieve statistics using combinations of dimensions
     * that were not specially published. You must specify the same dimensions that
     * were used when the metrics were created. For an example, see <a
     * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch_concepts.html#dimension-combinations">Dimension
     * Combinations</a> in the <i>Amazon CloudWatch User Guide</i>.</p>
     */
    inline void SetDimensions(const Aws::Vector<Dimension>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>The dimensions. CloudWatch treats each unique combination of dimensions as a
     * separate metric. You can't retrieve statistics using combinations of dimensions
     * that were not specially published. You must specify the same dimensions that
     * were used when the metrics were created. For an example, see <a
     * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch_concepts.html#dimension-combinations">Dimension
     * Combinations</a> in the <i>Amazon CloudWatch User Guide</i>.</p>
     */
    inline void SetDimensions(Aws::Vector<Dimension>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>The dimensions. CloudWatch treats each unique combination of dimensions as a
     * separate metric. You can't retrieve statistics using combinations of dimensions
     * that were not specially published. You must specify the same dimensions that
     * were used when the metrics were created. For an example, see <a
     * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch_concepts.html#dimension-combinations">Dimension
     * Combinations</a> in the <i>Amazon CloudWatch User Guide</i>.</p>
     */
    inline GetMetricStatisticsRequest& WithDimensions(const Aws::Vector<Dimension>& value) { SetDimensions(value); return *this;}

    /**
     * <p>The dimensions. CloudWatch treats each unique combination of dimensions as a
     * separate metric. You can't retrieve statistics using combinations of dimensions
     * that were not specially published. You must specify the same dimensions that
     * were used when the metrics were created. For an example, see <a
     * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch_concepts.html#dimension-combinations">Dimension
     * Combinations</a> in the <i>Amazon CloudWatch User Guide</i>.</p>
     */
    inline GetMetricStatisticsRequest& WithDimensions(Aws::Vector<Dimension>&& value) { SetDimensions(value); return *this;}

    /**
     * <p>The dimensions. CloudWatch treats each unique combination of dimensions as a
     * separate metric. You can't retrieve statistics using combinations of dimensions
     * that were not specially published. You must specify the same dimensions that
     * were used when the metrics were created. For an example, see <a
     * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch_concepts.html#dimension-combinations">Dimension
     * Combinations</a> in the <i>Amazon CloudWatch User Guide</i>.</p>
     */
    inline GetMetricStatisticsRequest& AddDimensions(const Dimension& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }

    /**
     * <p>The dimensions. CloudWatch treats each unique combination of dimensions as a
     * separate metric. You can't retrieve statistics using combinations of dimensions
     * that were not specially published. You must specify the same dimensions that
     * were used when the metrics were created. For an example, see <a
     * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch_concepts.html#dimension-combinations">Dimension
     * Combinations</a> in the <i>Amazon CloudWatch User Guide</i>.</p>
     */
    inline GetMetricStatisticsRequest& AddDimensions(Dimension&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }

    /**
     * <p>The time stamp that determines the first data point to return. Note that
     * start times are evaluated relative to the time that CloudWatch receives the
     * request.</p> <p>The value specified is inclusive; results include data points
     * with the specified time stamp. The time stamp must be in ISO 8601 UTC format
     * (for example, 2016-10-03T23:00:00Z).</p> <p>CloudWatch rounds the specified time
     * stamp as follows:</p> <ul> <li> <p>Start time less than 15 days ago - Round down
     * to the nearest whole minute. For example, 12:32:34 is rounded down to
     * 12:32:00.</p> </li> <li> <p>Start time between 15 and 63 days ago - Round down
     * to the nearest 5-minute clock interval. For example, 12:32:34 is rounded down to
     * 12:30:00.</p> </li> <li> <p>Start time greater than 63 days ago - Round down to
     * the nearest 1-hour clock interval. For example, 12:32:34 is rounded down to
     * 12:00:00.</p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time stamp that determines the first data point to return. Note that
     * start times are evaluated relative to the time that CloudWatch receives the
     * request.</p> <p>The value specified is inclusive; results include data points
     * with the specified time stamp. The time stamp must be in ISO 8601 UTC format
     * (for example, 2016-10-03T23:00:00Z).</p> <p>CloudWatch rounds the specified time
     * stamp as follows:</p> <ul> <li> <p>Start time less than 15 days ago - Round down
     * to the nearest whole minute. For example, 12:32:34 is rounded down to
     * 12:32:00.</p> </li> <li> <p>Start time between 15 and 63 days ago - Round down
     * to the nearest 5-minute clock interval. For example, 12:32:34 is rounded down to
     * 12:30:00.</p> </li> <li> <p>Start time greater than 63 days ago - Round down to
     * the nearest 1-hour clock interval. For example, 12:32:34 is rounded down to
     * 12:00:00.</p> </li> </ul>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time stamp that determines the first data point to return. Note that
     * start times are evaluated relative to the time that CloudWatch receives the
     * request.</p> <p>The value specified is inclusive; results include data points
     * with the specified time stamp. The time stamp must be in ISO 8601 UTC format
     * (for example, 2016-10-03T23:00:00Z).</p> <p>CloudWatch rounds the specified time
     * stamp as follows:</p> <ul> <li> <p>Start time less than 15 days ago - Round down
     * to the nearest whole minute. For example, 12:32:34 is rounded down to
     * 12:32:00.</p> </li> <li> <p>Start time between 15 and 63 days ago - Round down
     * to the nearest 5-minute clock interval. For example, 12:32:34 is rounded down to
     * 12:30:00.</p> </li> <li> <p>Start time greater than 63 days ago - Round down to
     * the nearest 1-hour clock interval. For example, 12:32:34 is rounded down to
     * 12:00:00.</p> </li> </ul>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time stamp that determines the first data point to return. Note that
     * start times are evaluated relative to the time that CloudWatch receives the
     * request.</p> <p>The value specified is inclusive; results include data points
     * with the specified time stamp. The time stamp must be in ISO 8601 UTC format
     * (for example, 2016-10-03T23:00:00Z).</p> <p>CloudWatch rounds the specified time
     * stamp as follows:</p> <ul> <li> <p>Start time less than 15 days ago - Round down
     * to the nearest whole minute. For example, 12:32:34 is rounded down to
     * 12:32:00.</p> </li> <li> <p>Start time between 15 and 63 days ago - Round down
     * to the nearest 5-minute clock interval. For example, 12:32:34 is rounded down to
     * 12:30:00.</p> </li> <li> <p>Start time greater than 63 days ago - Round down to
     * the nearest 1-hour clock interval. For example, 12:32:34 is rounded down to
     * 12:00:00.</p> </li> </ul>
     */
    inline GetMetricStatisticsRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time stamp that determines the first data point to return. Note that
     * start times are evaluated relative to the time that CloudWatch receives the
     * request.</p> <p>The value specified is inclusive; results include data points
     * with the specified time stamp. The time stamp must be in ISO 8601 UTC format
     * (for example, 2016-10-03T23:00:00Z).</p> <p>CloudWatch rounds the specified time
     * stamp as follows:</p> <ul> <li> <p>Start time less than 15 days ago - Round down
     * to the nearest whole minute. For example, 12:32:34 is rounded down to
     * 12:32:00.</p> </li> <li> <p>Start time between 15 and 63 days ago - Round down
     * to the nearest 5-minute clock interval. For example, 12:32:34 is rounded down to
     * 12:30:00.</p> </li> <li> <p>Start time greater than 63 days ago - Round down to
     * the nearest 1-hour clock interval. For example, 12:32:34 is rounded down to
     * 12:00:00.</p> </li> </ul>
     */
    inline GetMetricStatisticsRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time stamp that determines the last data point to return.</p> <p>The
     * value specified is exclusive; results will include data points up to the
     * specified time stamp. The time stamp must be in ISO 8601 UTC format (for
     * example, 2016-10-10T23:00:00Z).</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The time stamp that determines the last data point to return.</p> <p>The
     * value specified is exclusive; results will include data points up to the
     * specified time stamp. The time stamp must be in ISO 8601 UTC format (for
     * example, 2016-10-10T23:00:00Z).</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The time stamp that determines the last data point to return.</p> <p>The
     * value specified is exclusive; results will include data points up to the
     * specified time stamp. The time stamp must be in ISO 8601 UTC format (for
     * example, 2016-10-10T23:00:00Z).</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The time stamp that determines the last data point to return.</p> <p>The
     * value specified is exclusive; results will include data points up to the
     * specified time stamp. The time stamp must be in ISO 8601 UTC format (for
     * example, 2016-10-10T23:00:00Z).</p>
     */
    inline GetMetricStatisticsRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time stamp that determines the last data point to return.</p> <p>The
     * value specified is exclusive; results will include data points up to the
     * specified time stamp. The time stamp must be in ISO 8601 UTC format (for
     * example, 2016-10-10T23:00:00Z).</p>
     */
    inline GetMetricStatisticsRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(value); return *this;}

    /**
     * <p>The granularity, in seconds, of the returned data points. A period can be as
     * short as one minute (60 seconds) and must be a multiple of 60. The default value
     * is 60.</p> <p>If the <code>StartTime</code> parameter specifies a time stamp
     * that is greater than 15 days ago, you must specify the period as follows or no
     * data points in that time range is returned:</p> <ul> <li> <p>Start time between
     * 15 and 63 days ago - Use a multiple of 300 seconds (5 minutes).</p> </li> <li>
     * <p>Start time greater than 63 days ago - Use a multiple of 3600 seconds (1
     * hour).</p> </li> </ul>
     */
    inline int GetPeriod() const{ return m_period; }

    /**
     * <p>The granularity, in seconds, of the returned data points. A period can be as
     * short as one minute (60 seconds) and must be a multiple of 60. The default value
     * is 60.</p> <p>If the <code>StartTime</code> parameter specifies a time stamp
     * that is greater than 15 days ago, you must specify the period as follows or no
     * data points in that time range is returned:</p> <ul> <li> <p>Start time between
     * 15 and 63 days ago - Use a multiple of 300 seconds (5 minutes).</p> </li> <li>
     * <p>Start time greater than 63 days ago - Use a multiple of 3600 seconds (1
     * hour).</p> </li> </ul>
     */
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }

    /**
     * <p>The granularity, in seconds, of the returned data points. A period can be as
     * short as one minute (60 seconds) and must be a multiple of 60. The default value
     * is 60.</p> <p>If the <code>StartTime</code> parameter specifies a time stamp
     * that is greater than 15 days ago, you must specify the period as follows or no
     * data points in that time range is returned:</p> <ul> <li> <p>Start time between
     * 15 and 63 days ago - Use a multiple of 300 seconds (5 minutes).</p> </li> <li>
     * <p>Start time greater than 63 days ago - Use a multiple of 3600 seconds (1
     * hour).</p> </li> </ul>
     */
    inline GetMetricStatisticsRequest& WithPeriod(int value) { SetPeriod(value); return *this;}

    /**
     * <p>The metric statistics, other than percentile. For percentile statistics, use
     * <code>ExtendedStatistic</code>.</p>
     */
    inline const Aws::Vector<Statistic>& GetStatistics() const{ return m_statistics; }

    /**
     * <p>The metric statistics, other than percentile. For percentile statistics, use
     * <code>ExtendedStatistic</code>.</p>
     */
    inline void SetStatistics(const Aws::Vector<Statistic>& value) { m_statisticsHasBeenSet = true; m_statistics = value; }

    /**
     * <p>The metric statistics, other than percentile. For percentile statistics, use
     * <code>ExtendedStatistic</code>.</p>
     */
    inline void SetStatistics(Aws::Vector<Statistic>&& value) { m_statisticsHasBeenSet = true; m_statistics = value; }

    /**
     * <p>The metric statistics, other than percentile. For percentile statistics, use
     * <code>ExtendedStatistic</code>.</p>
     */
    inline GetMetricStatisticsRequest& WithStatistics(const Aws::Vector<Statistic>& value) { SetStatistics(value); return *this;}

    /**
     * <p>The metric statistics, other than percentile. For percentile statistics, use
     * <code>ExtendedStatistic</code>.</p>
     */
    inline GetMetricStatisticsRequest& WithStatistics(Aws::Vector<Statistic>&& value) { SetStatistics(value); return *this;}

    /**
     * <p>The metric statistics, other than percentile. For percentile statistics, use
     * <code>ExtendedStatistic</code>.</p>
     */
    inline GetMetricStatisticsRequest& AddStatistics(const Statistic& value) { m_statisticsHasBeenSet = true; m_statistics.push_back(value); return *this; }

    /**
     * <p>The metric statistics, other than percentile. For percentile statistics, use
     * <code>ExtendedStatistic</code>.</p>
     */
    inline GetMetricStatisticsRequest& AddStatistics(Statistic&& value) { m_statisticsHasBeenSet = true; m_statistics.push_back(value); return *this; }

    /**
     * <p>The percentile statistics. Specify values between p0.0 and p100.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExtendedStatistics() const{ return m_extendedStatistics; }

    /**
     * <p>The percentile statistics. Specify values between p0.0 and p100.</p>
     */
    inline void SetExtendedStatistics(const Aws::Vector<Aws::String>& value) { m_extendedStatisticsHasBeenSet = true; m_extendedStatistics = value; }

    /**
     * <p>The percentile statistics. Specify values between p0.0 and p100.</p>
     */
    inline void SetExtendedStatistics(Aws::Vector<Aws::String>&& value) { m_extendedStatisticsHasBeenSet = true; m_extendedStatistics = value; }

    /**
     * <p>The percentile statistics. Specify values between p0.0 and p100.</p>
     */
    inline GetMetricStatisticsRequest& WithExtendedStatistics(const Aws::Vector<Aws::String>& value) { SetExtendedStatistics(value); return *this;}

    /**
     * <p>The percentile statistics. Specify values between p0.0 and p100.</p>
     */
    inline GetMetricStatisticsRequest& WithExtendedStatistics(Aws::Vector<Aws::String>&& value) { SetExtendedStatistics(value); return *this;}

    /**
     * <p>The percentile statistics. Specify values between p0.0 and p100.</p>
     */
    inline GetMetricStatisticsRequest& AddExtendedStatistics(const Aws::String& value) { m_extendedStatisticsHasBeenSet = true; m_extendedStatistics.push_back(value); return *this; }

    /**
     * <p>The percentile statistics. Specify values between p0.0 and p100.</p>
     */
    inline GetMetricStatisticsRequest& AddExtendedStatistics(Aws::String&& value) { m_extendedStatisticsHasBeenSet = true; m_extendedStatistics.push_back(value); return *this; }

    /**
     * <p>The percentile statistics. Specify values between p0.0 and p100.</p>
     */
    inline GetMetricStatisticsRequest& AddExtendedStatistics(const char* value) { m_extendedStatisticsHasBeenSet = true; m_extendedStatistics.push_back(value); return *this; }

    /**
     * <p>The unit for a given metric. Metrics may be reported in multiple units. Not
     * supplying a unit results in all units being returned. If the metric only ever
     * reports one unit, specifying a unit has no effect.</p>
     */
    inline const StandardUnit& GetUnit() const{ return m_unit; }

    /**
     * <p>The unit for a given metric. Metrics may be reported in multiple units. Not
     * supplying a unit results in all units being returned. If the metric only ever
     * reports one unit, specifying a unit has no effect.</p>
     */
    inline void SetUnit(const StandardUnit& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit for a given metric. Metrics may be reported in multiple units. Not
     * supplying a unit results in all units being returned. If the metric only ever
     * reports one unit, specifying a unit has no effect.</p>
     */
    inline void SetUnit(StandardUnit&& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit for a given metric. Metrics may be reported in multiple units. Not
     * supplying a unit results in all units being returned. If the metric only ever
     * reports one unit, specifying a unit has no effect.</p>
     */
    inline GetMetricStatisticsRequest& WithUnit(const StandardUnit& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit for a given metric. Metrics may be reported in multiple units. Not
     * supplying a unit results in all units being returned. If the metric only ever
     * reports one unit, specifying a unit has no effect.</p>
     */
    inline GetMetricStatisticsRequest& WithUnit(StandardUnit&& value) { SetUnit(value); return *this;}

  private:
    Aws::String m_namespace;
    bool m_namespaceHasBeenSet;
    Aws::String m_metricName;
    bool m_metricNameHasBeenSet;
    Aws::Vector<Dimension> m_dimensions;
    bool m_dimensionsHasBeenSet;
    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;
    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;
    int m_period;
    bool m_periodHasBeenSet;
    Aws::Vector<Statistic> m_statistics;
    bool m_statisticsHasBeenSet;
    Aws::Vector<Aws::String> m_extendedStatistics;
    bool m_extendedStatisticsHasBeenSet;
    StandardUnit m_unit;
    bool m_unitHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
