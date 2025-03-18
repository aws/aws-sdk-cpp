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
   * <p>Geometry defined as a circle. When request routing boundary was set as
   * <code>AutoCircle</code>, the response routing boundary will return
   * <code>Circle</code> derived from the <code>AutoCircle</code>
   * settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/Circle">AWS
   * API Reference</a></p>
   */
  class Circle
  {
  public:
    AWS_GEOROUTES_API Circle() = default;
    AWS_GEOROUTES_API Circle(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Circle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Center of the Circle defined in longitude and latitude coordinates.</p>
     * <p>Example: <code>[-123.1174, 49.2847]</code> represents the position with
     * longitude <code>-123.1174</code> and latitude <code>49.2847</code>. </p>
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
     * <p>Radius of the Circle.</p> <p> <b>Unit</b>: <code>meters</code> </p>
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
} // namespace GeoRoutes
} // namespace Aws
