/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/ChangeEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApplicationSignals {
namespace Model {

ChangeEvent::ChangeEvent(JsonView jsonValue) { *this = jsonValue; }

ChangeEvent& ChangeEvent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Timestamp")) {
    m_timestamp = jsonValue.GetDouble("Timestamp");
    m_timestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AccountId")) {
    m_accountId = jsonValue.GetString("AccountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Region")) {
    m_region = jsonValue.GetString("Region");
    m_regionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Entity")) {
    Aws::Map<Aws::String, JsonView> entityJsonMap = jsonValue.GetObject("Entity").GetAllObjects();
    for (auto& entityItem : entityJsonMap) {
      m_entity[entityItem.first] = entityItem.second.AsString();
    }
    m_entityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ChangeEventType")) {
    m_changeEventType = ChangeEventTypeMapper::GetChangeEventTypeForName(jsonValue.GetString("ChangeEventType"));
    m_changeEventTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EventId")) {
    m_eventId = jsonValue.GetString("EventId");
    m_eventIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UserName")) {
    m_userName = jsonValue.GetString("UserName");
    m_userNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EventName")) {
    m_eventName = jsonValue.GetString("EventName");
    m_eventNameHasBeenSet = true;
  }
  return *this;
}

JsonValue ChangeEvent::Jsonize() const {
  JsonValue payload;

  if (m_timestampHasBeenSet) {
    payload.WithDouble("Timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if (m_accountIdHasBeenSet) {
    payload.WithString("AccountId", m_accountId);
  }

  if (m_regionHasBeenSet) {
    payload.WithString("Region", m_region);
  }

  if (m_entityHasBeenSet) {
    JsonValue entityJsonMap;
    for (auto& entityItem : m_entity) {
      entityJsonMap.WithString(entityItem.first, entityItem.second);
    }
    payload.WithObject("Entity", std::move(entityJsonMap));
  }

  if (m_changeEventTypeHasBeenSet) {
    payload.WithString("ChangeEventType", ChangeEventTypeMapper::GetNameForChangeEventType(m_changeEventType));
  }

  if (m_eventIdHasBeenSet) {
    payload.WithString("EventId", m_eventId);
  }

  if (m_userNameHasBeenSet) {
    payload.WithString("UserName", m_userName);
  }

  if (m_eventNameHasBeenSet) {
    payload.WithString("EventName", m_eventName);
  }

  return payload;
}

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
