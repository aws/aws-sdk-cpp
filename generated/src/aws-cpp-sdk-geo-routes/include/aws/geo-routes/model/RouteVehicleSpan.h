/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/model/RouteSpanDynamicSpeedDetails.h>
#include <aws/geo-routes/model/RouteSpanGateAttribute.h>
#include <aws/geo-routes/model/RouteSpanRailwayCrossingAttribute.h>
#include <aws/geo-routes/model/RouteSpanSpeedLimitDetails.h>
#include <aws/geo-routes/model/RouteSpanCarAccessAttribute.h>
#include <aws/geo-routes/model/LocalizedString.h>
#include <aws/geo-routes/model/RouteSpanRoadAttribute.h>
#include <aws/geo-routes/model/RouteNumber.h>
#include <aws/geo-routes/model/RouteSpanScooterAccessAttribute.h>
#include <aws/geo-routes/model/RouteSpanTruckAccessAttribute.h>
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
namespace GeoRoutes
{
namespace Model
{

  /**
   * <p>Span computed for the requested SpanAdditionalFeatures.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteVehicleSpan">AWS
   * API Reference</a></p>
   */
  class RouteVehicleSpan
  {
  public:
    AWS_GEOROUTES_API RouteVehicleSpan() = default;
    AWS_GEOROUTES_API RouteVehicleSpan(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteVehicleSpan& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Duration of the computed span without traffic congestion.</p> <p>
     * <b>Unit</b>: <code>seconds</code> </p>
     */
    inline long long GetBestCaseDuration() const { return m_bestCaseDuration; }
    inline bool BestCaseDurationHasBeenSet() const { return m_bestCaseDurationHasBeenSet; }
    inline void SetBestCaseDuration(long long value) { m_bestCaseDurationHasBeenSet = true; m_bestCaseDuration = value; }
    inline RouteVehicleSpan& WithBestCaseDuration(long long value) { SetBestCaseDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Access attributes for a car corresponding to the span.</p>
     */
    inline const Aws::Vector<RouteSpanCarAccessAttribute>& GetCarAccess() const { return m_carAccess; }
    inline bool CarAccessHasBeenSet() const { return m_carAccessHasBeenSet; }
    template<typename CarAccessT = Aws::Vector<RouteSpanCarAccessAttribute>>
    void SetCarAccess(CarAccessT&& value) { m_carAccessHasBeenSet = true; m_carAccess = std::forward<CarAccessT>(value); }
    template<typename CarAccessT = Aws::Vector<RouteSpanCarAccessAttribute>>
    RouteVehicleSpan& WithCarAccess(CarAccessT&& value) { SetCarAccess(std::forward<CarAccessT>(value)); return *this;}
    inline RouteVehicleSpan& AddCarAccess(RouteSpanCarAccessAttribute value) { m_carAccessHasBeenSet = true; m_carAccess.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>3 letter Country code corresponding to the Span.</p>
     */
    inline const Aws::String& GetCountry() const { return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    template<typename CountryT = Aws::String>
    void SetCountry(CountryT&& value) { m_countryHasBeenSet = true; m_country = std::forward<CountryT>(value); }
    template<typename CountryT = Aws::String>
    RouteVehicleSpan& WithCountry(CountryT&& value) { SetCountry(std::forward<CountryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Distance of the computed span. This feature doesn't split a span, but is
     * always computed on a span split by other properties.</p>
     */
    inline long long GetDistance() const { return m_distance; }
    inline bool DistanceHasBeenSet() const { return m_distanceHasBeenSet; }
    inline void SetDistance(long long value) { m_distanceHasBeenSet = true; m_distance = value; }
    inline RouteVehicleSpan& WithDistance(long long value) { SetDistance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Duration of the computed span. This feature doesn't split a span, but is
     * always computed on a span split by other properties.</p> <p> <b>Unit</b>:
     * <code>seconds</code> </p>
     */
    inline long long GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(long long value) { m_durationHasBeenSet = true; m_duration = value; }
    inline RouteVehicleSpan& WithDuration(long long value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Dynamic speed details corresponding to the span.</p> <p> <b>Unit</b>:
     * <code>KilometersPerHour</code> </p>
     */
    inline const RouteSpanDynamicSpeedDetails& GetDynamicSpeed() const { return m_dynamicSpeed; }
    inline bool DynamicSpeedHasBeenSet() const { return m_dynamicSpeedHasBeenSet; }
    template<typename DynamicSpeedT = RouteSpanDynamicSpeedDetails>
    void SetDynamicSpeed(DynamicSpeedT&& value) { m_dynamicSpeedHasBeenSet = true; m_dynamicSpeed = std::forward<DynamicSpeedT>(value); }
    template<typename DynamicSpeedT = RouteSpanDynamicSpeedDetails>
    RouteVehicleSpan& WithDynamicSpeed(DynamicSpeedT&& value) { SetDynamicSpeed(std::forward<DynamicSpeedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Functional classification of the road segment corresponding to the span.</p>
     */
    inline int GetFunctionalClassification() const { return m_functionalClassification; }
    inline bool FunctionalClassificationHasBeenSet() const { return m_functionalClassificationHasBeenSet; }
    inline void SetFunctionalClassification(int value) { m_functionalClassificationHasBeenSet = true; m_functionalClassification = value; }
    inline RouteVehicleSpan& WithFunctionalClassification(int value) { SetFunctionalClassification(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attributes corresponding to a gate. The gate is present at the end of the
     * returned span.</p>
     */
    inline RouteSpanGateAttribute GetGate() const { return m_gate; }
    inline bool GateHasBeenSet() const { return m_gateHasBeenSet; }
    inline void SetGate(RouteSpanGateAttribute value) { m_gateHasBeenSet = true; m_gate = value; }
    inline RouteVehicleSpan& WithGate(RouteSpanGateAttribute value) { SetGate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Offset in the leg geometry corresponding to the start of this span.</p>
     */
    inline int GetGeometryOffset() const { return m_geometryOffset; }
    inline bool GeometryOffsetHasBeenSet() const { return m_geometryOffsetHasBeenSet; }
    inline void SetGeometryOffset(int value) { m_geometryOffsetHasBeenSet = true; m_geometryOffset = value; }
    inline RouteVehicleSpan& WithGeometryOffset(int value) { SetGeometryOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Incidents corresponding to the span. These index into the Incidents in the
     * parent Leg.</p>
     */
    inline const Aws::Vector<int>& GetIncidents() const { return m_incidents; }
    inline bool IncidentsHasBeenSet() const { return m_incidentsHasBeenSet; }
    template<typename IncidentsT = Aws::Vector<int>>
    void SetIncidents(IncidentsT&& value) { m_incidentsHasBeenSet = true; m_incidents = std::forward<IncidentsT>(value); }
    template<typename IncidentsT = Aws::Vector<int>>
    RouteVehicleSpan& WithIncidents(IncidentsT&& value) { SetIncidents(std::forward<IncidentsT>(value)); return *this;}
    inline RouteVehicleSpan& AddIncidents(int value) { m_incidentsHasBeenSet = true; m_incidents.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides an array of names of the vehicle span in available languages.</p>
     */
    inline const Aws::Vector<LocalizedString>& GetNames() const { return m_names; }
    inline bool NamesHasBeenSet() const { return m_namesHasBeenSet; }
    template<typename NamesT = Aws::Vector<LocalizedString>>
    void SetNames(NamesT&& value) { m_namesHasBeenSet = true; m_names = std::forward<NamesT>(value); }
    template<typename NamesT = Aws::Vector<LocalizedString>>
    RouteVehicleSpan& WithNames(NamesT&& value) { SetNames(std::forward<NamesT>(value)); return *this;}
    template<typename NamesT = LocalizedString>
    RouteVehicleSpan& AddNames(NamesT&& value) { m_namesHasBeenSet = true; m_names.emplace_back(std::forward<NamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Notices are additional information returned that indicate issues that
     * occurred during route calculation.</p>
     */
    inline const Aws::Vector<int>& GetNotices() const { return m_notices; }
    inline bool NoticesHasBeenSet() const { return m_noticesHasBeenSet; }
    template<typename NoticesT = Aws::Vector<int>>
    void SetNotices(NoticesT&& value) { m_noticesHasBeenSet = true; m_notices = std::forward<NoticesT>(value); }
    template<typename NoticesT = Aws::Vector<int>>
    RouteVehicleSpan& WithNotices(NoticesT&& value) { SetNotices(std::forward<NoticesT>(value)); return *this;}
    inline RouteVehicleSpan& AddNotices(int value) { m_noticesHasBeenSet = true; m_notices.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Attributes corresponding to a railway crossing. The gate is present at the
     * end of the returned span.</p>
     */
    inline RouteSpanRailwayCrossingAttribute GetRailwayCrossing() const { return m_railwayCrossing; }
    inline bool RailwayCrossingHasBeenSet() const { return m_railwayCrossingHasBeenSet; }
    inline void SetRailwayCrossing(RouteSpanRailwayCrossingAttribute value) { m_railwayCrossingHasBeenSet = true; m_railwayCrossing = value; }
    inline RouteVehicleSpan& WithRailwayCrossing(RouteSpanRailwayCrossingAttribute value) { SetRailwayCrossing(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>2-3 letter Region code corresponding to the Span. This is either a province
     * or a state.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    RouteVehicleSpan& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attributes for the road segment corresponding to the span. </p>
     */
    inline const Aws::Vector<RouteSpanRoadAttribute>& GetRoadAttributes() const { return m_roadAttributes; }
    inline bool RoadAttributesHasBeenSet() const { return m_roadAttributesHasBeenSet; }
    template<typename RoadAttributesT = Aws::Vector<RouteSpanRoadAttribute>>
    void SetRoadAttributes(RoadAttributesT&& value) { m_roadAttributesHasBeenSet = true; m_roadAttributes = std::forward<RoadAttributesT>(value); }
    template<typename RoadAttributesT = Aws::Vector<RouteSpanRoadAttribute>>
    RouteVehicleSpan& WithRoadAttributes(RoadAttributesT&& value) { SetRoadAttributes(std::forward<RoadAttributesT>(value)); return *this;}
    inline RouteVehicleSpan& AddRoadAttributes(RouteSpanRoadAttribute value) { m_roadAttributesHasBeenSet = true; m_roadAttributes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Designated route name or number corresponding to the span.</p>
     */
    inline const Aws::Vector<RouteNumber>& GetRouteNumbers() const { return m_routeNumbers; }
    inline bool RouteNumbersHasBeenSet() const { return m_routeNumbersHasBeenSet; }
    template<typename RouteNumbersT = Aws::Vector<RouteNumber>>
    void SetRouteNumbers(RouteNumbersT&& value) { m_routeNumbersHasBeenSet = true; m_routeNumbers = std::forward<RouteNumbersT>(value); }
    template<typename RouteNumbersT = Aws::Vector<RouteNumber>>
    RouteVehicleSpan& WithRouteNumbers(RouteNumbersT&& value) { SetRouteNumbers(std::forward<RouteNumbersT>(value)); return *this;}
    template<typename RouteNumbersT = RouteNumber>
    RouteVehicleSpan& AddRouteNumbers(RouteNumbersT&& value) { m_routeNumbersHasBeenSet = true; m_routeNumbers.emplace_back(std::forward<RouteNumbersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Access attributes for a scooter corresponding to the span.</p>
     */
    inline const Aws::Vector<RouteSpanScooterAccessAttribute>& GetScooterAccess() const { return m_scooterAccess; }
    inline bool ScooterAccessHasBeenSet() const { return m_scooterAccessHasBeenSet; }
    template<typename ScooterAccessT = Aws::Vector<RouteSpanScooterAccessAttribute>>
    void SetScooterAccess(ScooterAccessT&& value) { m_scooterAccessHasBeenSet = true; m_scooterAccess = std::forward<ScooterAccessT>(value); }
    template<typename ScooterAccessT = Aws::Vector<RouteSpanScooterAccessAttribute>>
    RouteVehicleSpan& WithScooterAccess(ScooterAccessT&& value) { SetScooterAccess(std::forward<ScooterAccessT>(value)); return *this;}
    inline RouteVehicleSpan& AddScooterAccess(RouteSpanScooterAccessAttribute value) { m_scooterAccessHasBeenSet = true; m_scooterAccess.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Speed limit details corresponding to the span.</p> <p> <b>Unit</b>:
     * <code>KilometersPerHour</code> </p>
     */
    inline const RouteSpanSpeedLimitDetails& GetSpeedLimit() const { return m_speedLimit; }
    inline bool SpeedLimitHasBeenSet() const { return m_speedLimitHasBeenSet; }
    template<typename SpeedLimitT = RouteSpanSpeedLimitDetails>
    void SetSpeedLimit(SpeedLimitT&& value) { m_speedLimitHasBeenSet = true; m_speedLimit = std::forward<SpeedLimitT>(value); }
    template<typename SpeedLimitT = RouteSpanSpeedLimitDetails>
    RouteVehicleSpan& WithSpeedLimit(SpeedLimitT&& value) { SetSpeedLimit(std::forward<SpeedLimitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Toll systems are authorities that collect payments for the toll.</p>
     */
    inline const Aws::Vector<int>& GetTollSystems() const { return m_tollSystems; }
    inline bool TollSystemsHasBeenSet() const { return m_tollSystemsHasBeenSet; }
    template<typename TollSystemsT = Aws::Vector<int>>
    void SetTollSystems(TollSystemsT&& value) { m_tollSystemsHasBeenSet = true; m_tollSystems = std::forward<TollSystemsT>(value); }
    template<typename TollSystemsT = Aws::Vector<int>>
    RouteVehicleSpan& WithTollSystems(TollSystemsT&& value) { SetTollSystems(std::forward<TollSystemsT>(value)); return *this;}
    inline RouteVehicleSpan& AddTollSystems(int value) { m_tollSystemsHasBeenSet = true; m_tollSystems.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Access attributes for a truck corresponding to the span.</p>
     */
    inline const Aws::Vector<RouteSpanTruckAccessAttribute>& GetTruckAccess() const { return m_truckAccess; }
    inline bool TruckAccessHasBeenSet() const { return m_truckAccessHasBeenSet; }
    template<typename TruckAccessT = Aws::Vector<RouteSpanTruckAccessAttribute>>
    void SetTruckAccess(TruckAccessT&& value) { m_truckAccessHasBeenSet = true; m_truckAccess = std::forward<TruckAccessT>(value); }
    template<typename TruckAccessT = Aws::Vector<RouteSpanTruckAccessAttribute>>
    RouteVehicleSpan& WithTruckAccess(TruckAccessT&& value) { SetTruckAccess(std::forward<TruckAccessT>(value)); return *this;}
    inline RouteVehicleSpan& AddTruckAccess(RouteSpanTruckAccessAttribute value) { m_truckAccessHasBeenSet = true; m_truckAccess.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Truck road type identifiers. <code>BK1</code> through <code>BK4</code> apply
     * only to Sweden. <code>A2,A4,B2,B4,C,D,ET2,ET4</code> apply only to Mexico.</p>
     *  <p>There are currently no other supported values as of 26th April
     * 2024.</p> 
     */
    inline const Aws::Vector<int>& GetTruckRoadTypes() const { return m_truckRoadTypes; }
    inline bool TruckRoadTypesHasBeenSet() const { return m_truckRoadTypesHasBeenSet; }
    template<typename TruckRoadTypesT = Aws::Vector<int>>
    void SetTruckRoadTypes(TruckRoadTypesT&& value) { m_truckRoadTypesHasBeenSet = true; m_truckRoadTypes = std::forward<TruckRoadTypesT>(value); }
    template<typename TruckRoadTypesT = Aws::Vector<int>>
    RouteVehicleSpan& WithTruckRoadTypes(TruckRoadTypesT&& value) { SetTruckRoadTypes(std::forward<TruckRoadTypesT>(value)); return *this;}
    inline RouteVehicleSpan& AddTruckRoadTypes(int value) { m_truckRoadTypesHasBeenSet = true; m_truckRoadTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Duration of the computed span under typical traffic congestion. </p> <p>
     * <b>Unit</b>: <code>seconds</code> </p>
     */
    inline long long GetTypicalDuration() const { return m_typicalDuration; }
    inline bool TypicalDurationHasBeenSet() const { return m_typicalDurationHasBeenSet; }
    inline void SetTypicalDuration(long long value) { m_typicalDurationHasBeenSet = true; m_typicalDuration = value; }
    inline RouteVehicleSpan& WithTypicalDuration(long long value) { SetTypicalDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Zones corresponding to this leg of the route.</p>
     */
    inline const Aws::Vector<int>& GetZones() const { return m_zones; }
    inline bool ZonesHasBeenSet() const { return m_zonesHasBeenSet; }
    template<typename ZonesT = Aws::Vector<int>>
    void SetZones(ZonesT&& value) { m_zonesHasBeenSet = true; m_zones = std::forward<ZonesT>(value); }
    template<typename ZonesT = Aws::Vector<int>>
    RouteVehicleSpan& WithZones(ZonesT&& value) { SetZones(std::forward<ZonesT>(value)); return *this;}
    inline RouteVehicleSpan& AddZones(int value) { m_zonesHasBeenSet = true; m_zones.push_back(value); return *this; }
    ///@}
  private:

    long long m_bestCaseDuration{0};
    bool m_bestCaseDurationHasBeenSet = false;

    Aws::Vector<RouteSpanCarAccessAttribute> m_carAccess;
    bool m_carAccessHasBeenSet = false;

    Aws::String m_country;
    bool m_countryHasBeenSet = false;

    long long m_distance{0};
    bool m_distanceHasBeenSet = false;

    long long m_duration{0};
    bool m_durationHasBeenSet = false;

    RouteSpanDynamicSpeedDetails m_dynamicSpeed;
    bool m_dynamicSpeedHasBeenSet = false;

    int m_functionalClassification{0};
    bool m_functionalClassificationHasBeenSet = false;

    RouteSpanGateAttribute m_gate{RouteSpanGateAttribute::NOT_SET};
    bool m_gateHasBeenSet = false;

    int m_geometryOffset{0};
    bool m_geometryOffsetHasBeenSet = false;

    Aws::Vector<int> m_incidents;
    bool m_incidentsHasBeenSet = false;

    Aws::Vector<LocalizedString> m_names;
    bool m_namesHasBeenSet = false;

    Aws::Vector<int> m_notices;
    bool m_noticesHasBeenSet = false;

    RouteSpanRailwayCrossingAttribute m_railwayCrossing{RouteSpanRailwayCrossingAttribute::NOT_SET};
    bool m_railwayCrossingHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::Vector<RouteSpanRoadAttribute> m_roadAttributes;
    bool m_roadAttributesHasBeenSet = false;

    Aws::Vector<RouteNumber> m_routeNumbers;
    bool m_routeNumbersHasBeenSet = false;

    Aws::Vector<RouteSpanScooterAccessAttribute> m_scooterAccess;
    bool m_scooterAccessHasBeenSet = false;

    RouteSpanSpeedLimitDetails m_speedLimit;
    bool m_speedLimitHasBeenSet = false;

    Aws::Vector<int> m_tollSystems;
    bool m_tollSystemsHasBeenSet = false;

    Aws::Vector<RouteSpanTruckAccessAttribute> m_truckAccess;
    bool m_truckAccessHasBeenSet = false;

    Aws::Vector<int> m_truckRoadTypes;
    bool m_truckRoadTypesHasBeenSet = false;

    long long m_typicalDuration{0};
    bool m_typicalDurationHasBeenSet = false;

    Aws::Vector<int> m_zones;
    bool m_zonesHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
