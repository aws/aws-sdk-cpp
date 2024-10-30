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
    AWS_GEOROUTES_API RouteDriverOptions();
    AWS_GEOROUTES_API RouteDriverOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteDriverOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Driver work-rest schedule. Stops are added to fulfil the provided rest
     * schedule.</p>
     */
    inline const Aws::Vector<RouteDriverScheduleInterval>& GetSchedule() const{ return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    inline void SetSchedule(const Aws::Vector<RouteDriverScheduleInterval>& value) { m_scheduleHasBeenSet = true; m_schedule = value; }
    inline void SetSchedule(Aws::Vector<RouteDriverScheduleInterval>&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }
    inline RouteDriverOptions& WithSchedule(const Aws::Vector<RouteDriverScheduleInterval>& value) { SetSchedule(value); return *this;}
    inline RouteDriverOptions& WithSchedule(Aws::Vector<RouteDriverScheduleInterval>&& value) { SetSchedule(std::move(value)); return *this;}
    inline RouteDriverOptions& AddSchedule(const RouteDriverScheduleInterval& value) { m_scheduleHasBeenSet = true; m_schedule.push_back(value); return *this; }
    inline RouteDriverOptions& AddSchedule(RouteDriverScheduleInterval&& value) { m_scheduleHasBeenSet = true; m_schedule.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<RouteDriverScheduleInterval> m_schedule;
    bool m_scheduleHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
