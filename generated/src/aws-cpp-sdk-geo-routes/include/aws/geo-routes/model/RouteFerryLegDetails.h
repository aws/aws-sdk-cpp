/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/model/RouteFerryArrival.h>
#include <aws/geo-routes/model/RouteFerryDeparture.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/model/RouteFerrySummary.h>
#include <aws/geo-routes/model/RouteFerryAfterTravelStep.h>
#include <aws/geo-routes/model/RouteFerryBeforeTravelStep.h>
#include <aws/geo-routes/model/RouteFerryNotice.h>
#include <aws/geo-routes/model/RoutePassThroughWaypoint.h>
#include <aws/geo-routes/model/RouteFerrySpan.h>
#include <aws/geo-routes/model/RouteFerryTravelStep.h>
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
   * <p>FerryLegDetails is populated when the Leg type is Ferry, and provides
   * additional information that is specific</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteFerryLegDetails">AWS
   * API Reference</a></p>
   */
  class RouteFerryLegDetails
  {
  public:
    AWS_GEOROUTES_API RouteFerryLegDetails() = default;
    AWS_GEOROUTES_API RouteFerryLegDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteFerryLegDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Steps of a leg that must be performed after the travel portion of the
     * leg.</p>
     */
    inline const Aws::Vector<RouteFerryAfterTravelStep>& GetAfterTravelSteps() const { return m_afterTravelSteps; }
    inline bool AfterTravelStepsHasBeenSet() const { return m_afterTravelStepsHasBeenSet; }
    template<typename AfterTravelStepsT = Aws::Vector<RouteFerryAfterTravelStep>>
    void SetAfterTravelSteps(AfterTravelStepsT&& value) { m_afterTravelStepsHasBeenSet = true; m_afterTravelSteps = std::forward<AfterTravelStepsT>(value); }
    template<typename AfterTravelStepsT = Aws::Vector<RouteFerryAfterTravelStep>>
    RouteFerryLegDetails& WithAfterTravelSteps(AfterTravelStepsT&& value) { SetAfterTravelSteps(std::forward<AfterTravelStepsT>(value)); return *this;}
    template<typename AfterTravelStepsT = RouteFerryAfterTravelStep>
    RouteFerryLegDetails& AddAfterTravelSteps(AfterTravelStepsT&& value) { m_afterTravelStepsHasBeenSet = true; m_afterTravelSteps.emplace_back(std::forward<AfterTravelStepsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details corresponding to the arrival for the leg.</p>
     */
    inline const RouteFerryArrival& GetArrival() const { return m_arrival; }
    inline bool ArrivalHasBeenSet() const { return m_arrivalHasBeenSet; }
    template<typename ArrivalT = RouteFerryArrival>
    void SetArrival(ArrivalT&& value) { m_arrivalHasBeenSet = true; m_arrival = std::forward<ArrivalT>(value); }
    template<typename ArrivalT = RouteFerryArrival>
    RouteFerryLegDetails& WithArrival(ArrivalT&& value) { SetArrival(std::forward<ArrivalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Steps of a leg that must be performed before the travel portion of the
     * leg.</p>
     */
    inline const Aws::Vector<RouteFerryBeforeTravelStep>& GetBeforeTravelSteps() const { return m_beforeTravelSteps; }
    inline bool BeforeTravelStepsHasBeenSet() const { return m_beforeTravelStepsHasBeenSet; }
    template<typename BeforeTravelStepsT = Aws::Vector<RouteFerryBeforeTravelStep>>
    void SetBeforeTravelSteps(BeforeTravelStepsT&& value) { m_beforeTravelStepsHasBeenSet = true; m_beforeTravelSteps = std::forward<BeforeTravelStepsT>(value); }
    template<typename BeforeTravelStepsT = Aws::Vector<RouteFerryBeforeTravelStep>>
    RouteFerryLegDetails& WithBeforeTravelSteps(BeforeTravelStepsT&& value) { SetBeforeTravelSteps(std::forward<BeforeTravelStepsT>(value)); return *this;}
    template<typename BeforeTravelStepsT = RouteFerryBeforeTravelStep>
    RouteFerryLegDetails& AddBeforeTravelSteps(BeforeTravelStepsT&& value) { m_beforeTravelStepsHasBeenSet = true; m_beforeTravelSteps.emplace_back(std::forward<BeforeTravelStepsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details corresponding to the departure for the leg.</p>
     */
    inline const RouteFerryDeparture& GetDeparture() const { return m_departure; }
    inline bool DepartureHasBeenSet() const { return m_departureHasBeenSet; }
    template<typename DepartureT = RouteFerryDeparture>
    void SetDeparture(DepartureT&& value) { m_departureHasBeenSet = true; m_departure = std::forward<DepartureT>(value); }
    template<typename DepartureT = RouteFerryDeparture>
    RouteFerryLegDetails& WithDeparture(DepartureT&& value) { SetDeparture(std::forward<DepartureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Notices are additional information returned that indicate issues that
     * occurred during route calculation.</p>
     */
    inline const Aws::Vector<RouteFerryNotice>& GetNotices() const { return m_notices; }
    inline bool NoticesHasBeenSet() const { return m_noticesHasBeenSet; }
    template<typename NoticesT = Aws::Vector<RouteFerryNotice>>
    void SetNotices(NoticesT&& value) { m_noticesHasBeenSet = true; m_notices = std::forward<NoticesT>(value); }
    template<typename NoticesT = Aws::Vector<RouteFerryNotice>>
    RouteFerryLegDetails& WithNotices(NoticesT&& value) { SetNotices(std::forward<NoticesT>(value)); return *this;}
    template<typename NoticesT = RouteFerryNotice>
    RouteFerryLegDetails& AddNotices(NoticesT&& value) { m_noticesHasBeenSet = true; m_notices.emplace_back(std::forward<NoticesT>(value)); return *this; }
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
    RouteFerryLegDetails& WithPassThroughWaypoints(PassThroughWaypointsT&& value) { SetPassThroughWaypoints(std::forward<PassThroughWaypointsT>(value)); return *this;}
    template<typename PassThroughWaypointsT = RoutePassThroughWaypoint>
    RouteFerryLegDetails& AddPassThroughWaypoints(PassThroughWaypointsT&& value) { m_passThroughWaypointsHasBeenSet = true; m_passThroughWaypoints.emplace_back(std::forward<PassThroughWaypointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Route name of the ferry line.</p>
     */
    inline const Aws::String& GetRouteName() const { return m_routeName; }
    inline bool RouteNameHasBeenSet() const { return m_routeNameHasBeenSet; }
    template<typename RouteNameT = Aws::String>
    void SetRouteName(RouteNameT&& value) { m_routeNameHasBeenSet = true; m_routeName = std::forward<RouteNameT>(value); }
    template<typename RouteNameT = Aws::String>
    RouteFerryLegDetails& WithRouteName(RouteNameT&& value) { SetRouteName(std::forward<RouteNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Spans that were computed for the requested SpanAdditionalFeatures.</p>
     */
    inline const Aws::Vector<RouteFerrySpan>& GetSpans() const { return m_spans; }
    inline bool SpansHasBeenSet() const { return m_spansHasBeenSet; }
    template<typename SpansT = Aws::Vector<RouteFerrySpan>>
    void SetSpans(SpansT&& value) { m_spansHasBeenSet = true; m_spans = std::forward<SpansT>(value); }
    template<typename SpansT = Aws::Vector<RouteFerrySpan>>
    RouteFerryLegDetails& WithSpans(SpansT&& value) { SetSpans(std::forward<SpansT>(value)); return *this;}
    template<typename SpansT = RouteFerrySpan>
    RouteFerryLegDetails& AddSpans(SpansT&& value) { m_spansHasBeenSet = true; m_spans.emplace_back(std::forward<SpansT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Summarized details of the leg.</p>
     */
    inline const RouteFerrySummary& GetSummary() const { return m_summary; }
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
    template<typename SummaryT = RouteFerrySummary>
    void SetSummary(SummaryT&& value) { m_summaryHasBeenSet = true; m_summary = std::forward<SummaryT>(value); }
    template<typename SummaryT = RouteFerrySummary>
    RouteFerryLegDetails& WithSummary(SummaryT&& value) { SetSummary(std::forward<SummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Steps of a leg that must be performed before the travel portion of the
     * leg.</p>
     */
    inline const Aws::Vector<RouteFerryTravelStep>& GetTravelSteps() const { return m_travelSteps; }
    inline bool TravelStepsHasBeenSet() const { return m_travelStepsHasBeenSet; }
    template<typename TravelStepsT = Aws::Vector<RouteFerryTravelStep>>
    void SetTravelSteps(TravelStepsT&& value) { m_travelStepsHasBeenSet = true; m_travelSteps = std::forward<TravelStepsT>(value); }
    template<typename TravelStepsT = Aws::Vector<RouteFerryTravelStep>>
    RouteFerryLegDetails& WithTravelSteps(TravelStepsT&& value) { SetTravelSteps(std::forward<TravelStepsT>(value)); return *this;}
    template<typename TravelStepsT = RouteFerryTravelStep>
    RouteFerryLegDetails& AddTravelSteps(TravelStepsT&& value) { m_travelStepsHasBeenSet = true; m_travelSteps.emplace_back(std::forward<TravelStepsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<RouteFerryAfterTravelStep> m_afterTravelSteps;
    bool m_afterTravelStepsHasBeenSet = false;

    RouteFerryArrival m_arrival;
    bool m_arrivalHasBeenSet = false;

    Aws::Vector<RouteFerryBeforeTravelStep> m_beforeTravelSteps;
    bool m_beforeTravelStepsHasBeenSet = false;

    RouteFerryDeparture m_departure;
    bool m_departureHasBeenSet = false;

    Aws::Vector<RouteFerryNotice> m_notices;
    bool m_noticesHasBeenSet = false;

    Aws::Vector<RoutePassThroughWaypoint> m_passThroughWaypoints;
    bool m_passThroughWaypointsHasBeenSet = false;

    Aws::String m_routeName;
    bool m_routeNameHasBeenSet = false;

    Aws::Vector<RouteFerrySpan> m_spans;
    bool m_spansHasBeenSet = false;

    RouteFerrySummary m_summary;
    bool m_summaryHasBeenSet = false;

    Aws::Vector<RouteFerryTravelStep> m_travelSteps;
    bool m_travelStepsHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
