/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
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
 * <p>Details about the station.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteStationDetails">AWS
 * API Reference</a></p>
 */
class RouteStationDetails {
 public:
  AWS_GEOROUTES_API RouteStationDetails() = default;
  AWS_GEOROUTES_API RouteStationDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API RouteStationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Wheelchair accessibility information for the station.</p>
   */
  inline const RouteAccessibilityAvailabilityDetails& GetAccessibility() const { return m_accessibility; }
  inline bool AccessibilityHasBeenSet() const { return m_accessibilityHasBeenSet; }
  template <typename AccessibilityT = RouteAccessibilityAvailabilityDetails>
  void SetAccessibility(AccessibilityT&& value) {
    m_accessibilityHasBeenSet = true;
    m_accessibility = std::forward<AccessibilityT>(value);
  }
  template <typename AccessibilityT = RouteAccessibilityAvailabilityDetails>
  RouteStationDetails& WithAccessibility(AccessibilityT&& value) {
    SetAccessibility(std::forward<AccessibilityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Platform name or number.</p>
   */
  inline const Aws::String& GetPlatformName() const { return m_platformName; }
  inline bool PlatformNameHasBeenSet() const { return m_platformNameHasBeenSet; }
  template <typename PlatformNameT = Aws::String>
  void SetPlatformName(PlatformNameT&& value) {
    m_platformNameHasBeenSet = true;
    m_platformName = std::forward<PlatformNameT>(value);
  }
  template <typename PlatformNameT = Aws::String>
  RouteStationDetails& WithPlatformName(PlatformNameT&& value) {
    SetPlatformName(std::forward<PlatformNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Short text or a number that identifies the station.</p>
   */
  inline const Aws::String& GetShortName() const { return m_shortName; }
  inline bool ShortNameHasBeenSet() const { return m_shortNameHasBeenSet; }
  template <typename ShortNameT = Aws::String>
  void SetShortName(ShortNameT&& value) {
    m_shortNameHasBeenSet = true;
    m_shortName = std::forward<ShortNameT>(value);
  }
  template <typename ShortNameT = Aws::String>
  RouteStationDetails& WithShortName(ShortNameT&& value) {
    SetShortName(std::forward<ShortNameT>(value));
    return *this;
  }
  ///@}
 private:
  RouteAccessibilityAvailabilityDetails m_accessibility;

  Aws::String m_platformName;

  Aws::String m_shortName;
  bool m_accessibilityHasBeenSet = false;
  bool m_platformNameHasBeenSet = false;
  bool m_shortNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
