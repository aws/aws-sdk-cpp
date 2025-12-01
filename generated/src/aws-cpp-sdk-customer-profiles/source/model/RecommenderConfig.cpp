/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/model/RecommenderConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {

RecommenderConfig::RecommenderConfig(JsonView jsonValue) { *this = jsonValue; }

RecommenderConfig& RecommenderConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("EventsConfig")) {
    m_eventsConfig = jsonValue.GetObject("EventsConfig");
    m_eventsConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TrainingFrequency")) {
    m_trainingFrequency = jsonValue.GetInteger("TrainingFrequency");
    m_trainingFrequencyHasBeenSet = true;
  }
  return *this;
}

JsonValue RecommenderConfig::Jsonize() const {
  JsonValue payload;

  if (m_eventsConfigHasBeenSet) {
    payload.WithObject("EventsConfig", m_eventsConfig.Jsonize());
  }

  if (m_trainingFrequencyHasBeenSet) {
    payload.WithInteger("TrainingFrequency", m_trainingFrequency);
  }

  return payload;
}

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
