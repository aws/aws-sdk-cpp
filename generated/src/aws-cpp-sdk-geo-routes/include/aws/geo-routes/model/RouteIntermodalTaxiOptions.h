/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteIntermodalEnabledLegs.h>
#include <aws/geo-routes/model/RouteTaxiMode.h>

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
 * <p>Options for the taxi leg of the intermodal route.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteIntermodalTaxiOptions">AWS
 * API Reference</a></p>
 */
class RouteIntermodalTaxiOptions {
 public:
  AWS_GEOROUTES_API RouteIntermodalTaxiOptions() = default;
  AWS_GEOROUTES_API RouteIntermodalTaxiOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API RouteIntermodalTaxiOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Allowed taxi transport modes when calculating the route. By default, all
   * transport modes are allowed. Cannot be used together with
   * <code>ExcludedModes</code>.</p>
   */
  inline const Aws::Vector<RouteTaxiMode>& GetAllowedModes() const { return m_allowedModes; }
  inline bool AllowedModesHasBeenSet() const { return m_allowedModesHasBeenSet; }
  template <typename AllowedModesT = Aws::Vector<RouteTaxiMode>>
  void SetAllowedModes(AllowedModesT&& value) {
    m_allowedModesHasBeenSet = true;
    m_allowedModes = std::forward<AllowedModesT>(value);
  }
  template <typename AllowedModesT = Aws::Vector<RouteTaxiMode>>
  RouteIntermodalTaxiOptions& WithAllowedModes(AllowedModesT&& value) {
    SetAllowedModes(std::forward<AllowedModesT>(value));
    return *this;
  }
  inline RouteIntermodalTaxiOptions& AddAllowedModes(RouteTaxiMode value) {
    m_allowedModesHasBeenSet = true;
    m_allowedModes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the portion of the route for which this leg type is enabled. By
   * default, the leg type is enabled for all legs. Valid values:</p> <ul> <li> <p>
   * <code>FirstLeg</code> - Enable this leg type for the first non-pedestrian leg of
   * the route.</p> </li> <li> <p> <code>LastLeg</code> - Enable this leg type for
   * the last non-pedestrian leg of the route.</p> </li> <li> <p>
   * <code>EntireRoute</code> - Enable this leg type for the entire route.</p> </li>
   * <li> <p> <code>None</code> - Disable this leg type entirely.</p> </li> </ul>
   */
  inline const Aws::Vector<RouteIntermodalEnabledLegs>& GetEnabledFor() const { return m_enabledFor; }
  inline bool EnabledForHasBeenSet() const { return m_enabledForHasBeenSet; }
  template <typename EnabledForT = Aws::Vector<RouteIntermodalEnabledLegs>>
  void SetEnabledFor(EnabledForT&& value) {
    m_enabledForHasBeenSet = true;
    m_enabledFor = std::forward<EnabledForT>(value);
  }
  template <typename EnabledForT = Aws::Vector<RouteIntermodalEnabledLegs>>
  RouteIntermodalTaxiOptions& WithEnabledFor(EnabledForT&& value) {
    SetEnabledFor(std::forward<EnabledForT>(value));
    return *this;
  }
  inline RouteIntermodalTaxiOptions& AddEnabledFor(RouteIntermodalEnabledLegs value) {
    m_enabledForHasBeenSet = true;
    m_enabledFor.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Excluded taxi transport modes when calculating the route. By default, all
   * transport modes are allowed. Cannot be used together with
   * <code>AllowedModes</code>.</p>
   */
  inline const Aws::Vector<RouteTaxiMode>& GetExcludedModes() const { return m_excludedModes; }
  inline bool ExcludedModesHasBeenSet() const { return m_excludedModesHasBeenSet; }
  template <typename ExcludedModesT = Aws::Vector<RouteTaxiMode>>
  void SetExcludedModes(ExcludedModesT&& value) {
    m_excludedModesHasBeenSet = true;
    m_excludedModes = std::forward<ExcludedModesT>(value);
  }
  template <typename ExcludedModesT = Aws::Vector<RouteTaxiMode>>
  RouteIntermodalTaxiOptions& WithExcludedModes(ExcludedModesT&& value) {
    SetExcludedModes(std::forward<ExcludedModesT>(value));
    return *this;
  }
  inline RouteIntermodalTaxiOptions& AddExcludedModes(RouteTaxiMode value) {
    m_excludedModesHasBeenSet = true;
    m_excludedModes.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<RouteTaxiMode> m_allowedModes;

  Aws::Vector<RouteIntermodalEnabledLegs> m_enabledFor;

  Aws::Vector<RouteTaxiMode> m_excludedModes;
  bool m_allowedModesHasBeenSet = false;
  bool m_enabledForHasBeenSet = false;
  bool m_excludedModesHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
