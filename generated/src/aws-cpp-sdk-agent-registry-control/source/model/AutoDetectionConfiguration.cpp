/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/AutoDetectionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {

AutoDetectionConfiguration::AutoDetectionConfiguration(JsonView jsonValue) { *this = jsonValue; }

AutoDetectionConfiguration& AutoDetectionConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("scope")) {
    m_scope = AutoDetectionScopeMapper::GetAutoDetectionScopeForName(jsonValue.GetString("scope"));
    m_scopeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("enabled")) {
    m_enabled = jsonValue.GetBool("enabled");
    m_enabledHasBeenSet = true;
  }
  return *this;
}

JsonValue AutoDetectionConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_scopeHasBeenSet) {
    payload.WithString("scope", AutoDetectionScopeMapper::GetNameForAutoDetectionScope(m_scope));
  }

  if (m_enabledHasBeenSet) {
    payload.WithBool("enabled", m_enabled);
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
