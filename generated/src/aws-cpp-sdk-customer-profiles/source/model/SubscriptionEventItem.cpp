/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/model/SubscriptionEventItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {

SubscriptionEventItem::SubscriptionEventItem(JsonView jsonValue) { *this = jsonValue; }

SubscriptionEventItem& SubscriptionEventItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ProfileId")) {
    m_profileId = jsonValue.GetString("ProfileId");
    m_profileIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpdatedAt")) {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EventType")) {
    m_eventType = SubscriptionEventTypeMapper::GetSubscriptionEventTypeForName(jsonValue.GetString("EventType"));
    m_eventTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Event")) {
    m_event = SubscriptionEventMapper::GetSubscriptionEventForName(jsonValue.GetString("Event"));
    m_eventHasBeenSet = true;
  }
  return *this;
}

JsonValue SubscriptionEventItem::Jsonize() const {
  JsonValue payload;

  if (m_profileIdHasBeenSet) {
    payload.WithString("ProfileId", m_profileId);
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if (m_eventTypeHasBeenSet) {
    payload.WithString("EventType", SubscriptionEventTypeMapper::GetNameForSubscriptionEventType(m_eventType));
  }

  if (m_eventHasBeenSet) {
    payload.WithString("Event", SubscriptionEventMapper::GetNameForSubscriptionEvent(m_event));
  }

  return payload;
}

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
