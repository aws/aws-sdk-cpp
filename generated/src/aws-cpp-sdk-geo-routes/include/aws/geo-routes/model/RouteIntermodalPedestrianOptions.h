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
 * <p>Options for the pedestrian leg of the intermodal route.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteIntermodalPedestrianOptions">AWS
 * API Reference</a></p>
 */
class RouteIntermodalPedestrianOptions {
 public:
  AWS_GEOROUTES_API RouteIntermodalPedestrianOptions() = default;
  AWS_GEOROUTES_API RouteIntermodalPedestrianOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API RouteIntermodalPedestrianOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Maximum walking distance allowed.</p> <p> <b>Unit</b>: <code>meters</code>
   * </p>
   */
  inline long long GetMaxDistance() const { return m_maxDistance; }
  inline bool MaxDistanceHasBeenSet() const { return m_maxDistanceHasBeenSet; }
  inline void SetMaxDistance(long long value) {
    m_maxDistanceHasBeenSet = true;
    m_maxDistance = value;
  }
  inline RouteIntermodalPedestrianOptions& WithMaxDistance(long long value) {
    SetMaxDistance(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Walking speed.</p> <p> <b>Unit</b>: <code>kilometers per hour</code> </p>
   */
  inline double GetSpeed() const { return m_speed; }
  inline bool SpeedHasBeenSet() const { return m_speedHasBeenSet; }
  inline void SetSpeed(double value) {
    m_speedHasBeenSet = true;
    m_speed = value;
  }
  inline RouteIntermodalPedestrianOptions& WithSpeed(double value) {
    SetSpeed(value);
    return *this;
  }
  ///@}
 private:
  long long m_maxDistance{0};

  double m_speed{0.0};
  bool m_maxDistanceHasBeenSet = false;
  bool m_speedHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
