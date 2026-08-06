/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/BatchPutLimitEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

BatchPutLimitEntry::BatchPutLimitEntry(JsonView jsonValue) { *this = jsonValue; }

BatchPutLimitEntry& BatchPutLimitEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("rateLimitId")) {
    m_rateLimitId = jsonValue.GetString("rateLimitId");
    m_rateLimitIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dimensionKeys")) {
    Aws::Utils::Array<JsonView> dimensionKeysJsonList = jsonValue.GetArray("dimensionKeys");
    for (unsigned dimensionKeysIndex = 0; dimensionKeysIndex < dimensionKeysJsonList.GetLength(); ++dimensionKeysIndex) {
      m_dimensionKeys.push_back(dimensionKeysJsonList[dimensionKeysIndex].AsString());
    }
    m_dimensionKeysHasBeenSet = true;
  }
  if (jsonValue.ValueExists("entries")) {
    Aws::Utils::Array<JsonView> entriesJsonList = jsonValue.GetArray("entries");
    for (unsigned entriesIndex = 0; entriesIndex < entriesJsonList.GetLength(); ++entriesIndex) {
      m_entries.push_back(entriesJsonList[entriesIndex].AsObject());
    }
    m_entriesHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchPutLimitEntry::Jsonize() const {
  JsonValue payload;

  if (m_rateLimitIdHasBeenSet) {
    payload.WithString("rateLimitId", m_rateLimitId);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_dimensionKeysHasBeenSet) {
    Aws::Utils::Array<JsonValue> dimensionKeysJsonList(m_dimensionKeys.size());
    for (unsigned dimensionKeysIndex = 0; dimensionKeysIndex < dimensionKeysJsonList.GetLength(); ++dimensionKeysIndex) {
      dimensionKeysJsonList[dimensionKeysIndex].AsString(m_dimensionKeys[dimensionKeysIndex]);
    }
    payload.WithArray("dimensionKeys", std::move(dimensionKeysJsonList));
  }

  if (m_entriesHasBeenSet) {
    Aws::Utils::Array<JsonValue> entriesJsonList(m_entries.size());
    for (unsigned entriesIndex = 0; entriesIndex < entriesJsonList.GetLength(); ++entriesIndex) {
      entriesJsonList[entriesIndex].AsObject(m_entries[entriesIndex].Jsonize());
    }
    payload.WithArray("entries", std::move(entriesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
