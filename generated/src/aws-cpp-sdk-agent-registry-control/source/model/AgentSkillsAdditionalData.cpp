/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/AgentSkillsAdditionalData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {

AgentSkillsAdditionalData::AgentSkillsAdditionalData(JsonView jsonValue) { *this = jsonValue; }

AgentSkillsAdditionalData& AgentSkillsAdditionalData::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("skillMd")) {
    m_skillMd = jsonValue.GetObject("skillMd");
    m_skillMdHasBeenSet = true;
  }
  return *this;
}

JsonValue AgentSkillsAdditionalData::Jsonize() const {
  JsonValue payload;

  if (m_skillMdHasBeenSet) {
    payload.WithObject("skillMd", m_skillMd.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
