/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/MCPServerCustomHeadersConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

MCPServerCustomHeadersConfig::MCPServerCustomHeadersConfig(JsonView jsonValue) { *this = jsonValue; }

MCPServerCustomHeadersConfig& MCPServerCustomHeadersConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("headers")) {
    Aws::Map<Aws::String, JsonView> headersJsonMap = jsonValue.GetObject("headers").GetAllObjects();
    for (auto& headersItem : headersJsonMap) {
      m_headers[headersItem.first] = headersItem.second.AsString();
    }
    m_headersHasBeenSet = true;
  }
  return *this;
}

JsonValue MCPServerCustomHeadersConfig::Jsonize() const {
  JsonValue payload;

  if (m_headersHasBeenSet) {
    JsonValue headersJsonMap;
    for (auto& headersItem : m_headers) {
      headersJsonMap.WithString(headersItem.first, headersItem.second);
    }
    payload.WithObject("headers", std::move(headersJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
