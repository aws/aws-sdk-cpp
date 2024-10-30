/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Geometry of the area to be avoided.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/WaypointOptimizationAvoidanceAreaGeometry">AWS
   * API Reference</a></p>
   */
  class WaypointOptimizationAvoidanceAreaGeometry
  {
  public:
    AWS_GEOROUTES_API WaypointOptimizationAvoidanceAreaGeometry();
    AWS_GEOROUTES_API WaypointOptimizationAvoidanceAreaGeometry(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API WaypointOptimizationAvoidanceAreaGeometry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Geometry defined as a bounding box. The first pair represents the X and Y
     * coordinates (longitude and latitude,) of the southwest corner of the bounding
     * box; the second pair represents the X and Y coordinates (longitude and latitude)
     * of the northeast corner.</p>
     */
    inline const Aws::Vector<double>& GetBoundingBox() const{ return m_boundingBox; }
    inline bool BoundingBoxHasBeenSet() const { return m_boundingBoxHasBeenSet; }
    inline void SetBoundingBox(const Aws::Vector<double>& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = value; }
    inline void SetBoundingBox(Aws::Vector<double>&& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = std::move(value); }
    inline WaypointOptimizationAvoidanceAreaGeometry& WithBoundingBox(const Aws::Vector<double>& value) { SetBoundingBox(value); return *this;}
    inline WaypointOptimizationAvoidanceAreaGeometry& WithBoundingBox(Aws::Vector<double>&& value) { SetBoundingBox(std::move(value)); return *this;}
    inline WaypointOptimizationAvoidanceAreaGeometry& AddBoundingBox(double value) { m_boundingBoxHasBeenSet = true; m_boundingBox.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<double> m_boundingBox;
    bool m_boundingBoxHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
