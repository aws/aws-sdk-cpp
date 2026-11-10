/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactLensRedactionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

ContactLensRedactionConfiguration::ContactLensRedactionConfiguration(JsonView jsonValue) { *this = jsonValue; }

ContactLensRedactionConfiguration& ContactLensRedactionConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Behavior")) {
    m_behavior = jsonValue.GetString("Behavior");
    m_behaviorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Policy")) {
    m_policy = jsonValue.GetString("Policy");
    m_policyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Entities")) {
    Aws::Utils::Array<JsonView> entitiesJsonList = jsonValue.GetArray("Entities");
    for (unsigned entitiesIndex = 0; entitiesIndex < entitiesJsonList.GetLength(); ++entitiesIndex) {
      m_entities.push_back(entitiesJsonList[entitiesIndex].AsString());
    }
    m_entitiesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MaskMode")) {
    m_maskMode = jsonValue.GetString("MaskMode");
    m_maskModeHasBeenSet = true;
  }
  return *this;
}

JsonValue ContactLensRedactionConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_behaviorHasBeenSet) {
    payload.WithString("Behavior", m_behavior);
  }

  if (m_policyHasBeenSet) {
    payload.WithString("Policy", m_policy);
  }

  if (m_entitiesHasBeenSet) {
    Aws::Utils::Array<JsonValue> entitiesJsonList(m_entities.size());
    for (unsigned entitiesIndex = 0; entitiesIndex < entitiesJsonList.GetLength(); ++entitiesIndex) {
      entitiesJsonList[entitiesIndex].AsString(m_entities[entitiesIndex]);
    }
    payload.WithArray("Entities", std::move(entitiesJsonList));
  }

  if (m_maskModeHasBeenSet) {
    payload.WithString("MaskMode", m_maskMode);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
