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
   * <p>Places uses a point geometry to specify a location or a Place.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/PlaceGeometry">AWS
   * API Reference</a></p>
   */
  class PlaceGeometry
  {
  public:
    AWS_LOCATIONSERVICE_API PlaceGeometry() = default;
    AWS_LOCATIONSERVICE_API PlaceGeometry(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API PlaceGeometry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A single point geometry specifies a location for a Place using <a
     * href="https://gisgeography.com/wgs84-world-geodetic-system/">WGS 84</a>
     * coordinates:</p> <ul> <li> <p> <i>x</i> — Specifies the x coordinate or
     * longitude. </p> </li> <li> <p> <i>y</i> — Specifies the y coordinate or
     * latitude. </p> </li> </ul>
     */
    inline const Aws::Vector<double>& GetPoint() const { return m_point; }
    inline bool PointHasBeenSet() const { return m_pointHasBeenSet; }
    template<typename PointT = Aws::Vector<double>>
    void SetPoint(PointT&& value) { m_pointHasBeenSet = true; m_point = std::forward<PointT>(value); }
    template<typename PointT = Aws::Vector<double>>
    PlaceGeometry& WithPoint(PointT&& value) { SetPoint(std::forward<PointT>(value)); return *this;}
    inline PlaceGeometry& AddPoint(double value) { m_pointHasBeenSet = true; m_point.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<double> m_point;
    bool m_pointHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
