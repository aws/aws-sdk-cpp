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
   * <p>The returned Route leg geometry.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteLegGeometry">AWS
   * API Reference</a></p>
   */
  class RouteLegGeometry
  {
  public:
    AWS_GEOROUTES_API RouteLegGeometry();
    AWS_GEOROUTES_API RouteLegGeometry(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteLegGeometry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An ordered list of positions used to plot a route on a map.</p> 
     * <p>LineString and Polyline are mutually exclusive properties.</p> 
     */
    inline const Aws::Vector<Aws::Vector<double>>& GetLineString() const{ return m_lineString; }
    inline bool LineStringHasBeenSet() const { return m_lineStringHasBeenSet; }
    inline void SetLineString(const Aws::Vector<Aws::Vector<double>>& value) { m_lineStringHasBeenSet = true; m_lineString = value; }
    inline void SetLineString(Aws::Vector<Aws::Vector<double>>&& value) { m_lineStringHasBeenSet = true; m_lineString = std::move(value); }
    inline RouteLegGeometry& WithLineString(const Aws::Vector<Aws::Vector<double>>& value) { SetLineString(value); return *this;}
    inline RouteLegGeometry& WithLineString(Aws::Vector<Aws::Vector<double>>&& value) { SetLineString(std::move(value)); return *this;}
    inline RouteLegGeometry& AddLineString(const Aws::Vector<double>& value) { m_lineStringHasBeenSet = true; m_lineString.push_back(value); return *this; }
    inline RouteLegGeometry& AddLineString(Aws::Vector<double>&& value) { m_lineStringHasBeenSet = true; m_lineString.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An ordered list of positions used to plot a route on a map in a lossy
     * compression format.</p>  <p>LineString and Polyline are mutually exclusive
     * properties.</p> 
     */
    inline const Aws::String& GetPolyline() const{ return m_polyline; }
    inline bool PolylineHasBeenSet() const { return m_polylineHasBeenSet; }
    inline void SetPolyline(const Aws::String& value) { m_polylineHasBeenSet = true; m_polyline = value; }
    inline void SetPolyline(Aws::String&& value) { m_polylineHasBeenSet = true; m_polyline = std::move(value); }
    inline void SetPolyline(const char* value) { m_polylineHasBeenSet = true; m_polyline.assign(value); }
    inline RouteLegGeometry& WithPolyline(const Aws::String& value) { SetPolyline(value); return *this;}
    inline RouteLegGeometry& WithPolyline(Aws::String&& value) { SetPolyline(std::move(value)); return *this;}
    inline RouteLegGeometry& WithPolyline(const char* value) { SetPolyline(value); return *this;}
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
