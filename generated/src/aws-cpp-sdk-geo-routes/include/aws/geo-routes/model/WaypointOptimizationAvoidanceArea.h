/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/WaypointOptimizationAvoidanceAreaGeometry.h>
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
   * <p>The area to be avoided.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/WaypointOptimizationAvoidanceArea">AWS
   * API Reference</a></p>
   */
  class WaypointOptimizationAvoidanceArea
  {
  public:
    AWS_GEOROUTES_API WaypointOptimizationAvoidanceArea();
    AWS_GEOROUTES_API WaypointOptimizationAvoidanceArea(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API WaypointOptimizationAvoidanceArea& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Geometry of the area to be avoided.</p>
     */
    inline const WaypointOptimizationAvoidanceAreaGeometry& GetGeometry() const{ return m_geometry; }
    inline bool GeometryHasBeenSet() const { return m_geometryHasBeenSet; }
    inline void SetGeometry(const WaypointOptimizationAvoidanceAreaGeometry& value) { m_geometryHasBeenSet = true; m_geometry = value; }
    inline void SetGeometry(WaypointOptimizationAvoidanceAreaGeometry&& value) { m_geometryHasBeenSet = true; m_geometry = std::move(value); }
    inline WaypointOptimizationAvoidanceArea& WithGeometry(const WaypointOptimizationAvoidanceAreaGeometry& value) { SetGeometry(value); return *this;}
    inline WaypointOptimizationAvoidanceArea& WithGeometry(WaypointOptimizationAvoidanceAreaGeometry&& value) { SetGeometry(std::move(value)); return *this;}
    ///@}
  private:

    WaypointOptimizationAvoidanceAreaGeometry m_geometry;
    bool m_geometryHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
