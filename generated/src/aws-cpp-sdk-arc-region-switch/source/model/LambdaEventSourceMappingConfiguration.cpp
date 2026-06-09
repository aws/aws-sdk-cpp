/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/LambdaEventSourceMappingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ARCRegionswitch {
namespace Model {

LambdaEventSourceMappingConfiguration::LambdaEventSourceMappingConfiguration(JsonView jsonValue) { *this = jsonValue; }

LambdaEventSourceMappingConfiguration& LambdaEventSourceMappingConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("timeoutMinutes")) {
    m_timeoutMinutes = jsonValue.GetInteger("timeoutMinutes");
    m_timeoutMinutesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("action")) {
    m_action = EventSourceMappingActionMapper::GetEventSourceMappingActionForName(jsonValue.GetString("action"));
    m_actionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("regionEventSourceMappings")) {
    Aws::Map<Aws::String, JsonView> regionEventSourceMappingsJsonMap = jsonValue.GetObject("regionEventSourceMappings").GetAllObjects();
    for (auto& regionEventSourceMappingsItem : regionEventSourceMappingsJsonMap) {
      m_regionEventSourceMappings[regionEventSourceMappingsItem.first] = regionEventSourceMappingsItem.second.AsObject();
    }
    m_regionEventSourceMappingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ungraceful")) {
    m_ungraceful = jsonValue.GetObject("ungraceful");
    m_ungracefulHasBeenSet = true;
  }
  return *this;
}

JsonValue LambdaEventSourceMappingConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_timeoutMinutesHasBeenSet) {
    payload.WithInteger("timeoutMinutes", m_timeoutMinutes);
  }

  if (m_actionHasBeenSet) {
    payload.WithString("action", EventSourceMappingActionMapper::GetNameForEventSourceMappingAction(m_action));
  }

  if (m_regionEventSourceMappingsHasBeenSet) {
    JsonValue regionEventSourceMappingsJsonMap;
    for (auto& regionEventSourceMappingsItem : m_regionEventSourceMappings) {
      regionEventSourceMappingsJsonMap.WithObject(regionEventSourceMappingsItem.first, regionEventSourceMappingsItem.second.Jsonize());
    }
    payload.WithObject("regionEventSourceMappings", std::move(regionEventSourceMappingsJsonMap));
  }

  if (m_ungracefulHasBeenSet) {
    payload.WithObject("ungraceful", m_ungraceful.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
