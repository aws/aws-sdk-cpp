/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteTransitDeparture.h>
#include <aws/geo-routes/model/RouteTransitIntermediateStopAttribute.h>
#include <aws/geo-routes/model/RouteTransitTransportModeDetails.h>

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
 * <p>An intermediate stop between departure and destination of the transit
 * route.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteTransitIntermediateStop">AWS
 * API Reference</a></p>
 */
class RouteTransitIntermediateStop {
 public:
  AWS_GEOROUTES_API RouteTransitIntermediateStop() = default;
  AWS_GEOROUTES_API RouteTransitIntermediateStop(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API RouteTransitIntermediateStop& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Attributes of the intermediate stop.</p>
   */
  inline const Aws::Vector<RouteTransitIntermediateStopAttribute>& GetAttributes() const { return m_attributes; }
  inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
  template <typename AttributesT = Aws::Vector<RouteTransitIntermediateStopAttribute>>
  void SetAttributes(AttributesT&& value) {
    m_attributesHasBeenSet = true;
    m_attributes = std::forward<AttributesT>(value);
  }
  template <typename AttributesT = Aws::Vector<RouteTransitIntermediateStopAttribute>>
  RouteTransitIntermediateStop& WithAttributes(AttributesT&& value) {
    SetAttributes(std::forward<AttributesT>(value));
    return *this;
  }
  inline RouteTransitIntermediateStop& AddAttributes(RouteTransitIntermediateStopAttribute value) {
    m_attributesHasBeenSet = true;
    m_attributes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Departure details for the intermediate stop.</p>
   */
  inline const RouteTransitDeparture& GetDeparture() const { return m_departure; }
  inline bool DepartureHasBeenSet() const { return m_departureHasBeenSet; }
  template <typename DepartureT = RouteTransitDeparture>
  void SetDeparture(DepartureT&& value) {
    m_departureHasBeenSet = true;
    m_departure = std::forward<DepartureT>(value);
  }
  template <typename DepartureT = RouteTransitDeparture>
  RouteTransitIntermediateStop& WithDeparture(DepartureT&& value) {
    SetDeparture(std::forward<DepartureT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Duration of the stop.</p> <p> <b>Unit</b>: <code>seconds</code> </p>
   */
  inline long long GetDuration() const { return m_duration; }
  inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
  inline void SetDuration(long long value) {
    m_durationHasBeenSet = true;
    m_duration = value;
  }
  inline RouteTransitIntermediateStop& WithDuration(long long value) {
    SetDuration(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Offset in the leg geometry corresponding to the start of this stop.</p>
   */
  inline int GetGeometryOffset() const { return m_geometryOffset; }
  inline bool GeometryOffsetHasBeenSet() const { return m_geometryOffsetHasBeenSet; }
  inline void SetGeometryOffset(int value) {
    m_geometryOffsetHasBeenSet = true;
    m_geometryOffset = value;
  }
  inline RouteTransitIntermediateStop& WithGeometryOffset(int value) {
    SetGeometryOffset(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Transport mode details at the intermediate stop.</p>
   */
  inline const RouteTransitTransportModeDetails& GetTransport() const { return m_transport; }
  inline bool TransportHasBeenSet() const { return m_transportHasBeenSet; }
  template <typename TransportT = RouteTransitTransportModeDetails>
  void SetTransport(TransportT&& value) {
    m_transportHasBeenSet = true;
    m_transport = std::forward<TransportT>(value);
  }
  template <typename TransportT = RouteTransitTransportModeDetails>
  RouteTransitIntermediateStop& WithTransport(TransportT&& value) {
    SetTransport(std::forward<TransportT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<RouteTransitIntermediateStopAttribute> m_attributes;

  RouteTransitDeparture m_departure;

  long long m_duration{0};

  int m_geometryOffset{0};

  RouteTransitTransportModeDetails m_transport;
  bool m_attributesHasBeenSet = false;
  bool m_departureHasBeenSet = false;
  bool m_durationHasBeenSet = false;
  bool m_geometryOffsetHasBeenSet = false;
  bool m_transportHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
