/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/geo-routes/model/RouteTransitLegDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {

RouteTransitLegDetails::RouteTransitLegDetails(JsonView jsonValue) { *this = jsonValue; }

RouteTransitLegDetails& RouteTransitLegDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AfterTravelSteps")) {
    Aws::Utils::Array<JsonView> afterTravelStepsJsonList = jsonValue.GetArray("AfterTravelSteps");
    for (unsigned afterTravelStepsIndex = 0; afterTravelStepsIndex < afterTravelStepsJsonList.GetLength(); ++afterTravelStepsIndex) {
      m_afterTravelSteps.push_back(afterTravelStepsJsonList[afterTravelStepsIndex].AsObject());
    }
    m_afterTravelStepsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Agency")) {
    m_agency = jsonValue.GetObject("Agency");
    m_agencyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Arrival")) {
    m_arrival = jsonValue.GetObject("Arrival");
    m_arrivalHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Attributions")) {
    Aws::Utils::Array<JsonView> attributionsJsonList = jsonValue.GetArray("Attributions");
    for (unsigned attributionsIndex = 0; attributionsIndex < attributionsJsonList.GetLength(); ++attributionsIndex) {
      m_attributions.push_back(attributionsJsonList[attributionsIndex].AsObject());
    }
    m_attributionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BeforeTravelSteps")) {
    Aws::Utils::Array<JsonView> beforeTravelStepsJsonList = jsonValue.GetArray("BeforeTravelSteps");
    for (unsigned beforeTravelStepsIndex = 0; beforeTravelStepsIndex < beforeTravelStepsJsonList.GetLength(); ++beforeTravelStepsIndex) {
      m_beforeTravelSteps.push_back(beforeTravelStepsJsonList[beforeTravelStepsIndex].AsObject());
    }
    m_beforeTravelStepsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BookingWebLinks")) {
    Aws::Utils::Array<JsonView> bookingWebLinksJsonList = jsonValue.GetArray("BookingWebLinks");
    for (unsigned bookingWebLinksIndex = 0; bookingWebLinksIndex < bookingWebLinksJsonList.GetLength(); ++bookingWebLinksIndex) {
      m_bookingWebLinks.push_back(bookingWebLinksJsonList[bookingWebLinksIndex].AsObject());
    }
    m_bookingWebLinksHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Departure")) {
    m_departure = jsonValue.GetObject("Departure");
    m_departureHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Incidents")) {
    Aws::Utils::Array<JsonView> incidentsJsonList = jsonValue.GetArray("Incidents");
    for (unsigned incidentsIndex = 0; incidentsIndex < incidentsJsonList.GetLength(); ++incidentsIndex) {
      m_incidents.push_back(incidentsJsonList[incidentsIndex].AsObject());
    }
    m_incidentsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IntermediateStops")) {
    Aws::Utils::Array<JsonView> intermediateStopsJsonList = jsonValue.GetArray("IntermediateStops");
    for (unsigned intermediateStopsIndex = 0; intermediateStopsIndex < intermediateStopsJsonList.GetLength(); ++intermediateStopsIndex) {
      m_intermediateStops.push_back(intermediateStopsJsonList[intermediateStopsIndex].AsObject());
    }
    m_intermediateStopsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NextDepartures")) {
    Aws::Utils::Array<JsonView> nextDeparturesJsonList = jsonValue.GetArray("NextDepartures");
    for (unsigned nextDeparturesIndex = 0; nextDeparturesIndex < nextDeparturesJsonList.GetLength(); ++nextDeparturesIndex) {
      m_nextDepartures.push_back(nextDeparturesJsonList[nextDeparturesIndex].AsObject());
    }
    m_nextDeparturesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Notices")) {
    Aws::Utils::Array<JsonView> noticesJsonList = jsonValue.GetArray("Notices");
    for (unsigned noticesIndex = 0; noticesIndex < noticesJsonList.GetLength(); ++noticesIndex) {
      m_notices.push_back(noticesJsonList[noticesIndex].AsObject());
    }
    m_noticesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PassThroughWaypoints")) {
    Aws::Utils::Array<JsonView> passThroughWaypointsJsonList = jsonValue.GetArray("PassThroughWaypoints");
    for (unsigned passThroughWaypointsIndex = 0; passThroughWaypointsIndex < passThroughWaypointsJsonList.GetLength();
         ++passThroughWaypointsIndex) {
      m_passThroughWaypoints.push_back(passThroughWaypointsJsonList[passThroughWaypointsIndex].AsObject());
    }
    m_passThroughWaypointsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Spans")) {
    Aws::Utils::Array<JsonView> spansJsonList = jsonValue.GetArray("Spans");
    for (unsigned spansIndex = 0; spansIndex < spansJsonList.GetLength(); ++spansIndex) {
      m_spans.push_back(spansJsonList[spansIndex].AsObject());
    }
    m_spansHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Summary")) {
    m_summary = jsonValue.GetObject("Summary");
    m_summaryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Transport")) {
    m_transport = jsonValue.GetObject("Transport");
    m_transportHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TravelSteps")) {
    Aws::Utils::Array<JsonView> travelStepsJsonList = jsonValue.GetArray("TravelSteps");
    for (unsigned travelStepsIndex = 0; travelStepsIndex < travelStepsJsonList.GetLength(); ++travelStepsIndex) {
      m_travelSteps.push_back(travelStepsJsonList[travelStepsIndex].AsObject());
    }
    m_travelStepsHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteTransitLegDetails::Jsonize() const {
  JsonValue payload;

  if (m_afterTravelStepsHasBeenSet) {
    Aws::Utils::Array<JsonValue> afterTravelStepsJsonList(m_afterTravelSteps.size());
    for (unsigned afterTravelStepsIndex = 0; afterTravelStepsIndex < afterTravelStepsJsonList.GetLength(); ++afterTravelStepsIndex) {
      afterTravelStepsJsonList[afterTravelStepsIndex].AsObject(m_afterTravelSteps[afterTravelStepsIndex].Jsonize());
    }
    payload.WithArray("AfterTravelSteps", std::move(afterTravelStepsJsonList));
  }

  if (m_agencyHasBeenSet) {
    payload.WithObject("Agency", m_agency.Jsonize());
  }

  if (m_arrivalHasBeenSet) {
    payload.WithObject("Arrival", m_arrival.Jsonize());
  }

  if (m_attributionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> attributionsJsonList(m_attributions.size());
    for (unsigned attributionsIndex = 0; attributionsIndex < attributionsJsonList.GetLength(); ++attributionsIndex) {
      attributionsJsonList[attributionsIndex].AsObject(m_attributions[attributionsIndex].Jsonize());
    }
    payload.WithArray("Attributions", std::move(attributionsJsonList));
  }

  if (m_beforeTravelStepsHasBeenSet) {
    Aws::Utils::Array<JsonValue> beforeTravelStepsJsonList(m_beforeTravelSteps.size());
    for (unsigned beforeTravelStepsIndex = 0; beforeTravelStepsIndex < beforeTravelStepsJsonList.GetLength(); ++beforeTravelStepsIndex) {
      beforeTravelStepsJsonList[beforeTravelStepsIndex].AsObject(m_beforeTravelSteps[beforeTravelStepsIndex].Jsonize());
    }
    payload.WithArray("BeforeTravelSteps", std::move(beforeTravelStepsJsonList));
  }

  if (m_bookingWebLinksHasBeenSet) {
    Aws::Utils::Array<JsonValue> bookingWebLinksJsonList(m_bookingWebLinks.size());
    for (unsigned bookingWebLinksIndex = 0; bookingWebLinksIndex < bookingWebLinksJsonList.GetLength(); ++bookingWebLinksIndex) {
      bookingWebLinksJsonList[bookingWebLinksIndex].AsObject(m_bookingWebLinks[bookingWebLinksIndex].Jsonize());
    }
    payload.WithArray("BookingWebLinks", std::move(bookingWebLinksJsonList));
  }

  if (m_departureHasBeenSet) {
    payload.WithObject("Departure", m_departure.Jsonize());
  }

  if (m_incidentsHasBeenSet) {
    Aws::Utils::Array<JsonValue> incidentsJsonList(m_incidents.size());
    for (unsigned incidentsIndex = 0; incidentsIndex < incidentsJsonList.GetLength(); ++incidentsIndex) {
      incidentsJsonList[incidentsIndex].AsObject(m_incidents[incidentsIndex].Jsonize());
    }
    payload.WithArray("Incidents", std::move(incidentsJsonList));
  }

  if (m_intermediateStopsHasBeenSet) {
    Aws::Utils::Array<JsonValue> intermediateStopsJsonList(m_intermediateStops.size());
    for (unsigned intermediateStopsIndex = 0; intermediateStopsIndex < intermediateStopsJsonList.GetLength(); ++intermediateStopsIndex) {
      intermediateStopsJsonList[intermediateStopsIndex].AsObject(m_intermediateStops[intermediateStopsIndex].Jsonize());
    }
    payload.WithArray("IntermediateStops", std::move(intermediateStopsJsonList));
  }

  if (m_nextDeparturesHasBeenSet) {
    Aws::Utils::Array<JsonValue> nextDeparturesJsonList(m_nextDepartures.size());
    for (unsigned nextDeparturesIndex = 0; nextDeparturesIndex < nextDeparturesJsonList.GetLength(); ++nextDeparturesIndex) {
      nextDeparturesJsonList[nextDeparturesIndex].AsObject(m_nextDepartures[nextDeparturesIndex].Jsonize());
    }
    payload.WithArray("NextDepartures", std::move(nextDeparturesJsonList));
  }

  if (m_noticesHasBeenSet) {
    Aws::Utils::Array<JsonValue> noticesJsonList(m_notices.size());
    for (unsigned noticesIndex = 0; noticesIndex < noticesJsonList.GetLength(); ++noticesIndex) {
      noticesJsonList[noticesIndex].AsObject(m_notices[noticesIndex].Jsonize());
    }
    payload.WithArray("Notices", std::move(noticesJsonList));
  }

  if (m_passThroughWaypointsHasBeenSet) {
    Aws::Utils::Array<JsonValue> passThroughWaypointsJsonList(m_passThroughWaypoints.size());
    for (unsigned passThroughWaypointsIndex = 0; passThroughWaypointsIndex < passThroughWaypointsJsonList.GetLength();
         ++passThroughWaypointsIndex) {
      passThroughWaypointsJsonList[passThroughWaypointsIndex].AsObject(m_passThroughWaypoints[passThroughWaypointsIndex].Jsonize());
    }
    payload.WithArray("PassThroughWaypoints", std::move(passThroughWaypointsJsonList));
  }

  if (m_spansHasBeenSet) {
    Aws::Utils::Array<JsonValue> spansJsonList(m_spans.size());
    for (unsigned spansIndex = 0; spansIndex < spansJsonList.GetLength(); ++spansIndex) {
      spansJsonList[spansIndex].AsObject(m_spans[spansIndex].Jsonize());
    }
    payload.WithArray("Spans", std::move(spansJsonList));
  }

  if (m_summaryHasBeenSet) {
    payload.WithObject("Summary", m_summary.Jsonize());
  }

  if (m_transportHasBeenSet) {
    payload.WithObject("Transport", m_transport.Jsonize());
  }

  if (m_travelStepsHasBeenSet) {
    Aws::Utils::Array<JsonValue> travelStepsJsonList(m_travelSteps.size());
    for (unsigned travelStepsIndex = 0; travelStepsIndex < travelStepsJsonList.GetLength(); ++travelStepsIndex) {
      travelStepsJsonList[travelStepsIndex].AsObject(m_travelSteps[travelStepsIndex].Jsonize());
    }
    payload.WithArray("TravelSteps", std::move(travelStepsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
