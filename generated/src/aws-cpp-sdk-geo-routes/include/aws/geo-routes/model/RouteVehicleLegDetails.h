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
    AWS_GEOROUTES_API RouteVehicleLegDetails() = default;
    AWS_GEOROUTES_API RouteVehicleLegDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteVehicleLegDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details corresponding to the arrival for the leg.</p>
     */
    inline const RouteVehicleArrival& GetArrival() const { return m_arrival; }
    inline bool ArrivalHasBeenSet() const { return m_arrivalHasBeenSet; }
    template<typename ArrivalT = RouteVehicleArrival>
    void SetArrival(ArrivalT&& value) { m_arrivalHasBeenSet = true; m_arrival = std::forward<ArrivalT>(value); }
    template<typename ArrivalT = RouteVehicleArrival>
    RouteVehicleLegDetails& WithArrival(ArrivalT&& value) { SetArrival(std::forward<ArrivalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details corresponding to the departure for the leg.</p>
     */
    inline const RouteVehicleDeparture& GetDeparture() const { return m_departure; }
    inline bool DepartureHasBeenSet() const { return m_departureHasBeenSet; }
    template<typename DepartureT = RouteVehicleDeparture>
    void SetDeparture(DepartureT&& value) { m_departureHasBeenSet = true; m_departure = std::forward<DepartureT>(value); }
    template<typename DepartureT = RouteVehicleDeparture>
    RouteVehicleLegDetails& WithDeparture(DepartureT&& value) { SetDeparture(std::forward<DepartureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Incidents corresponding to this leg of the route.</p>
     */
    inline const Aws::Vector<RouteVehicleIncident>& GetIncidents() const { return m_incidents; }
    inline bool IncidentsHasBeenSet() const { return m_incidentsHasBeenSet; }
    template<typename IncidentsT = Aws::Vector<RouteVehicleIncident>>
    void SetIncidents(IncidentsT&& value) { m_incidentsHasBeenSet = true; m_incidents = std::forward<IncidentsT>(value); }
    template<typename IncidentsT = Aws::Vector<RouteVehicleIncident>>
    RouteVehicleLegDetails& WithIncidents(IncidentsT&& value) { SetIncidents(std::forward<IncidentsT>(value)); return *this;}
    template<typename IncidentsT = RouteVehicleIncident>
    RouteVehicleLegDetails& AddIncidents(IncidentsT&& value) { m_incidentsHasBeenSet = true; m_incidents.emplace_back(std::forward<IncidentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Notices are additional information returned that indicate issues that
     * occurred during route calculation.</p>
     */
    inline const Aws::Vector<RouteVehicleNotice>& GetNotices() const { return m_notices; }
    inline bool NoticesHasBeenSet() const { return m_noticesHasBeenSet; }
    template<typename NoticesT = Aws::Vector<RouteVehicleNotice>>
    void SetNotices(NoticesT&& value) { m_noticesHasBeenSet = true; m_notices = std::forward<NoticesT>(value); }
    template<typename NoticesT = Aws::Vector<RouteVehicleNotice>>
    RouteVehicleLegDetails& WithNotices(NoticesT&& value) { SetNotices(std::forward<NoticesT>(value)); return *this;}
    template<typename NoticesT = RouteVehicleNotice>
    RouteVehicleLegDetails& AddNotices(NoticesT&& value) { m_noticesHasBeenSet = true; m_notices.emplace_back(std::forward<NoticesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Waypoints that were passed through during the leg. This includes the
     * waypoints that were configured with the PassThrough option.</p>
     */
    inline const Aws::Vector<RoutePassThroughWaypoint>& GetPassThroughWaypoints() const { return m_passThroughWaypoints; }
    inline bool PassThroughWaypointsHasBeenSet() const { return m_passThroughWaypointsHasBeenSet; }
    template<typename PassThroughWaypointsT = Aws::Vector<RoutePassThroughWaypoint>>
    void SetPassThroughWaypoints(PassThroughWaypointsT&& value) { m_passThroughWaypointsHasBeenSet = true; m_passThroughWaypoints = std::forward<PassThroughWaypointsT>(value); }
    template<typename PassThroughWaypointsT = Aws::Vector<RoutePassThroughWaypoint>>
    RouteVehicleLegDetails& WithPassThroughWaypoints(PassThroughWaypointsT&& value) { SetPassThroughWaypoints(std::forward<PassThroughWaypointsT>(value)); return *this;}
    template<typename PassThroughWaypointsT = RoutePassThroughWaypoint>
    RouteVehicleLegDetails& AddPassThroughWaypoints(PassThroughWaypointsT&& value) { m_passThroughWaypointsHasBeenSet = true; m_passThroughWaypoints.emplace_back(std::forward<PassThroughWaypointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Spans that were computed for the requested SpanAdditionalFeatures.</p>
     */
    inline const Aws::Vector<RouteVehicleSpan>& GetSpans() const { return m_spans; }
    inline bool SpansHasBeenSet() const { return m_spansHasBeenSet; }
    template<typename SpansT = Aws::Vector<RouteVehicleSpan>>
    void SetSpans(SpansT&& value) { m_spansHasBeenSet = true; m_spans = std::forward<SpansT>(value); }
    template<typename SpansT = Aws::Vector<RouteVehicleSpan>>
    RouteVehicleLegDetails& WithSpans(SpansT&& value) { SetSpans(std::forward<SpansT>(value)); return *this;}
    template<typename SpansT = RouteVehicleSpan>
    RouteVehicleLegDetails& AddSpans(SpansT&& value) { m_spansHasBeenSet = true; m_spans.emplace_back(std::forward<SpansT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Summarized details of the leg.</p>
     */
    inline const RouteVehicleSummary& GetSummary() const { return m_summary; }
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
    template<typename SummaryT = RouteVehicleSummary>
    void SetSummary(SummaryT&& value) { m_summaryHasBeenSet = true; m_summary = std::forward<SummaryT>(value); }
    template<typename SummaryT = RouteVehicleSummary>
    RouteVehicleLegDetails& WithSummary(SummaryT&& value) { SetSummary(std::forward<SummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Toll related options.</p>
     */
    inline const Aws::Vector<RouteToll>& GetTolls() const { return m_tolls; }
    inline bool TollsHasBeenSet() const { return m_tollsHasBeenSet; }
    template<typename TollsT = Aws::Vector<RouteToll>>
    void SetTolls(TollsT&& value) { m_tollsHasBeenSet = true; m_tolls = std::forward<TollsT>(value); }
    template<typename TollsT = Aws::Vector<RouteToll>>
    RouteVehicleLegDetails& WithTolls(TollsT&& value) { SetTolls(std::forward<TollsT>(value)); return *this;}
    template<typename TollsT = RouteToll>
    RouteVehicleLegDetails& AddTolls(TollsT&& value) { m_tollsHasBeenSet = true; m_tolls.emplace_back(std::forward<TollsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Toll systems are authorities that collect payments for the toll.</p>
     */
    inline const Aws::Vector<RouteTollSystem>& GetTollSystems() const { return m_tollSystems; }
    inline bool TollSystemsHasBeenSet() const { return m_tollSystemsHasBeenSet; }
    template<typename TollSystemsT = Aws::Vector<RouteTollSystem>>
    void SetTollSystems(TollSystemsT&& value) { m_tollSystemsHasBeenSet = true; m_tollSystems = std::forward<TollSystemsT>(value); }
    template<typename TollSystemsT = Aws::Vector<RouteTollSystem>>
    RouteVehicleLegDetails& WithTollSystems(TollSystemsT&& value) { SetTollSystems(std::forward<TollSystemsT>(value)); return *this;}
    template<typename TollSystemsT = RouteTollSystem>
    RouteVehicleLegDetails& AddTollSystems(TollSystemsT&& value) { m_tollSystemsHasBeenSet = true; m_tollSystems.emplace_back(std::forward<TollSystemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Steps of a leg that must be performed before the travel portion of the
     * leg.</p>
     */
    inline const Aws::Vector<RouteVehicleTravelStep>& GetTravelSteps() const { return m_travelSteps; }
    inline bool TravelStepsHasBeenSet() const { return m_travelStepsHasBeenSet; }
    template<typename TravelStepsT = Aws::Vector<RouteVehicleTravelStep>>
    void SetTravelSteps(TravelStepsT&& value) { m_travelStepsHasBeenSet = true; m_travelSteps = std::forward<TravelStepsT>(value); }
    template<typename TravelStepsT = Aws::Vector<RouteVehicleTravelStep>>
    RouteVehicleLegDetails& WithTravelSteps(TravelStepsT&& value) { SetTravelSteps(std::forward<TravelStepsT>(value)); return *this;}
    template<typename TravelStepsT = RouteVehicleTravelStep>
    RouteVehicleLegDetails& AddTravelSteps(TravelStepsT&& value) { m_travelStepsHasBeenSet = true; m_travelSteps.emplace_back(std::forward<TravelStepsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Truck road type identifiers. <code>BK1</code> through <code>BK4</code> apply
     * only to Sweden. <code>A2,A4,B2,B4,C,D,ET2,ET4</code> apply only to Mexico.</p>
     *  <p>There are currently no other supported values as of 26th April
     * 2024.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetTruckRoadTypes() const { return m_truckRoadTypes; }
    inline bool TruckRoadTypesHasBeenSet() const { return m_truckRoadTypesHasBeenSet; }
    template<typename TruckRoadTypesT = Aws::Vector<Aws::String>>
    void SetTruckRoadTypes(TruckRoadTypesT&& value) { m_truckRoadTypesHasBeenSet = true; m_truckRoadTypes = std::forward<TruckRoadTypesT>(value); }
    template<typename TruckRoadTypesT = Aws::Vector<Aws::String>>
    RouteVehicleLegDetails& WithTruckRoadTypes(TruckRoadTypesT&& value) { SetTruckRoadTypes(std::forward<TruckRoadTypesT>(value)); return *this;}
    template<typename TruckRoadTypesT = Aws::String>
    RouteVehicleLegDetails& AddTruckRoadTypes(TruckRoadTypesT&& value) { m_truckRoadTypesHasBeenSet = true; m_truckRoadTypes.emplace_back(std::forward<TruckRoadTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Zones corresponding to this leg of the route.</p>
     */
    inline const Aws::Vector<RouteZone>& GetZones() const { return m_zones; }
    inline bool ZonesHasBeenSet() const { return m_zonesHasBeenSet; }
    template<typename ZonesT = Aws::Vector<RouteZone>>
    void SetZones(ZonesT&& value) { m_zonesHasBeenSet = true; m_zones = std::forward<ZonesT>(value); }
    template<typename ZonesT = Aws::Vector<RouteZone>>
    RouteVehicleLegDetails& WithZones(ZonesT&& value) { SetZones(std::forward<ZonesT>(value)); return *this;}
    template<typename ZonesT = RouteZone>
    RouteVehicleLegDetails& AddZones(ZonesT&& value) { m_zonesHasBeenSet = true; m_zones.emplace_back(std::forward<ZonesT>(value)); return *this; }
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
