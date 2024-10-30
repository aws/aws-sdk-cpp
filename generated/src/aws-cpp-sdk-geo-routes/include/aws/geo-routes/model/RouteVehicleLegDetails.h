/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteVehicleArrival.h>
#include <aws/geo-routes/model/RouteVehicleDeparture.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/model/RouteVehicleSummary.h>
#include <aws/geo-routes/model/RouteVehicleIncident.h>
#include <aws/geo-routes/model/RouteVehicleNotice.h>
#include <aws/geo-routes/model/RoutePassThroughWaypoint.h>
#include <aws/geo-routes/model/RouteVehicleSpan.h>
#include <aws/geo-routes/model/RouteToll.h>
#include <aws/geo-routes/model/RouteTollSystem.h>
#include <aws/geo-routes/model/RouteVehicleTravelStep.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/model/RouteZone.h>
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
   * <p>Steps of a leg that correspond to the travel portion of the
   * leg.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteVehicleLegDetails">AWS
   * API Reference</a></p>
   */
  class RouteVehicleLegDetails
  {
  public:
    AWS_GEOROUTES_API RouteVehicleLegDetails();
    AWS_GEOROUTES_API RouteVehicleLegDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteVehicleLegDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details corresponding to the arrival for the leg.</p>
     */
    inline const RouteVehicleArrival& GetArrival() const{ return m_arrival; }
    inline bool ArrivalHasBeenSet() const { return m_arrivalHasBeenSet; }
    inline void SetArrival(const RouteVehicleArrival& value) { m_arrivalHasBeenSet = true; m_arrival = value; }
    inline void SetArrival(RouteVehicleArrival&& value) { m_arrivalHasBeenSet = true; m_arrival = std::move(value); }
    inline RouteVehicleLegDetails& WithArrival(const RouteVehicleArrival& value) { SetArrival(value); return *this;}
    inline RouteVehicleLegDetails& WithArrival(RouteVehicleArrival&& value) { SetArrival(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details corresponding to the departure for the leg.</p>
     */
    inline const RouteVehicleDeparture& GetDeparture() const{ return m_departure; }
    inline bool DepartureHasBeenSet() const { return m_departureHasBeenSet; }
    inline void SetDeparture(const RouteVehicleDeparture& value) { m_departureHasBeenSet = true; m_departure = value; }
    inline void SetDeparture(RouteVehicleDeparture&& value) { m_departureHasBeenSet = true; m_departure = std::move(value); }
    inline RouteVehicleLegDetails& WithDeparture(const RouteVehicleDeparture& value) { SetDeparture(value); return *this;}
    inline RouteVehicleLegDetails& WithDeparture(RouteVehicleDeparture&& value) { SetDeparture(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Incidents corresponding to this leg of the route.</p>
     */
    inline const Aws::Vector<RouteVehicleIncident>& GetIncidents() const{ return m_incidents; }
    inline bool IncidentsHasBeenSet() const { return m_incidentsHasBeenSet; }
    inline void SetIncidents(const Aws::Vector<RouteVehicleIncident>& value) { m_incidentsHasBeenSet = true; m_incidents = value; }
    inline void SetIncidents(Aws::Vector<RouteVehicleIncident>&& value) { m_incidentsHasBeenSet = true; m_incidents = std::move(value); }
    inline RouteVehicleLegDetails& WithIncidents(const Aws::Vector<RouteVehicleIncident>& value) { SetIncidents(value); return *this;}
    inline RouteVehicleLegDetails& WithIncidents(Aws::Vector<RouteVehicleIncident>&& value) { SetIncidents(std::move(value)); return *this;}
    inline RouteVehicleLegDetails& AddIncidents(const RouteVehicleIncident& value) { m_incidentsHasBeenSet = true; m_incidents.push_back(value); return *this; }
    inline RouteVehicleLegDetails& AddIncidents(RouteVehicleIncident&& value) { m_incidentsHasBeenSet = true; m_incidents.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Notices are additional information returned that indicate issues that
     * occurred during route calculation.</p>
     */
    inline const Aws::Vector<RouteVehicleNotice>& GetNotices() const{ return m_notices; }
    inline bool NoticesHasBeenSet() const { return m_noticesHasBeenSet; }
    inline void SetNotices(const Aws::Vector<RouteVehicleNotice>& value) { m_noticesHasBeenSet = true; m_notices = value; }
    inline void SetNotices(Aws::Vector<RouteVehicleNotice>&& value) { m_noticesHasBeenSet = true; m_notices = std::move(value); }
    inline RouteVehicleLegDetails& WithNotices(const Aws::Vector<RouteVehicleNotice>& value) { SetNotices(value); return *this;}
    inline RouteVehicleLegDetails& WithNotices(Aws::Vector<RouteVehicleNotice>&& value) { SetNotices(std::move(value)); return *this;}
    inline RouteVehicleLegDetails& AddNotices(const RouteVehicleNotice& value) { m_noticesHasBeenSet = true; m_notices.push_back(value); return *this; }
    inline RouteVehicleLegDetails& AddNotices(RouteVehicleNotice&& value) { m_noticesHasBeenSet = true; m_notices.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Waypoints that were passed through during the leg. This includes the
     * waypoints that were configured with the PassThrough option.</p>
     */
    inline const Aws::Vector<RoutePassThroughWaypoint>& GetPassThroughWaypoints() const{ return m_passThroughWaypoints; }
    inline bool PassThroughWaypointsHasBeenSet() const { return m_passThroughWaypointsHasBeenSet; }
    inline void SetPassThroughWaypoints(const Aws::Vector<RoutePassThroughWaypoint>& value) { m_passThroughWaypointsHasBeenSet = true; m_passThroughWaypoints = value; }
    inline void SetPassThroughWaypoints(Aws::Vector<RoutePassThroughWaypoint>&& value) { m_passThroughWaypointsHasBeenSet = true; m_passThroughWaypoints = std::move(value); }
    inline RouteVehicleLegDetails& WithPassThroughWaypoints(const Aws::Vector<RoutePassThroughWaypoint>& value) { SetPassThroughWaypoints(value); return *this;}
    inline RouteVehicleLegDetails& WithPassThroughWaypoints(Aws::Vector<RoutePassThroughWaypoint>&& value) { SetPassThroughWaypoints(std::move(value)); return *this;}
    inline RouteVehicleLegDetails& AddPassThroughWaypoints(const RoutePassThroughWaypoint& value) { m_passThroughWaypointsHasBeenSet = true; m_passThroughWaypoints.push_back(value); return *this; }
    inline RouteVehicleLegDetails& AddPassThroughWaypoints(RoutePassThroughWaypoint&& value) { m_passThroughWaypointsHasBeenSet = true; m_passThroughWaypoints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Spans that were computed for the requested SpanAdditionalFeatures.</p>
     */
    inline const Aws::Vector<RouteVehicleSpan>& GetSpans() const{ return m_spans; }
    inline bool SpansHasBeenSet() const { return m_spansHasBeenSet; }
    inline void SetSpans(const Aws::Vector<RouteVehicleSpan>& value) { m_spansHasBeenSet = true; m_spans = value; }
    inline void SetSpans(Aws::Vector<RouteVehicleSpan>&& value) { m_spansHasBeenSet = true; m_spans = std::move(value); }
    inline RouteVehicleLegDetails& WithSpans(const Aws::Vector<RouteVehicleSpan>& value) { SetSpans(value); return *this;}
    inline RouteVehicleLegDetails& WithSpans(Aws::Vector<RouteVehicleSpan>&& value) { SetSpans(std::move(value)); return *this;}
    inline RouteVehicleLegDetails& AddSpans(const RouteVehicleSpan& value) { m_spansHasBeenSet = true; m_spans.push_back(value); return *this; }
    inline RouteVehicleLegDetails& AddSpans(RouteVehicleSpan&& value) { m_spansHasBeenSet = true; m_spans.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Summarized details of the leg.</p>
     */
    inline const RouteVehicleSummary& GetSummary() const{ return m_summary; }
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
    inline void SetSummary(const RouteVehicleSummary& value) { m_summaryHasBeenSet = true; m_summary = value; }
    inline void SetSummary(RouteVehicleSummary&& value) { m_summaryHasBeenSet = true; m_summary = std::move(value); }
    inline RouteVehicleLegDetails& WithSummary(const RouteVehicleSummary& value) { SetSummary(value); return *this;}
    inline RouteVehicleLegDetails& WithSummary(RouteVehicleSummary&& value) { SetSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Toll related options.</p>
     */
    inline const Aws::Vector<RouteToll>& GetTolls() const{ return m_tolls; }
    inline bool TollsHasBeenSet() const { return m_tollsHasBeenSet; }
    inline void SetTolls(const Aws::Vector<RouteToll>& value) { m_tollsHasBeenSet = true; m_tolls = value; }
    inline void SetTolls(Aws::Vector<RouteToll>&& value) { m_tollsHasBeenSet = true; m_tolls = std::move(value); }
    inline RouteVehicleLegDetails& WithTolls(const Aws::Vector<RouteToll>& value) { SetTolls(value); return *this;}
    inline RouteVehicleLegDetails& WithTolls(Aws::Vector<RouteToll>&& value) { SetTolls(std::move(value)); return *this;}
    inline RouteVehicleLegDetails& AddTolls(const RouteToll& value) { m_tollsHasBeenSet = true; m_tolls.push_back(value); return *this; }
    inline RouteVehicleLegDetails& AddTolls(RouteToll&& value) { m_tollsHasBeenSet = true; m_tolls.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Toll systems are authorities that collect payments for the toll.</p>
     */
    inline const Aws::Vector<RouteTollSystem>& GetTollSystems() const{ return m_tollSystems; }
    inline bool TollSystemsHasBeenSet() const { return m_tollSystemsHasBeenSet; }
    inline void SetTollSystems(const Aws::Vector<RouteTollSystem>& value) { m_tollSystemsHasBeenSet = true; m_tollSystems = value; }
    inline void SetTollSystems(Aws::Vector<RouteTollSystem>&& value) { m_tollSystemsHasBeenSet = true; m_tollSystems = std::move(value); }
    inline RouteVehicleLegDetails& WithTollSystems(const Aws::Vector<RouteTollSystem>& value) { SetTollSystems(value); return *this;}
    inline RouteVehicleLegDetails& WithTollSystems(Aws::Vector<RouteTollSystem>&& value) { SetTollSystems(std::move(value)); return *this;}
    inline RouteVehicleLegDetails& AddTollSystems(const RouteTollSystem& value) { m_tollSystemsHasBeenSet = true; m_tollSystems.push_back(value); return *this; }
    inline RouteVehicleLegDetails& AddTollSystems(RouteTollSystem&& value) { m_tollSystemsHasBeenSet = true; m_tollSystems.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Steps of a leg that must be performed before the travel portion of the
     * leg.</p>
     */
    inline const Aws::Vector<RouteVehicleTravelStep>& GetTravelSteps() const{ return m_travelSteps; }
    inline bool TravelStepsHasBeenSet() const { return m_travelStepsHasBeenSet; }
    inline void SetTravelSteps(const Aws::Vector<RouteVehicleTravelStep>& value) { m_travelStepsHasBeenSet = true; m_travelSteps = value; }
    inline void SetTravelSteps(Aws::Vector<RouteVehicleTravelStep>&& value) { m_travelStepsHasBeenSet = true; m_travelSteps = std::move(value); }
    inline RouteVehicleLegDetails& WithTravelSteps(const Aws::Vector<RouteVehicleTravelStep>& value) { SetTravelSteps(value); return *this;}
    inline RouteVehicleLegDetails& WithTravelSteps(Aws::Vector<RouteVehicleTravelStep>&& value) { SetTravelSteps(std::move(value)); return *this;}
    inline RouteVehicleLegDetails& AddTravelSteps(const RouteVehicleTravelStep& value) { m_travelStepsHasBeenSet = true; m_travelSteps.push_back(value); return *this; }
    inline RouteVehicleLegDetails& AddTravelSteps(RouteVehicleTravelStep&& value) { m_travelStepsHasBeenSet = true; m_travelSteps.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Truck road type identifiers. <code>BK1</code> through <code>BK4</code> apply
     * only to Sweden. <code>A2,A4,B2,B4,C,D,ET2,ET4</code> apply only to Mexico.</p>
     *  <p>There are currently no other supported values as of 26th April
     * 2024.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetTruckRoadTypes() const{ return m_truckRoadTypes; }
    inline bool TruckRoadTypesHasBeenSet() const { return m_truckRoadTypesHasBeenSet; }
    inline void SetTruckRoadTypes(const Aws::Vector<Aws::String>& value) { m_truckRoadTypesHasBeenSet = true; m_truckRoadTypes = value; }
    inline void SetTruckRoadTypes(Aws::Vector<Aws::String>&& value) { m_truckRoadTypesHasBeenSet = true; m_truckRoadTypes = std::move(value); }
    inline RouteVehicleLegDetails& WithTruckRoadTypes(const Aws::Vector<Aws::String>& value) { SetTruckRoadTypes(value); return *this;}
    inline RouteVehicleLegDetails& WithTruckRoadTypes(Aws::Vector<Aws::String>&& value) { SetTruckRoadTypes(std::move(value)); return *this;}
    inline RouteVehicleLegDetails& AddTruckRoadTypes(const Aws::String& value) { m_truckRoadTypesHasBeenSet = true; m_truckRoadTypes.push_back(value); return *this; }
    inline RouteVehicleLegDetails& AddTruckRoadTypes(Aws::String&& value) { m_truckRoadTypesHasBeenSet = true; m_truckRoadTypes.push_back(std::move(value)); return *this; }
    inline RouteVehicleLegDetails& AddTruckRoadTypes(const char* value) { m_truckRoadTypesHasBeenSet = true; m_truckRoadTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Zones corresponding to this leg of the route.</p>
     */
    inline const Aws::Vector<RouteZone>& GetZones() const{ return m_zones; }
    inline bool ZonesHasBeenSet() const { return m_zonesHasBeenSet; }
    inline void SetZones(const Aws::Vector<RouteZone>& value) { m_zonesHasBeenSet = true; m_zones = value; }
    inline void SetZones(Aws::Vector<RouteZone>&& value) { m_zonesHasBeenSet = true; m_zones = std::move(value); }
    inline RouteVehicleLegDetails& WithZones(const Aws::Vector<RouteZone>& value) { SetZones(value); return *this;}
    inline RouteVehicleLegDetails& WithZones(Aws::Vector<RouteZone>&& value) { SetZones(std::move(value)); return *this;}
    inline RouteVehicleLegDetails& AddZones(const RouteZone& value) { m_zonesHasBeenSet = true; m_zones.push_back(value); return *this; }
    inline RouteVehicleLegDetails& AddZones(RouteZone&& value) { m_zonesHasBeenSet = true; m_zones.push_back(std::move(value)); return *this; }
    ///@}
  private:

    RouteVehicleArrival m_arrival;
    bool m_arrivalHasBeenSet = false;

    RouteVehicleDeparture m_departure;
    bool m_departureHasBeenSet = false;

    Aws::Vector<RouteVehicleIncident> m_incidents;
    bool m_incidentsHasBeenSet = false;

    Aws::Vector<RouteVehicleNotice> m_notices;
    bool m_noticesHasBeenSet = false;

    Aws::Vector<RoutePassThroughWaypoint> m_passThroughWaypoints;
    bool m_passThroughWaypointsHasBeenSet = false;

    Aws::Vector<RouteVehicleSpan> m_spans;
    bool m_spansHasBeenSet = false;

    RouteVehicleSummary m_summary;
    bool m_summaryHasBeenSet = false;

    Aws::Vector<RouteToll> m_tolls;
    bool m_tollsHasBeenSet = false;

    Aws::Vector<RouteTollSystem> m_tollSystems;
    bool m_tollSystemsHasBeenSet = false;

    Aws::Vector<RouteVehicleTravelStep> m_travelSteps;
    bool m_travelStepsHasBeenSet = false;

    Aws::Vector<Aws::String> m_truckRoadTypes;
    bool m_truckRoadTypesHasBeenSet = false;

    Aws::Vector<RouteZone> m_zones;
    bool m_zonesHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
