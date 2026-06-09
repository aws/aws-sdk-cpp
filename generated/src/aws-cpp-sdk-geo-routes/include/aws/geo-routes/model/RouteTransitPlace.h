/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteStationDetails.h>
#include <aws/geo-routes/model/RouteTransitPlaceType.h>

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
 * <p>Place details corresponding to the arrival or departure.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteTransitPlace">AWS
 * API Reference</a></p>
 */
class RouteTransitPlace {
 public:
  AWS_GEOROUTES_API RouteTransitPlace() = default;
  AWS_GEOROUTES_API RouteTransitPlace(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API RouteTransitPlace& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the place.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  RouteTransitPlace& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Position provided in the request.</p>
   */
  inline const Aws::Vector<double>& GetOriginalPosition() const { return m_originalPosition; }
  inline bool OriginalPositionHasBeenSet() const { return m_originalPositionHasBeenSet; }
  template <typename OriginalPositionT = Aws::Vector<double>>
  void SetOriginalPosition(OriginalPositionT&& value) {
    m_originalPositionHasBeenSet = true;
    m_originalPosition = std::forward<OriginalPositionT>(value);
  }
  template <typename OriginalPositionT = Aws::Vector<double>>
  RouteTransitPlace& WithOriginalPosition(OriginalPositionT&& value) {
    SetOriginalPosition(std::forward<OriginalPositionT>(value));
    return *this;
  }
  inline RouteTransitPlace& AddOriginalPosition(double value) {
    m_originalPositionHasBeenSet = true;
    m_originalPosition.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Position in World Geodetic System (WGS 84) format: [longitude, latitude].</p>
   */
  inline const Aws::Vector<double>& GetPosition() const { return m_position; }
  inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
  template <typename PositionT = Aws::Vector<double>>
  void SetPosition(PositionT&& value) {
    m_positionHasBeenSet = true;
    m_position = std::forward<PositionT>(value);
  }
  template <typename PositionT = Aws::Vector<double>>
  RouteTransitPlace& WithPosition(PositionT&& value) {
    SetPosition(std::forward<PositionT>(value));
    return *this;
  }
  inline RouteTransitPlace& AddPosition(double value) {
    m_positionHasBeenSet = true;
    m_position.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about the station.</p>
   */
  inline const RouteStationDetails& GetStationDetails() const { return m_stationDetails; }
  inline bool StationDetailsHasBeenSet() const { return m_stationDetailsHasBeenSet; }
  template <typename StationDetailsT = RouteStationDetails>
  void SetStationDetails(StationDetailsT&& value) {
    m_stationDetailsHasBeenSet = true;
    m_stationDetails = std::forward<StationDetailsT>(value);
  }
  template <typename StationDetailsT = RouteStationDetails>
  RouteTransitPlace& WithStationDetails(StationDetailsT&& value) {
    SetStationDetails(std::forward<StationDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the place.</p>
   */
  inline RouteTransitPlaceType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(RouteTransitPlaceType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline RouteTransitPlace& WithType(RouteTransitPlaceType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Index of the waypoint in the request.</p>
   */
  inline int GetWaypointIndex() const { return m_waypointIndex; }
  inline bool WaypointIndexHasBeenSet() const { return m_waypointIndexHasBeenSet; }
  inline void SetWaypointIndex(int value) {
    m_waypointIndexHasBeenSet = true;
    m_waypointIndex = value;
  }
  inline RouteTransitPlace& WithWaypointIndex(int value) {
    SetWaypointIndex(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::Vector<double> m_originalPosition;

  Aws::Vector<double> m_position;

  RouteStationDetails m_stationDetails;

  RouteTransitPlaceType m_type{RouteTransitPlaceType::NOT_SET};

  int m_waypointIndex{0};
  bool m_nameHasBeenSet = false;
  bool m_originalPositionHasBeenSet = false;
  bool m_positionHasBeenSet = false;
  bool m_stationDetailsHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_waypointIndexHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
