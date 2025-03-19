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
    AWS_COSTEXPLORER_API ResultByTime() = default;
    AWS_COSTEXPLORER_API ResultByTime(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API ResultByTime& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time period that the result covers.</p>
     */
    inline const DateInterval& GetTimePeriod() const { return m_timePeriod; }
    inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }
    template<typename TimePeriodT = DateInterval>
    void SetTimePeriod(TimePeriodT&& value) { m_timePeriodHasBeenSet = true; m_timePeriod = std::forward<TimePeriodT>(value); }
    template<typename TimePeriodT = DateInterval>
    ResultByTime& WithTimePeriod(TimePeriodT&& value) { SetTimePeriod(std::forward<TimePeriodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total amount of cost or usage accrued during the time period.</p>
     */
    inline const Aws::Map<Aws::String, MetricValue>& GetTotal() const { return m_total; }
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }
    template<typename TotalT = Aws::Map<Aws::String, MetricValue>>
    void SetTotal(TotalT&& value) { m_totalHasBeenSet = true; m_total = std::forward<TotalT>(value); }
    template<typename TotalT = Aws::Map<Aws::String, MetricValue>>
    ResultByTime& WithTotal(TotalT&& value) { SetTotal(std::forward<TotalT>(value)); return *this;}
    template<typename TotalKeyT = Aws::String, typename TotalValueT = MetricValue>
    ResultByTime& AddTotal(TotalKeyT&& key, TotalValueT&& value) {
      m_totalHasBeenSet = true; m_total.emplace(std::forward<TotalKeyT>(key), std::forward<TotalValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The groups that this time period includes.</p>
     */
    inline const Aws::Vector<Group>& GetGroups() const { return m_groups; }
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
    template<typename GroupsT = Aws::Vector<Group>>
    void SetGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups = std::forward<GroupsT>(value); }
    template<typename GroupsT = Aws::Vector<Group>>
    ResultByTime& WithGroups(GroupsT&& value) { SetGroups(std::forward<GroupsT>(value)); return *this;}
    template<typename GroupsT = Group>
    ResultByTime& AddGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups.emplace_back(std::forward<GroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Determines whether the result is estimated.</p>
     */
    inline bool GetEstimated() const { return m_estimated; }
    inline bool EstimatedHasBeenSet() const { return m_estimatedHasBeenSet; }
    inline void SetEstimated(bool value) { m_estimatedHasBeenSet = true; m_estimated = value; }
    inline ResultByTime& WithEstimated(bool value) { SetEstimated(value); return *this;}
    ///@}
  private:

    DateInterval m_timePeriod;
    bool m_timePeriodHasBeenSet = false;

    Aws::Map<Aws::String, MetricValue> m_total;
    bool m_totalHasBeenSet = false;

    Aws::Vector<Group> m_groups;
    bool m_groupsHasBeenSet = false;

    bool m_estimated{false};
    bool m_estimatedHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
