/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteTransitPlace.h>
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
 * <p>Details corresponding to the arrival for the leg.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteTransitArrival">AWS
 * API Reference</a></p>
 */
class RouteTransitArrival {
 public:
  AWS_GEOROUTES_API RouteTransitArrival() = default;
  AWS_GEOROUTES_API RouteTransitArrival(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API RouteTransitArrival& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The delay from the scheduled arrival time.</p> <p> <b>Unit</b>:
   * <code>seconds</code> </p>
   */
  inline long long GetDelay() const { return m_delay; }
  inline bool DelayHasBeenSet() const { return m_delayHasBeenSet; }
  inline void SetDelay(long long value) {
    m_delayHasBeenSet = true;
    m_delay = value;
  }
  inline RouteTransitArrival& WithDelay(long long value) {
    SetDelay(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Place details corresponding to the arrival.</p>
   */
  inline const RouteTransitPlace& GetPlace() const { return m_place; }
  inline bool PlaceHasBeenSet() const { return m_placeHasBeenSet; }
  template <typename PlaceT = RouteTransitPlace>
  void SetPlace(PlaceT&& value) {
    m_placeHasBeenSet = true;
    m_place = std::forward<PlaceT>(value);
  }
  template <typename PlaceT = RouteTransitPlace>
  RouteTransitArrival& WithPlace(PlaceT&& value) {
    SetPlace(std::forward<PlaceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the arrival.</p>
   */
  inline RouteTransitTripStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(RouteTransitTripStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline RouteTransitArrival& WithStatus(RouteTransitTripStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The arrival time.</p>
   */
  inline const Aws::String& GetTime() const { return m_time; }
  inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }
  template <typename TimeT = Aws::String>
  void SetTime(TimeT&& value) {
    m_timeHasBeenSet = true;
    m_time = std::forward<TimeT>(value);
  }
  template <typename TimeT = Aws::String>
  RouteTransitArrival& WithTime(TimeT&& value) {
    SetTime(std::forward<TimeT>(value));
    return *this;
  }
  ///@}
 private:
  long long m_delay{0};

  RouteTransitPlace m_place;

  RouteTransitTripStatus m_status{RouteTransitTripStatus::NOT_SET};

  Aws::String m_time;
  bool m_delayHasBeenSet = false;
  bool m_placeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_timeHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
