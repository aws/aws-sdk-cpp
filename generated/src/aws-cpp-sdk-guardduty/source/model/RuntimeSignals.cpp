/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/RuntimeSignals.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

RuntimeSignals::RuntimeSignals(JsonView jsonValue) { *this = jsonValue; }

RuntimeSignals& RuntimeSignals::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("signalGroups")) {
    Aws::Utils::Array<JsonView> signalGroupsJsonList = jsonValue.GetArray("signalGroups");
    for (unsigned signalGroupsIndex = 0; signalGroupsIndex < signalGroupsJsonList.GetLength(); ++signalGroupsIndex) {
      m_signalGroups.push_back(signalGroupsJsonList[signalGroupsIndex].AsObject());
    }
    m_signalGroupsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("keyObservation")) {
    m_keyObservation = jsonValue.GetString("keyObservation");
    m_keyObservationHasBeenSet = true;
  }
  return *this;
}

JsonValue RuntimeSignals::Jsonize() const {
  JsonValue payload;

  if (m_signalGroupsHasBeenSet) {
    Aws::Utils::Array<JsonValue> signalGroupsJsonList(m_signalGroups.size());
    for (unsigned signalGroupsIndex = 0; signalGroupsIndex < signalGroupsJsonList.GetLength(); ++signalGroupsIndex) {
      signalGroupsJsonList[signalGroupsIndex].AsObject(m_signalGroups[signalGroupsIndex].Jsonize());
    }
    payload.WithArray("signalGroups", std::move(signalGroupsJsonList));
  }

  if (m_keyObservationHasBeenSet) {
    payload.WithString("keyObservation", m_keyObservation);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
