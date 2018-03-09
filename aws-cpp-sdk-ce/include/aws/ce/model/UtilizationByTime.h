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
#include <aws/ce/model/ReservationAggregates.h>
#include <aws/ce/model/ReservationUtilizationGroup.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>The amount of utilization, in hours.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/UtilizationByTime">AWS
   * API Reference</a></p>
   */
  class AWS_COSTEXPLORER_API UtilizationByTime
  {
  public:
    UtilizationByTime();
    UtilizationByTime(const Aws::Utils::Json::JsonValue& jsonValue);
    UtilizationByTime& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The period of time over which this utilization was used.</p>
     */
    inline const DateInterval& GetTimePeriod() const{ return m_timePeriod; }

    /**
     * <p>The period of time over which this utilization was used.</p>
     */
    inline void SetTimePeriod(const DateInterval& value) { m_timePeriodHasBeenSet = true; m_timePeriod = value; }

    /**
     * <p>The period of time over which this utilization was used.</p>
     */
    inline void SetTimePeriod(DateInterval&& value) { m_timePeriodHasBeenSet = true; m_timePeriod = std::move(value); }

    /**
     * <p>The period of time over which this utilization was used.</p>
     */
    inline UtilizationByTime& WithTimePeriod(const DateInterval& value) { SetTimePeriod(value); return *this;}

    /**
     * <p>The period of time over which this utilization was used.</p>
     */
    inline UtilizationByTime& WithTimePeriod(DateInterval&& value) { SetTimePeriod(std::move(value)); return *this;}


    /**
     * <p>The groups that are included in this utilization result.</p>
     */
    inline const Aws::Vector<ReservationUtilizationGroup>& GetGroups() const{ return m_groups; }

    /**
     * <p>The groups that are included in this utilization result.</p>
     */
    inline void SetGroups(const Aws::Vector<ReservationUtilizationGroup>& value) { m_groupsHasBeenSet = true; m_groups = value; }

    /**
     * <p>The groups that are included in this utilization result.</p>
     */
    inline void SetGroups(Aws::Vector<ReservationUtilizationGroup>&& value) { m_groupsHasBeenSet = true; m_groups = std::move(value); }

    /**
     * <p>The groups that are included in this utilization result.</p>
     */
    inline UtilizationByTime& WithGroups(const Aws::Vector<ReservationUtilizationGroup>& value) { SetGroups(value); return *this;}

    /**
     * <p>The groups that are included in this utilization result.</p>
     */
    inline UtilizationByTime& WithGroups(Aws::Vector<ReservationUtilizationGroup>&& value) { SetGroups(std::move(value)); return *this;}

    /**
     * <p>The groups that are included in this utilization result.</p>
     */
    inline UtilizationByTime& AddGroups(const ReservationUtilizationGroup& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

    /**
     * <p>The groups that are included in this utilization result.</p>
     */
    inline UtilizationByTime& AddGroups(ReservationUtilizationGroup&& value) { m_groupsHasBeenSet = true; m_groups.push_back(std::move(value)); return *this; }


    /**
     * <p>The total number of RI hours that were used.</p>
     */
    inline const ReservationAggregates& GetTotal() const{ return m_total; }

    /**
     * <p>The total number of RI hours that were used.</p>
     */
    inline void SetTotal(const ReservationAggregates& value) { m_totalHasBeenSet = true; m_total = value; }

    /**
     * <p>The total number of RI hours that were used.</p>
     */
    inline void SetTotal(ReservationAggregates&& value) { m_totalHasBeenSet = true; m_total = std::move(value); }

    /**
     * <p>The total number of RI hours that were used.</p>
     */
    inline UtilizationByTime& WithTotal(const ReservationAggregates& value) { SetTotal(value); return *this;}

    /**
     * <p>The total number of RI hours that were used.</p>
     */
    inline UtilizationByTime& WithTotal(ReservationAggregates&& value) { SetTotal(std::move(value)); return *this;}

  private:

    DateInterval m_timePeriod;
    bool m_timePeriodHasBeenSet;

    Aws::Vector<ReservationUtilizationGroup> m_groups;
    bool m_groupsHasBeenSet;

    ReservationAggregates m_total;
    bool m_totalHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
