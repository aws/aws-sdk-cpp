/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteAttribution.h>
#include <aws/geo-routes/model/RoutePassThroughWaypoint.h>
#include <aws/geo-routes/model/RouteTransitAfterTravelStep.h>
#include <aws/geo-routes/model/RouteTransitAgency.h>
#include <aws/geo-routes/model/RouteTransitArrival.h>
#include <aws/geo-routes/model/RouteTransitBeforeTravelStep.h>
#include <aws/geo-routes/model/RouteTransitDeparture.h>
#include <aws/geo-routes/model/RouteTransitIncident.h>
#include <aws/geo-routes/model/RouteTransitIntermediateStop.h>
#include <aws/geo-routes/model/RouteTransitNextDeparture.h>
#include <aws/geo-routes/model/RouteTransitNotice.h>
#include <aws/geo-routes/model/RouteTransitSpan.h>
#include <aws/geo-routes/model/RouteTransitSummary.h>
#include <aws/geo-routes/model/RouteTransitTransportModeDetails.h>
#include <aws/geo-routes/model/RouteTransitTravelStep.h>
#include <aws/geo-routes/model/RouteWebLink.h>

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
 * <p>Populated when the Leg type is Transit, and provides additional information
 * that is specific to public transit travel.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteTransitLegDetails">AWS
 * API Reference</a></p>
 */
