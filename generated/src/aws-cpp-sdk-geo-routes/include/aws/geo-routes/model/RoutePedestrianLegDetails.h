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
    AWS_GEOROUTES_API RoutePedestrianLegDetails();
    AWS_GEOROUTES_API RoutePedestrianLegDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RoutePedestrianLegDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details corresponding to the arrival for the leg.</p>
     */
    inline const RoutePedestrianArrival& GetArrival() const{ return m_arrival; }
    inline bool ArrivalHasBeenSet() const { return m_arrivalHasBeenSet; }
    inline void SetArrival(const RoutePedestrianArrival& value) { m_arrivalHasBeenSet = true; m_arrival = value; }
    inline void SetArrival(RoutePedestrianArrival&& value) { m_arrivalHasBeenSet = true; m_arrival = std::move(value); }
    inline RoutePedestrianLegDetails& WithArrival(const RoutePedestrianArrival& value) { SetArrival(value); return *this;}
    inline RoutePedestrianLegDetails& WithArrival(RoutePedestrianArrival&& value) { SetArrival(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details corresponding to the departure for the leg.</p>
     */
    inline const RoutePedestrianDeparture& GetDeparture() const{ return m_departure; }
    inline bool DepartureHasBeenSet() const { return m_departureHasBeenSet; }
    inline void SetDeparture(const RoutePedestrianDeparture& value) { m_departureHasBeenSet = true; m_departure = value; }
    inline void SetDeparture(RoutePedestrianDeparture&& value) { m_departureHasBeenSet = true; m_departure = std::move(value); }
    inline RoutePedestrianLegDetails& WithDeparture(const RoutePedestrianDeparture& value) { SetDeparture(value); return *this;}
    inline RoutePedestrianLegDetails& WithDeparture(RoutePedestrianDeparture&& value) { SetDeparture(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Notices are additional information returned that indicate issues that
     * occurred during route calculation.</p>
     */
    inline const Aws::Vector<RoutePedestrianNotice>& GetNotices() const{ return m_notices; }
    inline bool NoticesHasBeenSet() const { return m_noticesHasBeenSet; }
    inline void SetNotices(const Aws::Vector<RoutePedestrianNotice>& value) { m_noticesHasBeenSet = true; m_notices = value; }
    inline void SetNotices(Aws::Vector<RoutePedestrianNotice>&& value) { m_noticesHasBeenSet = true; m_notices = std::move(value); }
    inline RoutePedestrianLegDetails& WithNotices(const Aws::Vector<RoutePedestrianNotice>& value) { SetNotices(value); return *this;}
    inline RoutePedestrianLegDetails& WithNotices(Aws::Vector<RoutePedestrianNotice>&& value) { SetNotices(std::move(value)); return *this;}
    inline RoutePedestrianLegDetails& AddNotices(const RoutePedestrianNotice& value) { m_noticesHasBeenSet = true; m_notices.push_back(value); return *this; }
    inline RoutePedestrianLegDetails& AddNotices(RoutePedestrianNotice&& value) { m_noticesHasBeenSet = true; m_notices.push_back(std::move(value)); return *this; }
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
    inline RoutePedestrianLegDetails& WithPassThroughWaypoints(const Aws::Vector<RoutePassThroughWaypoint>& value) { SetPassThroughWaypoints(value); return *this;}
    inline RoutePedestrianLegDetails& WithPassThroughWaypoints(Aws::Vector<RoutePassThroughWaypoint>&& value) { SetPassThroughWaypoints(std::move(value)); return *this;}
    inline RoutePedestrianLegDetails& AddPassThroughWaypoints(const RoutePassThroughWaypoint& value) { m_passThroughWaypointsHasBeenSet = true; m_passThroughWaypoints.push_back(value); return *this; }
    inline RoutePedestrianLegDetails& AddPassThroughWaypoints(RoutePassThroughWaypoint&& value) { m_passThroughWaypointsHasBeenSet = true; m_passThroughWaypoints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Spans that were computed for the requested SpanAdditionalFeatures.</p>
     */
    inline const Aws::Vector<RoutePedestrianSpan>& GetSpans() const{ return m_spans; }
    inline bool SpansHasBeenSet() const { return m_spansHasBeenSet; }
    inline void SetSpans(const Aws::Vector<RoutePedestrianSpan>& value) { m_spansHasBeenSet = true; m_spans = value; }
    inline void SetSpans(Aws::Vector<RoutePedestrianSpan>&& value) { m_spansHasBeenSet = true; m_spans = std::move(value); }
    inline RoutePedestrianLegDetails& WithSpans(const Aws::Vector<RoutePedestrianSpan>& value) { SetSpans(value); return *this;}
    inline RoutePedestrianLegDetails& WithSpans(Aws::Vector<RoutePedestrianSpan>&& value) { SetSpans(std::move(value)); return *this;}
    inline RoutePedestrianLegDetails& AddSpans(const RoutePedestrianSpan& value) { m_spansHasBeenSet = true; m_spans.push_back(value); return *this; }
    inline RoutePedestrianLegDetails& AddSpans(RoutePedestrianSpan&& value) { m_spansHasBeenSet = true; m_spans.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Summarized details of the leg.</p>
     */
    inline const RoutePedestrianSummary& GetSummary() const{ return m_summary; }
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
    inline void SetSummary(const RoutePedestrianSummary& value) { m_summaryHasBeenSet = true; m_summary = value; }
    inline void SetSummary(RoutePedestrianSummary&& value) { m_summaryHasBeenSet = true; m_summary = std::move(value); }
    inline RoutePedestrianLegDetails& WithSummary(const RoutePedestrianSummary& value) { SetSummary(value); return *this;}
    inline RoutePedestrianLegDetails& WithSummary(RoutePedestrianSummary&& value) { SetSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Steps of a leg that must be performed before the travel portion of the
     * leg.</p>
     */
    inline const Aws::Vector<RoutePedestrianTravelStep>& GetTravelSteps() const{ return m_travelSteps; }
    inline bool TravelStepsHasBeenSet() const { return m_travelStepsHasBeenSet; }
    inline void SetTravelSteps(const Aws::Vector<RoutePedestrianTravelStep>& value) { m_travelStepsHasBeenSet = true; m_travelSteps = value; }
    inline void SetTravelSteps(Aws::Vector<RoutePedestrianTravelStep>&& value) { m_travelStepsHasBeenSet = true; m_travelSteps = std::move(value); }
    inline RoutePedestrianLegDetails& WithTravelSteps(const Aws::Vector<RoutePedestrianTravelStep>& value) { SetTravelSteps(value); return *this;}
    inline RoutePedestrianLegDetails& WithTravelSteps(Aws::Vector<RoutePedestrianTravelStep>&& value) { SetTravelSteps(std::move(value)); return *this;}
    inline RoutePedestrianLegDetails& AddTravelSteps(const RoutePedestrianTravelStep& value) { m_travelStepsHasBeenSet = true; m_travelSteps.push_back(value); return *this; }
    inline RoutePedestrianLegDetails& AddTravelSteps(RoutePedestrianTravelStep&& value) { m_travelStepsHasBeenSet = true; m_travelSteps.push_back(std::move(value)); return *this; }
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
