/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/DateInterval.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/Coverage.h>
#include <aws/ce/model/ReservationCoverageGroup.h>
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
   * <p>Reservation coverage for a specified period, in hours.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/CoverageByTime">AWS
   * API Reference</a></p>
   */
  class CoverageByTime
  {
  public:
    AWS_COSTEXPLORER_API CoverageByTime() = default;
    AWS_COSTEXPLORER_API CoverageByTime(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API CoverageByTime& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The period that this coverage was used over.</p>
     */
    inline const DateInterval& GetTimePeriod() const { return m_timePeriod; }
    inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }
    template<typename TimePeriodT = DateInterval>
    void SetTimePeriod(TimePeriodT&& value) { m_timePeriodHasBeenSet = true; m_timePeriod = std::forward<TimePeriodT>(value); }
    template<typename TimePeriodT = DateInterval>
    CoverageByTime& WithTimePeriod(TimePeriodT&& value) { SetTimePeriod(std::forward<TimePeriodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The groups of instances that the reservation covered.</p>
     */
    inline const Aws::Vector<ReservationCoverageGroup>& GetGroups() const { return m_groups; }
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
    template<typename GroupsT = Aws::Vector<ReservationCoverageGroup>>
    void SetGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups = std::forward<GroupsT>(value); }
    template<typename GroupsT = Aws::Vector<ReservationCoverageGroup>>
    CoverageByTime& WithGroups(GroupsT&& value) { SetGroups(std::forward<GroupsT>(value)); return *this;}
    template<typename GroupsT = ReservationCoverageGroup>
    CoverageByTime& AddGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups.emplace_back(std::forward<GroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The total reservation coverage, in hours.</p>
     */
    inline const Coverage& GetTotal() const { return m_total; }
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }
    template<typename TotalT = Coverage>
    void SetTotal(TotalT&& value) { m_totalHasBeenSet = true; m_total = std::forward<TotalT>(value); }
    template<typename TotalT = Coverage>
    CoverageByTime& WithTotal(TotalT&& value) { SetTotal(std::forward<TotalT>(value)); return *this;}
    ///@}
  private:

    DateInterval m_timePeriod;
    bool m_timePeriodHasBeenSet = false;

    Aws::Vector<ReservationCoverageGroup> m_groups;
    bool m_groupsHasBeenSet = false;

    Coverage m_total;
    bool m_totalHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
