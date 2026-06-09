/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteAccessibilityAvailability.h>

#include <utility>

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
 * <p>Details about the availability of accessibility features.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteAccessibilityAvailabilityDetails">AWS
 * API Reference</a></p>
 */
class RouteAccessibilityAvailabilityDetails {
 public:
  AWS_GEOROUTES_API RouteAccessibilityAvailabilityDetails() = default;
  AWS_GEOROUTES_API RouteAccessibilityAvailabilityDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API RouteAccessibilityAvailabilityDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Wheelchair accessibility status.</p>
   */
  inline RouteAccessibilityAvailability GetWheelchair() const { return m_wheelchair; }
  inline bool WheelchairHasBeenSet() const { return m_wheelchairHasBeenSet; }
  inline void SetWheelchair(RouteAccessibilityAvailability value) {
    m_wheelchairHasBeenSet = true;
    m_wheelchair = value;
  }
  inline RouteAccessibilityAvailabilityDetails& WithWheelchair(RouteAccessibilityAvailability value) {
    SetWheelchair(value);
    return *this;
  }
  ///@}
 private:
  RouteAccessibilityAvailability m_wheelchair{RouteAccessibilityAvailability::NOT_SET};
  bool m_wheelchairHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
