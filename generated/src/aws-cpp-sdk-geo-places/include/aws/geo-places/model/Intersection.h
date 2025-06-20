/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-places/model/Address.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-places/model/AccessPoint.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GeoPlaces
{
namespace Model
{

  /**
   * <p>All Intersections that are near the provided address.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/Intersection">AWS
   * API Reference</a></p>
   */
  class Intersection
  {
  public:
    AWS_GEOPLACES_API Intersection() = default;
    AWS_GEOPLACES_API Intersection(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Intersection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>PlaceId</code> of the place result.</p>
     */
    inline const Aws::String& GetPlaceId() const { return m_placeId; }
    inline bool PlaceIdHasBeenSet() const { return m_placeIdHasBeenSet; }
    template<typename PlaceIdT = Aws::String>
    void SetPlaceId(PlaceIdT&& value) { m_placeIdHasBeenSet = true; m_placeId = std::forward<PlaceIdT>(value); }
    template<typename PlaceIdT = Aws::String>
    Intersection& WithPlaceId(PlaceIdT&& value) { SetPlaceId(std::forward<PlaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The localized display name of this result item based on request parameter
     * <code>language</code>.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    Intersection& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Address& GetAddress() const { return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    template<typename AddressT = Address>
    void SetAddress(AddressT&& value) { m_addressHasBeenSet = true; m_address = std::forward<AddressT>(value); }
    template<typename AddressT = Address>
    Intersection& WithAddress(AddressT&& value) { SetAddress(std::forward<AddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The position, in longitude and latitude.</p>
     */
    inline const Aws::Vector<double>& GetPosition() const { return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    template<typename PositionT = Aws::Vector<double>>
    void SetPosition(PositionT&& value) { m_positionHasBeenSet = true; m_position = std::forward<PositionT>(value); }
    template<typename PositionT = Aws::Vector<double>>
    Intersection& WithPosition(PositionT&& value) { SetPosition(std::forward<PositionT>(value)); return *this;}
    inline Intersection& AddPosition(double value) { m_positionHasBeenSet = true; m_position.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The distance in meters from the QueryPosition.</p>
     */
    inline long long GetDistance() const { return m_distance; }
    inline bool DistanceHasBeenSet() const { return m_distanceHasBeenSet; }
    inline void SetDistance(long long value) { m_distanceHasBeenSet = true; m_distance = value; }
    inline Intersection& WithDistance(long long value) { SetDistance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The distance from the routing position of the nearby address to the street
     * result.</p>
     */
    inline long long GetRouteDistance() const { return m_routeDistance; }
    inline bool RouteDistanceHasBeenSet() const { return m_routeDistanceHasBeenSet; }
    inline void SetRouteDistance(long long value) { m_routeDistanceHasBeenSet = true; m_routeDistance = value; }
    inline Intersection& WithRouteDistance(long long value) { SetRouteDistance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bounding box enclosing the geometric shape (area or line) that an
     * individual result covers.</p> <p>The bounding box formed is defined as a set of
     * four coordinates: <code>[{westward lng}, {southern lat}, {eastward lng},
     * {northern lat}]</code> </p>
     */
    inline const Aws::Vector<double>& GetMapView() const { return m_mapView; }
    inline bool MapViewHasBeenSet() const { return m_mapViewHasBeenSet; }
    template<typename MapViewT = Aws::Vector<double>>
    void SetMapView(MapViewT&& value) { m_mapViewHasBeenSet = true; m_mapView = std::forward<MapViewT>(value); }
    template<typename MapViewT = Aws::Vector<double>>
    Intersection& WithMapView(MapViewT&& value) { SetMapView(std::forward<MapViewT>(value)); return *this;}
    inline Intersection& AddMapView(double value) { m_mapViewHasBeenSet = true; m_mapView.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Position of the access point represented by longitude and latitude.</p>
     */
    inline const Aws::Vector<AccessPoint>& GetAccessPoints() const { return m_accessPoints; }
    inline bool AccessPointsHasBeenSet() const { return m_accessPointsHasBeenSet; }
    template<typename AccessPointsT = Aws::Vector<AccessPoint>>
    void SetAccessPoints(AccessPointsT&& value) { m_accessPointsHasBeenSet = true; m_accessPoints = std::forward<AccessPointsT>(value); }
    template<typename AccessPointsT = Aws::Vector<AccessPoint>>
    Intersection& WithAccessPoints(AccessPointsT&& value) { SetAccessPoints(std::forward<AccessPointsT>(value)); return *this;}
    template<typename AccessPointsT = AccessPoint>
    Intersection& AddAccessPoints(AccessPointsT&& value) { m_accessPointsHasBeenSet = true; m_accessPoints.emplace_back(std::forward<AccessPointsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_placeId;
    bool m_placeIdHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Address m_address;
    bool m_addressHasBeenSet = false;

    Aws::Vector<double> m_position;
    bool m_positionHasBeenSet = false;

    long long m_distance{0};
    bool m_distanceHasBeenSet = false;

    long long m_routeDistance{0};
    bool m_routeDistanceHasBeenSet = false;

    Aws::Vector<double> m_mapView;
    bool m_mapViewHasBeenSet = false;

    Aws::Vector<AccessPoint> m_accessPoints;
    bool m_accessPointsHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
