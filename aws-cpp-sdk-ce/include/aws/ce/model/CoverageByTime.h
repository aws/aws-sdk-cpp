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
  class AWS_COSTEXPLORER_API CoverageByTime
  {
  public:
    CoverageByTime();
    CoverageByTime(Aws::Utils::Json::JsonView jsonValue);
    CoverageByTime& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The period that this coverage was used over.</p>
     */
    inline const DateInterval& GetTimePeriod() const{ return m_timePeriod; }

    /**
     * <p>The period that this coverage was used over.</p>
     */
    inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }

    /**
     * <p>The period that this coverage was used over.</p>
     */
    inline void SetTimePeriod(const DateInterval& value) { m_timePeriodHasBeenSet = true; m_timePeriod = value; }

    /**
     * <p>The period that this coverage was used over.</p>
     */
    inline void SetTimePeriod(DateInterval&& value) { m_timePeriodHasBeenSet = true; m_timePeriod = std::move(value); }

    /**
     * <p>The period that this coverage was used over.</p>
     */
    inline CoverageByTime& WithTimePeriod(const DateInterval& value) { SetTimePeriod(value); return *this;}

    /**
     * <p>The period that this coverage was used over.</p>
     */
    inline CoverageByTime& WithTimePeriod(DateInterval&& value) { SetTimePeriod(std::move(value)); return *this;}


    /**
     * <p>The groups of instances that the reservation covered.</p>
     */
    inline const Aws::Vector<ReservationCoverageGroup>& GetGroups() const{ return m_groups; }

    /**
     * <p>The groups of instances that the reservation covered.</p>
     */
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }

    /**
     * <p>The groups of instances that the reservation covered.</p>
     */
    inline void SetGroups(const Aws::Vector<ReservationCoverageGroup>& value) { m_groupsHasBeenSet = true; m_groups = value; }

    /**
     * <p>The groups of instances that the reservation covered.</p>
     */
    inline void SetGroups(Aws::Vector<ReservationCoverageGroup>&& value) { m_groupsHasBeenSet = true; m_groups = std::move(value); }

    /**
     * <p>The groups of instances that the reservation covered.</p>
     */
    inline CoverageByTime& WithGroups(const Aws::Vector<ReservationCoverageGroup>& value) { SetGroups(value); return *this;}

    /**
     * <p>The groups of instances that the reservation covered.</p>
     */
    inline CoverageByTime& WithGroups(Aws::Vector<ReservationCoverageGroup>&& value) { SetGroups(std::move(value)); return *this;}

    /**
     * <p>The groups of instances that the reservation covered.</p>
     */
    inline CoverageByTime& AddGroups(const ReservationCoverageGroup& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

    /**
     * <p>The groups of instances that the reservation covered.</p>
     */
    inline CoverageByTime& AddGroups(ReservationCoverageGroup&& value) { m_groupsHasBeenSet = true; m_groups.push_back(std::move(value)); return *this; }


    /**
     * <p>The total reservation coverage, in hours.</p>
     */
    inline const Coverage& GetTotal() const{ return m_total; }

    /**
     * <p>The total reservation coverage, in hours.</p>
     */
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }

    /**
     * <p>The total reservation coverage, in hours.</p>
     */
    inline void SetTotal(const Coverage& value) { m_totalHasBeenSet = true; m_total = value; }

    /**
     * <p>The total reservation coverage, in hours.</p>
     */
    inline void SetTotal(Coverage&& value) { m_totalHasBeenSet = true; m_total = std::move(value); }

    /**
     * <p>The total reservation coverage, in hours.</p>
     */
    inline CoverageByTime& WithTotal(const Coverage& value) { SetTotal(value); return *this;}

    /**
     * <p>The total reservation coverage, in hours.</p>
     */
    inline CoverageByTime& WithTotal(Coverage&& value) { SetTotal(std::move(value)); return *this;}

  private:

    DateInterval m_timePeriod;
    bool m_timePeriodHasBeenSet;

    Aws::Vector<ReservationCoverageGroup> m_groups;
    bool m_groupsHasBeenSet;

    Coverage m_total;
    bool m_totalHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
