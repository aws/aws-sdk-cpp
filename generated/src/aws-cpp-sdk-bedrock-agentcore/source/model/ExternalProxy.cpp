/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ExternalProxy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

ExternalProxy::ExternalProxy(JsonView jsonValue) { *this = jsonValue; }

ExternalProxy& ExternalProxy::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("server")) {
    m_server = jsonValue.GetString("server");
    m_serverHasBeenSet = true;
  }
  if (jsonValue.ValueExists("port")) {
    m_port = jsonValue.GetInteger("port");
    m_portHasBeenSet = true;
  }
  if (jsonValue.ValueExists("domainPatterns")) {
    Aws::Utils::Array<JsonView> domainPatternsJsonList = jsonValue.GetArray("domainPatterns");
    for (unsigned domainPatternsIndex = 0; domainPatternsIndex < domainPatternsJsonList.GetLength(); ++domainPatternsIndex) {
      m_domainPatterns.push_back(domainPatternsJsonList[domainPatternsIndex].AsString());
    }
    m_domainPatternsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("credentials")) {
    m_credentials = jsonValue.GetObject("credentials");
    m_credentialsHasBeenSet = true;
  }
  return *this;
}

JsonValue ExternalProxy::Jsonize() const {
  JsonValue payload;

  if (m_serverHasBeenSet) {
    payload.WithString("server", m_server);
  }

  if (m_portHasBeenSet) {
    payload.WithInteger("port", m_port);
  }

  if (m_domainPatternsHasBeenSet) {
    Aws::Utils::Array<JsonValue> domainPatternsJsonList(m_domainPatterns.size());
    for (unsigned domainPatternsIndex = 0; domainPatternsIndex < domainPatternsJsonList.GetLength(); ++domainPatternsIndex) {
      domainPatternsJsonList[domainPatternsIndex].AsString(m_domainPatterns[domainPatternsIndex]);
    }
    payload.WithArray("domainPatterns", std::move(domainPatternsJsonList));
  }

  if (m_credentialsHasBeenSet) {
    payload.WithObject("credentials", m_credentials.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
