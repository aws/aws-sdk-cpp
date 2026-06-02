/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteAccessibilityAttribute.h>
#include <aws/geo-routes/model/RouteTransitMode.h>
#include <aws/geo-routes/model/RouteTransitPedestrianOptions.h>

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
 * <p>Options related to transit routing.</p>  <p>Not supported in
 * <code>ap-southeast-1</code> and <code>ap-southeast-5</code> regions for <a
 * href="https://docs.aws.amazon.com/location/latest/developerguide/GrabMaps.html">GrabMaps</a>
 * customers.</p> <p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteTransitOptions">AWS
 * API Reference</a></p>
 */
class RouteTransitOptions {
 public:
  AWS_GEOROUTES_API RouteTransitOptions() = default;
  AWS_GEOROUTES_API RouteTransitOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API RouteTransitOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Accessibility attributes to consider when calculating the route.</p>
   */
  inline const Aws::Vector<RouteAccessibilityAttribute>& GetAccessibilityAttributes() const { return m_accessibilityAttributes; }
  inline bool AccessibilityAttributesHasBeenSet() const { return m_accessibilityAttributesHasBeenSet; }
  template <typename AccessibilityAttributesT = Aws::Vector<RouteAccessibilityAttribute>>
  void SetAccessibilityAttributes(AccessibilityAttributesT&& value) {
    m_accessibilityAttributesHasBeenSet = true;
    m_accessibilityAttributes = std::forward<AccessibilityAttributesT>(value);
  }
  template <typename AccessibilityAttributesT = Aws::Vector<RouteAccessibilityAttribute>>
  RouteTransitOptions& WithAccessibilityAttributes(AccessibilityAttributesT&& value) {
    SetAccessibilityAttributes(std::forward<AccessibilityAttributesT>(value));
    return *this;
  }
  inline RouteTransitOptions& AddAccessibilityAttributes(RouteAccessibilityAttribute value) {
    m_accessibilityAttributesHasBeenSet = true;
    m_accessibilityAttributes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Allowed transit transport modes when calculating the route. By default, all
   * transport modes are allowed. Cannot be used together with
   * <code>ExcludedModes</code>.</p>
   */
  inline const Aws::Vector<RouteTransitMode>& GetAllowedModes() const { return m_allowedModes; }
  inline bool AllowedModesHasBeenSet() const { return m_allowedModesHasBeenSet; }
  template <typename AllowedModesT = Aws::Vector<RouteTransitMode>>
  void SetAllowedModes(AllowedModesT&& value) {
    m_allowedModesHasBeenSet = true;
    m_allowedModes = std::forward<AllowedModesT>(value);
  }
  template <typename AllowedModesT = Aws::Vector<RouteTransitMode>>
  RouteTransitOptions& WithAllowedModes(AllowedModesT&& value) {
    SetAllowedModes(std::forward<AllowedModesT>(value));
    return *this;
  }
  inline RouteTransitOptions& AddAllowedModes(RouteTransitMode value) {
    m_allowedModesHasBeenSet = true;
    m_allowedModes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Excluded transit transport modes when calculating the route. By default, all
   * transport modes are allowed. Cannot be used together with
   * <code>AllowedModes</code>.</p>
   */
  inline const Aws::Vector<RouteTransitMode>& GetExcludedModes() const { return m_excludedModes; }
  inline bool ExcludedModesHasBeenSet() const { return m_excludedModesHasBeenSet; }
  template <typename ExcludedModesT = Aws::Vector<RouteTransitMode>>
  void SetExcludedModes(ExcludedModesT&& value) {
    m_excludedModesHasBeenSet = true;
    m_excludedModes = std::forward<ExcludedModesT>(value);
  }
  template <typename ExcludedModesT = Aws::Vector<RouteTransitMode>>
  RouteTransitOptions& WithExcludedModes(ExcludedModesT&& value) {
    SetExcludedModes(std::forward<ExcludedModesT>(value));
    return *this;
  }
  inline RouteTransitOptions& AddExcludedModes(RouteTransitMode value) {
    m_excludedModesHasBeenSet = true;
    m_excludedModes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Maximum number of transfers allowed when calculating the route.</p>
   */
  inline int GetMaxTransfers() const { return m_maxTransfers; }
  inline bool MaxTransfersHasBeenSet() const { return m_maxTransfersHasBeenSet; }
  inline void SetMaxTransfers(int value) {
    m_maxTransfersHasBeenSet = true;
    m_maxTransfers = value;
  }
  inline RouteTransitOptions& WithMaxTransfers(int value) {
    SetMaxTransfers(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Options for the pedestrian leg of the transit route.</p>
   */
  inline const RouteTransitPedestrianOptions& GetPedestrian() const { return m_pedestrian; }
  inline bool PedestrianHasBeenSet() const { return m_pedestrianHasBeenSet; }
  template <typename PedestrianT = RouteTransitPedestrianOptions>
  void SetPedestrian(PedestrianT&& value) {
    m_pedestrianHasBeenSet = true;
    m_pedestrian = std::forward<PedestrianT>(value);
  }
  template <typename PedestrianT = RouteTransitPedestrianOptions>
  RouteTransitOptions& WithPedestrian(PedestrianT&& value) {
    SetPedestrian(std::forward<PedestrianT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<RouteAccessibilityAttribute> m_accessibilityAttributes;

  Aws::Vector<RouteTransitMode> m_allowedModes;

  Aws::Vector<RouteTransitMode> m_excludedModes;

  int m_maxTransfers{0};

  RouteTransitPedestrianOptions m_pedestrian;
  bool m_accessibilityAttributesHasBeenSet = false;
  bool m_allowedModesHasBeenSet = false;
  bool m_excludedModesHasBeenSet = false;
  bool m_maxTransfersHasBeenSet = false;
  bool m_pedestrianHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
