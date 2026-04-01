/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/MCPServerOAuthClientCredentialsConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

MCPServerOAuthClientCredentialsConfig::MCPServerOAuthClientCredentialsConfig(JsonView jsonValue) { *this = jsonValue; }

MCPServerOAuthClientCredentialsConfig& MCPServerOAuthClientCredentialsConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("clientName")) {
    m_clientName = jsonValue.GetString("clientName");
    m_clientNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clientId")) {
    m_clientId = jsonValue.GetString("clientId");
    m_clientIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("exchangeParameters")) {
    Aws::Map<Aws::String, JsonView> exchangeParametersJsonMap = jsonValue.GetObject("exchangeParameters").GetAllObjects();
    for (auto& exchangeParametersItem : exchangeParametersJsonMap) {
      m_exchangeParameters[exchangeParametersItem.first] = exchangeParametersItem.second.AsString();
    }
    m_exchangeParametersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clientSecret")) {
    m_clientSecret = jsonValue.GetString("clientSecret");
    m_clientSecretHasBeenSet = true;
  }
  if (jsonValue.ValueExists("exchangeUrl")) {
    m_exchangeUrl = jsonValue.GetString("exchangeUrl");
    m_exchangeUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scopes")) {
    Aws::Utils::Array<JsonView> scopesJsonList = jsonValue.GetArray("scopes");
    for (unsigned scopesIndex = 0; scopesIndex < scopesJsonList.GetLength(); ++scopesIndex) {
      m_scopes.push_back(scopesJsonList[scopesIndex].AsString());
    }
    m_scopesHasBeenSet = true;
  }
  return *this;
}

JsonValue MCPServerOAuthClientCredentialsConfig::Jsonize() const {
  JsonValue payload;

  if (m_clientNameHasBeenSet) {
    payload.WithString("clientName", m_clientName);
  }

  if (m_clientIdHasBeenSet) {
    payload.WithString("clientId", m_clientId);
  }

  if (m_exchangeParametersHasBeenSet) {
    JsonValue exchangeParametersJsonMap;
    for (auto& exchangeParametersItem : m_exchangeParameters) {
      exchangeParametersJsonMap.WithString(exchangeParametersItem.first, exchangeParametersItem.second);
    }
    payload.WithObject("exchangeParameters", std::move(exchangeParametersJsonMap));
  }

  if (m_clientSecretHasBeenSet) {
    payload.WithString("clientSecret", m_clientSecret);
  }

  if (m_exchangeUrlHasBeenSet) {
    payload.WithString("exchangeUrl", m_exchangeUrl);
  }

  if (m_scopesHasBeenSet) {
    Aws::Utils::Array<JsonValue> scopesJsonList(m_scopes.size());
    for (unsigned scopesIndex = 0; scopesIndex < scopesJsonList.GetLength(); ++scopesIndex) {
      scopesJsonList[scopesIndex].AsString(m_scopes[scopesIndex]);
    }
    payload.WithArray("scopes", std::move(scopesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
