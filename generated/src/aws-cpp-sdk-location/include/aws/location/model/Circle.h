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
   * <p>A circle on the earth, as defined by a center point and a
   * radius.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/Circle">AWS API
   * Reference</a></p>
   */
  class Circle
  {
  public:
    AWS_LOCATIONSERVICE_API Circle() = default;
    AWS_LOCATIONSERVICE_API Circle(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Circle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A single point geometry, specifying the center of the circle, using <a
     * href="https://gisgeography.com/wgs84-world-geodetic-system/">WGS 84</a>
     * coordinates, in the form <code>[longitude, latitude]</code>.</p>
     */
    inline const Aws::Vector<double>& GetCenter() const { return m_center; }
    inline bool CenterHasBeenSet() const { return m_centerHasBeenSet; }
    template<typename CenterT = Aws::Vector<double>>
    void SetCenter(CenterT&& value) { m_centerHasBeenSet = true; m_center = std::forward<CenterT>(value); }
    template<typename CenterT = Aws::Vector<double>>
    Circle& WithCenter(CenterT&& value) { SetCenter(std::forward<CenterT>(value)); return *this;}
    inline Circle& AddCenter(double value) { m_centerHasBeenSet = true; m_center.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The radius of the circle in meters. Must be greater than zero and no larger
     * than 100,000 (100 kilometers).</p>
     */
    inline double GetRadius() const { return m_radius; }
    inline bool RadiusHasBeenSet() const { return m_radiusHasBeenSet; }
    inline void SetRadius(double value) { m_radiusHasBeenSet = true; m_radius = value; }
    inline Circle& WithRadius(double value) { SetRadius(value); return *this;}
    ///@}
  private:

    Aws::Vector<double> m_center;
    bool m_centerHasBeenSet = false;

    double m_radius{0.0};
    bool m_radiusHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
