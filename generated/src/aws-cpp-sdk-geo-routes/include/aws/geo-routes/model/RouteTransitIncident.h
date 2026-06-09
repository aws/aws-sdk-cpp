/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteTransitIncidentEffect.h>
#include <aws/geo-routes/model/RouteTransitIncidentType.h>

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
 * <p>An incident describes disruptions on the transit route.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteTransitIncident">AWS
 * API Reference</a></p>
 */
class RouteTransitIncident {
 public:
  AWS_GEOROUTES_API RouteTransitIncident() = default;
  AWS_GEOROUTES_API RouteTransitIncident(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API RouteTransitIncident& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A human readable description of the incident.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  RouteTransitIncident& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The effect of the incident on the transit service.</p>
   */
  inline RouteTransitIncidentEffect GetEffect() const { return m_effect; }
  inline bool EffectHasBeenSet() const { return m_effectHasBeenSet; }
  inline void SetEffect(RouteTransitIncidentEffect value) {
    m_effectHasBeenSet = true;
    m_effect = value;
  }
  inline RouteTransitIncident& WithEffect(RouteTransitIncidentEffect value) {
    SetEffect(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end time of the incident.</p>
   */
  inline const Aws::String& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::String>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::String>
  RouteTransitIncident& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The start time of the incident.</p>
   */
  inline const Aws::String& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = Aws::String>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::String>
  RouteTransitIncident& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Type of the incident.</p>
   */
  inline RouteTransitIncidentType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(RouteTransitIncidentType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline RouteTransitIncident& WithType(RouteTransitIncidentType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>URL to the original incident published at the agency website.</p>
   */
  inline const Aws::String& GetUrl() const { return m_url; }
  inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
  template <typename UrlT = Aws::String>
  void SetUrl(UrlT&& value) {
    m_urlHasBeenSet = true;
    m_url = std::forward<UrlT>(value);
  }
  template <typename UrlT = Aws::String>
  RouteTransitIncident& WithUrl(UrlT&& value) {
    SetUrl(std::forward<UrlT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_description;

  RouteTransitIncidentEffect m_effect{RouteTransitIncidentEffect::NOT_SET};

  Aws::String m_endTime;

  Aws::String m_startTime;

  RouteTransitIncidentType m_type{RouteTransitIncidentType::NOT_SET};

  Aws::String m_url;
  bool m_descriptionHasBeenSet = false;
  bool m_effectHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_urlHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
