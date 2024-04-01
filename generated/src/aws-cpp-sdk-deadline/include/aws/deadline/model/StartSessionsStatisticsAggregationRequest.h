/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/model/Period.h>
#include <aws/deadline/model/SessionsStatisticsResources.h>
#include <aws/deadline/model/UsageGroupByField.h>
#include <aws/deadline/model/UsageStatistic.h>
#include <utility>

namespace Aws
{
namespace deadline
{
namespace Model
{

  /**
   */
  class StartSessionsStatisticsAggregationRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API StartSessionsStatisticsAggregationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartSessionsStatisticsAggregation"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;


    /**
     * <p>The Linux timestamp of the date and time that the statistics end.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The Linux timestamp of the date and time that the statistics end.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The Linux timestamp of the date and time that the statistics end.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The Linux timestamp of the date and time that the statistics end.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The Linux timestamp of the date and time that the statistics end.</p>
     */
    inline StartSessionsStatisticsAggregationRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The Linux timestamp of the date and time that the statistics end.</p>
     */
    inline StartSessionsStatisticsAggregationRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The identifier of the farm that contains queues or fleets to return
     * statistics for.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }

    /**
     * <p>The identifier of the farm that contains queues or fleets to return
     * statistics for.</p>
     */
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }

    /**
     * <p>The identifier of the farm that contains queues or fleets to return
     * statistics for.</p>
     */
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }

    /**
     * <p>The identifier of the farm that contains queues or fleets to return
     * statistics for.</p>
     */
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }

    /**
     * <p>The identifier of the farm that contains queues or fleets to return
     * statistics for.</p>
     */
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }

    /**
     * <p>The identifier of the farm that contains queues or fleets to return
     * statistics for.</p>
     */
    inline StartSessionsStatisticsAggregationRequest& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}

    /**
     * <p>The identifier of the farm that contains queues or fleets to return
     * statistics for.</p>
     */
    inline StartSessionsStatisticsAggregationRequest& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the farm that contains queues or fleets to return
     * statistics for.</p>
     */
    inline StartSessionsStatisticsAggregationRequest& WithFarmId(const char* value) { SetFarmId(value); return *this;}


    /**
     * <p>The field to use to group the statistics.</p>
     */
    inline const Aws::Vector<UsageGroupByField>& GetGroupBy() const{ return m_groupBy; }

    /**
     * <p>The field to use to group the statistics.</p>
     */
    inline bool GroupByHasBeenSet() const { return m_groupByHasBeenSet; }

    /**
     * <p>The field to use to group the statistics.</p>
     */
    inline void SetGroupBy(const Aws::Vector<UsageGroupByField>& value) { m_groupByHasBeenSet = true; m_groupBy = value; }

    /**
     * <p>The field to use to group the statistics.</p>
     */
    inline void SetGroupBy(Aws::Vector<UsageGroupByField>&& value) { m_groupByHasBeenSet = true; m_groupBy = std::move(value); }

    /**
     * <p>The field to use to group the statistics.</p>
     */
    inline StartSessionsStatisticsAggregationRequest& WithGroupBy(const Aws::Vector<UsageGroupByField>& value) { SetGroupBy(value); return *this;}

    /**
     * <p>The field to use to group the statistics.</p>
     */
    inline StartSessionsStatisticsAggregationRequest& WithGroupBy(Aws::Vector<UsageGroupByField>&& value) { SetGroupBy(std::move(value)); return *this;}

    /**
     * <p>The field to use to group the statistics.</p>
     */
    inline StartSessionsStatisticsAggregationRequest& AddGroupBy(const UsageGroupByField& value) { m_groupByHasBeenSet = true; m_groupBy.push_back(value); return *this; }

    /**
     * <p>The field to use to group the statistics.</p>
     */
    inline StartSessionsStatisticsAggregationRequest& AddGroupBy(UsageGroupByField&& value) { m_groupByHasBeenSet = true; m_groupBy.push_back(std::move(value)); return *this; }


    /**
     * <p>The period to aggregate the statistics.</p>
     */
    inline const Period& GetPeriod() const{ return m_period; }

    /**
     * <p>The period to aggregate the statistics.</p>
     */
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }

    /**
     * <p>The period to aggregate the statistics.</p>
     */
    inline void SetPeriod(const Period& value) { m_periodHasBeenSet = true; m_period = value; }

    /**
     * <p>The period to aggregate the statistics.</p>
     */
    inline void SetPeriod(Period&& value) { m_periodHasBeenSet = true; m_period = std::move(value); }

    /**
     * <p>The period to aggregate the statistics.</p>
     */
    inline StartSessionsStatisticsAggregationRequest& WithPeriod(const Period& value) { SetPeriod(value); return *this;}

    /**
     * <p>The period to aggregate the statistics.</p>
     */
    inline StartSessionsStatisticsAggregationRequest& WithPeriod(Period&& value) { SetPeriod(std::move(value)); return *this;}


    /**
     * <p>A list of fleet IDs or queue IDs to gather statistics for.</p>
     */
    inline const SessionsStatisticsResources& GetResourceIds() const{ return m_resourceIds; }

    /**
     * <p>A list of fleet IDs or queue IDs to gather statistics for.</p>
     */
    inline bool ResourceIdsHasBeenSet() const { return m_resourceIdsHasBeenSet; }

    /**
     * <p>A list of fleet IDs or queue IDs to gather statistics for.</p>
     */
    inline void SetResourceIds(const SessionsStatisticsResources& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = value; }

    /**
     * <p>A list of fleet IDs or queue IDs to gather statistics for.</p>
     */
    inline void SetResourceIds(SessionsStatisticsResources&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = std::move(value); }

    /**
     * <p>A list of fleet IDs or queue IDs to gather statistics for.</p>
     */
    inline StartSessionsStatisticsAggregationRequest& WithResourceIds(const SessionsStatisticsResources& value) { SetResourceIds(value); return *this;}

    /**
     * <p>A list of fleet IDs or queue IDs to gather statistics for.</p>
     */
    inline StartSessionsStatisticsAggregationRequest& WithResourceIds(SessionsStatisticsResources&& value) { SetResourceIds(std::move(value)); return *this;}


    /**
     * <p>The Linux timestamp of the date and time that the statistics start.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The Linux timestamp of the date and time that the statistics start.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The Linux timestamp of the date and time that the statistics start.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The Linux timestamp of the date and time that the statistics start.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The Linux timestamp of the date and time that the statistics start.</p>
     */
    inline StartSessionsStatisticsAggregationRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The Linux timestamp of the date and time that the statistics start.</p>
     */
    inline StartSessionsStatisticsAggregationRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>One to four statistics to return.</p>
     */
    inline const Aws::Vector<UsageStatistic>& GetStatistics() const{ return m_statistics; }

    /**
     * <p>One to four statistics to return.</p>
     */
    inline bool StatisticsHasBeenSet() const { return m_statisticsHasBeenSet; }

    /**
     * <p>One to four statistics to return.</p>
     */
    inline void SetStatistics(const Aws::Vector<UsageStatistic>& value) { m_statisticsHasBeenSet = true; m_statistics = value; }

    /**
     * <p>One to four statistics to return.</p>
     */
    inline void SetStatistics(Aws::Vector<UsageStatistic>&& value) { m_statisticsHasBeenSet = true; m_statistics = std::move(value); }

    /**
     * <p>One to four statistics to return.</p>
     */
    inline StartSessionsStatisticsAggregationRequest& WithStatistics(const Aws::Vector<UsageStatistic>& value) { SetStatistics(value); return *this;}

    /**
     * <p>One to four statistics to return.</p>
     */
    inline StartSessionsStatisticsAggregationRequest& WithStatistics(Aws::Vector<UsageStatistic>&& value) { SetStatistics(std::move(value)); return *this;}

    /**
     * <p>One to four statistics to return.</p>
     */
    inline StartSessionsStatisticsAggregationRequest& AddStatistics(const UsageStatistic& value) { m_statisticsHasBeenSet = true; m_statistics.push_back(value); return *this; }

    /**
     * <p>One to four statistics to return.</p>
     */
    inline StartSessionsStatisticsAggregationRequest& AddStatistics(UsageStatistic&& value) { m_statisticsHasBeenSet = true; m_statistics.push_back(std::move(value)); return *this; }


    /**
     * <p>The timezone to use for the statistics. Use UTC notation such as "UTC+8."</p>
     */
    inline const Aws::String& GetTimezone() const{ return m_timezone; }

    /**
     * <p>The timezone to use for the statistics. Use UTC notation such as "UTC+8."</p>
     */
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }

    /**
     * <p>The timezone to use for the statistics. Use UTC notation such as "UTC+8."</p>
     */
    inline void SetTimezone(const Aws::String& value) { m_timezoneHasBeenSet = true; m_timezone = value; }

    /**
     * <p>The timezone to use for the statistics. Use UTC notation such as "UTC+8."</p>
     */
    inline void SetTimezone(Aws::String&& value) { m_timezoneHasBeenSet = true; m_timezone = std::move(value); }

    /**
     * <p>The timezone to use for the statistics. Use UTC notation such as "UTC+8."</p>
     */
    inline void SetTimezone(const char* value) { m_timezoneHasBeenSet = true; m_timezone.assign(value); }

    /**
     * <p>The timezone to use for the statistics. Use UTC notation such as "UTC+8."</p>
     */
    inline StartSessionsStatisticsAggregationRequest& WithTimezone(const Aws::String& value) { SetTimezone(value); return *this;}

    /**
     * <p>The timezone to use for the statistics. Use UTC notation such as "UTC+8."</p>
     */
    inline StartSessionsStatisticsAggregationRequest& WithTimezone(Aws::String&& value) { SetTimezone(std::move(value)); return *this;}

    /**
     * <p>The timezone to use for the statistics. Use UTC notation such as "UTC+8."</p>
     */
    inline StartSessionsStatisticsAggregationRequest& WithTimezone(const char* value) { SetTimezone(value); return *this;}

  private:

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::Vector<UsageGroupByField> m_groupBy;
    bool m_groupByHasBeenSet = false;

    Period m_period;
    bool m_periodHasBeenSet = false;

    SessionsStatisticsResources m_resourceIds;
    bool m_resourceIdsHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Vector<UsageStatistic> m_statistics;
    bool m_statisticsHasBeenSet = false;

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
