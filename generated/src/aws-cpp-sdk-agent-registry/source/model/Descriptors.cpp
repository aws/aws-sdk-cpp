/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry/model/Descriptors.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistry {
namespace Model {

Descriptors::Descriptors(JsonView jsonValue) { *this = jsonValue; }

Descriptors& Descriptors::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("mcpServer")) {
    m_mcpServer = jsonValue.GetObject("mcpServer");
    m_mcpServerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("a2aAgentCard")) {
    m_a2aAgentCard = jsonValue.GetObject("a2aAgentCard");
    m_a2aAgentCardHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agentSkillsDefinition")) {
    m_agentSkillsDefinition = jsonValue.GetObject("agentSkillsDefinition");
    m_agentSkillsDefinitionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("custom")) {
    m_custom = jsonValue.GetObject("custom");
    m_customHasBeenSet = true;
  }
  if (jsonValue.ValueExists("http")) {
    m_http = jsonValue.GetObject("http");
    m_httpHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agui")) {
    m_agui = jsonValue.GetObject("agui");
    m_aguiHasBeenSet = true;
  }
  return *this;
}

JsonValue Descriptors::Jsonize() const {
  JsonValue payload;

  if (m_mcpServerHasBeenSet) {
    payload.WithObject("mcpServer", m_mcpServer.Jsonize());
  }

  if (m_a2aAgentCardHasBeenSet) {
    payload.WithObject("a2aAgentCard", m_a2aAgentCard.Jsonize());
  }

  if (m_agentSkillsDefinitionHasBeenSet) {
    payload.WithObject("agentSkillsDefinition", m_agentSkillsDefinition.Jsonize());
  }

  if (m_customHasBeenSet) {
    payload.WithObject("custom", m_custom.Jsonize());
  }

  if (m_httpHasBeenSet) {
    payload.WithObject("http", m_http.Jsonize());
  }

  if (m_aguiHasBeenSet) {
    payload.WithObject("agui", m_agui.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentRegistry
}  // namespace Aws
