/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/model/RouteDriverScheduleInterval.h>
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
   * <p>Driver related options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteDriverOptions">AWS
   * API Reference</a></p>
   */
  class RouteDriverOptions
  {
  public:
    AWS_GEOROUTES_API RouteDriverOptions() = default;
    AWS_GEOROUTES_API RouteDriverOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteDriverOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Driver work-rest schedule. Stops are added to fulfil the provided rest
     * schedule.</p>
     */
    inline const Aws::Vector<RouteDriverScheduleInterval>& GetSchedule() const { return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    template<typename ScheduleT = Aws::Vector<RouteDriverScheduleInterval>>
    void SetSchedule(ScheduleT&& value) { m_scheduleHasBeenSet = true; m_schedule = std::forward<ScheduleT>(value); }
    template<typename ScheduleT = Aws::Vector<RouteDriverScheduleInterval>>
    RouteDriverOptions& WithSchedule(ScheduleT&& value) { SetSchedule(std::forward<ScheduleT>(value)); return *this;}
    template<typename ScheduleT = RouteDriverScheduleInterval>
    RouteDriverOptions& AddSchedule(ScheduleT&& value) { m_scheduleHasBeenSet = true; m_schedule.emplace_back(std::forward<ScheduleT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<RouteDriverScheduleInterval> m_schedule;
    bool m_scheduleHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
