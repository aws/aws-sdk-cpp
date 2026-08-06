/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/LimitEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

LimitEntry::LimitEntry(JsonView jsonValue) { *this = jsonValue; }

LimitEntry& LimitEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("dimensions")) {
    Aws::Map<Aws::String, JsonView> dimensionsJsonMap = jsonValue.GetObject("dimensions").GetAllObjects();
    for (auto& dimensionsItem : dimensionsJsonMap) {
      m_dimensions[dimensionsItem.first] = dimensionsItem.second.AsString();
    }
    m_dimensionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("requests")) {
    Aws::Utils::Array<JsonView> requestsJsonList = jsonValue.GetArray("requests");
    for (unsigned requestsIndex = 0; requestsIndex < requestsJsonList.GetLength(); ++requestsIndex) {
      m_requests.push_back(requestsJsonList[requestsIndex].AsObject());
    }
    m_requestsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tokens")) {
    Aws::Utils::Array<JsonView> tokensJsonList = jsonValue.GetArray("tokens");
    for (unsigned tokensIndex = 0; tokensIndex < tokensJsonList.GetLength(); ++tokensIndex) {
      m_tokens.push_back(tokensJsonList[tokensIndex].AsObject());
    }
    m_tokensHasBeenSet = true;
  }
  if (jsonValue.ValueExists("connections")) {
    Aws::Utils::Array<JsonView> connectionsJsonList = jsonValue.GetArray("connections");
    for (unsigned connectionsIndex = 0; connectionsIndex < connectionsJsonList.GetLength(); ++connectionsIndex) {
      m_connections.push_back(connectionsJsonList[connectionsIndex].AsObject());
    }
    m_connectionsHasBeenSet = true;
  }
  return *this;
}

JsonValue LimitEntry::Jsonize() const {
  JsonValue payload;

  if (m_dimensionsHasBeenSet) {
    JsonValue dimensionsJsonMap;
    for (auto& dimensionsItem : m_dimensions) {
      dimensionsJsonMap.WithString(dimensionsItem.first, dimensionsItem.second);
    }
    payload.WithObject("dimensions", std::move(dimensionsJsonMap));
  }

  if (m_requestsHasBeenSet) {
    Aws::Utils::Array<JsonValue> requestsJsonList(m_requests.size());
    for (unsigned requestsIndex = 0; requestsIndex < requestsJsonList.GetLength(); ++requestsIndex) {
      requestsJsonList[requestsIndex].AsObject(m_requests[requestsIndex].Jsonize());
    }
    payload.WithArray("requests", std::move(requestsJsonList));
  }

  if (m_tokensHasBeenSet) {
    Aws::Utils::Array<JsonValue> tokensJsonList(m_tokens.size());
    for (unsigned tokensIndex = 0; tokensIndex < tokensJsonList.GetLength(); ++tokensIndex) {
      tokensJsonList[tokensIndex].AsObject(m_tokens[tokensIndex].Jsonize());
    }
    payload.WithArray("tokens", std::move(tokensJsonList));
  }

  if (m_connectionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> connectionsJsonList(m_connections.size());
    for (unsigned connectionsIndex = 0; connectionsIndex < connectionsJsonList.GetLength(); ++connectionsIndex) {
      connectionsJsonList[connectionsIndex].AsObject(m_connections[connectionsIndex].Jsonize());
    }
    payload.WithArray("connections", std::move(connectionsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
