/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
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
   * <p>Geometry defined as an encoded corridor - an encoded polyline with a radius
   * that defines the width of the corridor.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/PolylineCorridor">AWS
   * API Reference</a></p>
   */
  class PolylineCorridor
  {
  public:
    AWS_GEOROUTES_API PolylineCorridor() = default;
    AWS_GEOROUTES_API PolylineCorridor(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API PolylineCorridor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    PolylineCorridor& WithPolyline(PolylineT&& value) { SetPolyline(std::forward<PolylineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Considers all roads within the provided radius to match the provided
     * destination to. The roads that are considered are determined by the provided
     * Strategy.</p> <p> <b>Unit</b>: <code>Meters</code> </p>
     */
    inline int GetRadius() const { return m_radius; }
    inline bool RadiusHasBeenSet() const { return m_radiusHasBeenSet; }
    inline void SetRadius(int value) { m_radiusHasBeenSet = true; m_radius = value; }
    inline PolylineCorridor& WithRadius(int value) { SetRadius(value); return *this;}
    ///@}
  private:

    Aws::String m_polyline;
    bool m_polylineHasBeenSet = false;

    int m_radius{0};
    bool m_radiusHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
