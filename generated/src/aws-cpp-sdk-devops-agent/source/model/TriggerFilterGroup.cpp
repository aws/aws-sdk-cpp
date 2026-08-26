/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/TriggerFilterGroup.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

TriggerFilterGroup::TriggerFilterGroup(JsonView jsonValue) { *this = jsonValue; }

TriggerFilterGroup& TriggerFilterGroup::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("events")) {
    Aws::Utils::Array<JsonView> eventsJsonList = jsonValue.GetArray("events");
    for (unsigned eventsIndex = 0; eventsIndex < eventsJsonList.GetLength(); ++eventsIndex) {
      m_events.push_back(TriggerEventMapper::GetTriggerEventForName(eventsJsonList[eventsIndex].AsString()));
    }
    m_eventsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetBranches")) {
    m_targetBranches = jsonValue.GetObject("targetBranches");
    m_targetBranchesHasBeenSet = true;
  }
  return *this;
}

JsonValue TriggerFilterGroup::Jsonize() const {
  JsonValue payload;

  if (m_eventsHasBeenSet) {
    Aws::Utils::Array<JsonValue> eventsJsonList(m_events.size());
    for (unsigned eventsIndex = 0; eventsIndex < eventsJsonList.GetLength(); ++eventsIndex) {
      eventsJsonList[eventsIndex].AsString(TriggerEventMapper::GetNameForTriggerEvent(m_events[eventsIndex]));
    }
    payload.WithArray("events", std::move(eventsJsonList));
  }

  if (m_targetBranchesHasBeenSet) {
    payload.WithObject("targetBranches", m_targetBranches.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
