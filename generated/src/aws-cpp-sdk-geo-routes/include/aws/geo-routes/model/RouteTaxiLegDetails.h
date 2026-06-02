/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteAttribution.h>
#include <aws/geo-routes/model/RouteTaxiAfterTravelStep.h>
#include <aws/geo-routes/model/RouteTaxiAgency.h>
#include <aws/geo-routes/model/RouteTaxiArrival.h>
#include <aws/geo-routes/model/RouteTaxiBeforeTravelStep.h>
#include <aws/geo-routes/model/RouteTaxiDeparture.h>
#include <aws/geo-routes/model/RouteTaxiNotice.h>
#include <aws/geo-routes/model/RouteTaxiSummary.h>
#include <aws/geo-routes/model/RouteTaxiTransportModeDetails.h>
#include <aws/geo-routes/model/RouteTaxiTravelStep.h>
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
 * <p>Populated when the Leg type is Taxi, and provides additional information that
 * is specific to taxi travel.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteTaxiLegDetails">AWS
 * API Reference</a></p>
 */
class RouteTaxiLegDetails {
 public:
  AWS_GEOROUTES_API RouteTaxiLegDetails() = default;
  AWS_GEOROUTES_API RouteTaxiLegDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API RouteTaxiLegDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Steps of a leg that must be performed after the travel portion of the
   * leg.</p>
   */
  inline const Aws::Vector<RouteTaxiAfterTravelStep>& GetAfterTravelSteps() const { return m_afterTravelSteps; }
  inline bool AfterTravelStepsHasBeenSet() const { return m_afterTravelStepsHasBeenSet; }
  template <typename AfterTravelStepsT = Aws::Vector<RouteTaxiAfterTravelStep>>
  void SetAfterTravelSteps(AfterTravelStepsT&& value) {
    m_afterTravelStepsHasBeenSet = true;
    m_afterTravelSteps = std::forward<AfterTravelStepsT>(value);
  }
  template <typename AfterTravelStepsT = Aws::Vector<RouteTaxiAfterTravelStep>>
  RouteTaxiLegDetails& WithAfterTravelSteps(AfterTravelStepsT&& value) {
    SetAfterTravelSteps(std::forward<AfterTravelStepsT>(value));
    return *this;
  }
  template <typename AfterTravelStepsT = RouteTaxiAfterTravelStep>
  RouteTaxiLegDetails& AddAfterTravelSteps(AfterTravelStepsT&& value) {
    m_afterTravelStepsHasBeenSet = true;
    m_afterTravelSteps.emplace_back(std::forward<AfterTravelStepsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about the taxi agency.</p>
   */
  inline const RouteTaxiAgency& GetAgency() const { return m_agency; }
  inline bool AgencyHasBeenSet() const { return m_agencyHasBeenSet; }
  template <typename AgencyT = RouteTaxiAgency>
  void SetAgency(AgencyT&& value) {
    m_agencyHasBeenSet = true;
    m_agency = std::forward<AgencyT>(value);
  }
  template <typename AgencyT = RouteTaxiAgency>
  RouteTaxiLegDetails& WithAgency(AgencyT&& value) {
    SetAgency(std::forward<AgencyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details corresponding to the arrival for the leg.</p>
   */
  inline const RouteTaxiArrival& GetArrival() const { return m_arrival; }
  inline bool ArrivalHasBeenSet() const { return m_arrivalHasBeenSet; }
  template <typename ArrivalT = RouteTaxiArrival>
  void SetArrival(ArrivalT&& value) {
    m_arrivalHasBeenSet = true;
    m_arrival = std::forward<ArrivalT>(value);
  }
  template <typename ArrivalT = RouteTaxiArrival>
  RouteTaxiLegDetails& WithArrival(ArrivalT&& value) {
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
  RouteTaxiLegDetails& WithAttributions(AttributionsT&& value) {
    SetAttributions(std::forward<AttributionsT>(value));
    return *this;
  }
  template <typename AttributionsT = RouteAttribution>
  RouteTaxiLegDetails& AddAttributions(AttributionsT&& value) {
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
  inline const Aws::Vector<RouteTaxiBeforeTravelStep>& GetBeforeTravelSteps() const { return m_beforeTravelSteps; }
  inline bool BeforeTravelStepsHasBeenSet() const { return m_beforeTravelStepsHasBeenSet; }
  template <typename BeforeTravelStepsT = Aws::Vector<RouteTaxiBeforeTravelStep>>
  void SetBeforeTravelSteps(BeforeTravelStepsT&& value) {
    m_beforeTravelStepsHasBeenSet = true;
    m_beforeTravelSteps = std::forward<BeforeTravelStepsT>(value);
  }
  template <typename BeforeTravelStepsT = Aws::Vector<RouteTaxiBeforeTravelStep>>
  RouteTaxiLegDetails& WithBeforeTravelSteps(BeforeTravelStepsT&& value) {
    SetBeforeTravelSteps(std::forward<BeforeTravelStepsT>(value));
    return *this;
  }
  template <typename BeforeTravelStepsT = RouteTaxiBeforeTravelStep>
  RouteTaxiLegDetails& AddBeforeTravelSteps(BeforeTravelStepsT&& value) {
    m_beforeTravelStepsHasBeenSet = true;
    m_beforeTravelSteps.emplace_back(std::forward<BeforeTravelStepsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Web links to external ticket booking services for the taxi.</p>
   */
  inline const Aws::Vector<RouteWebLink>& GetBookingWebLinks() const { return m_bookingWebLinks; }
  inline bool BookingWebLinksHasBeenSet() const { return m_bookingWebLinksHasBeenSet; }
  template <typename BookingWebLinksT = Aws::Vector<RouteWebLink>>
  void SetBookingWebLinks(BookingWebLinksT&& value) {
    m_bookingWebLinksHasBeenSet = true;
    m_bookingWebLinks = std::forward<BookingWebLinksT>(value);
  }
  template <typename BookingWebLinksT = Aws::Vector<RouteWebLink>>
  RouteTaxiLegDetails& WithBookingWebLinks(BookingWebLinksT&& value) {
    SetBookingWebLinks(std::forward<BookingWebLinksT>(value));
    return *this;
  }
  template <typename BookingWebLinksT = RouteWebLink>
  RouteTaxiLegDetails& AddBookingWebLinks(BookingWebLinksT&& value) {
    m_bookingWebLinksHasBeenSet = true;
    m_bookingWebLinks.emplace_back(std::forward<BookingWebLinksT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details corresponding to the departure for the leg.</p>
   */
  inline const RouteTaxiDeparture& GetDeparture() const { return m_departure; }
  inline bool DepartureHasBeenSet() const { return m_departureHasBeenSet; }
  template <typename DepartureT = RouteTaxiDeparture>
  void SetDeparture(DepartureT&& value) {
    m_departureHasBeenSet = true;
    m_departure = std::forward<DepartureT>(value);
  }
  template <typename DepartureT = RouteTaxiDeparture>
  RouteTaxiLegDetails& WithDeparture(DepartureT&& value) {
    SetDeparture(std::forward<DepartureT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of notices that indicate issues that occurred during route
   * calculation.</p>
   */
  inline const Aws::Vector<RouteTaxiNotice>& GetNotices() const { return m_notices; }
  inline bool NoticesHasBeenSet() const { return m_noticesHasBeenSet; }
  template <typename NoticesT = Aws::Vector<RouteTaxiNotice>>
  void SetNotices(NoticesT&& value) {
    m_noticesHasBeenSet = true;
    m_notices = std::forward<NoticesT>(value);
  }
  template <typename NoticesT = Aws::Vector<RouteTaxiNotice>>
  RouteTaxiLegDetails& WithNotices(NoticesT&& value) {
    SetNotices(std::forward<NoticesT>(value));
    return *this;
  }
  template <typename NoticesT = RouteTaxiNotice>
  RouteTaxiLegDetails& AddNotices(NoticesT&& value) {
    m_noticesHasBeenSet = true;
    m_notices.emplace_back(std::forward<NoticesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Summary of the taxi leg.</p>
   */
  inline const RouteTaxiSummary& GetSummary() const { return m_summary; }
  inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
  template <typename SummaryT = RouteTaxiSummary>
  void SetSummary(SummaryT&& value) {
    m_summaryHasBeenSet = true;
    m_summary = std::forward<SummaryT>(value);
  }
  template <typename SummaryT = RouteTaxiSummary>
  RouteTaxiLegDetails& WithSummary(SummaryT&& value) {
    SetSummary(std::forward<SummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Transport mode details for the taxi leg.</p>
   */
  inline const RouteTaxiTransportModeDetails& GetTransport() const { return m_transport; }
  inline bool TransportHasBeenSet() const { return m_transportHasBeenSet; }
  template <typename TransportT = RouteTaxiTransportModeDetails>
  void SetTransport(TransportT&& value) {
    m_transportHasBeenSet = true;
    m_transport = std::forward<TransportT>(value);
  }
  template <typename TransportT = RouteTaxiTransportModeDetails>
  RouteTaxiLegDetails& WithTransport(TransportT&& value) {
    SetTransport(std::forward<TransportT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Steps of a leg that must be performed during the travel portion of the
   * leg.</p>
   */
  inline const Aws::Vector<RouteTaxiTravelStep>& GetTravelSteps() const { return m_travelSteps; }
  inline bool TravelStepsHasBeenSet() const { return m_travelStepsHasBeenSet; }
  template <typename TravelStepsT = Aws::Vector<RouteTaxiTravelStep>>
  void SetTravelSteps(TravelStepsT&& value) {
    m_travelStepsHasBeenSet = true;
    m_travelSteps = std::forward<TravelStepsT>(value);
  }
  template <typename TravelStepsT = Aws::Vector<RouteTaxiTravelStep>>
  RouteTaxiLegDetails& WithTravelSteps(TravelStepsT&& value) {
    SetTravelSteps(std::forward<TravelStepsT>(value));
    return *this;
  }
  template <typename TravelStepsT = RouteTaxiTravelStep>
  RouteTaxiLegDetails& AddTravelSteps(TravelStepsT&& value) {
    m_travelStepsHasBeenSet = true;
    m_travelSteps.emplace_back(std::forward<TravelStepsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<RouteTaxiAfterTravelStep> m_afterTravelSteps;

  RouteTaxiAgency m_agency;

  RouteTaxiArrival m_arrival;

  Aws::Vector<RouteAttribution> m_attributions;

  Aws::Vector<RouteTaxiBeforeTravelStep> m_beforeTravelSteps;

  Aws::Vector<RouteWebLink> m_bookingWebLinks;

  RouteTaxiDeparture m_departure;

  Aws::Vector<RouteTaxiNotice> m_notices;

  RouteTaxiSummary m_summary;

  RouteTaxiTransportModeDetails m_transport;

  Aws::Vector<RouteTaxiTravelStep> m_travelSteps;
  bool m_afterTravelStepsHasBeenSet = false;
  bool m_agencyHasBeenSet = false;
  bool m_arrivalHasBeenSet = false;
  bool m_attributionsHasBeenSet = false;
  bool m_beforeTravelStepsHasBeenSet = false;
  bool m_bookingWebLinksHasBeenSet = false;
  bool m_departureHasBeenSet = false;
  bool m_noticesHasBeenSet = false;
  bool m_summaryHasBeenSet = false;
  bool m_transportHasBeenSet = false;
  bool m_travelStepsHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
