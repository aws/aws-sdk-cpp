/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/DynatraceOAuthClientCredentialsConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

DynatraceOAuthClientCredentialsConfig::DynatraceOAuthClientCredentialsConfig(JsonView jsonValue) { *this = jsonValue; }

DynatraceOAuthClientCredentialsConfig& DynatraceOAuthClientCredentialsConfig::operator=(JsonView jsonValue) {
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
  return *this;
}

JsonValue DynatraceOAuthClientCredentialsConfig::Jsonize() const {
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

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
