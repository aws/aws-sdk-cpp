/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/HarnessAgentCoreMemoryConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

HarnessAgentCoreMemoryConfiguration::HarnessAgentCoreMemoryConfiguration(JsonView jsonValue) { *this = jsonValue; }

HarnessAgentCoreMemoryConfiguration& HarnessAgentCoreMemoryConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("actorId")) {
    m_actorId = jsonValue.GetString("actorId");
    m_actorIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("messagesCount")) {
    m_messagesCount = jsonValue.GetInteger("messagesCount");
    m_messagesCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("retrievalConfig")) {
    Aws::Map<Aws::String, JsonView> retrievalConfigJsonMap = jsonValue.GetObject("retrievalConfig").GetAllObjects();
    for (auto& retrievalConfigItem : retrievalConfigJsonMap) {
      m_retrievalConfig[retrievalConfigItem.first] = retrievalConfigItem.second.AsObject();
    }
    m_retrievalConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue HarnessAgentCoreMemoryConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_actorIdHasBeenSet) {
    payload.WithString("actorId", m_actorId);
  }

  if (m_messagesCountHasBeenSet) {
    payload.WithInteger("messagesCount", m_messagesCount);
  }

  if (m_retrievalConfigHasBeenSet) {
    JsonValue retrievalConfigJsonMap;
    for (auto& retrievalConfigItem : m_retrievalConfig) {
      retrievalConfigJsonMap.WithObject(retrievalConfigItem.first, retrievalConfigItem.second.Jsonize());
    }
    payload.WithObject("retrievalConfig", std::move(retrievalConfigJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
