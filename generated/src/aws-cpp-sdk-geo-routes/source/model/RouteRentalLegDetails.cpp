/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/geo-routes/model/RouteRentalLegDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {

RouteRentalLegDetails::RouteRentalLegDetails(JsonView jsonValue) { *this = jsonValue; }

RouteRentalLegDetails& RouteRentalLegDetails::operator=(JsonView jsonValue) {
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

JsonValue RouteRentalLegDetails::Jsonize() const {
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
