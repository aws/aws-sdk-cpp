/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/groundstation/model/ListGroundStationReservationsRequest.h>

#include <utility>

using namespace Aws::GroundStation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListGroundStationReservationsRequest::SerializePayload() const { return {}; }

void ListGroundStationReservationsRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_startTimeHasBeenSet) {
    ss << m_startTime.SecondsWithMSPrecision();
    uri.AddQueryStringParameter("startTime", ss.str());
    ss.str("");
  }

  if (m_endTimeHasBeenSet) {
    ss << m_endTime.SecondsWithMSPrecision();
    uri.AddQueryStringParameter("endTime", ss.str());
    ss.str("");
  }

  if (m_reservationTypesHasBeenSet) {
    for (const auto& item : m_reservationTypes) {
      ss << ReservationTypeMapper::GetNameForReservationType(item);
      uri.AddQueryStringParameter("reservationTypes", ss.str());
      ss.str("");
    }
  }

  if (m_maxResultsHasBeenSet) {
    ss << m_maxResults;
    uri.AddQueryStringParameter("maxResults", ss.str());
    ss.str("");
  }

  if (m_nextTokenHasBeenSet) {
    ss << m_nextToken;
    uri.AddQueryStringParameter("nextToken", ss.str());
    ss.str("");
  }
}
