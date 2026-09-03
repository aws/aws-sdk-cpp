/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ConsentPortalIdpConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

ConsentPortalIdpConfig::ConsentPortalIdpConfig(JsonView jsonValue) { *this = jsonValue; }

ConsentPortalIdpConfig& ConsentPortalIdpConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("credentialProviderArn")) {
    m_credentialProviderArn = jsonValue.GetString("credentialProviderArn");
    m_credentialProviderArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scopes")) {
    Aws::Utils::Array<JsonView> scopesJsonList = jsonValue.GetArray("scopes");
    for (unsigned scopesIndex = 0; scopesIndex < scopesJsonList.GetLength(); ++scopesIndex) {
      m_scopes.push_back(scopesJsonList[scopesIndex].AsString());
    }
    m_scopesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("audience")) {
    m_audience = jsonValue.GetString("audience");
    m_audienceHasBeenSet = true;
  }
  return *this;
}

JsonValue ConsentPortalIdpConfig::Jsonize() const {
  JsonValue payload;

  if (m_credentialProviderArnHasBeenSet) {
    payload.WithString("credentialProviderArn", m_credentialProviderArn);
  }

  if (m_scopesHasBeenSet) {
    Aws::Utils::Array<JsonValue> scopesJsonList(m_scopes.size());
    for (unsigned scopesIndex = 0; scopesIndex < scopesJsonList.GetLength(); ++scopesIndex) {
      scopesJsonList[scopesIndex].AsString(m_scopes[scopesIndex]);
    }
    payload.WithArray("scopes", std::move(scopesJsonList));
  }

  if (m_audienceHasBeenSet) {
    payload.WithString("audience", m_audience);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