class RouteTransitLegDetails {
 public:
  AWS_GEOROUTES_API RouteTransitLegDetails() = default;
  AWS_GEOROUTES_API RouteTransitLegDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API RouteTransitLegDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Steps of a leg that must be performed after the travel portion of the
   * leg.</p>
   */
  inline const Aws::Vector<RouteTransitAfterTravelStep>& GetAfterTravelSteps() const { return m_afterTravelSteps; }
  inline bool AfterTravelStepsHasBeenSet() const { return m_afterTravelStepsHasBeenSet; }
  template <typename AfterTravelStepsT = Aws::Vector<RouteTransitAfterTravelStep>>
  void SetAfterTravelSteps(AfterTravelStepsT&& value) {
    m_afterTravelStepsHasBeenSet = true;
    m_afterTravelSteps = std::forward<AfterTravelStepsT>(value);
  }
  template <typename AfterTravelStepsT = Aws::Vector<RouteTransitAfterTravelStep>>
  RouteTransitLegDetails& WithAfterTravelSteps(AfterTravelStepsT&& value) {
    SetAfterTravelSteps(std::forward<AfterTravelStepsT>(value));
    return *this;
  }
  template <typename AfterTravelStepsT = RouteTransitAfterTravelStep>
  RouteTransitLegDetails& AddAfterTravelSteps(AfterTravelStepsT&& value) {
    m_afterTravelStepsHasBeenSet = true;
    m_afterTravelSteps.emplace_back(std::forward<AfterTravelStepsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about the transit agency.</p>
   */
  inline const RouteTransitAgency& GetAgency() const { return m_agency; }
  inline bool AgencyHasBeenSet() const { return m_agencyHasBeenSet; }
  template <typename AgencyT = RouteTransitAgency>
  void SetAgency(AgencyT&& value) {
    m_agencyHasBeenSet = true;
    m_agency = std::forward<AgencyT>(value);
  }
  template <typename AgencyT = RouteTransitAgency>
  RouteTransitLegDetails& WithAgency(AgencyT&& value) {
    SetAgency(std::forward<AgencyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details corresponding to the arrival for the leg.</p>
   */
  inline const RouteTransitArrival& GetArrival() const { return m_arrival; }
  inline bool ArrivalHasBeenSet() const { return m_arrivalHasBeenSet; }
  template <typename ArrivalT = RouteTransitArrival>
  void SetArrival(ArrivalT&& value) {
    m_arrivalHasBeenSet = true;
    m_arrival = std::forward<ArrivalT>(value);
  }
  template <typename ArrivalT = RouteTransitArrival>
  RouteTransitLegDetails& WithArrival(ArrivalT&& value) {
    SetArrival(std::forward<ArrivalT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of required attributions to display.</p>
   */
  inline const Aws::Vector<RouteAttribution>& GetAttributions() const { return m_attributions; }
  inline bool AttributionsHasBeenSet() const { return m_attributionsHasBeenSet; }
  template <typename AttributionsT = Aws::Vector<RouteAttribution>>
  void SetAttributions(AttributionsT&& value) {
    m_attributionsHasBeenSet = true;
    m_attributions = std::forward<AttributionsT>(value);
  }
  template <typename AttributionsT = Aws::Vector<RouteAttribution>>
  RouteTransitLegDetails& WithAttributions(AttributionsT&& value) {
    SetAttributions(std::forward<AttributionsT>(value));
    return *this;
  }
  template <typename AttributionsT = RouteAttribution>
  RouteTransitLegDetails& AddAttributions(AttributionsT&& value) {
    m_attributionsHasBeenSet = true;
    m_attributions.emplace_back(std::forward<AttributionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Steps of a leg that must be performed before the travel portion of the
   * leg.</p>
   */
  inline const Aws::Vector<RouteTransitBeforeTravelStep>& GetBeforeTravelSteps() const { return m_beforeTravelSteps; }
  inline bool BeforeTravelStepsHasBeenSet() const { return m_beforeTravelStepsHasBeenSet; }
  template <typename BeforeTravelStepsT = Aws::Vector<RouteTransitBeforeTravelStep>>
  void SetBeforeTravelSteps(BeforeTravelStepsT&& value) {
    m_beforeTravelStepsHasBeenSet = true;
    m_beforeTravelSteps = std::forward<BeforeTravelStepsT>(value);
  }
  template <typename BeforeTravelStepsT = Aws::Vector<RouteTransitBeforeTravelStep>>
  RouteTransitLegDetails& WithBeforeTravelSteps(BeforeTravelStepsT&& value) {
    SetBeforeTravelSteps(std::forward<BeforeTravelStepsT>(value));
    return *this;
  }
  template <typename BeforeTravelStepsT = RouteTransitBeforeTravelStep>
  RouteTransitLegDetails& AddBeforeTravelSteps(BeforeTravelStepsT&& value) {
    m_beforeTravelStepsHasBeenSet = true;
    m_beforeTravelSteps.emplace_back(std::forward<BeforeTravelStepsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Web links to external ticket booking services for the transit.</p>
   */
  inline const Aws::Vector<RouteWebLink>& GetBookingWebLinks() const { return m_bookingWebLinks; }
  inline bool BookingWebLinksHasBeenSet() const { return m_bookingWebLinksHasBeenSet; }
  template <typename BookingWebLinksT = Aws::Vector<RouteWebLink>>
  void SetBookingWebLinks(BookingWebLinksT&& value) {
    m_bookingWebLinksHasBeenSet = true;
    m_bookingWebLinks = std::forward<BookingWebLinksT>(value);
  }
  template <typename BookingWebLinksT = Aws::Vector<RouteWebLink>>
  RouteTransitLegDetails& WithBookingWebLinks(BookingWebLinksT&& value) {
    SetBookingWebLinks(std::forward<BookingWebLinksT>(value));
    return *this;
  }
  template <typename BookingWebLinksT = RouteWebLink>
  RouteTransitLegDetails& AddBookingWebLinks(BookingWebLinksT&& value) {
    m_bookingWebLinksHasBeenSet = true;
    m_bookingWebLinks.emplace_back(std::forward<BookingWebLinksT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details corresponding to the departure for the leg.</p>
   */
  inline const RouteTransitDeparture& GetDeparture() const { return m_departure; }
  inline bool DepartureHasBeenSet() const { return m_departureHasBeenSet; }
  template <typename DepartureT = RouteTransitDeparture>
  void SetDeparture(DepartureT&& value) {
    m_departureHasBeenSet = true;
    m_departure = std::forward<DepartureT>(value);
  }
  template <typename DepartureT = RouteTransitDeparture>
  RouteTransitLegDetails& WithDeparture(DepartureT&& value) {
    SetDeparture(std::forward<DepartureT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Incidents affecting this leg of the transit route.</p>
   */
  inline const Aws::Vector<RouteTransitIncident>& GetIncidents() const { return m_incidents; }
  inline bool IncidentsHasBeenSet() const { return m_incidentsHasBeenSet; }
  template <typename IncidentsT = Aws::Vector<RouteTransitIncident>>
  void SetIncidents(IncidentsT&& value) {
    m_incidentsHasBeenSet = true;
    m_incidents = std::forward<IncidentsT>(value);
  }
  template <typename IncidentsT = Aws::Vector<RouteTransitIncident>>
  RouteTransitLegDetails& WithIncidents(IncidentsT&& value) {
    SetIncidents(std::forward<IncidentsT>(value));
    return *this;
  }
  template <typename IncidentsT = RouteTransitIncident>
  RouteTransitLegDetails& AddIncidents(IncidentsT&& value) {
    m_incidentsHasBeenSet = true;
    m_incidents.emplace_back(std::forward<IncidentsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Intermediate stops between departure and destination of the transit
   * route.</p>
   */
  inline const Aws::Vector<RouteTransitIntermediateStop>& GetIntermediateStops() const { return m_intermediateStops; }
  inline bool IntermediateStopsHasBeenSet() const { return m_intermediateStopsHasBeenSet; }
  template <typename IntermediateStopsT = Aws::Vector<RouteTransitIntermediateStop>>
  void SetIntermediateStops(IntermediateStopsT&& value) {
    m_intermediateStopsHasBeenSet = true;
    m_intermediateStops = std::forward<IntermediateStopsT>(value);
  }
  template <typename IntermediateStopsT = Aws::Vector<RouteTransitIntermediateStop>>
  RouteTransitLegDetails& WithIntermediateStops(IntermediateStopsT&& value) {
    SetIntermediateStops(std::forward<IntermediateStopsT>(value));
    return *this;
  }
  template <typename IntermediateStopsT = RouteTransitIntermediateStop>
  RouteTransitLegDetails& AddIntermediateStops(IntermediateStopsT&& value) {
    m_intermediateStopsHasBeenSet = true;
    m_intermediateStops.emplace_back(std::forward<IntermediateStopsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of next departures that cover the same section of the route.</p>
   */
  inline const Aws::Vector<RouteTransitNextDeparture>& GetNextDepartures() const { return m_nextDepartures; }
  inline bool NextDeparturesHasBeenSet() const { return m_nextDeparturesHasBeenSet; }
  template <typename NextDeparturesT = Aws::Vector<RouteTransitNextDeparture>>
  void SetNextDepartures(NextDeparturesT&& value) {
    m_nextDeparturesHasBeenSet = true;
    m_nextDepartures = std::forward<NextDeparturesT>(value);
  }
  template <typename NextDeparturesT = Aws::Vector<RouteTransitNextDeparture>>
  RouteTransitLegDetails& WithNextDepartures(NextDeparturesT&& value) {
    SetNextDepartures(std::forward<NextDeparturesT>(value));
    return *this;
  }
  template <typename NextDeparturesT = RouteTransitNextDeparture>
  RouteTransitLegDetails& AddNextDepartures(NextDeparturesT&& value) {
    m_nextDeparturesHasBeenSet = true;
    m_nextDepartures.emplace_back(std::forward<NextDeparturesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of notices that indicate issues that occurred during route
   * calculation.</p>
   */
  inline const Aws::Vector<RouteTransitNotice>& GetNotices() const { return m_notices; }
  inline bool NoticesHasBeenSet() const { return m_noticesHasBeenSet; }
  template <typename NoticesT = Aws::Vector<RouteTransitNotice>>
  void SetNotices(NoticesT&& value) {
    m_noticesHasBeenSet = true;
    m_notices = std::forward<NoticesT>(value);
  }
  template <typename NoticesT = Aws::Vector<RouteTransitNotice>>
  RouteTransitLegDetails& WithNotices(NoticesT&& value) {
    SetNotices(std::forward<NoticesT>(value));
    return *this;
  }
  template <typename NoticesT = RouteTransitNotice>
  RouteTransitLegDetails& AddNotices(NoticesT&& value) {
    m_noticesHasBeenSet = true;
    m_notices.emplace_back(std::forward<NoticesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Waypoints that were passed through during the leg. This includes the
   * waypoints that were configured with the PassThrough option. Not populated when
   * the TravelMode is <code>Transit</code> or <code>Intermodal</code>.</p>
   */
  inline const Aws::Vector<RoutePassThroughWaypoint>& GetPassThroughWaypoints() const { return m_passThroughWaypoints; }
  inline bool PassThroughWaypointsHasBeenSet() const { return m_passThroughWaypointsHasBeenSet; }
  template <typename PassThroughWaypointsT = Aws::Vector<RoutePassThroughWaypoint>>
  void SetPassThroughWaypoints(PassThroughWaypointsT&& value) {
    m_passThroughWaypointsHasBeenSet = true;
    m_passThroughWaypoints = std::forward<PassThroughWaypointsT>(value);
  }
  template <typename PassThroughWaypointsT = Aws::Vector<RoutePassThroughWaypoint>>
  RouteTransitLegDetails& WithPassThroughWaypoints(PassThroughWaypointsT&& value) {
    SetPassThroughWaypoints(std::forward<PassThroughWaypointsT>(value));
    return *this;
  }
  template <typename PassThroughWaypointsT = RoutePassThroughWaypoint>
  RouteTransitLegDetails& AddPassThroughWaypoints(PassThroughWaypointsT&& value) {
    m_passThroughWaypointsHasBeenSet = true;
    m_passThroughWaypoints.emplace_back(std::forward<PassThroughWaypointsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Spans that were computed for the requested SpanAdditionalFeatures. Not
   * populated when the TravelMode is <code>Transit</code> or
   * <code>Intermodal</code>.</p>
   */
  inline const Aws::Vector<RouteTransitSpan>& GetSpans() const { return m_spans; }
  inline bool SpansHasBeenSet() const { return m_spansHasBeenSet; }
  template <typename SpansT = Aws::Vector<RouteTransitSpan>>
  void SetSpans(SpansT&& value) {
    m_spansHasBeenSet = true;
    m_spans = std::forward<SpansT>(value);
  }
  template <typename SpansT = Aws::Vector<RouteTransitSpan>>
  RouteTransitLegDetails& WithSpans(SpansT&& value) {
    SetSpans(std::forward<SpansT>(value));
    return *this;
  }
  template <typename SpansT = RouteTransitSpan>
  RouteTransitLegDetails& AddSpans(SpansT&& value) {
    m_spansHasBeenSet = true;
    m_spans.emplace_back(std::forward<SpansT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Summary of the transit leg.</p>
   */
  inline const RouteTransitSummary& GetSummary() const { return m_summary; }
  inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
  template <typename SummaryT = RouteTransitSummary>
  void SetSummary(SummaryT&& value) {
    m_summaryHasBeenSet = true;
    m_summary = std::forward<SummaryT>(value);
  }
  template <typename SummaryT = RouteTransitSummary>
  RouteTransitLegDetails& WithSummary(SummaryT&& value) {
    SetSummary(std::forward<SummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Transport mode details for the transit leg.</p>
   */
  inline const RouteTransitTransportModeDetails& GetTransport() const { return m_transport; }
  inline bool TransportHasBeenSet() const { return m_transportHasBeenSet; }
  template <typename TransportT = RouteTransitTransportModeDetails>
  void SetTransport(TransportT&& value) {
    m_transportHasBeenSet = true;
    m_transport = std::forward<TransportT>(value);
  }
  template <typename TransportT = RouteTransitTransportModeDetails>
  RouteTransitLegDetails& WithTransport(TransportT&& value) {
    SetTransport(std::forward<TransportT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Steps of a leg that must be performed during the travel portion of the
   * leg.</p>
   */
  inline const Aws::Vector<RouteTransitTravelStep>& GetTravelSteps() const { return m_travelSteps; }
  inline bool TravelStepsHasBeenSet() const { return m_travelStepsHasBeenSet; }
  template <typename TravelStepsT = Aws::Vector<RouteTransitTravelStep>>
  void SetTravelSteps(TravelStepsT&& value) {
    m_travelStepsHasBeenSet = true;
    m_travelSteps = std::forward<TravelStepsT>(value);
  }
  template <typename TravelStepsT = Aws::Vector<RouteTransitTravelStep>>
  RouteTransitLegDetails& WithTravelSteps(TravelStepsT&& value) {
    SetTravelSteps(std::forward<TravelStepsT>(value));
    return *this;
  }
  template <typename TravelStepsT = RouteTransitTravelStep>
  RouteTransitLegDetails& AddTravelSteps(TravelStepsT&& value) {
    m_travelStepsHasBeenSet = true;
    m_travelSteps.emplace_back(std::forward<TravelStepsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<RouteTransitAfterTravelStep> m_afterTravelSteps;

  RouteTransitAgency m_agency;

  RouteTransitArrival m_arrival;

  Aws::Vector<RouteAttribution> m_attributions;

  Aws::Vector<RouteTransitBeforeTravelStep> m_beforeTravelSteps;

  Aws::Vector<RouteWebLink> m_bookingWebLinks;

  RouteTransitDeparture m_departure;

  Aws::Vector<RouteTransitIncident> m_incidents;

  Aws::Vector<RouteTransitIntermediateStop> m_intermediateStops;

  Aws::Vector<RouteTransitNextDeparture> m_nextDepartures;

  Aws::Vector<RouteTransitNotice> m_notices;

  Aws::Vector<RoutePassThroughWaypoint> m_passThroughWaypoints;

  Aws::Vector<RouteTransitSpan> m_spans;

  RouteTransitSummary m_summary;

  RouteTransitTransportModeDetails m_transport;

  Aws::Vector<RouteTransitTravelStep> m_travelSteps;
  bool m_afterTravelStepsHasBeenSet = false;
  bool m_agencyHasBeenSet = false;
  bool m_arrivalHasBeenSet = false;
  bool m_attributionsHasBeenSet = false;
  bool m_beforeTravelStepsHasBeenSet = false;
  bool m_bookingWebLinksHasBeenSet = false;
  bool m_departureHasBeenSet = false;
  bool m_incidentsHasBeenSet = false;
  bool m_intermediateStopsHasBeenSet = false;
  bool m_nextDeparturesHasBeenSet = false;
  bool m_noticesHasBeenSet = false;
  bool m_passThroughWaypointsHasBeenSet = false;
  bool m_spansHasBeenSet = false;
  bool m_summaryHasBeenSet = false;
  bool m_transportHasBeenSet = false;
  bool m_travelStepsHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
