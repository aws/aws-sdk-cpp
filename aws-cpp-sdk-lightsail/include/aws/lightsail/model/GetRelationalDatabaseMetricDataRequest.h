/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  class AWS_LIGHTSAIL_API GetRelationalDatabaseMetricDataRequest : public LightsailRequest
  {
  public:
    GetRelationalDatabaseMetricDataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRelationalDatabaseMetricData"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of your database from which to get metric data.</p>
     */
    inline const Aws::String& GetRelationalDatabaseName() const{ return m_relationalDatabaseName; }

    /**
     * <p>The name of your database from which to get metric data.</p>
     */
    inline bool RelationalDatabaseNameHasBeenSet() const { return m_relationalDatabaseNameHasBeenSet; }

    /**
     * <p>The name of your database from which to get metric data.</p>
     */
    inline void SetRelationalDatabaseName(const Aws::String& value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName = value; }

    /**
     * <p>The name of your database from which to get metric data.</p>
     */
    inline void SetRelationalDatabaseName(Aws::String&& value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName = std::move(value); }

    /**
     * <p>The name of your database from which to get metric data.</p>
     */
    inline void SetRelationalDatabaseName(const char* value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName.assign(value); }

    /**
     * <p>The name of your database from which to get metric data.</p>
     */
    inline GetRelationalDatabaseMetricDataRequest& WithRelationalDatabaseName(const Aws::String& value) { SetRelationalDatabaseName(value); return *this;}

    /**
     * <p>The name of your database from which to get metric data.</p>
     */
    inline GetRelationalDatabaseMetricDataRequest& WithRelationalDatabaseName(Aws::String&& value) { SetRelationalDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of your database from which to get metric data.</p>
     */
    inline GetRelationalDatabaseMetricDataRequest& WithRelationalDatabaseName(const char* value) { SetRelationalDatabaseName(value); return *this;}


    /**
     * <p>The name of the metric data to return.</p>
     */
    inline const RelationalDatabaseMetricName& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The name of the metric data to return.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>The name of the metric data to return.</p>
     */
    inline void SetMetricName(const RelationalDatabaseMetricName& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The name of the metric data to return.</p>
     */
    inline void SetMetricName(RelationalDatabaseMetricName&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>The name of the metric data to return.</p>
     */
    inline GetRelationalDatabaseMetricDataRequest& WithMetricName(const RelationalDatabaseMetricName& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the metric data to return.</p>
     */
    inline GetRelationalDatabaseMetricDataRequest& WithMetricName(RelationalDatabaseMetricName&& value) { SetMetricName(std::move(value)); return *this;}


    /**
     * <p>The granularity, in seconds, of the returned data points.</p>
     */
    inline int GetPeriod() const{ return m_period; }

    /**
     * <p>The granularity, in seconds, of the returned data points.</p>
     */
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }

    /**
     * <p>The granularity, in seconds, of the returned data points.</p>
     */
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }

    /**
     * <p>The granularity, in seconds, of the returned data points.</p>
     */
    inline GetRelationalDatabaseMetricDataRequest& WithPeriod(int value) { SetPeriod(value); return *this;}


    /**
     * <p>The start of the time interval from which to get metric data.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Universal Coordinated Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use a start time of October 1, 2018, at 8 PM UTC, then you input
     * <code>1538424000</code> as the start time.</p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start of the time interval from which to get metric data.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Universal Coordinated Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use a start time of October 1, 2018, at 8 PM UTC, then you input
     * <code>1538424000</code> as the start time.</p> </li> </ul>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start of the time interval from which to get metric data.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Universal Coordinated Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use a start time of October 1, 2018, at 8 PM UTC, then you input
     * <code>1538424000</code> as the start time.</p> </li> </ul>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start of the time interval from which to get metric data.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Universal Coordinated Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use a start time of October 1, 2018, at 8 PM UTC, then you input
     * <code>1538424000</code> as the start time.</p> </li> </ul>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start of the time interval from which to get metric data.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Universal Coordinated Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use a start time of October 1, 2018, at 8 PM UTC, then you input
     * <code>1538424000</code> as the start time.</p> </li> </ul>
     */
    inline GetRelationalDatabaseMetricDataRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start of the time interval from which to get metric data.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Universal Coordinated Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use a start time of October 1, 2018, at 8 PM UTC, then you input
     * <code>1538424000</code> as the start time.</p> </li> </ul>
     */
    inline GetRelationalDatabaseMetricDataRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The end of the time interval from which to get metric data.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Universal Coordinated Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use an end time of October 1, 2018, at 8 PM UTC, then you input
     * <code>1538424000</code> as the end time.</p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end of the time interval from which to get metric data.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Universal Coordinated Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use an end time of October 1, 2018, at 8 PM UTC, then you input
     * <code>1538424000</code> as the end time.</p> </li> </ul>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end of the time interval from which to get metric data.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Universal Coordinated Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use an end time of October 1, 2018, at 8 PM UTC, then you input
     * <code>1538424000</code> as the end time.</p> </li> </ul>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end of the time interval from which to get metric data.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Universal Coordinated Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use an end time of October 1, 2018, at 8 PM UTC, then you input
     * <code>1538424000</code> as the end time.</p> </li> </ul>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end of the time interval from which to get metric data.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Universal Coordinated Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use an end time of October 1, 2018, at 8 PM UTC, then you input
     * <code>1538424000</code> as the end time.</p> </li> </ul>
     */
    inline GetRelationalDatabaseMetricDataRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end of the time interval from which to get metric data.</p>
     * <p>Constraints:</p> <ul> <li> <p>Specified in Universal Coordinated Time
     * (UTC).</p> </li> <li> <p>Specified in the Unix time format.</p> <p>For example,
     * if you wish to use an end time of October 1, 2018, at 8 PM UTC, then you input
     * <code>1538424000</code> as the end time.</p> </li> </ul>
     */
    inline GetRelationalDatabaseMetricDataRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The unit for the metric data request.</p>
     */
    inline const MetricUnit& GetUnit() const{ return m_unit; }

    /**
     * <p>The unit for the metric data request.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The unit for the metric data request.</p>
     */
    inline void SetUnit(const MetricUnit& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit for the metric data request.</p>
     */
    inline void SetUnit(MetricUnit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The unit for the metric data request.</p>
     */
    inline GetRelationalDatabaseMetricDataRequest& WithUnit(const MetricUnit& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit for the metric data request.</p>
     */
    inline GetRelationalDatabaseMetricDataRequest& WithUnit(MetricUnit&& value) { SetUnit(std::move(value)); return *this;}


    /**
     * <p>The array of statistics for your metric data request.</p>
     */
    inline const Aws::Vector<MetricStatistic>& GetStatistics() const{ return m_statistics; }

    /**
     * <p>The array of statistics for your metric data request.</p>
     */
    inline bool StatisticsHasBeenSet() const { return m_statisticsHasBeenSet; }

    /**
     * <p>The array of statistics for your metric data request.</p>
     */
    inline void SetStatistics(const Aws::Vector<MetricStatistic>& value) { m_statisticsHasBeenSet = true; m_statistics = value; }

    /**
     * <p>The array of statistics for your metric data request.</p>
     */
    inline void SetStatistics(Aws::Vector<MetricStatistic>&& value) { m_statisticsHasBeenSet = true; m_statistics = std::move(value); }

    /**
     * <p>The array of statistics for your metric data request.</p>
     */
    inline GetRelationalDatabaseMetricDataRequest& WithStatistics(const Aws::Vector<MetricStatistic>& value) { SetStatistics(value); return *this;}

    /**
     * <p>The array of statistics for your metric data request.</p>
     */
    inline GetRelationalDatabaseMetricDataRequest& WithStatistics(Aws::Vector<MetricStatistic>&& value) { SetStatistics(std::move(value)); return *this;}

    /**
     * <p>The array of statistics for your metric data request.</p>
     */
    inline GetRelationalDatabaseMetricDataRequest& AddStatistics(const MetricStatistic& value) { m_statisticsHasBeenSet = true; m_statistics.push_back(value); return *this; }

    /**
     * <p>The array of statistics for your metric data request.</p>
     */
    inline GetRelationalDatabaseMetricDataRequest& AddStatistics(MetricStatistic&& value) { m_statisticsHasBeenSet = true; m_statistics.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_relationalDatabaseName;
    bool m_relationalDatabaseNameHasBeenSet;

    RelationalDatabaseMetricName m_metricName;
    bool m_metricNameHasBeenSet;

    int m_period;
    bool m_periodHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;

    MetricUnit m_unit;
    bool m_unitHasBeenSet;

    Aws::Vector<MetricStatistic> m_statistics;
    bool m_statisticsHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
