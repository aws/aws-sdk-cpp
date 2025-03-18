/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RoutePedestrianArrival.h>
#include <aws/geo-routes/model/RoutePedestrianDeparture.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/model/RoutePedestrianSummary.h>
#include <aws/geo-routes/model/RoutePedestrianNotice.h>
#include <aws/geo-routes/model/RoutePassThroughWaypoint.h>
#include <aws/geo-routes/model/RoutePedestrianSpan.h>
#include <aws/geo-routes/model/RoutePedestrianTravelStep.h>
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
   * <p>Details that are specific to a pedestrian leg.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RoutePedestrianLegDetails">AWS
   * API Reference</a></p>
   */
  class RoutePedestrianLegDetails
  {
  public:
    AWS_GEOROUTES_API RoutePedestrianLegDetails() = default;
    AWS_GEOROUTES_API RoutePedestrianLegDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RoutePedestrianLegDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details corresponding to the arrival for the leg.</p>
     */
    inline const RoutePedestrianArrival& GetArrival() const { return m_arrival; }
    inline bool ArrivalHasBeenSet() const { return m_arrivalHasBeenSet; }
    template<typename ArrivalT = RoutePedestrianArrival>
    void SetArrival(ArrivalT&& value) { m_arrivalHasBeenSet = true; m_arrival = std::forward<ArrivalT>(value); }
    template<typename ArrivalT = RoutePedestrianArrival>
    RoutePedestrianLegDetails& WithArrival(ArrivalT&& value) { SetArrival(std::forward<ArrivalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details corresponding to the departure for the leg.</p>
     */
    inline const RoutePedestrianDeparture& GetDeparture() const { return m_departure; }
    inline bool DepartureHasBeenSet() const { return m_departureHasBeenSet; }
    template<typename DepartureT = RoutePedestrianDeparture>
    void SetDeparture(DepartureT&& value) { m_departureHasBeenSet = true; m_departure = std::forward<DepartureT>(value); }
    template<typename DepartureT = RoutePedestrianDeparture>
    RoutePedestrianLegDetails& WithDeparture(DepartureT&& value) { SetDeparture(std::forward<DepartureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Notices are additional information returned that indicate issues that
     * occurred during route calculation.</p>
     */
    inline const Aws::Vector<RoutePedestrianNotice>& GetNotices() const { return m_notices; }
    inline bool NoticesHasBeenSet() const { return m_noticesHasBeenSet; }
    template<typename NoticesT = Aws::Vector<RoutePedestrianNotice>>
    void SetNotices(NoticesT&& value) { m_noticesHasBeenSet = true; m_notices = std::forward<NoticesT>(value); }
    template<typename NoticesT = Aws::Vector<RoutePedestrianNotice>>
    RoutePedestrianLegDetails& WithNotices(NoticesT&& value) { SetNotices(std::forward<NoticesT>(value)); return *this;}
    template<typename NoticesT = RoutePedestrianNotice>
    RoutePedestrianLegDetails& AddNotices(NoticesT&& value) { m_noticesHasBeenSet = true; m_notices.emplace_back(std::forward<NoticesT>(value)); return *this; }
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
    RoutePedestrianLegDetails& WithPassThroughWaypoints(PassThroughWaypointsT&& value) { SetPassThroughWaypoints(std::forward<PassThroughWaypointsT>(value)); return *this;}
    template<typename PassThroughWaypointsT = RoutePassThroughWaypoint>
    RoutePedestrianLegDetails& AddPassThroughWaypoints(PassThroughWaypointsT&& value) { m_passThroughWaypointsHasBeenSet = true; m_passThroughWaypoints.emplace_back(std::forward<PassThroughWaypointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Spans that were computed for the requested SpanAdditionalFeatures.</p>
     */
    inline const Aws::Vector<RoutePedestrianSpan>& GetSpans() const { return m_spans; }
    inline bool SpansHasBeenSet() const { return m_spansHasBeenSet; }
    template<typename SpansT = Aws::Vector<RoutePedestrianSpan>>
    void SetSpans(SpansT&& value) { m_spansHasBeenSet = true; m_spans = std::forward<SpansT>(value); }
    template<typename SpansT = Aws::Vector<RoutePedestrianSpan>>
    RoutePedestrianLegDetails& WithSpans(SpansT&& value) { SetSpans(std::forward<SpansT>(value)); return *this;}
    template<typename SpansT = RoutePedestrianSpan>
    RoutePedestrianLegDetails& AddSpans(SpansT&& value) { m_spansHasBeenSet = true; m_spans.emplace_back(std::forward<SpansT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Summarized details of the leg.</p>
     */
    inline const RoutePedestrianSummary& GetSummary() const { return m_summary; }
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
    template<typename SummaryT = RoutePedestrianSummary>
    void SetSummary(SummaryT&& value) { m_summaryHasBeenSet = true; m_summary = std::forward<SummaryT>(value); }
    template<typename SummaryT = RoutePedestrianSummary>
    RoutePedestrianLegDetails& WithSummary(SummaryT&& value) { SetSummary(std::forward<SummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Steps of a leg that must be performed before the travel portion of the
     * leg.</p>
     */
    inline const Aws::Vector<RoutePedestrianTravelStep>& GetTravelSteps() const { return m_travelSteps; }
    inline bool TravelStepsHasBeenSet() const { return m_travelStepsHasBeenSet; }
    template<typename TravelStepsT = Aws::Vector<RoutePedestrianTravelStep>>
    void SetTravelSteps(TravelStepsT&& value) { m_travelStepsHasBeenSet = true; m_travelSteps = std::forward<TravelStepsT>(value); }
    template<typename TravelStepsT = Aws::Vector<RoutePedestrianTravelStep>>
    RoutePedestrianLegDetails& WithTravelSteps(TravelStepsT&& value) { SetTravelSteps(std::forward<TravelStepsT>(value)); return *this;}
    template<typename TravelStepsT = RoutePedestrianTravelStep>
    RoutePedestrianLegDetails& AddTravelSteps(TravelStepsT&& value) { m_travelStepsHasBeenSet = true; m_travelSteps.emplace_back(std::forward<TravelStepsT>(value)); return *this; }
    ///@}
  private:

    RoutePedestrianArrival m_arrival;
    bool m_arrivalHasBeenSet = false;

    RoutePedestrianDeparture m_departure;
    bool m_departureHasBeenSet = false;

    Aws::Vector<RoutePedestrianNotice> m_notices;
    bool m_noticesHasBeenSet = false;

    Aws::Vector<RoutePassThroughWaypoint> m_passThroughWaypoints;
    bool m_passThroughWaypointsHasBeenSet = false;

    Aws::Vector<RoutePedestrianSpan> m_spans;
    bool m_spansHasBeenSet = false;

    RoutePedestrianSummary m_summary;
    bool m_summaryHasBeenSet = false;

    Aws::Vector<RoutePedestrianTravelStep> m_travelSteps;
    bool m_travelStepsHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
