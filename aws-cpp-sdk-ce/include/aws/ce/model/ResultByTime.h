/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/DateInterval.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/MetricValue.h>
#include <aws/ce/model/Group.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>The result that's associated with a time period.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/ResultByTime">AWS
   * API Reference</a></p>
   */
  class ResultByTime
  {
  public:
    AWS_COSTEXPLORER_API ResultByTime();
    AWS_COSTEXPLORER_API ResultByTime(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API ResultByTime& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time period that the result covers.</p>
     */
    inline const DateInterval& GetTimePeriod() const{ return m_timePeriod; }

    /**
     * <p>The time period that the result covers.</p>
     */
    inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }

    /**
     * <p>The time period that the result covers.</p>
     */
    inline void SetTimePeriod(const DateInterval& value) { m_timePeriodHasBeenSet = true; m_timePeriod = value; }

    /**
     * <p>The time period that the result covers.</p>
     */
    inline void SetTimePeriod(DateInterval&& value) { m_timePeriodHasBeenSet = true; m_timePeriod = std::move(value); }

    /**
     * <p>The time period that the result covers.</p>
     */
    inline ResultByTime& WithTimePeriod(const DateInterval& value) { SetTimePeriod(value); return *this;}

    /**
     * <p>The time period that the result covers.</p>
     */
    inline ResultByTime& WithTimePeriod(DateInterval&& value) { SetTimePeriod(std::move(value)); return *this;}


    /**
     * <p>The total amount of cost or usage accrued during the time period.</p>
     */
    inline const Aws::Map<Aws::String, MetricValue>& GetTotal() const{ return m_total; }

    /**
     * <p>The total amount of cost or usage accrued during the time period.</p>
     */
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }

    /**
     * <p>The total amount of cost or usage accrued during the time period.</p>
     */
    inline void SetTotal(const Aws::Map<Aws::String, MetricValue>& value) { m_totalHasBeenSet = true; m_total = value; }

    /**
     * <p>The total amount of cost or usage accrued during the time period.</p>
     */
    inline void SetTotal(Aws::Map<Aws::String, MetricValue>&& value) { m_totalHasBeenSet = true; m_total = std::move(value); }

    /**
     * <p>The total amount of cost or usage accrued during the time period.</p>
     */
    inline ResultByTime& WithTotal(const Aws::Map<Aws::String, MetricValue>& value) { SetTotal(value); return *this;}

    /**
     * <p>The total amount of cost or usage accrued during the time period.</p>
     */
    inline ResultByTime& WithTotal(Aws::Map<Aws::String, MetricValue>&& value) { SetTotal(std::move(value)); return *this;}

    /**
     * <p>The total amount of cost or usage accrued during the time period.</p>
     */
    inline ResultByTime& AddTotal(const Aws::String& key, const MetricValue& value) { m_totalHasBeenSet = true; m_total.emplace(key, value); return *this; }

    /**
     * <p>The total amount of cost or usage accrued during the time period.</p>
     */
    inline ResultByTime& AddTotal(Aws::String&& key, const MetricValue& value) { m_totalHasBeenSet = true; m_total.emplace(std::move(key), value); return *this; }

    /**
     * <p>The total amount of cost or usage accrued during the time period.</p>
     */
    inline ResultByTime& AddTotal(const Aws::String& key, MetricValue&& value) { m_totalHasBeenSet = true; m_total.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The total amount of cost or usage accrued during the time period.</p>
     */
    inline ResultByTime& AddTotal(Aws::String&& key, MetricValue&& value) { m_totalHasBeenSet = true; m_total.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The total amount of cost or usage accrued during the time period.</p>
     */
    inline ResultByTime& AddTotal(const char* key, MetricValue&& value) { m_totalHasBeenSet = true; m_total.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The total amount of cost or usage accrued during the time period.</p>
     */
    inline ResultByTime& AddTotal(const char* key, const MetricValue& value) { m_totalHasBeenSet = true; m_total.emplace(key, value); return *this; }


    /**
     * <p>The groups that this time period includes.</p>
     */
    inline const Aws::Vector<Group>& GetGroups() const{ return m_groups; }

    /**
     * <p>The groups that this time period includes.</p>
     */
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }

    /**
     * <p>The groups that this time period includes.</p>
     */
    inline void SetGroups(const Aws::Vector<Group>& value) { m_groupsHasBeenSet = true; m_groups = value; }

    /**
     * <p>The groups that this time period includes.</p>
     */
    inline void SetGroups(Aws::Vector<Group>&& value) { m_groupsHasBeenSet = true; m_groups = std::move(value); }

    /**
     * <p>The groups that this time period includes.</p>
     */
    inline ResultByTime& WithGroups(const Aws::Vector<Group>& value) { SetGroups(value); return *this;}

    /**
     * <p>The groups that this time period includes.</p>
     */
    inline ResultByTime& WithGroups(Aws::Vector<Group>&& value) { SetGroups(std::move(value)); return *this;}

    /**
     * <p>The groups that this time period includes.</p>
     */
    inline ResultByTime& AddGroups(const Group& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

    /**
     * <p>The groups that this time period includes.</p>
     */
    inline ResultByTime& AddGroups(Group&& value) { m_groupsHasBeenSet = true; m_groups.push_back(std::move(value)); return *this; }


    /**
     * <p>Determines whether the result is estimated.</p>
     */
    inline bool GetEstimated() const{ return m_estimated; }

    /**
     * <p>Determines whether the result is estimated.</p>
     */
    inline bool EstimatedHasBeenSet() const { return m_estimatedHasBeenSet; }

    /**
     * <p>Determines whether the result is estimated.</p>
     */
    inline void SetEstimated(bool value) { m_estimatedHasBeenSet = true; m_estimated = value; }

    /**
     * <p>Determines whether the result is estimated.</p>
     */
    inline ResultByTime& WithEstimated(bool value) { SetEstimated(value); return *this;}

  private:

    DateInterval m_timePeriod;
    bool m_timePeriodHasBeenSet = false;

    Aws::Map<Aws::String, MetricValue> m_total;
    bool m_totalHasBeenSet = false;

    Aws::Vector<Group> m_groups;
    bool m_groupsHasBeenSet = false;

    bool m_estimated;
    bool m_estimatedHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
