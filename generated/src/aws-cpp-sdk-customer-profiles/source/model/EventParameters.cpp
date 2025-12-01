/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/model/EventParameters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {

EventParameters::EventParameters(JsonView jsonValue) { *this = jsonValue; }

EventParameters& EventParameters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("EventType")) {
    m_eventType = jsonValue.GetString("EventType");
    m_eventTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EventValueThreshold")) {
    m_eventValueThreshold = jsonValue.GetDouble("EventValueThreshold");
    m_eventValueThresholdHasBeenSet = true;
  }
  return *this;
}

JsonValue EventParameters::Jsonize() const {
  JsonValue payload;

  if (m_eventTypeHasBeenSet) {
    payload.WithString("EventType", m_eventType);
  }

  if (m_eventValueThresholdHasBeenSet) {
    payload.WithDouble("EventValueThreshold", m_eventValueThreshold);
  }

  return payload;
}

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
