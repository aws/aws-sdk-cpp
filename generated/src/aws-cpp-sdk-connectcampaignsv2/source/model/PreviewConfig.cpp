/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/PreviewConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectCampaignsV2 {
namespace Model {

PreviewConfig::PreviewConfig(JsonView jsonValue) { *this = jsonValue; }

PreviewConfig& PreviewConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("bandwidthAllocation")) {
    m_bandwidthAllocation = jsonValue.GetDouble("bandwidthAllocation");
    m_bandwidthAllocationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeoutConfig")) {
    m_timeoutConfig = jsonValue.GetObject("timeoutConfig");
    m_timeoutConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agentActions")) {
    Aws::Utils::Array<JsonView> agentActionsJsonList = jsonValue.GetArray("agentActions");
    for (unsigned agentActionsIndex = 0; agentActionsIndex < agentActionsJsonList.GetLength(); ++agentActionsIndex) {
      m_agentActions.push_back(AgentActionMapper::GetAgentActionForName(agentActionsJsonList[agentActionsIndex].AsString()));
    }
    m_agentActionsHasBeenSet = true;
  }
  return *this;
}

JsonValue PreviewConfig::Jsonize() const {
  JsonValue payload;

  if (m_bandwidthAllocationHasBeenSet) {
    payload.WithDouble("bandwidthAllocation", m_bandwidthAllocation);
  }

  if (m_timeoutConfigHasBeenSet) {
    payload.WithObject("timeoutConfig", m_timeoutConfig.Jsonize());
  }

  if (m_agentActionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> agentActionsJsonList(m_agentActions.size());
    for (unsigned agentActionsIndex = 0; agentActionsIndex < agentActionsJsonList.GetLength(); ++agentActionsIndex) {
      agentActionsJsonList[agentActionsIndex].AsString(AgentActionMapper::GetNameForAgentAction(m_agentActions[agentActionsIndex]));
    }
    payload.WithArray("agentActions", std::move(agentActionsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectCampaignsV2
}  // namespace Aws
