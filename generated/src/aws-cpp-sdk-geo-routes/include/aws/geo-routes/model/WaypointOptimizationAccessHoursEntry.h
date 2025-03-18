/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/DayOfWeek.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace GeoRoutes
{
namespace Model
{

  /**
   * <p>Hours of entry.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/WaypointOptimizationAccessHoursEntry">AWS
   * API Reference</a></p>
   */
  class WaypointOptimizationAccessHoursEntry
  {
  public:
    AWS_GEOROUTES_API WaypointOptimizationAccessHoursEntry() = default;
    AWS_GEOROUTES_API WaypointOptimizationAccessHoursEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API WaypointOptimizationAccessHoursEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Day of the week.</p>
     */
    inline DayOfWeek GetDayOfWeek() const { return m_dayOfWeek; }
    inline bool DayOfWeekHasBeenSet() const { return m_dayOfWeekHasBeenSet; }
    inline void SetDayOfWeek(DayOfWeek value) { m_dayOfWeekHasBeenSet = true; m_dayOfWeek = value; }
    inline WaypointOptimizationAccessHoursEntry& WithDayOfWeek(DayOfWeek value) { SetDayOfWeek(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time of the day.</p>
     */
    inline const Aws::String& GetTimeOfDay() const { return m_timeOfDay; }
    inline bool TimeOfDayHasBeenSet() const { return m_timeOfDayHasBeenSet; }
    template<typename TimeOfDayT = Aws::String>
    void SetTimeOfDay(TimeOfDayT&& value) { m_timeOfDayHasBeenSet = true; m_timeOfDay = std::forward<TimeOfDayT>(value); }
    template<typename TimeOfDayT = Aws::String>
    WaypointOptimizationAccessHoursEntry& WithTimeOfDay(TimeOfDayT&& value) { SetTimeOfDay(std::forward<TimeOfDayT>(value)); return *this;}
    ///@}
  private:

    DayOfWeek m_dayOfWeek{DayOfWeek::NOT_SET};
    bool m_dayOfWeekHasBeenSet = false;

    Aws::String m_timeOfDay;
    bool m_timeOfDayHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
