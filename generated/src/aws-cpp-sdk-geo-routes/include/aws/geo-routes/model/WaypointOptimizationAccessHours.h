/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/WaypointOptimizationAccessHoursEntry.h>
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
   * <p>Access hours corresponding to when a destination can be
   * visited.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/WaypointOptimizationAccessHours">AWS
   * API Reference</a></p>
   */
  class WaypointOptimizationAccessHours
  {
  public:
    AWS_GEOROUTES_API WaypointOptimizationAccessHours();
    AWS_GEOROUTES_API WaypointOptimizationAccessHours(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API WaypointOptimizationAccessHours& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains the ID of the starting waypoint in this connection.</p>
     */
    inline const WaypointOptimizationAccessHoursEntry& GetFrom() const{ return m_from; }
    inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }
    inline void SetFrom(const WaypointOptimizationAccessHoursEntry& value) { m_fromHasBeenSet = true; m_from = value; }
    inline void SetFrom(WaypointOptimizationAccessHoursEntry&& value) { m_fromHasBeenSet = true; m_from = std::move(value); }
    inline WaypointOptimizationAccessHours& WithFrom(const WaypointOptimizationAccessHoursEntry& value) { SetFrom(value); return *this;}
    inline WaypointOptimizationAccessHours& WithFrom(WaypointOptimizationAccessHoursEntry&& value) { SetFrom(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the ID of the ending waypoint in this connection.</p>
     */
    inline const WaypointOptimizationAccessHoursEntry& GetTo() const{ return m_to; }
    inline bool ToHasBeenSet() const { return m_toHasBeenSet; }
    inline void SetTo(const WaypointOptimizationAccessHoursEntry& value) { m_toHasBeenSet = true; m_to = value; }
    inline void SetTo(WaypointOptimizationAccessHoursEntry&& value) { m_toHasBeenSet = true; m_to = std::move(value); }
    inline WaypointOptimizationAccessHours& WithTo(const WaypointOptimizationAccessHoursEntry& value) { SetTo(value); return *this;}
    inline WaypointOptimizationAccessHours& WithTo(WaypointOptimizationAccessHoursEntry&& value) { SetTo(std::move(value)); return *this;}
    ///@}
  private:

    WaypointOptimizationAccessHoursEntry m_from;
    bool m_fromHasBeenSet = false;

    WaypointOptimizationAccessHoursEntry m_to;
    bool m_toHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
