/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ProxyBypass.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

ProxyBypass::ProxyBypass(JsonView jsonValue) { *this = jsonValue; }

ProxyBypass& ProxyBypass::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("domainPatterns")) {
    Aws::Utils::Array<JsonView> domainPatternsJsonList = jsonValue.GetArray("domainPatterns");
    for (unsigned domainPatternsIndex = 0; domainPatternsIndex < domainPatternsJsonList.GetLength(); ++domainPatternsIndex) {
      m_domainPatterns.push_back(domainPatternsJsonList[domainPatternsIndex].AsString());
    }
    m_domainPatternsHasBeenSet = true;
  }
  return *this;
}

JsonValue ProxyBypass::Jsonize() const {
  JsonValue payload;

  if (m_domainPatternsHasBeenSet) {
    Aws::Utils::Array<JsonValue> domainPatternsJsonList(m_domainPatterns.size());
    for (unsigned domainPatternsIndex = 0; domainPatternsIndex < domainPatternsJsonList.GetLength(); ++domainPatternsIndex) {
      domainPatternsJsonList[domainPatternsIndex].AsString(m_domainPatterns[domainPatternsIndex]);
    }
    payload.WithArray("domainPatterns", std::move(domainPatternsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
