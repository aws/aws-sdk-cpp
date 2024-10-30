/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/model/Corridor.h>
#include <aws/geo-routes/model/PolylineCorridor.h>
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
   * <p>The avoidance geometry, to be included while calculating the
   * route.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/IsolineAvoidanceAreaGeometry">AWS
   * API Reference</a></p>
   */
  class IsolineAvoidanceAreaGeometry
  {
  public:
    AWS_GEOROUTES_API IsolineAvoidanceAreaGeometry();
    AWS_GEOROUTES_API IsolineAvoidanceAreaGeometry(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API IsolineAvoidanceAreaGeometry& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline IsolineAvoidanceAreaGeometry& WithBoundingBox(const Aws::Vector<double>& value) { SetBoundingBox(value); return *this;}
    inline IsolineAvoidanceAreaGeometry& WithBoundingBox(Aws::Vector<double>&& value) { SetBoundingBox(std::move(value)); return *this;}
    inline IsolineAvoidanceAreaGeometry& AddBoundingBox(double value) { m_boundingBoxHasBeenSet = true; m_boundingBox.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Geometry defined as a corridor - a LineString with a radius that defines the
     * width of the corridor.</p>
     */
    inline const Corridor& GetCorridor() const{ return m_corridor; }
    inline bool CorridorHasBeenSet() const { return m_corridorHasBeenSet; }
    inline void SetCorridor(const Corridor& value) { m_corridorHasBeenSet = true; m_corridor = value; }
    inline void SetCorridor(Corridor&& value) { m_corridorHasBeenSet = true; m_corridor = std::move(value); }
    inline IsolineAvoidanceAreaGeometry& WithCorridor(const Corridor& value) { SetCorridor(value); return *this;}
    inline IsolineAvoidanceAreaGeometry& WithCorridor(Corridor&& value) { SetCorridor(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Polygon will be excluded for calculating isolines, the list can
     * only contain 1 polygon.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::Vector<double>>>& GetPolygon() const{ return m_polygon; }
    inline bool PolygonHasBeenSet() const { return m_polygonHasBeenSet; }
    inline void SetPolygon(const Aws::Vector<Aws::Vector<Aws::Vector<double>>>& value) { m_polygonHasBeenSet = true; m_polygon = value; }
    inline void SetPolygon(Aws::Vector<Aws::Vector<Aws::Vector<double>>>&& value) { m_polygonHasBeenSet = true; m_polygon = std::move(value); }
    inline IsolineAvoidanceAreaGeometry& WithPolygon(const Aws::Vector<Aws::Vector<Aws::Vector<double>>>& value) { SetPolygon(value); return *this;}
    inline IsolineAvoidanceAreaGeometry& WithPolygon(Aws::Vector<Aws::Vector<Aws::Vector<double>>>&& value) { SetPolygon(std::move(value)); return *this;}
    inline IsolineAvoidanceAreaGeometry& AddPolygon(const Aws::Vector<Aws::Vector<double>>& value) { m_polygonHasBeenSet = true; m_polygon.push_back(value); return *this; }
    inline IsolineAvoidanceAreaGeometry& AddPolygon(Aws::Vector<Aws::Vector<double>>&& value) { m_polygonHasBeenSet = true; m_polygon.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Geometry defined as an encoded corridor – a polyline with a radius that
     * defines the width of the corridor. For more information on polyline encoding,
     * see <a
     * href="https://github.com/heremaps/flexiblepolyline/blob/master/README.md">https://github.com/heremaps/flexiblepolyline/blob/master/README.md</a>.</p>
     */
    inline const PolylineCorridor& GetPolylineCorridor() const{ return m_polylineCorridor; }
    inline bool PolylineCorridorHasBeenSet() const { return m_polylineCorridorHasBeenSet; }
    inline void SetPolylineCorridor(const PolylineCorridor& value) { m_polylineCorridorHasBeenSet = true; m_polylineCorridor = value; }
    inline void SetPolylineCorridor(PolylineCorridor&& value) { m_polylineCorridorHasBeenSet = true; m_polylineCorridor = std::move(value); }
    inline IsolineAvoidanceAreaGeometry& WithPolylineCorridor(const PolylineCorridor& value) { SetPolylineCorridor(value); return *this;}
    inline IsolineAvoidanceAreaGeometry& WithPolylineCorridor(PolylineCorridor&& value) { SetPolylineCorridor(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of PolylinePolygon's that are excluded for calculating isolines, the
     * list can only contain 1 polygon. For more information on polyline encoding, see
     * <a
     * href="https://github.com/heremaps/flexiblepolyline/blob/master/README.md">https://github.com/heremaps/flexiblepolyline/blob/master/README.md</a>.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetPolylinePolygon() const{ return m_polylinePolygon; }
    inline bool PolylinePolygonHasBeenSet() const { return m_polylinePolygonHasBeenSet; }
    inline void SetPolylinePolygon(const Aws::Vector<Aws::String>& value) { m_polylinePolygonHasBeenSet = true; m_polylinePolygon = value; }
    inline void SetPolylinePolygon(Aws::Vector<Aws::String>&& value) { m_polylinePolygonHasBeenSet = true; m_polylinePolygon = std::move(value); }
    inline IsolineAvoidanceAreaGeometry& WithPolylinePolygon(const Aws::Vector<Aws::String>& value) { SetPolylinePolygon(value); return *this;}
    inline IsolineAvoidanceAreaGeometry& WithPolylinePolygon(Aws::Vector<Aws::String>&& value) { SetPolylinePolygon(std::move(value)); return *this;}
    inline IsolineAvoidanceAreaGeometry& AddPolylinePolygon(const Aws::String& value) { m_polylinePolygonHasBeenSet = true; m_polylinePolygon.push_back(value); return *this; }
    inline IsolineAvoidanceAreaGeometry& AddPolylinePolygon(Aws::String&& value) { m_polylinePolygonHasBeenSet = true; m_polylinePolygon.push_back(std::move(value)); return *this; }
    inline IsolineAvoidanceAreaGeometry& AddPolylinePolygon(const char* value) { m_polylinePolygonHasBeenSet = true; m_polylinePolygon.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<double> m_boundingBox;
    bool m_boundingBoxHasBeenSet = false;

    Corridor m_corridor;
    bool m_corridorHasBeenSet = false;

    Aws::Vector<Aws::Vector<Aws::Vector<double>>> m_polygon;
    bool m_polygonHasBeenSet = false;

    PolylineCorridor m_polylineCorridor;
    bool m_polylineCorridorHasBeenSet = false;

    Aws::Vector<Aws::String> m_polylinePolygon;
    bool m_polylinePolygonHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
