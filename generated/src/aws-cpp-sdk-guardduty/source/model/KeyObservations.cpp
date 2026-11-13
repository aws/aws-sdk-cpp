/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/KeyObservations.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

KeyObservations::KeyObservations(JsonView jsonValue) { *this = jsonValue; }

KeyObservations& KeyObservations::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("title")) {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("narrative")) {
    m_narrative = jsonValue.GetString("narrative");
    m_narrativeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("observations")) {
    Aws::Utils::Array<JsonView> observationsJsonList = jsonValue.GetArray("observations");
    for (unsigned observationsIndex = 0; observationsIndex < observationsJsonList.GetLength(); ++observationsIndex) {
      m_observations.push_back(observationsJsonList[observationsIndex].AsString());
    }
    m_observationsHasBeenSet = true;
  }
  return *this;
}

JsonValue KeyObservations::Jsonize() const {
  JsonValue payload;

  if (m_titleHasBeenSet) {
    payload.WithString("title", m_title);
  }

  if (m_narrativeHasBeenSet) {
    payload.WithString("narrative", m_narrative);
  }

  if (m_observationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> observationsJsonList(m_observations.size());
    for (unsigned observationsIndex = 0; observationsIndex < observationsJsonList.GetLength(); ++observationsIndex) {
      observationsJsonList[observationsIndex].AsString(m_observations[observationsIndex]);
    }
    payload.WithArray("observations", std::move(observationsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
