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
    AWS_GEOROUTES_API RouteVehicleSpan();
    AWS_GEOROUTES_API RouteVehicleSpan(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteVehicleSpan& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Duration of the computed span without traffic congestion.</p> <p>
     * <b>Unit</b>: <code>seconds</code> </p>
     */
    inline long long GetBestCaseDuration() const{ return m_bestCaseDuration; }
    inline bool BestCaseDurationHasBeenSet() const { return m_bestCaseDurationHasBeenSet; }
    inline void SetBestCaseDuration(long long value) { m_bestCaseDurationHasBeenSet = true; m_bestCaseDuration = value; }
    inline RouteVehicleSpan& WithBestCaseDuration(long long value) { SetBestCaseDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Access attributes for a car corresponding to the span.</p>
     */
    inline const Aws::Vector<RouteSpanCarAccessAttribute>& GetCarAccess() const{ return m_carAccess; }
    inline bool CarAccessHasBeenSet() const { return m_carAccessHasBeenSet; }
    inline void SetCarAccess(const Aws::Vector<RouteSpanCarAccessAttribute>& value) { m_carAccessHasBeenSet = true; m_carAccess = value; }
    inline void SetCarAccess(Aws::Vector<RouteSpanCarAccessAttribute>&& value) { m_carAccessHasBeenSet = true; m_carAccess = std::move(value); }
    inline RouteVehicleSpan& WithCarAccess(const Aws::Vector<RouteSpanCarAccessAttribute>& value) { SetCarAccess(value); return *this;}
    inline RouteVehicleSpan& WithCarAccess(Aws::Vector<RouteSpanCarAccessAttribute>&& value) { SetCarAccess(std::move(value)); return *this;}
    inline RouteVehicleSpan& AddCarAccess(const RouteSpanCarAccessAttribute& value) { m_carAccessHasBeenSet = true; m_carAccess.push_back(value); return *this; }
    inline RouteVehicleSpan& AddCarAccess(RouteSpanCarAccessAttribute&& value) { m_carAccessHasBeenSet = true; m_carAccess.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>3 letter Country code corresponding to the Span.</p>
     */
    inline const Aws::String& GetCountry() const{ return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    inline void SetCountry(const Aws::String& value) { m_countryHasBeenSet = true; m_country = value; }
    inline void SetCountry(Aws::String&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }
    inline void SetCountry(const char* value) { m_countryHasBeenSet = true; m_country.assign(value); }
    inline RouteVehicleSpan& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}
    inline RouteVehicleSpan& WithCountry(Aws::String&& value) { SetCountry(std::move(value)); return *this;}
    inline RouteVehicleSpan& WithCountry(const char* value) { SetCountry(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Distance of the computed span. This feature doesn't split a span, but is
     * always computed on a span split by other properties.</p>
     */
    inline long long GetDistance() const{ return m_distance; }
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
    inline long long GetDuration() const{ return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(long long value) { m_durationHasBeenSet = true; m_duration = value; }
    inline RouteVehicleSpan& WithDuration(long long value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Dynamic speed details corresponding to the span.</p> <p> <b>Unit</b>:
     * <code>KilometersPerHour</code> </p>
     */
    inline const RouteSpanDynamicSpeedDetails& GetDynamicSpeed() const{ return m_dynamicSpeed; }
    inline bool DynamicSpeedHasBeenSet() const { return m_dynamicSpeedHasBeenSet; }
    inline void SetDynamicSpeed(const RouteSpanDynamicSpeedDetails& value) { m_dynamicSpeedHasBeenSet = true; m_dynamicSpeed = value; }
    inline void SetDynamicSpeed(RouteSpanDynamicSpeedDetails&& value) { m_dynamicSpeedHasBeenSet = true; m_dynamicSpeed = std::move(value); }
    inline RouteVehicleSpan& WithDynamicSpeed(const RouteSpanDynamicSpeedDetails& value) { SetDynamicSpeed(value); return *this;}
    inline RouteVehicleSpan& WithDynamicSpeed(RouteSpanDynamicSpeedDetails&& value) { SetDynamicSpeed(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Functional classification of the road segment corresponding to the span.</p>
     */
    inline int GetFunctionalClassification() const{ return m_functionalClassification; }
    inline bool FunctionalClassificationHasBeenSet() const { return m_functionalClassificationHasBeenSet; }
    inline void SetFunctionalClassification(int value) { m_functionalClassificationHasBeenSet = true; m_functionalClassification = value; }
    inline RouteVehicleSpan& WithFunctionalClassification(int value) { SetFunctionalClassification(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attributes corresponding to a gate. The gate is present at the end of the
     * returned span.</p>
     */
    inline const RouteSpanGateAttribute& GetGate() const{ return m_gate; }
    inline bool GateHasBeenSet() const { return m_gateHasBeenSet; }
    inline void SetGate(const RouteSpanGateAttribute& value) { m_gateHasBeenSet = true; m_gate = value; }
    inline void SetGate(RouteSpanGateAttribute&& value) { m_gateHasBeenSet = true; m_gate = std::move(value); }
    inline RouteVehicleSpan& WithGate(const RouteSpanGateAttribute& value) { SetGate(value); return *this;}
    inline RouteVehicleSpan& WithGate(RouteSpanGateAttribute&& value) { SetGate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Offset in the leg geometry corresponding to the start of this span.</p>
     */
    inline int GetGeometryOffset() const{ return m_geometryOffset; }
    inline bool GeometryOffsetHasBeenSet() const { return m_geometryOffsetHasBeenSet; }
    inline void SetGeometryOffset(int value) { m_geometryOffsetHasBeenSet = true; m_geometryOffset = value; }
    inline RouteVehicleSpan& WithGeometryOffset(int value) { SetGeometryOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Incidents corresponding to the span. These index into the Incidents in the
     * parent Leg.</p>
     */
    inline const Aws::Vector<int>& GetIncidents() const{ return m_incidents; }
    inline bool IncidentsHasBeenSet() const { return m_incidentsHasBeenSet; }
    inline void SetIncidents(const Aws::Vector<int>& value) { m_incidentsHasBeenSet = true; m_incidents = value; }
    inline void SetIncidents(Aws::Vector<int>&& value) { m_incidentsHasBeenSet = true; m_incidents = std::move(value); }
    inline RouteVehicleSpan& WithIncidents(const Aws::Vector<int>& value) { SetIncidents(value); return *this;}
    inline RouteVehicleSpan& WithIncidents(Aws::Vector<int>&& value) { SetIncidents(std::move(value)); return *this;}
    inline RouteVehicleSpan& AddIncidents(int value) { m_incidentsHasBeenSet = true; m_incidents.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides an array of names of the vehicle span in available languages.</p>
     */
    inline const Aws::Vector<LocalizedString>& GetNames() const{ return m_names; }
    inline bool NamesHasBeenSet() const { return m_namesHasBeenSet; }
    inline void SetNames(const Aws::Vector<LocalizedString>& value) { m_namesHasBeenSet = true; m_names = value; }
    inline void SetNames(Aws::Vector<LocalizedString>&& value) { m_namesHasBeenSet = true; m_names = std::move(value); }
    inline RouteVehicleSpan& WithNames(const Aws::Vector<LocalizedString>& value) { SetNames(value); return *this;}
    inline RouteVehicleSpan& WithNames(Aws::Vector<LocalizedString>&& value) { SetNames(std::move(value)); return *this;}
    inline RouteVehicleSpan& AddNames(const LocalizedString& value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }
    inline RouteVehicleSpan& AddNames(LocalizedString&& value) { m_namesHasBeenSet = true; m_names.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Notices are additional information returned that indicate issues that
     * occurred during route calculation.</p>
     */
    inline const Aws::Vector<int>& GetNotices() const{ return m_notices; }
    inline bool NoticesHasBeenSet() const { return m_noticesHasBeenSet; }
    inline void SetNotices(const Aws::Vector<int>& value) { m_noticesHasBeenSet = true; m_notices = value; }
    inline void SetNotices(Aws::Vector<int>&& value) { m_noticesHasBeenSet = true; m_notices = std::move(value); }
    inline RouteVehicleSpan& WithNotices(const Aws::Vector<int>& value) { SetNotices(value); return *this;}
    inline RouteVehicleSpan& WithNotices(Aws::Vector<int>&& value) { SetNotices(std::move(value)); return *this;}
    inline RouteVehicleSpan& AddNotices(int value) { m_noticesHasBeenSet = true; m_notices.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Attributes corresponding to a railway crossing. The gate is present at the
     * end of the returned span.</p>
     */
    inline const RouteSpanRailwayCrossingAttribute& GetRailwayCrossing() const{ return m_railwayCrossing; }
    inline bool RailwayCrossingHasBeenSet() const { return m_railwayCrossingHasBeenSet; }
    inline void SetRailwayCrossing(const RouteSpanRailwayCrossingAttribute& value) { m_railwayCrossingHasBeenSet = true; m_railwayCrossing = value; }
    inline void SetRailwayCrossing(RouteSpanRailwayCrossingAttribute&& value) { m_railwayCrossingHasBeenSet = true; m_railwayCrossing = std::move(value); }
    inline RouteVehicleSpan& WithRailwayCrossing(const RouteSpanRailwayCrossingAttribute& value) { SetRailwayCrossing(value); return *this;}
    inline RouteVehicleSpan& WithRailwayCrossing(RouteSpanRailwayCrossingAttribute&& value) { SetRailwayCrossing(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>2-3 letter Region code corresponding to the Span. This is either a province
     * or a state.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline RouteVehicleSpan& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline RouteVehicleSpan& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline RouteVehicleSpan& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attributes for the road segment corresponding to the span. </p>
     */
    inline const Aws::Vector<RouteSpanRoadAttribute>& GetRoadAttributes() const{ return m_roadAttributes; }
    inline bool RoadAttributesHasBeenSet() const { return m_roadAttributesHasBeenSet; }
    inline void SetRoadAttributes(const Aws::Vector<RouteSpanRoadAttribute>& value) { m_roadAttributesHasBeenSet = true; m_roadAttributes = value; }
    inline void SetRoadAttributes(Aws::Vector<RouteSpanRoadAttribute>&& value) { m_roadAttributesHasBeenSet = true; m_roadAttributes = std::move(value); }
    inline RouteVehicleSpan& WithRoadAttributes(const Aws::Vector<RouteSpanRoadAttribute>& value) { SetRoadAttributes(value); return *this;}
    inline RouteVehicleSpan& WithRoadAttributes(Aws::Vector<RouteSpanRoadAttribute>&& value) { SetRoadAttributes(std::move(value)); return *this;}
    inline RouteVehicleSpan& AddRoadAttributes(const RouteSpanRoadAttribute& value) { m_roadAttributesHasBeenSet = true; m_roadAttributes.push_back(value); return *this; }
    inline RouteVehicleSpan& AddRoadAttributes(RouteSpanRoadAttribute&& value) { m_roadAttributesHasBeenSet = true; m_roadAttributes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Designated route name or number corresponding to the span.</p>
     */
    inline const Aws::Vector<RouteNumber>& GetRouteNumbers() const{ return m_routeNumbers; }
    inline bool RouteNumbersHasBeenSet() const { return m_routeNumbersHasBeenSet; }
    inline void SetRouteNumbers(const Aws::Vector<RouteNumber>& value) { m_routeNumbersHasBeenSet = true; m_routeNumbers = value; }
    inline void SetRouteNumbers(Aws::Vector<RouteNumber>&& value) { m_routeNumbersHasBeenSet = true; m_routeNumbers = std::move(value); }
    inline RouteVehicleSpan& WithRouteNumbers(const Aws::Vector<RouteNumber>& value) { SetRouteNumbers(value); return *this;}
    inline RouteVehicleSpan& WithRouteNumbers(Aws::Vector<RouteNumber>&& value) { SetRouteNumbers(std::move(value)); return *this;}
    inline RouteVehicleSpan& AddRouteNumbers(const RouteNumber& value) { m_routeNumbersHasBeenSet = true; m_routeNumbers.push_back(value); return *this; }
    inline RouteVehicleSpan& AddRouteNumbers(RouteNumber&& value) { m_routeNumbersHasBeenSet = true; m_routeNumbers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Access attributes for a scooter corresponding to the span.</p>
     */
    inline const Aws::Vector<RouteSpanScooterAccessAttribute>& GetScooterAccess() const{ return m_scooterAccess; }
    inline bool ScooterAccessHasBeenSet() const { return m_scooterAccessHasBeenSet; }
    inline void SetScooterAccess(const Aws::Vector<RouteSpanScooterAccessAttribute>& value) { m_scooterAccessHasBeenSet = true; m_scooterAccess = value; }
    inline void SetScooterAccess(Aws::Vector<RouteSpanScooterAccessAttribute>&& value) { m_scooterAccessHasBeenSet = true; m_scooterAccess = std::move(value); }
    inline RouteVehicleSpan& WithScooterAccess(const Aws::Vector<RouteSpanScooterAccessAttribute>& value) { SetScooterAccess(value); return *this;}
    inline RouteVehicleSpan& WithScooterAccess(Aws::Vector<RouteSpanScooterAccessAttribute>&& value) { SetScooterAccess(std::move(value)); return *this;}
    inline RouteVehicleSpan& AddScooterAccess(const RouteSpanScooterAccessAttribute& value) { m_scooterAccessHasBeenSet = true; m_scooterAccess.push_back(value); return *this; }
    inline RouteVehicleSpan& AddScooterAccess(RouteSpanScooterAccessAttribute&& value) { m_scooterAccessHasBeenSet = true; m_scooterAccess.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Speed limit details corresponding to the span.</p> <p> <b>Unit</b>:
     * <code>KilometersPerHour</code> </p>
     */
    inline const RouteSpanSpeedLimitDetails& GetSpeedLimit() const{ return m_speedLimit; }
    inline bool SpeedLimitHasBeenSet() const { return m_speedLimitHasBeenSet; }
    inline void SetSpeedLimit(const RouteSpanSpeedLimitDetails& value) { m_speedLimitHasBeenSet = true; m_speedLimit = value; }
    inline void SetSpeedLimit(RouteSpanSpeedLimitDetails&& value) { m_speedLimitHasBeenSet = true; m_speedLimit = std::move(value); }
    inline RouteVehicleSpan& WithSpeedLimit(const RouteSpanSpeedLimitDetails& value) { SetSpeedLimit(value); return *this;}
    inline RouteVehicleSpan& WithSpeedLimit(RouteSpanSpeedLimitDetails&& value) { SetSpeedLimit(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Toll systems are authorities that collect payments for the toll.</p>
     */
    inline const Aws::Vector<int>& GetTollSystems() const{ return m_tollSystems; }
    inline bool TollSystemsHasBeenSet() const { return m_tollSystemsHasBeenSet; }
    inline void SetTollSystems(const Aws::Vector<int>& value) { m_tollSystemsHasBeenSet = true; m_tollSystems = value; }
    inline void SetTollSystems(Aws::Vector<int>&& value) { m_tollSystemsHasBeenSet = true; m_tollSystems = std::move(value); }
    inline RouteVehicleSpan& WithTollSystems(const Aws::Vector<int>& value) { SetTollSystems(value); return *this;}
    inline RouteVehicleSpan& WithTollSystems(Aws::Vector<int>&& value) { SetTollSystems(std::move(value)); return *this;}
    inline RouteVehicleSpan& AddTollSystems(int value) { m_tollSystemsHasBeenSet = true; m_tollSystems.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Access attributes for a truck corresponding to the span.</p>
     */
    inline const Aws::Vector<RouteSpanTruckAccessAttribute>& GetTruckAccess() const{ return m_truckAccess; }
    inline bool TruckAccessHasBeenSet() const { return m_truckAccessHasBeenSet; }
    inline void SetTruckAccess(const Aws::Vector<RouteSpanTruckAccessAttribute>& value) { m_truckAccessHasBeenSet = true; m_truckAccess = value; }
    inline void SetTruckAccess(Aws::Vector<RouteSpanTruckAccessAttribute>&& value) { m_truckAccessHasBeenSet = true; m_truckAccess = std::move(value); }
    inline RouteVehicleSpan& WithTruckAccess(const Aws::Vector<RouteSpanTruckAccessAttribute>& value) { SetTruckAccess(value); return *this;}
    inline RouteVehicleSpan& WithTruckAccess(Aws::Vector<RouteSpanTruckAccessAttribute>&& value) { SetTruckAccess(std::move(value)); return *this;}
    inline RouteVehicleSpan& AddTruckAccess(const RouteSpanTruckAccessAttribute& value) { m_truckAccessHasBeenSet = true; m_truckAccess.push_back(value); return *this; }
    inline RouteVehicleSpan& AddTruckAccess(RouteSpanTruckAccessAttribute&& value) { m_truckAccessHasBeenSet = true; m_truckAccess.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Truck road type identifiers. <code>BK1</code> through <code>BK4</code> apply
     * only to Sweden. <code>A2,A4,B2,B4,C,D,ET2,ET4</code> apply only to Mexico.</p>
     *  <p>There are currently no other supported values as of 26th April
     * 2024.</p> 
     */
    inline const Aws::Vector<int>& GetTruckRoadTypes() const{ return m_truckRoadTypes; }
    inline bool TruckRoadTypesHasBeenSet() const { return m_truckRoadTypesHasBeenSet; }
    inline void SetTruckRoadTypes(const Aws::Vector<int>& value) { m_truckRoadTypesHasBeenSet = true; m_truckRoadTypes = value; }
    inline void SetTruckRoadTypes(Aws::Vector<int>&& value) { m_truckRoadTypesHasBeenSet = true; m_truckRoadTypes = std::move(value); }
    inline RouteVehicleSpan& WithTruckRoadTypes(const Aws::Vector<int>& value) { SetTruckRoadTypes(value); return *this;}
    inline RouteVehicleSpan& WithTruckRoadTypes(Aws::Vector<int>&& value) { SetTruckRoadTypes(std::move(value)); return *this;}
    inline RouteVehicleSpan& AddTruckRoadTypes(int value) { m_truckRoadTypesHasBeenSet = true; m_truckRoadTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Duration of the computed span under typical traffic congestion. </p> <p>
     * <b>Unit</b>: <code>seconds</code> </p>
     */
    inline long long GetTypicalDuration() const{ return m_typicalDuration; }
    inline bool TypicalDurationHasBeenSet() const { return m_typicalDurationHasBeenSet; }
    inline void SetTypicalDuration(long long value) { m_typicalDurationHasBeenSet = true; m_typicalDuration = value; }
    inline RouteVehicleSpan& WithTypicalDuration(long long value) { SetTypicalDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Zones corresponding to this leg of the route.</p>
     */
    inline const Aws::Vector<int>& GetZones() const{ return m_zones; }
    inline bool ZonesHasBeenSet() const { return m_zonesHasBeenSet; }
    inline void SetZones(const Aws::Vector<int>& value) { m_zonesHasBeenSet = true; m_zones = value; }
    inline void SetZones(Aws::Vector<int>&& value) { m_zonesHasBeenSet = true; m_zones = std::move(value); }
    inline RouteVehicleSpan& WithZones(const Aws::Vector<int>& value) { SetZones(value); return *this;}
    inline RouteVehicleSpan& WithZones(Aws::Vector<int>&& value) { SetZones(std::move(value)); return *this;}
    inline RouteVehicleSpan& AddZones(int value) { m_zonesHasBeenSet = true; m_zones.push_back(value); return *this; }
    ///@}
  private:

    long long m_bestCaseDuration;
    bool m_bestCaseDurationHasBeenSet = false;

    Aws::Vector<RouteSpanCarAccessAttribute> m_carAccess;
    bool m_carAccessHasBeenSet = false;

    Aws::String m_country;
    bool m_countryHasBeenSet = false;

    long long m_distance;
    bool m_distanceHasBeenSet = false;

    long long m_duration;
    bool m_durationHasBeenSet = false;

    RouteSpanDynamicSpeedDetails m_dynamicSpeed;
    bool m_dynamicSpeedHasBeenSet = false;

    int m_functionalClassification;
    bool m_functionalClassificationHasBeenSet = false;

    RouteSpanGateAttribute m_gate;
    bool m_gateHasBeenSet = false;

    int m_geometryOffset;
    bool m_geometryOffsetHasBeenSet = false;

    Aws::Vector<int> m_incidents;
    bool m_incidentsHasBeenSet = false;

    Aws::Vector<LocalizedString> m_names;
    bool m_namesHasBeenSet = false;

    Aws::Vector<int> m_notices;
    bool m_noticesHasBeenSet = false;

    RouteSpanRailwayCrossingAttribute m_railwayCrossing;
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

    long long m_typicalDuration;
    bool m_typicalDurationHasBeenSet = false;

    Aws::Vector<int> m_zones;
    bool m_zonesHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
