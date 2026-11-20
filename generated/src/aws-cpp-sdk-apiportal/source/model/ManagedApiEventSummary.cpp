/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/ManagedApiEventSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {

ManagedApiEventSummary::ManagedApiEventSummary(JsonView jsonValue) { *this = jsonValue; }

ManagedApiEventSummary& ManagedApiEventSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("eventId")) {
    m_eventId = jsonValue.GetString("eventId");
    m_eventIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("eventType")) {
    m_eventType = EventTypeMapper::GetEventTypeForName(jsonValue.GetString("eventType"));
    m_eventTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = EventStatusMapper::GetEventStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("wafApiSecurityEventDetail")) {
    m_wafApiSecurityEventDetail = jsonValue.GetObject("wafApiSecurityEventDetail");
    m_wafApiSecurityEventDetailHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startedAt")) {
    m_startedAt = jsonValue.GetDouble("startedAt");
    m_startedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endedAt")) {
    m_endedAt = jsonValue.GetDouble("endedAt");
    m_endedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue ManagedApiEventSummary::Jsonize() const {
  JsonValue payload;

  if (m_eventIdHasBeenSet) {
    payload.WithString("eventId", m_eventId);
  }

  if (m_eventTypeHasBeenSet) {
    payload.WithString("eventType", EventTypeMapper::GetNameForEventType(m_eventType));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", EventStatusMapper::GetNameForEventStatus(m_status));
  }

  if (m_wafApiSecurityEventDetailHasBeenSet) {
    payload.WithObject("wafApiSecurityEventDetail", m_wafApiSecurityEventDetail.Jsonize());
  }

  if (m_startedAtHasBeenSet) {
    payload.WithDouble("startedAt", m_startedAt.SecondsWithMSPrecision());
  }

  if (m_endedAtHasBeenSet) {
    payload.WithDouble("endedAt", m_endedAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
