/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/model/EventsConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {

EventsConfig::EventsConfig(JsonView jsonValue) { *this = jsonValue; }

EventsConfig& EventsConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("EventParametersList")) {
    Aws::Utils::Array<JsonView> eventParametersListJsonList = jsonValue.GetArray("EventParametersList");
    for (unsigned eventParametersListIndex = 0; eventParametersListIndex < eventParametersListJsonList.GetLength();
         ++eventParametersListIndex) {
      m_eventParametersList.push_back(eventParametersListJsonList[eventParametersListIndex].AsObject());
    }
    m_eventParametersListHasBeenSet = true;
  }
  return *this;
}

JsonValue EventsConfig::Jsonize() const {
  JsonValue payload;

  if (m_eventParametersListHasBeenSet) {
    Aws::Utils::Array<JsonValue> eventParametersListJsonList(m_eventParametersList.size());
    for (unsigned eventParametersListIndex = 0; eventParametersListIndex < eventParametersListJsonList.GetLength();
         ++eventParametersListIndex) {
      eventParametersListJsonList[eventParametersListIndex].AsObject(m_eventParametersList[eventParametersListIndex].Jsonize());
    }
    payload.WithArray("EventParametersList", std::move(eventParametersListJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
