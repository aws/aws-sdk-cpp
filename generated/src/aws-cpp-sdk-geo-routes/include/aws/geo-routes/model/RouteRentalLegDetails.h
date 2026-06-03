/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteAttribution.h>
#include <aws/geo-routes/model/RouteRentalAfterTravelStep.h>
#include <aws/geo-routes/model/RouteRentalAgency.h>
#include <aws/geo-routes/model/RouteRentalArrival.h>
#include <aws/geo-routes/model/RouteRentalBeforeTravelStep.h>
#include <aws/geo-routes/model/RouteRentalDeparture.h>
#include <aws/geo-routes/model/RouteRentalSummary.h>
#include <aws/geo-routes/model/RouteRentalTransportModeDetails.h>
#include <aws/geo-routes/model/RouteRentalTravelStep.h>
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
 * <p>Populated when the Leg type is Rental, and provides additional information
 * that is specific to rental vehicle travel.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteRentalLegDetails">AWS
 * API Reference</a></p>
 */
class RouteRentalLegDetails {
 public:
  AWS_GEOROUTES_API RouteRentalLegDetails() = default;
  AWS_GEOROUTES_API RouteRentalLegDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API RouteRentalLegDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Steps of a leg that must be performed after the travel portion of the
   * leg.</p>
   */
  inline const Aws::Vector<RouteRentalAfterTravelStep>& GetAfterTravelSteps() const { return m_afterTravelSteps; }
  inline bool AfterTravelStepsHasBeenSet() const { return m_afterTravelStepsHasBeenSet; }
  template <typename AfterTravelStepsT = Aws::Vector<RouteRentalAfterTravelStep>>
  void SetAfterTravelSteps(AfterTravelStepsT&& value) {
    m_afterTravelStepsHasBeenSet = true;
    m_afterTravelSteps = std::forward<AfterTravelStepsT>(value);
  }
  template <typename AfterTravelStepsT = Aws::Vector<RouteRentalAfterTravelStep>>
  RouteRentalLegDetails& WithAfterTravelSteps(AfterTravelStepsT&& value) {
    SetAfterTravelSteps(std::forward<AfterTravelStepsT>(value));
    return *this;
  }
  template <typename AfterTravelStepsT = RouteRentalAfterTravelStep>
  RouteRentalLegDetails& AddAfterTravelSteps(AfterTravelStepsT&& value) {
    m_afterTravelStepsHasBeenSet = true;
    m_afterTravelSteps.emplace_back(std::forward<AfterTravelStepsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about the rental agency.</p>
   */
  inline const RouteRentalAgency& GetAgency() const { return m_agency; }
  inline bool AgencyHasBeenSet() const { return m_agencyHasBeenSet; }
  template <typename AgencyT = RouteRentalAgency>
  void SetAgency(AgencyT&& value) {
    m_agencyHasBeenSet = true;
    m_agency = std::forward<AgencyT>(value);
  }
  template <typename AgencyT = RouteRentalAgency>
  RouteRentalLegDetails& WithAgency(AgencyT&& value) {
    SetAgency(std::forward<AgencyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details corresponding to the arrival for the leg.</p>
   */
  inline const RouteRentalArrival& GetArrival() const { return m_arrival; }
  inline bool ArrivalHasBeenSet() const { return m_arrivalHasBeenSet; }
  template <typename ArrivalT = RouteRentalArrival>
  void SetArrival(ArrivalT&& value) {
    m_arrivalHasBeenSet = true;
    m_arrival = std::forward<ArrivalT>(value);
  }
  template <typename ArrivalT = RouteRentalArrival>
  RouteRentalLegDetails& WithArrival(ArrivalT&& value) {
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
  RouteRentalLegDetails& WithAttributions(AttributionsT&& value) {
    SetAttributions(std::forward<AttributionsT>(value));
    return *this;
  }
  template <typename AttributionsT = RouteAttribution>
  RouteRentalLegDetails& AddAttributions(AttributionsT&& value) {
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
  inline const Aws::Vector<RouteRentalBeforeTravelStep>& GetBeforeTravelSteps() const { return m_beforeTravelSteps; }
  inline bool BeforeTravelStepsHasBeenSet() const { return m_beforeTravelStepsHasBeenSet; }
  template <typename BeforeTravelStepsT = Aws::Vector<RouteRentalBeforeTravelStep>>
  void SetBeforeTravelSteps(BeforeTravelStepsT&& value) {
    m_beforeTravelStepsHasBeenSet = true;
    m_beforeTravelSteps = std::forward<BeforeTravelStepsT>(value);
  }
  template <typename BeforeTravelStepsT = Aws::Vector<RouteRentalBeforeTravelStep>>
  RouteRentalLegDetails& WithBeforeTravelSteps(BeforeTravelStepsT&& value) {
    SetBeforeTravelSteps(std::forward<BeforeTravelStepsT>(value));
    return *this;
  }
  template <typename BeforeTravelStepsT = RouteRentalBeforeTravelStep>
  RouteRentalLegDetails& AddBeforeTravelSteps(BeforeTravelStepsT&& value) {
    m_beforeTravelStepsHasBeenSet = true;
    m_beforeTravelSteps.emplace_back(std::forward<BeforeTravelStepsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Web links to external ticket booking services for the rental.</p>
   */
  inline const Aws::Vector<RouteWebLink>& GetBookingWebLinks() const { return m_bookingWebLinks; }
  inline bool BookingWebLinksHasBeenSet() const { return m_bookingWebLinksHasBeenSet; }
  template <typename BookingWebLinksT = Aws::Vector<RouteWebLink>>
  void SetBookingWebLinks(BookingWebLinksT&& value) {
    m_bookingWebLinksHasBeenSet = true;
    m_bookingWebLinks = std::forward<BookingWebLinksT>(value);
  }
  template <typename BookingWebLinksT = Aws::Vector<RouteWebLink>>
  RouteRentalLegDetails& WithBookingWebLinks(BookingWebLinksT&& value) {
    SetBookingWebLinks(std::forward<BookingWebLinksT>(value));
    return *this;
  }
  template <typename BookingWebLinksT = RouteWebLink>
  RouteRentalLegDetails& AddBookingWebLinks(BookingWebLinksT&& value) {
    m_bookingWebLinksHasBeenSet = true;
    m_bookingWebLinks.emplace_back(std::forward<BookingWebLinksT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details corresponding to the departure for the leg.</p>
   */
  inline const RouteRentalDeparture& GetDeparture() const { return m_departure; }
  inline bool DepartureHasBeenSet() const { return m_departureHasBeenSet; }
  template <typename DepartureT = RouteRentalDeparture>
  void SetDeparture(DepartureT&& value) {
    m_departureHasBeenSet = true;
    m_departure = std::forward<DepartureT>(value);
  }
  template <typename DepartureT = RouteRentalDeparture>
  RouteRentalLegDetails& WithDeparture(DepartureT&& value) {
    SetDeparture(std::forward<DepartureT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Summary of the rental leg.</p>
   */
  inline const RouteRentalSummary& GetSummary() const { return m_summary; }
  inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
  template <typename SummaryT = RouteRentalSummary>
  void SetSummary(SummaryT&& value) {
    m_summaryHasBeenSet = true;
    m_summary = std::forward<SummaryT>(value);
  }
  template <typename SummaryT = RouteRentalSummary>
  RouteRentalLegDetails& WithSummary(SummaryT&& value) {
    SetSummary(std::forward<SummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Transport mode details for the rental leg.</p>
   */
  inline const RouteRentalTransportModeDetails& GetTransport() const { return m_transport; }
  inline bool TransportHasBeenSet() const { return m_transportHasBeenSet; }
  template <typename TransportT = RouteRentalTransportModeDetails>
  void SetTransport(TransportT&& value) {
    m_transportHasBeenSet = true;
    m_transport = std::forward<TransportT>(value);
  }
  template <typename TransportT = RouteRentalTransportModeDetails>
  RouteRentalLegDetails& WithTransport(TransportT&& value) {
    SetTransport(std::forward<TransportT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Steps of a leg that must be performed during the travel portion of the
   * leg.</p>
   */
  inline const Aws::Vector<RouteRentalTravelStep>& GetTravelSteps() const { return m_travelSteps; }
  inline bool TravelStepsHasBeenSet() const { return m_travelStepsHasBeenSet; }
  template <typename TravelStepsT = Aws::Vector<RouteRentalTravelStep>>
  void SetTravelSteps(TravelStepsT&& value) {
    m_travelStepsHasBeenSet = true;
    m_travelSteps = std::forward<TravelStepsT>(value);
  }
  template <typename TravelStepsT = Aws::Vector<RouteRentalTravelStep>>
  RouteRentalLegDetails& WithTravelSteps(TravelStepsT&& value) {
    SetTravelSteps(std::forward<TravelStepsT>(value));
    return *this;
  }
  template <typename TravelStepsT = RouteRentalTravelStep>
  RouteRentalLegDetails& AddTravelSteps(TravelStepsT&& value) {
    m_travelStepsHasBeenSet = true;
    m_travelSteps.emplace_back(std::forward<TravelStepsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<RouteRentalAfterTravelStep> m_afterTravelSteps;

  RouteRentalAgency m_agency;

  RouteRentalArrival m_arrival;

  Aws::Vector<RouteAttribution> m_attributions;

  Aws::Vector<RouteRentalBeforeTravelStep> m_beforeTravelSteps;

  Aws::Vector<RouteWebLink> m_bookingWebLinks;

  RouteRentalDeparture m_departure;

  RouteRentalSummary m_summary;

  RouteRentalTransportModeDetails m_transport;

  Aws::Vector<RouteRentalTravelStep> m_travelSteps;
  bool m_afterTravelStepsHasBeenSet = false;
  bool m_agencyHasBeenSet = false;
  bool m_arrivalHasBeenSet = false;
  bool m_attributionsHasBeenSet = false;
  bool m_beforeTravelStepsHasBeenSet = false;
  bool m_bookingWebLinksHasBeenSet = false;
  bool m_departureHasBeenSet = false;
  bool m_summaryHasBeenSet = false;
  bool m_transportHasBeenSet = false;
  bool m_travelStepsHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
