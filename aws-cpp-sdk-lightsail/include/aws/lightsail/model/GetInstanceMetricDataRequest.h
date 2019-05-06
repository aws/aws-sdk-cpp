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
  class AWS_LIGHTSAIL_API GetInstanceMetricDataRequest : public LightsailRequest
  {
  public:
    GetInstanceMetricDataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetInstanceMetricData"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the instance for which you want to get metrics data.</p>
     */
    inline const Aws::String& GetInstanceName() const{ return m_instanceName; }

    /**
     * <p>The name of the instance for which you want to get metrics data.</p>
     */
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }

    /**
     * <p>The name of the instance for which you want to get metrics data.</p>
     */
    inline void SetInstanceName(const Aws::String& value) { m_instanceNameHasBeenSet = true; m_instanceName = value; }

    /**
     * <p>The name of the instance for which you want to get metrics data.</p>
     */
    inline void SetInstanceName(Aws::String&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::move(value); }

    /**
     * <p>The name of the instance for which you want to get metrics data.</p>
     */
    inline void SetInstanceName(const char* value) { m_instanceNameHasBeenSet = true; m_instanceName.assign(value); }

    /**
     * <p>The name of the instance for which you want to get metrics data.</p>
     */
    inline GetInstanceMetricDataRequest& WithInstanceName(const Aws::String& value) { SetInstanceName(value); return *this;}

    /**
     * <p>The name of the instance for which you want to get metrics data.</p>
     */
    inline GetInstanceMetricDataRequest& WithInstanceName(Aws::String&& value) { SetInstanceName(std::move(value)); return *this;}

    /**
     * <p>The name of the instance for which you want to get metrics data.</p>
     */
    inline GetInstanceMetricDataRequest& WithInstanceName(const char* value) { SetInstanceName(value); return *this;}


    /**
     * <p>The metric name to get data about. </p>
     */
    inline const InstanceMetricName& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The metric name to get data about. </p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>The metric name to get data about. </p>
     */
    inline void SetMetricName(const InstanceMetricName& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The metric name to get data about. </p>
     */
    inline void SetMetricName(InstanceMetricName&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>The metric name to get data about. </p>
     */
    inline GetInstanceMetricDataRequest& WithMetricName(const InstanceMetricName& value) { SetMetricName(value); return *this;}

    /**
     * <p>The metric name to get data about. </p>
     */
    inline GetInstanceMetricDataRequest& WithMetricName(InstanceMetricName&& value) { SetMetricName(std::move(value)); return *this;}


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
    inline GetInstanceMetricDataRequest& WithPeriod(int value) { SetPeriod(value); return *this;}


    /**
     * <p>The start time of the time period.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start time of the time period.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start time of the time period.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start time of the time period.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start time of the time period.</p>
     */
    inline GetInstanceMetricDataRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start time of the time period.</p>
     */
    inline GetInstanceMetricDataRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The end time of the time period.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end time of the time period.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end time of the time period.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end time of the time period.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end time of the time period.</p>
     */
    inline GetInstanceMetricDataRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end time of the time period.</p>
     */
    inline GetInstanceMetricDataRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The unit. The list of valid values is below.</p>
     */
    inline const MetricUnit& GetUnit() const{ return m_unit; }

    /**
     * <p>The unit. The list of valid values is below.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The unit. The list of valid values is below.</p>
     */
    inline void SetUnit(const MetricUnit& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit. The list of valid values is below.</p>
     */
    inline void SetUnit(MetricUnit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The unit. The list of valid values is below.</p>
     */
    inline GetInstanceMetricDataRequest& WithUnit(const MetricUnit& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit. The list of valid values is below.</p>
     */
    inline GetInstanceMetricDataRequest& WithUnit(MetricUnit&& value) { SetUnit(std::move(value)); return *this;}


    /**
     * <p>The instance statistics. </p>
     */
    inline const Aws::Vector<MetricStatistic>& GetStatistics() const{ return m_statistics; }

    /**
     * <p>The instance statistics. </p>
     */
    inline bool StatisticsHasBeenSet() const { return m_statisticsHasBeenSet; }

    /**
     * <p>The instance statistics. </p>
     */
    inline void SetStatistics(const Aws::Vector<MetricStatistic>& value) { m_statisticsHasBeenSet = true; m_statistics = value; }

    /**
     * <p>The instance statistics. </p>
     */
    inline void SetStatistics(Aws::Vector<MetricStatistic>&& value) { m_statisticsHasBeenSet = true; m_statistics = std::move(value); }

    /**
     * <p>The instance statistics. </p>
     */
    inline GetInstanceMetricDataRequest& WithStatistics(const Aws::Vector<MetricStatistic>& value) { SetStatistics(value); return *this;}

    /**
     * <p>The instance statistics. </p>
     */
    inline GetInstanceMetricDataRequest& WithStatistics(Aws::Vector<MetricStatistic>&& value) { SetStatistics(std::move(value)); return *this;}

    /**
     * <p>The instance statistics. </p>
     */
    inline GetInstanceMetricDataRequest& AddStatistics(const MetricStatistic& value) { m_statisticsHasBeenSet = true; m_statistics.push_back(value); return *this; }

    /**
     * <p>The instance statistics. </p>
     */
    inline GetInstanceMetricDataRequest& AddStatistics(MetricStatistic&& value) { m_statisticsHasBeenSet = true; m_statistics.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet;

    InstanceMetricName m_metricName;
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
