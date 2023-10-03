/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
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
namespace LocationService
{
namespace Model
{

  /**
   * <p>The geomerty used to filter device positions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/TrackingFilterGeometry">AWS
   * API Reference</a></p>
   */
  class TrackingFilterGeometry
  {
  public:
    AWS_LOCATIONSERVICE_API TrackingFilterGeometry();
    AWS_LOCATIONSERVICE_API TrackingFilterGeometry(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API TrackingFilterGeometry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The set of arrays which define the polygon. A polygon can have between 4 and
     * 1000 vertices.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::Vector<double>>>& GetPolygon() const{ return m_polygon; }

    /**
     * <p>The set of arrays which define the polygon. A polygon can have between 4 and
     * 1000 vertices.</p>
     */
    inline bool PolygonHasBeenSet() const { return m_polygonHasBeenSet; }

    /**
     * <p>The set of arrays which define the polygon. A polygon can have between 4 and
     * 1000 vertices.</p>
     */
    inline void SetPolygon(const Aws::Vector<Aws::Vector<Aws::Vector<double>>>& value) { m_polygonHasBeenSet = true; m_polygon = value; }

    /**
     * <p>The set of arrays which define the polygon. A polygon can have between 4 and
     * 1000 vertices.</p>
     */
    inline void SetPolygon(Aws::Vector<Aws::Vector<Aws::Vector<double>>>&& value) { m_polygonHasBeenSet = true; m_polygon = std::move(value); }

    /**
     * <p>The set of arrays which define the polygon. A polygon can have between 4 and
     * 1000 vertices.</p>
     */
    inline TrackingFilterGeometry& WithPolygon(const Aws::Vector<Aws::Vector<Aws::Vector<double>>>& value) { SetPolygon(value); return *this;}

    /**
     * <p>The set of arrays which define the polygon. A polygon can have between 4 and
     * 1000 vertices.</p>
     */
    inline TrackingFilterGeometry& WithPolygon(Aws::Vector<Aws::Vector<Aws::Vector<double>>>&& value) { SetPolygon(std::move(value)); return *this;}

    /**
     * <p>The set of arrays which define the polygon. A polygon can have between 4 and
     * 1000 vertices.</p>
     */
    inline TrackingFilterGeometry& AddPolygon(const Aws::Vector<Aws::Vector<double>>& value) { m_polygonHasBeenSet = true; m_polygon.push_back(value); return *this; }

    /**
     * <p>The set of arrays which define the polygon. A polygon can have between 4 and
     * 1000 vertices.</p>
     */
    inline TrackingFilterGeometry& AddPolygon(Aws::Vector<Aws::Vector<double>>&& value) { m_polygonHasBeenSet = true; m_polygon.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::Vector<Aws::Vector<double>>> m_polygon;
    bool m_polygonHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
