/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/MCPServerBearerTokenConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

MCPServerBearerTokenConfig::MCPServerBearerTokenConfig(JsonView jsonValue) { *this = jsonValue; }

MCPServerBearerTokenConfig& MCPServerBearerTokenConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("tokenName")) {
    m_tokenName = jsonValue.GetString("tokenName");
    m_tokenNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tokenValue")) {
    m_tokenValue = jsonValue.GetString("tokenValue");
    m_tokenValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("authorizationHeader")) {
    m_authorizationHeader = jsonValue.GetString("authorizationHeader");
    m_authorizationHeaderHasBeenSet = true;
  }
  return *this;
}

JsonValue MCPServerBearerTokenConfig::Jsonize() const {
  JsonValue payload;

  if (m_tokenNameHasBeenSet) {
    payload.WithString("tokenName", m_tokenName);
  }

  if (m_tokenValueHasBeenSet) {
    payload.WithString("tokenValue", m_tokenValue);
  }

  if (m_authorizationHeaderHasBeenSet) {
    payload.WithString("authorizationHeader", m_authorizationHeader);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
