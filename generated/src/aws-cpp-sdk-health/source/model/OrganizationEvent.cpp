/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/health/model/OrganizationEvent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Health {
namespace Model {

OrganizationEvent::OrganizationEvent(JsonView jsonValue) { *this = jsonValue; }

OrganizationEvent& OrganizationEvent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("service")) {
    m_service = jsonValue.GetString("service");
    m_serviceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("eventTypeCode")) {
    m_eventTypeCode = jsonValue.GetString("eventTypeCode");
    m_eventTypeCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("eventTypeCategory")) {
    m_eventTypeCategory = EventTypeCategoryMapper::GetEventTypeCategoryForName(jsonValue.GetString("eventTypeCategory"));
    m_eventTypeCategoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("eventScopeCode")) {
    m_eventScopeCode = EventScopeCodeMapper::GetEventScopeCodeForName(jsonValue.GetString("eventScopeCode"));
    m_eventScopeCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("region")) {
    m_region = jsonValue.GetString("region");
    m_regionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startTime")) {
    m_startTime = jsonValue.GetDouble("startTime");
    m_startTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endTime")) {
    m_endTime = jsonValue.GetDouble("endTime");
    m_endTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastUpdatedTime")) {
    m_lastUpdatedTime = jsonValue.GetDouble("lastUpdatedTime");
    m_lastUpdatedTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusCode")) {
    m_statusCode = EventStatusCodeMapper::GetEventStatusCodeForName(jsonValue.GetString("statusCode"));
    m_statusCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("actionability")) {
    m_actionability = EventActionabilityMapper::GetEventActionabilityForName(jsonValue.GetString("actionability"));
    m_actionabilityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("personas")) {
    Aws::Utils::Array<JsonView> personasJsonList = jsonValue.GetArray("personas");
    for (unsigned personasIndex = 0; personasIndex < personasJsonList.GetLength(); ++personasIndex) {
      m_personas.push_back(EventPersonaMapper::GetEventPersonaForName(personasJsonList[personasIndex].AsString()));
    }
    m_personasHasBeenSet = true;
  }
  return *this;
}

JsonValue OrganizationEvent::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_serviceHasBeenSet) {
    payload.WithString("service", m_service);
  }

  if (m_eventTypeCodeHasBeenSet) {
    payload.WithString("eventTypeCode", m_eventTypeCode);
  }

  if (m_eventTypeCategoryHasBeenSet) {
    payload.WithString("eventTypeCategory", EventTypeCategoryMapper::GetNameForEventTypeCategory(m_eventTypeCategory));
  }

  if (m_eventScopeCodeHasBeenSet) {
    payload.WithString("eventScopeCode", EventScopeCodeMapper::GetNameForEventScopeCode(m_eventScopeCode));
  }

  if (m_regionHasBeenSet) {
    payload.WithString("region", m_region);
  }

  if (m_startTimeHasBeenSet) {
    payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if (m_endTimeHasBeenSet) {
    payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  if (m_lastUpdatedTimeHasBeenSet) {
    payload.WithDouble("lastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if (m_statusCodeHasBeenSet) {
    payload.WithString("statusCode", EventStatusCodeMapper::GetNameForEventStatusCode(m_statusCode));
  }

  if (m_actionabilityHasBeenSet) {
    payload.WithString("actionability", EventActionabilityMapper::GetNameForEventActionability(m_actionability));
  }

  if (m_personasHasBeenSet) {
    Aws::Utils::Array<JsonValue> personasJsonList(m_personas.size());
    for (unsigned personasIndex = 0; personasIndex < personasJsonList.GetLength(); ++personasIndex) {
      personasJsonList[personasIndex].AsString(EventPersonaMapper::GetNameForEventPersona(m_personas[personasIndex]));
    }
    payload.WithArray("personas", std::move(personasJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Health
}  // namespace Aws
