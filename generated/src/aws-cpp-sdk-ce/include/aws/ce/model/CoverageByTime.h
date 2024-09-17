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
    AWS_COSTEXPLORER_API CoverageByTime();
    AWS_COSTEXPLORER_API CoverageByTime(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API CoverageByTime& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The period that this coverage was used over.</p>
     */
    inline const DateInterval& GetTimePeriod() const{ return m_timePeriod; }
    inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }
    inline void SetTimePeriod(const DateInterval& value) { m_timePeriodHasBeenSet = true; m_timePeriod = value; }
    inline void SetTimePeriod(DateInterval&& value) { m_timePeriodHasBeenSet = true; m_timePeriod = std::move(value); }
    inline CoverageByTime& WithTimePeriod(const DateInterval& value) { SetTimePeriod(value); return *this;}
    inline CoverageByTime& WithTimePeriod(DateInterval&& value) { SetTimePeriod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The groups of instances that the reservation covered.</p>
     */
    inline const Aws::Vector<ReservationCoverageGroup>& GetGroups() const{ return m_groups; }
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
    inline void SetGroups(const Aws::Vector<ReservationCoverageGroup>& value) { m_groupsHasBeenSet = true; m_groups = value; }
    inline void SetGroups(Aws::Vector<ReservationCoverageGroup>&& value) { m_groupsHasBeenSet = true; m_groups = std::move(value); }
    inline CoverageByTime& WithGroups(const Aws::Vector<ReservationCoverageGroup>& value) { SetGroups(value); return *this;}
    inline CoverageByTime& WithGroups(Aws::Vector<ReservationCoverageGroup>&& value) { SetGroups(std::move(value)); return *this;}
    inline CoverageByTime& AddGroups(const ReservationCoverageGroup& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }
    inline CoverageByTime& AddGroups(ReservationCoverageGroup&& value) { m_groupsHasBeenSet = true; m_groups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The total reservation coverage, in hours.</p>
     */
    inline const Coverage& GetTotal() const{ return m_total; }
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }
    inline void SetTotal(const Coverage& value) { m_totalHasBeenSet = true; m_total = value; }
    inline void SetTotal(Coverage&& value) { m_totalHasBeenSet = true; m_total = std::move(value); }
    inline CoverageByTime& WithTotal(const Coverage& value) { SetTotal(value); return *this;}
    inline CoverageByTime& WithTotal(Coverage&& value) { SetTotal(std::move(value)); return *this;}
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
