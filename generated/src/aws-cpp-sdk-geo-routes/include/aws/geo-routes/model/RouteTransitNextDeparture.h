/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteTransitTransportModeDetails.h>
#include <aws/geo-routes/model/RouteTransitTripStatus.h>

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
 * <p>Details about the next available departure for the transit
 * service.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteTransitNextDeparture">AWS
 * API Reference</a></p>
 */
class RouteTransitNextDeparture {
 public:
  AWS_GEOROUTES_API RouteTransitNextDeparture() = default;
  AWS_GEOROUTES_API RouteTransitNextDeparture(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API RouteTransitNextDeparture& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The delay from the scheduled departure time.</p> <p> <b>Unit</b>:
   * <code>seconds</code> </p>
   */
  inline long long GetDelay() const { return m_delay; }
  inline bool DelayHasBeenSet() const { return m_delayHasBeenSet; }
  inline void SetDelay(long long value) {
    m_delayHasBeenSet = true;
    m_delay = value;
  }
  inline RouteTransitNextDeparture& WithDelay(long long value) {
    SetDelay(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Platform name or number for the departure.</p>
   */
  inline const Aws::String& GetPlatformName() const { return m_platformName; }
  inline bool PlatformNameHasBeenSet() const { return m_platformNameHasBeenSet; }
  template <typename PlatformNameT = Aws::String>
  void SetPlatformName(PlatformNameT&& value) {
    m_platformNameHasBeenSet = true;
    m_platformName = std::forward<PlatformNameT>(value);
  }
  template <typename PlatformNameT = Aws::String>
  RouteTransitNextDeparture& WithPlatformName(PlatformNameT&& value) {
    SetPlatformName(std::forward<PlatformNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the departure.</p>
   */
  inline RouteTransitTripStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(RouteTransitTripStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline RouteTransitNextDeparture& WithStatus(RouteTransitTripStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The departure time.</p>
   */
  inline const Aws::String& GetTime() const { return m_time; }
  inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }
  template <typename TimeT = Aws::String>
  void SetTime(TimeT&& value) {
    m_timeHasBeenSet = true;
    m_time = std::forward<TimeT>(value);
  }
  template <typename TimeT = Aws::String>
  RouteTransitNextDeparture& WithTime(TimeT&& value) {
    SetTime(std::forward<TimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Transport mode details for this departure.</p>
   */
  inline const RouteTransitTransportModeDetails& GetTransport() const { return m_transport; }
  inline bool TransportHasBeenSet() const { return m_transportHasBeenSet; }
  template <typename TransportT = RouteTransitTransportModeDetails>
  void SetTransport(TransportT&& value) {
    m_transportHasBeenSet = true;
    m_transport = std::forward<TransportT>(value);
  }
  template <typename TransportT = RouteTransitTransportModeDetails>
  RouteTransitNextDeparture& WithTransport(TransportT&& value) {
    SetTransport(std::forward<TransportT>(value));
    return *this;
  }
  ///@}
 private:
  long long m_delay{0};

  Aws::String m_platformName;

  RouteTransitTripStatus m_status{RouteTransitTripStatus::NOT_SET};

  Aws::String m_time;

  RouteTransitTransportModeDetails m_transport;
  bool m_delayHasBeenSet = false;
  bool m_platformNameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_timeHasBeenSet = false;
  bool m_transportHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
