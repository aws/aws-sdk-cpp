/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/GatewayRateLimitDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

GatewayRateLimitDetail::GatewayRateLimitDetail(JsonView jsonValue) { *this = jsonValue; }

GatewayRateLimitDetail& GatewayRateLimitDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("rateLimitId")) {
    m_rateLimitId = jsonValue.GetString("rateLimitId");
    m_rateLimitIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("gatewayIdentifier")) {
    m_gatewayIdentifier = jsonValue.GetString("gatewayIdentifier");
    m_gatewayIdentifierHasBeenSet = true;
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
  if (jsonValue.ValueExists("status")) {
    m_status = GatewayRateLimitStatusMapper::GetGatewayRateLimitStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue GatewayRateLimitDetail::Jsonize() const {
  JsonValue payload;

  if (m_rateLimitIdHasBeenSet) {
    payload.WithString("rateLimitId", m_rateLimitId);
  }

  if (m_gatewayIdentifierHasBeenSet) {
    payload.WithString("gatewayIdentifier", m_gatewayIdentifier);
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

  if (m_statusHasBeenSet) {
    payload.WithString("status", GatewayRateLimitStatusMapper::GetNameForGatewayRateLimitStatus(m_status));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
