/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteAccessibilityAvailabilityDetails.h>

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
 * <p>Details of the access point.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteAccessPointDetails">AWS
 * API Reference</a></p>
 */
class RouteAccessPointDetails {
 public:
  AWS_GEOROUTES_API RouteAccessPointDetails() = default;
  AWS_GEOROUTES_API RouteAccessPointDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API RouteAccessPointDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Wheelchair accessibility information for the access point.</p>
   */
  inline const RouteAccessibilityAvailabilityDetails& GetAccessibility() const { return m_accessibility; }
  inline bool AccessibilityHasBeenSet() const { return m_accessibilityHasBeenSet; }
  template <typename AccessibilityT = RouteAccessibilityAvailabilityDetails>
  void SetAccessibility(AccessibilityT&& value) {
    m_accessibilityHasBeenSet = true;
    m_accessibility = std::forward<AccessibilityT>(value);
  }
  template <typename AccessibilityT = RouteAccessibilityAvailabilityDetails>
  RouteAccessPointDetails& WithAccessibility(AccessibilityT&& value) {
    SetAccessibility(std::forward<AccessibilityT>(value));
    return *this;
  }
  ///@}
 private:
  RouteAccessibilityAvailabilityDetails m_accessibility;
  bool m_accessibilityHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
