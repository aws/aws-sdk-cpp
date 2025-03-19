/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Interpolated geometry for the snapped route that is overlay-able onto a
   * map.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RoadSnapSnappedGeometry">AWS
   * API Reference</a></p>
   */
  class RoadSnapSnappedGeometry
  {
  public:
    AWS_GEOROUTES_API RoadSnapSnappedGeometry() = default;
    AWS_GEOROUTES_API RoadSnapSnappedGeometry(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RoadSnapSnappedGeometry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An ordered list of positions used to plot a route on a map.</p> 
     * <p>LineString and Polyline are mutually exclusive properties.</p> 
     */
    inline const Aws::Vector<Aws::Vector<double>>& GetLineString() const { return m_lineString; }
    inline bool LineStringHasBeenSet() const { return m_lineStringHasBeenSet; }
    template<typename LineStringT = Aws::Vector<Aws::Vector<double>>>
    void SetLineString(LineStringT&& value) { m_lineStringHasBeenSet = true; m_lineString = std::forward<LineStringT>(value); }
    template<typename LineStringT = Aws::Vector<Aws::Vector<double>>>
    RoadSnapSnappedGeometry& WithLineString(LineStringT&& value) { SetLineString(std::forward<LineStringT>(value)); return *this;}
    template<typename LineStringT = Aws::Vector<double>>
    RoadSnapSnappedGeometry& AddLineString(LineStringT&& value) { m_lineStringHasBeenSet = true; m_lineString.emplace_back(std::forward<LineStringT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An ordered list of positions used to plot a route on a map in a lossy
     * compression format.</p>  <p>LineString and Polyline are mutually exclusive
     * properties.</p> 
     */
    inline const Aws::String& GetPolyline() const { return m_polyline; }
    inline bool PolylineHasBeenSet() const { return m_polylineHasBeenSet; }
    template<typename PolylineT = Aws::String>
    void SetPolyline(PolylineT&& value) { m_polylineHasBeenSet = true; m_polyline = std::forward<PolylineT>(value); }
    template<typename PolylineT = Aws::String>
    RoadSnapSnappedGeometry& WithPolyline(PolylineT&& value) { SetPolyline(std::forward<PolylineT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::Vector<double>> m_lineString;
    bool m_lineStringHasBeenSet = false;

    Aws::String m_polyline;
    bool m_polylineHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
