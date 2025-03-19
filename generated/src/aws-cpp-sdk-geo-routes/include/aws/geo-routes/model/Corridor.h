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
   * <p>Geometry defined as a corridor - a LineString with a radius that defines the
   * width of the corridor.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/Corridor">AWS
   * API Reference</a></p>
   */
  class Corridor
  {
  public:
    AWS_GEOROUTES_API Corridor() = default;
    AWS_GEOROUTES_API Corridor(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Corridor& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    Corridor& WithLineString(LineStringT&& value) { SetLineString(std::forward<LineStringT>(value)); return *this;}
    template<typename LineStringT = Aws::Vector<double>>
    Corridor& AddLineString(LineStringT&& value) { m_lineStringHasBeenSet = true; m_lineString.emplace_back(std::forward<LineStringT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Radius that defines the width of the corridor.</p>
     */
    inline int GetRadius() const { return m_radius; }
    inline bool RadiusHasBeenSet() const { return m_radiusHasBeenSet; }
    inline void SetRadius(int value) { m_radiusHasBeenSet = true; m_radius = value; }
    inline Corridor& WithRadius(int value) { SetRadius(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::Vector<double>> m_lineString;
    bool m_lineStringHasBeenSet = false;

    int m_radius{0};
    bool m_radiusHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
