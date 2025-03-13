/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>

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
   * <p>Provides the circle that was used while calculating the route.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteMatrixAutoCircle">AWS
   * API Reference</a></p>
   */
  class RouteMatrixAutoCircle
  {
  public:
    AWS_GEOROUTES_API RouteMatrixAutoCircle() = default;
    AWS_GEOROUTES_API RouteMatrixAutoCircle(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteMatrixAutoCircle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The margin provided for the calculation.</p>
     */
    inline long long GetMargin() const { return m_margin; }
    inline bool MarginHasBeenSet() const { return m_marginHasBeenSet; }
    inline void SetMargin(long long value) { m_marginHasBeenSet = true; m_margin = value; }
    inline RouteMatrixAutoCircle& WithMargin(long long value) { SetMargin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum size of the radius provided for the calculation.</p>
     */
    inline long long GetMaxRadius() const { return m_maxRadius; }
    inline bool MaxRadiusHasBeenSet() const { return m_maxRadiusHasBeenSet; }
    inline void SetMaxRadius(long long value) { m_maxRadiusHasBeenSet = true; m_maxRadius = value; }
    inline RouteMatrixAutoCircle& WithMaxRadius(long long value) { SetMaxRadius(value); return *this;}
    ///@}
  private:

    long long m_margin{0};
    bool m_marginHasBeenSet = false;

    long long m_maxRadius{0};
    bool m_maxRadiusHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
