/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
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
namespace GeoPlaces
{
namespace Model
{

  /**
   * <p>The <code>Circle</code> that all results must be in. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/FilterCircle">AWS
   * API Reference</a></p>
   */
  class FilterCircle
  {
  public:
    AWS_GEOPLACES_API FilterCircle() = default;
    AWS_GEOPLACES_API FilterCircle(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API FilterCircle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The center position, in longitude and latitude, of the
     * <code>FilterCircle</code>.</p>
     */
    inline const Aws::Vector<double>& GetCenter() const { return m_center; }
    inline bool CenterHasBeenSet() const { return m_centerHasBeenSet; }
    template<typename CenterT = Aws::Vector<double>>
    void SetCenter(CenterT&& value) { m_centerHasBeenSet = true; m_center = std::forward<CenterT>(value); }
    template<typename CenterT = Aws::Vector<double>>
    FilterCircle& WithCenter(CenterT&& value) { SetCenter(std::forward<CenterT>(value)); return *this;}
    inline FilterCircle& AddCenter(double value) { m_centerHasBeenSet = true; m_center.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The radius, in meters, of the <code>FilterCircle</code>.</p>
     */
    inline long long GetRadius() const { return m_radius; }
    inline bool RadiusHasBeenSet() const { return m_radiusHasBeenSet; }
    inline void SetRadius(long long value) { m_radiusHasBeenSet = true; m_radius = value; }
    inline FilterCircle& WithRadius(long long value) { SetRadius(value); return *this;}
    ///@}
  private:

    Aws::Vector<double> m_center;
    bool m_centerHasBeenSet = false;

    long long m_radius{0};
    bool m_radiusHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
