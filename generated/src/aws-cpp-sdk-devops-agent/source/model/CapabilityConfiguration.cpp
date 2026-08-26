/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/CapabilityConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

CapabilityConfiguration::CapabilityConfiguration(JsonView jsonValue) { *this = jsonValue; }

CapabilityConfiguration& CapabilityConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("enabled")) {
    m_enabled = jsonValue.GetBool("enabled");
    m_enabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("triggerFilterGroups")) {
    Aws::Utils::Array<JsonView> triggerFilterGroupsJsonList = jsonValue.GetArray("triggerFilterGroups");
    for (unsigned triggerFilterGroupsIndex = 0; triggerFilterGroupsIndex < triggerFilterGroupsJsonList.GetLength();
         ++triggerFilterGroupsIndex) {
      m_triggerFilterGroups.push_back(triggerFilterGroupsJsonList[triggerFilterGroupsIndex].AsObject());
    }
    m_triggerFilterGroupsHasBeenSet = true;
  }
  return *this;
}

JsonValue CapabilityConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_enabledHasBeenSet) {
    payload.WithBool("enabled", m_enabled);
  }

  if (m_triggerFilterGroupsHasBeenSet) {
    Aws::Utils::Array<JsonValue> triggerFilterGroupsJsonList(m_triggerFilterGroups.size());
    for (unsigned triggerFilterGroupsIndex = 0; triggerFilterGroupsIndex < triggerFilterGroupsJsonList.GetLength();
         ++triggerFilterGroupsIndex) {
      triggerFilterGroupsJsonList[triggerFilterGroupsIndex].AsObject(m_triggerFilterGroups[triggerFilterGroupsIndex].Jsonize());
    }
    payload.WithArray("triggerFilterGroups", std::move(triggerFilterGroupsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
