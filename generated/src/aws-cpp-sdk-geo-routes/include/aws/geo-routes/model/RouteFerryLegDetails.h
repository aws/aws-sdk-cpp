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
    AWS_GEOROUTES_API RouteFerryLegDetails();
    AWS_GEOROUTES_API RouteFerryLegDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteFerryLegDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Steps of a leg that must be performed after the travel portion of the
     * leg.</p>
     */
    inline const Aws::Vector<RouteFerryAfterTravelStep>& GetAfterTravelSteps() const{ return m_afterTravelSteps; }
    inline bool AfterTravelStepsHasBeenSet() const { return m_afterTravelStepsHasBeenSet; }
    inline void SetAfterTravelSteps(const Aws::Vector<RouteFerryAfterTravelStep>& value) { m_afterTravelStepsHasBeenSet = true; m_afterTravelSteps = value; }
    inline void SetAfterTravelSteps(Aws::Vector<RouteFerryAfterTravelStep>&& value) { m_afterTravelStepsHasBeenSet = true; m_afterTravelSteps = std::move(value); }
    inline RouteFerryLegDetails& WithAfterTravelSteps(const Aws::Vector<RouteFerryAfterTravelStep>& value) { SetAfterTravelSteps(value); return *this;}
    inline RouteFerryLegDetails& WithAfterTravelSteps(Aws::Vector<RouteFerryAfterTravelStep>&& value) { SetAfterTravelSteps(std::move(value)); return *this;}
    inline RouteFerryLegDetails& AddAfterTravelSteps(const RouteFerryAfterTravelStep& value) { m_afterTravelStepsHasBeenSet = true; m_afterTravelSteps.push_back(value); return *this; }
    inline RouteFerryLegDetails& AddAfterTravelSteps(RouteFerryAfterTravelStep&& value) { m_afterTravelStepsHasBeenSet = true; m_afterTravelSteps.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details corresponding to the arrival for the leg.</p>
     */
    inline const RouteFerryArrival& GetArrival() const{ return m_arrival; }
    inline bool ArrivalHasBeenSet() const { return m_arrivalHasBeenSet; }
    inline void SetArrival(const RouteFerryArrival& value) { m_arrivalHasBeenSet = true; m_arrival = value; }
    inline void SetArrival(RouteFerryArrival&& value) { m_arrivalHasBeenSet = true; m_arrival = std::move(value); }
    inline RouteFerryLegDetails& WithArrival(const RouteFerryArrival& value) { SetArrival(value); return *this;}
    inline RouteFerryLegDetails& WithArrival(RouteFerryArrival&& value) { SetArrival(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Steps of a leg that must be performed before the travel portion of the
     * leg.</p>
     */
    inline const Aws::Vector<RouteFerryBeforeTravelStep>& GetBeforeTravelSteps() const{ return m_beforeTravelSteps; }
    inline bool BeforeTravelStepsHasBeenSet() const { return m_beforeTravelStepsHasBeenSet; }
    inline void SetBeforeTravelSteps(const Aws::Vector<RouteFerryBeforeTravelStep>& value) { m_beforeTravelStepsHasBeenSet = true; m_beforeTravelSteps = value; }
    inline void SetBeforeTravelSteps(Aws::Vector<RouteFerryBeforeTravelStep>&& value) { m_beforeTravelStepsHasBeenSet = true; m_beforeTravelSteps = std::move(value); }
    inline RouteFerryLegDetails& WithBeforeTravelSteps(const Aws::Vector<RouteFerryBeforeTravelStep>& value) { SetBeforeTravelSteps(value); return *this;}
    inline RouteFerryLegDetails& WithBeforeTravelSteps(Aws::Vector<RouteFerryBeforeTravelStep>&& value) { SetBeforeTravelSteps(std::move(value)); return *this;}
    inline RouteFerryLegDetails& AddBeforeTravelSteps(const RouteFerryBeforeTravelStep& value) { m_beforeTravelStepsHasBeenSet = true; m_beforeTravelSteps.push_back(value); return *this; }
    inline RouteFerryLegDetails& AddBeforeTravelSteps(RouteFerryBeforeTravelStep&& value) { m_beforeTravelStepsHasBeenSet = true; m_beforeTravelSteps.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details corresponding to the departure for the leg.</p>
     */
    inline const RouteFerryDeparture& GetDeparture() const{ return m_departure; }
    inline bool DepartureHasBeenSet() const { return m_departureHasBeenSet; }
    inline void SetDeparture(const RouteFerryDeparture& value) { m_departureHasBeenSet = true; m_departure = value; }
    inline void SetDeparture(RouteFerryDeparture&& value) { m_departureHasBeenSet = true; m_departure = std::move(value); }
    inline RouteFerryLegDetails& WithDeparture(const RouteFerryDeparture& value) { SetDeparture(value); return *this;}
    inline RouteFerryLegDetails& WithDeparture(RouteFerryDeparture&& value) { SetDeparture(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Notices are additional information returned that indicate issues that
     * occurred during route calculation.</p>
     */
    inline const Aws::Vector<RouteFerryNotice>& GetNotices() const{ return m_notices; }
    inline bool NoticesHasBeenSet() const { return m_noticesHasBeenSet; }
    inline void SetNotices(const Aws::Vector<RouteFerryNotice>& value) { m_noticesHasBeenSet = true; m_notices = value; }
    inline void SetNotices(Aws::Vector<RouteFerryNotice>&& value) { m_noticesHasBeenSet = true; m_notices = std::move(value); }
    inline RouteFerryLegDetails& WithNotices(const Aws::Vector<RouteFerryNotice>& value) { SetNotices(value); return *this;}
    inline RouteFerryLegDetails& WithNotices(Aws::Vector<RouteFerryNotice>&& value) { SetNotices(std::move(value)); return *this;}
    inline RouteFerryLegDetails& AddNotices(const RouteFerryNotice& value) { m_noticesHasBeenSet = true; m_notices.push_back(value); return *this; }
    inline RouteFerryLegDetails& AddNotices(RouteFerryNotice&& value) { m_noticesHasBeenSet = true; m_notices.push_back(std::move(value)); return *this; }
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
    inline RouteFerryLegDetails& WithPassThroughWaypoints(const Aws::Vector<RoutePassThroughWaypoint>& value) { SetPassThroughWaypoints(value); return *this;}
    inline RouteFerryLegDetails& WithPassThroughWaypoints(Aws::Vector<RoutePassThroughWaypoint>&& value) { SetPassThroughWaypoints(std::move(value)); return *this;}
    inline RouteFerryLegDetails& AddPassThroughWaypoints(const RoutePassThroughWaypoint& value) { m_passThroughWaypointsHasBeenSet = true; m_passThroughWaypoints.push_back(value); return *this; }
    inline RouteFerryLegDetails& AddPassThroughWaypoints(RoutePassThroughWaypoint&& value) { m_passThroughWaypointsHasBeenSet = true; m_passThroughWaypoints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Route name of the ferry line.</p>
     */
    inline const Aws::String& GetRouteName() const{ return m_routeName; }
    inline bool RouteNameHasBeenSet() const { return m_routeNameHasBeenSet; }
    inline void SetRouteName(const Aws::String& value) { m_routeNameHasBeenSet = true; m_routeName = value; }
    inline void SetRouteName(Aws::String&& value) { m_routeNameHasBeenSet = true; m_routeName = std::move(value); }
    inline void SetRouteName(const char* value) { m_routeNameHasBeenSet = true; m_routeName.assign(value); }
    inline RouteFerryLegDetails& WithRouteName(const Aws::String& value) { SetRouteName(value); return *this;}
    inline RouteFerryLegDetails& WithRouteName(Aws::String&& value) { SetRouteName(std::move(value)); return *this;}
    inline RouteFerryLegDetails& WithRouteName(const char* value) { SetRouteName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Spans that were computed for the requested SpanAdditionalFeatures.</p>
     */
    inline const Aws::Vector<RouteFerrySpan>& GetSpans() const{ return m_spans; }
    inline bool SpansHasBeenSet() const { return m_spansHasBeenSet; }
    inline void SetSpans(const Aws::Vector<RouteFerrySpan>& value) { m_spansHasBeenSet = true; m_spans = value; }
    inline void SetSpans(Aws::Vector<RouteFerrySpan>&& value) { m_spansHasBeenSet = true; m_spans = std::move(value); }
    inline RouteFerryLegDetails& WithSpans(const Aws::Vector<RouteFerrySpan>& value) { SetSpans(value); return *this;}
    inline RouteFerryLegDetails& WithSpans(Aws::Vector<RouteFerrySpan>&& value) { SetSpans(std::move(value)); return *this;}
    inline RouteFerryLegDetails& AddSpans(const RouteFerrySpan& value) { m_spansHasBeenSet = true; m_spans.push_back(value); return *this; }
    inline RouteFerryLegDetails& AddSpans(RouteFerrySpan&& value) { m_spansHasBeenSet = true; m_spans.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Summarized details of the leg.</p>
     */
    inline const RouteFerrySummary& GetSummary() const{ return m_summary; }
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
    inline void SetSummary(const RouteFerrySummary& value) { m_summaryHasBeenSet = true; m_summary = value; }
    inline void SetSummary(RouteFerrySummary&& value) { m_summaryHasBeenSet = true; m_summary = std::move(value); }
    inline RouteFerryLegDetails& WithSummary(const RouteFerrySummary& value) { SetSummary(value); return *this;}
    inline RouteFerryLegDetails& WithSummary(RouteFerrySummary&& value) { SetSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Steps of a leg that must be performed before the travel portion of the
     * leg.</p>
     */
    inline const Aws::Vector<RouteFerryTravelStep>& GetTravelSteps() const{ return m_travelSteps; }
    inline bool TravelStepsHasBeenSet() const { return m_travelStepsHasBeenSet; }
    inline void SetTravelSteps(const Aws::Vector<RouteFerryTravelStep>& value) { m_travelStepsHasBeenSet = true; m_travelSteps = value; }
    inline void SetTravelSteps(Aws::Vector<RouteFerryTravelStep>&& value) { m_travelStepsHasBeenSet = true; m_travelSteps = std::move(value); }
    inline RouteFerryLegDetails& WithTravelSteps(const Aws::Vector<RouteFerryTravelStep>& value) { SetTravelSteps(value); return *this;}
    inline RouteFerryLegDetails& WithTravelSteps(Aws::Vector<RouteFerryTravelStep>&& value) { SetTravelSteps(std::move(value)); return *this;}
    inline RouteFerryLegDetails& AddTravelSteps(const RouteFerryTravelStep& value) { m_travelStepsHasBeenSet = true; m_travelSteps.push_back(value); return *this; }
    inline RouteFerryLegDetails& AddTravelSteps(RouteFerryTravelStep&& value) { m_travelStepsHasBeenSet = true; m_travelSteps.push_back(std::move(value)); return *this; }
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
