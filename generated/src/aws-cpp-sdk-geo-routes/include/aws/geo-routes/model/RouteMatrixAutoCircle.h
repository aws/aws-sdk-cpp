/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GeoRoutes {
namespace Model {

/**
 * <p> <code>AutoCircle</code> requests the route matrix service to define a
 * <code>Circle</code> boundary that best attempts to include most waypoints
 * (<code>Origins</code> and <code>Destinations</code>) using the
 * <code>AutoCircle</code> settings. Any waypoints outside of the auto-defined
 * <code>Circle</code> boundary will be considered out of the routing boundary,
 * which results in a route matrix entry error.</p> <p> <code>AutoCircle</code> is
 * only used in the request to configure a <code>Circle</code> for the route
 * calculation. The derived <code>Circle</code> will also be provided in the
 * response.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteMatrixAutoCircle">AWS
 * API Reference</a></p>
 */
class RouteMatrixAutoCircle {
 public:
  AWS_GEOROUTES_API RouteMatrixAutoCircle() = default;
  AWS_GEOROUTES_API RouteMatrixAutoCircle(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API RouteMatrixAutoCircle& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The minimal distance, in meters, between any waypoint and the perimeter of
   * the circle auto-defined for the boundary. Some margin is usually recommended so
   * that the routing has enough leeway to travel from one waypoint to another
   * optimally without conflicting with the routing boundary.</p> <p>The total of
   * <code>MaxRadius</code> and <code>Margin</code> must be less than or equal to
   * 200,000 meters.</p>
   */
  inline long long GetMargin() const { return m_margin; }
  inline bool MarginHasBeenSet() const { return m_marginHasBeenSet; }
  inline void SetMargin(long long value) {
    m_marginHasBeenSet = true;
    m_margin = value;
  }
  inline RouteMatrixAutoCircle& WithMargin(long long value) {
    SetMargin(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum radius, in meters, that the auto-defined <code>Circle</code>
   * boundary should have, before the <code>Margin</code> distance is added to the
   * circle.</p> <p>The total of <code>MaxRadius</code> and <code>Margin</code> must
   * be less than or equal to 200,000 meters.</p>
   */
  inline long long GetMaxRadius() const { return m_maxRadius; }
  inline bool MaxRadiusHasBeenSet() const { return m_maxRadiusHasBeenSet; }
  inline void SetMaxRadius(long long value) {
    m_maxRadiusHasBeenSet = true;
    m_maxRadius = value;
  }
  inline RouteMatrixAutoCircle& WithMaxRadius(long long value) {
    SetMaxRadius(value);
    return *this;
  }
  ///@}
 private:
  long long m_margin{0};

  long long m_maxRadius{0};
  bool m_marginHasBeenSet = false;
  bool m_maxRadiusHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
