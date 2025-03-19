/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/SessionsStatisticsResources.h>
#include <aws/core/utils/DateTime.h>
#include <aws/deadline/model/Period.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_DEADLINE_API StartSessionsStatisticsAggregationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartSessionsStatisticsAggregation"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the farm that contains queues or fleets to return
     * statistics for.</p>
     */
    inline const Aws::String& GetFarmId() const { return m_farmId; }
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
    template<typename FarmIdT = Aws::String>
    void SetFarmId(FarmIdT&& value) { m_farmIdHasBeenSet = true; m_farmId = std::forward<FarmIdT>(value); }
    template<typename FarmIdT = Aws::String>
    StartSessionsStatisticsAggregationRequest& WithFarmId(FarmIdT&& value) { SetFarmId(std::forward<FarmIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of fleet IDs or queue IDs to gather statistics for.</p>
     */
    inline const SessionsStatisticsResources& GetResourceIds() const { return m_resourceIds; }
    inline bool ResourceIdsHasBeenSet() const { return m_resourceIdsHasBeenSet; }
    template<typename ResourceIdsT = SessionsStatisticsResources>
    void SetResourceIds(ResourceIdsT&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = std::forward<ResourceIdsT>(value); }
    template<typename ResourceIdsT = SessionsStatisticsResources>
    StartSessionsStatisticsAggregationRequest& WithResourceIds(ResourceIdsT&& value) { SetResourceIds(std::forward<ResourceIdsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Linux timestamp of the date and time that the statistics start.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    StartSessionsStatisticsAggregationRequest& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Linux timestamp of the date and time that the statistics end.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    StartSessionsStatisticsAggregationRequest& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timezone to use for the statistics. Use UTC notation such as "UTC+8."</p>
     */
    inline const Aws::String& GetTimezone() const { return m_timezone; }
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }
    template<typename TimezoneT = Aws::String>
    void SetTimezone(TimezoneT&& value) { m_timezoneHasBeenSet = true; m_timezone = std::forward<TimezoneT>(value); }
    template<typename TimezoneT = Aws::String>
    StartSessionsStatisticsAggregationRequest& WithTimezone(TimezoneT&& value) { SetTimezone(std::forward<TimezoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The period to aggregate the statistics.</p>
     */
    inline Period GetPeriod() const { return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(Period value) { m_periodHasBeenSet = true; m_period = value; }
    inline StartSessionsStatisticsAggregationRequest& WithPeriod(Period value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field to use to group the statistics.</p>
     */
    inline const Aws::Vector<UsageGroupByField>& GetGroupBy() const { return m_groupBy; }
    inline bool GroupByHasBeenSet() const { return m_groupByHasBeenSet; }
    template<typename GroupByT = Aws::Vector<UsageGroupByField>>
    void SetGroupBy(GroupByT&& value) { m_groupByHasBeenSet = true; m_groupBy = std::forward<GroupByT>(value); }
    template<typename GroupByT = Aws::Vector<UsageGroupByField>>
    StartSessionsStatisticsAggregationRequest& WithGroupBy(GroupByT&& value) { SetGroupBy(std::forward<GroupByT>(value)); return *this;}
    inline StartSessionsStatisticsAggregationRequest& AddGroupBy(UsageGroupByField value) { m_groupByHasBeenSet = true; m_groupBy.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>One to four statistics to return.</p>
     */
    inline const Aws::Vector<UsageStatistic>& GetStatistics() const { return m_statistics; }
    inline bool StatisticsHasBeenSet() const { return m_statisticsHasBeenSet; }
    template<typename StatisticsT = Aws::Vector<UsageStatistic>>
    void SetStatistics(StatisticsT&& value) { m_statisticsHasBeenSet = true; m_statistics = std::forward<StatisticsT>(value); }
    template<typename StatisticsT = Aws::Vector<UsageStatistic>>
    StartSessionsStatisticsAggregationRequest& WithStatistics(StatisticsT&& value) { SetStatistics(std::forward<StatisticsT>(value)); return *this;}
    inline StartSessionsStatisticsAggregationRequest& AddStatistics(UsageStatistic value) { m_statisticsHasBeenSet = true; m_statistics.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    SessionsStatisticsResources m_resourceIds;
    bool m_resourceIdsHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet = false;

    Period m_period{Period::NOT_SET};
    bool m_periodHasBeenSet = false;

    Aws::Vector<UsageGroupByField> m_groupBy;
    bool m_groupByHasBeenSet = false;

    Aws::Vector<UsageStatistic> m_statistics;
    bool m_statisticsHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
