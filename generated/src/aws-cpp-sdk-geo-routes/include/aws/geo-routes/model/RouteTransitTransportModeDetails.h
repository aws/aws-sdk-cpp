/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteAccessibilityAvailabilityDetails.h>
#include <aws/geo-routes/model/RouteTransitMode.h>

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
 * <p>Transport mode details for the transit leg.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteTransitTransportModeDetails">AWS
 * API Reference</a></p>
 */
class RouteTransitTransportModeDetails {
 public:
  AWS_GEOROUTES_API RouteTransitTransportModeDetails() = default;
  AWS_GEOROUTES_API RouteTransitTransportModeDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API RouteTransitTransportModeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Wheelchair accessibility information for the transit vehicle.</p>
   */
  inline const RouteAccessibilityAvailabilityDetails& GetAccessibility() const { return m_accessibility; }
  inline bool AccessibilityHasBeenSet() const { return m_accessibilityHasBeenSet; }
  template <typename AccessibilityT = RouteAccessibilityAvailabilityDetails>
  void SetAccessibility(AccessibilityT&& value) {
    m_accessibilityHasBeenSet = true;
    m_accessibility = std::forward<AccessibilityT>(value);
  }
  template <typename AccessibilityT = RouteAccessibilityAvailabilityDetails>
  RouteTransitTransportModeDetails& WithAccessibility(AccessibilityT&& value) {
    SetAccessibility(std::forward<AccessibilityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Color of the transport polyline and background for the transport name.</p>
   */
  inline const Aws::String& GetColor() const { return m_color; }
  inline bool ColorHasBeenSet() const { return m_colorHasBeenSet; }
  template <typename ColorT = Aws::String>
  void SetColor(ColorT&& value) {
    m_colorHasBeenSet = true;
    m_color = std::forward<ColorT>(value);
  }
  template <typename ColorT = Aws::String>
  RouteTransitTransportModeDetails& WithColor(ColorT&& value) {
    SetColor(std::forward<ColorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Transit route headsign.</p>
   */
  inline const Aws::String& GetHeadsign() const { return m_headsign; }
  inline bool HeadsignHasBeenSet() const { return m_headsignHasBeenSet; }
  template <typename HeadsignT = Aws::String>
  void SetHeadsign(HeadsignT&& value) {
    m_headsignHasBeenSet = true;
    m_headsign = std::forward<HeadsignT>(value);
  }
  template <typename HeadsignT = Aws::String>
  RouteTransitTransportModeDetails& WithHeadsign(HeadsignT&& value) {
    SetHeadsign(std::forward<HeadsignT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Long name of the transit route.</p>
   */
  inline const Aws::String& GetLongRouteName() const { return m_longRouteName; }
  inline bool LongRouteNameHasBeenSet() const { return m_longRouteNameHasBeenSet; }
  template <typename LongRouteNameT = Aws::String>
  void SetLongRouteName(LongRouteNameT&& value) {
    m_longRouteNameHasBeenSet = true;
    m_longRouteName = std::forward<LongRouteNameT>(value);
  }
  template <typename LongRouteNameT = Aws::String>
  RouteTransitTransportModeDetails& WithLongRouteName(LongRouteNameT&& value) {
    SetLongRouteName(std::forward<LongRouteNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Mode of the transit transport.</p>
   */
  inline RouteTransitMode GetMode() const { return m_mode; }
  inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
  inline void SetMode(RouteTransitMode value) {
    m_modeHasBeenSet = true;
    m_mode = value;
  }
  inline RouteTransitTransportModeDetails& WithMode(RouteTransitMode value) {
    SetMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Transit route name.</p>
   */
  inline const Aws::String& GetRouteName() const { return m_routeName; }
  inline bool RouteNameHasBeenSet() const { return m_routeNameHasBeenSet; }
  template <typename RouteNameT = Aws::String>
  void SetRouteName(RouteNameT&& value) {
    m_routeNameHasBeenSet = true;
    m_routeName = std::forward<RouteNameT>(value);
  }
  template <typename RouteNameT = Aws::String>
  RouteTransitTransportModeDetails& WithRouteName(RouteNameT&& value) {
    SetRouteName(std::forward<RouteNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Short name of the transit route.</p>
   */
  inline const Aws::String& GetShortRouteName() const { return m_shortRouteName; }
  inline bool ShortRouteNameHasBeenSet() const { return m_shortRouteNameHasBeenSet; }
  template <typename ShortRouteNameT = Aws::String>
  void SetShortRouteName(ShortRouteNameT&& value) {
    m_shortRouteNameHasBeenSet = true;
    m_shortRouteName = std::forward<ShortRouteNameT>(value);
  }
  template <typename ShortRouteNameT = Aws::String>
  RouteTransitTransportModeDetails& WithShortRouteName(ShortRouteNameT&& value) {
    SetShortRouteName(std::forward<ShortRouteNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Color of the transport name text.</p>
   */
  inline const Aws::String& GetTextColor() const { return m_textColor; }
  inline bool TextColorHasBeenSet() const { return m_textColorHasBeenSet; }
  template <typename TextColorT = Aws::String>
  void SetTextColor(TextColorT&& value) {
    m_textColorHasBeenSet = true;
    m_textColor = std::forward<TextColorT>(value);
  }
  template <typename TextColorT = Aws::String>
  RouteTransitTransportModeDetails& WithTextColor(TextColorT&& value) {
    SetTextColor(std::forward<TextColorT>(value));
    return *this;
  }
  ///@}
 private:
  RouteAccessibilityAvailabilityDetails m_accessibility;

  Aws::String m_color;

  Aws::String m_headsign;

  Aws::String m_longRouteName;

  RouteTransitMode m_mode{RouteTransitMode::NOT_SET};

  Aws::String m_routeName;

  Aws::String m_shortRouteName;

  Aws::String m_textColor;
  bool m_accessibilityHasBeenSet = false;
  bool m_colorHasBeenSet = false;
  bool m_headsignHasBeenSet = false;
  bool m_longRouteNameHasBeenSet = false;
  bool m_modeHasBeenSet = false;
  bool m_routeNameHasBeenSet = false;
  bool m_shortRouteNameHasBeenSet = false;
  bool m_textColorHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
