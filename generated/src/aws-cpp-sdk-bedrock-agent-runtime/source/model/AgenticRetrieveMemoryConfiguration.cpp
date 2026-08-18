/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/AgenticRetrieveMemoryConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {

AgenticRetrieveMemoryConfiguration::AgenticRetrieveMemoryConfiguration(JsonView jsonValue) { *this = jsonValue; }

AgenticRetrieveMemoryConfiguration& AgenticRetrieveMemoryConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("memoryId")) {
    m_memoryId = jsonValue.GetString("memoryId");
    m_memoryIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("persistenceMode")) {
    m_persistenceMode =
        AgenticRetrieveMemoryPersistenceModeMapper::GetAgenticRetrieveMemoryPersistenceModeForName(jsonValue.GetString("persistenceMode"));
    m_persistenceModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("retrievalConfigs")) {
    Aws::Utils::Array<JsonView> retrievalConfigsJsonList = jsonValue.GetArray("retrievalConfigs");
    for (unsigned retrievalConfigsIndex = 0; retrievalConfigsIndex < retrievalConfigsJsonList.GetLength(); ++retrievalConfigsIndex) {
      m_retrievalConfigs.push_back(retrievalConfigsJsonList[retrievalConfigsIndex].AsObject());
    }
    m_retrievalConfigsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sessionBinding")) {
    m_sessionBinding = jsonValue.GetObject("sessionBinding");
    m_sessionBindingHasBeenSet = true;
  }
  return *this;
}

JsonValue AgenticRetrieveMemoryConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_memoryIdHasBeenSet) {
    payload.WithString("memoryId", m_memoryId);
  }

  if (m_persistenceModeHasBeenSet) {
    payload.WithString("persistenceMode",
                       AgenticRetrieveMemoryPersistenceModeMapper::GetNameForAgenticRetrieveMemoryPersistenceMode(m_persistenceMode));
  }

  if (m_retrievalConfigsHasBeenSet) {
    Aws::Utils::Array<JsonValue> retrievalConfigsJsonList(m_retrievalConfigs.size());
    for (unsigned retrievalConfigsIndex = 0; retrievalConfigsIndex < retrievalConfigsJsonList.GetLength(); ++retrievalConfigsIndex) {
      retrievalConfigsJsonList[retrievalConfigsIndex].AsObject(m_retrievalConfigs[retrievalConfigsIndex].Jsonize());
    }
    payload.WithArray("retrievalConfigs", std::move(retrievalConfigsJsonList));
  }

  if (m_sessionBindingHasBeenSet) {
    payload.WithObject("sessionBinding", m_sessionBinding.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
