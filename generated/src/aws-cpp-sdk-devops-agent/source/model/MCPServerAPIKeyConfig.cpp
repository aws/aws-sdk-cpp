/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/MCPServerAPIKeyConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

MCPServerAPIKeyConfig::MCPServerAPIKeyConfig(JsonView jsonValue) { *this = jsonValue; }

MCPServerAPIKeyConfig& MCPServerAPIKeyConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("apiKeyName")) {
    m_apiKeyName = jsonValue.GetString("apiKeyName");
    m_apiKeyNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("apiKeyValue")) {
    m_apiKeyValue = jsonValue.GetString("apiKeyValue");
    m_apiKeyValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("apiKeyHeader")) {
    m_apiKeyHeader = jsonValue.GetString("apiKeyHeader");
    m_apiKeyHeaderHasBeenSet = true;
  }
  return *this;
}

JsonValue MCPServerAPIKeyConfig::Jsonize() const {
  JsonValue payload;

  if (m_apiKeyNameHasBeenSet) {
    payload.WithString("apiKeyName", m_apiKeyName);
  }

  if (m_apiKeyValueHasBeenSet) {
    payload.WithString("apiKeyValue", m_apiKeyValue);
  }

  if (m_apiKeyHeaderHasBeenSet) {
    payload.WithString("apiKeyHeader", m_apiKeyHeader);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
