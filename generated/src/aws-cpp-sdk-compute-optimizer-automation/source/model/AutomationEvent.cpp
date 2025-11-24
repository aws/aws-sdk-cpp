/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/AutomationEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {

AutomationEvent::AutomationEvent(JsonView jsonValue) { *this = jsonValue; }

AutomationEvent& AutomationEvent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("eventId")) {
    m_eventId = jsonValue.GetString("eventId");
    m_eventIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("eventDescription")) {
    m_eventDescription = jsonValue.GetString("eventDescription");
    m_eventDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("eventType")) {
    m_eventType = EventTypeMapper::GetEventTypeForName(jsonValue.GetString("eventType"));
    m_eventTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("eventStatus")) {
    m_eventStatus = EventStatusMapper::GetEventStatusForName(jsonValue.GetString("eventStatus"));
    m_eventStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("eventStatusReason")) {
    m_eventStatusReason = jsonValue.GetString("eventStatusReason");
    m_eventStatusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceArn")) {
    m_resourceArn = jsonValue.GetString("resourceArn");
    m_resourceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceId")) {
    m_resourceId = jsonValue.GetString("resourceId");
    m_resourceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recommendedActionId")) {
    m_recommendedActionId = jsonValue.GetString("recommendedActionId");
    m_recommendedActionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountId")) {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("region")) {
    m_region = jsonValue.GetString("region");
    m_regionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ruleId")) {
    m_ruleId = jsonValue.GetString("ruleId");
    m_ruleIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceType")) {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("resourceType"));
    m_resourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdTimestamp")) {
    m_createdTimestamp = jsonValue.GetDouble("createdTimestamp");
    m_createdTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("completedTimestamp")) {
    m_completedTimestamp = jsonValue.GetDouble("completedTimestamp");
    m_completedTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("estimatedMonthlySavings")) {
    m_estimatedMonthlySavings = jsonValue.GetObject("estimatedMonthlySavings");
    m_estimatedMonthlySavingsHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomationEvent::Jsonize() const {
  JsonValue payload;

  if (m_eventIdHasBeenSet) {
    payload.WithString("eventId", m_eventId);
  }

  if (m_eventDescriptionHasBeenSet) {
    payload.WithString("eventDescription", m_eventDescription);
  }

  if (m_eventTypeHasBeenSet) {
    payload.WithString("eventType", EventTypeMapper::GetNameForEventType(m_eventType));
  }

  if (m_eventStatusHasBeenSet) {
    payload.WithString("eventStatus", EventStatusMapper::GetNameForEventStatus(m_eventStatus));
  }

  if (m_eventStatusReasonHasBeenSet) {
    payload.WithString("eventStatusReason", m_eventStatusReason);
  }

  if (m_resourceArnHasBeenSet) {
    payload.WithString("resourceArn", m_resourceArn);
  }

  if (m_resourceIdHasBeenSet) {
    payload.WithString("resourceId", m_resourceId);
  }

  if (m_recommendedActionIdHasBeenSet) {
    payload.WithString("recommendedActionId", m_recommendedActionId);
  }

  if (m_accountIdHasBeenSet) {
    payload.WithString("accountId", m_accountId);
  }

  if (m_regionHasBeenSet) {
    payload.WithString("region", m_region);
  }

  if (m_ruleIdHasBeenSet) {
    payload.WithString("ruleId", m_ruleId);
  }

  if (m_resourceTypeHasBeenSet) {
    payload.WithString("resourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if (m_createdTimestampHasBeenSet) {
    payload.WithDouble("createdTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  if (m_completedTimestampHasBeenSet) {
    payload.WithDouble("completedTimestamp", m_completedTimestamp.SecondsWithMSPrecision());
  }

  if (m_estimatedMonthlySavingsHasBeenSet) {
    payload.WithObject("estimatedMonthlySavings", m_estimatedMonthlySavings.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
