/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/NewRelicApiKeyConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

NewRelicApiKeyConfig::NewRelicApiKeyConfig(JsonView jsonValue) { *this = jsonValue; }

NewRelicApiKeyConfig& NewRelicApiKeyConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("apiKey")) {
    m_apiKey = jsonValue.GetString("apiKey");
    m_apiKeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountId")) {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("region")) {
    m_region = NewRelicRegionMapper::GetNewRelicRegionForName(jsonValue.GetString("region"));
    m_regionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("applicationIds")) {
    Aws::Utils::Array<JsonView> applicationIdsJsonList = jsonValue.GetArray("applicationIds");
    for (unsigned applicationIdsIndex = 0; applicationIdsIndex < applicationIdsJsonList.GetLength(); ++applicationIdsIndex) {
      m_applicationIds.push_back(applicationIdsJsonList[applicationIdsIndex].AsString());
    }
    m_applicationIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("entityGuids")) {
    Aws::Utils::Array<JsonView> entityGuidsJsonList = jsonValue.GetArray("entityGuids");
    for (unsigned entityGuidsIndex = 0; entityGuidsIndex < entityGuidsJsonList.GetLength(); ++entityGuidsIndex) {
      m_entityGuids.push_back(entityGuidsJsonList[entityGuidsIndex].AsString());
    }
    m_entityGuidsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("alertPolicyIds")) {
    Aws::Utils::Array<JsonView> alertPolicyIdsJsonList = jsonValue.GetArray("alertPolicyIds");
    for (unsigned alertPolicyIdsIndex = 0; alertPolicyIdsIndex < alertPolicyIdsJsonList.GetLength(); ++alertPolicyIdsIndex) {
      m_alertPolicyIds.push_back(alertPolicyIdsJsonList[alertPolicyIdsIndex].AsString());
    }
    m_alertPolicyIdsHasBeenSet = true;
  }
  return *this;
}

JsonValue NewRelicApiKeyConfig::Jsonize() const {
  JsonValue payload;

  if (m_apiKeyHasBeenSet) {
    payload.WithString("apiKey", m_apiKey);
  }

  if (m_accountIdHasBeenSet) {
    payload.WithString("accountId", m_accountId);
  }

  if (m_regionHasBeenSet) {
    payload.WithString("region", NewRelicRegionMapper::GetNameForNewRelicRegion(m_region));
  }

  if (m_applicationIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> applicationIdsJsonList(m_applicationIds.size());
    for (unsigned applicationIdsIndex = 0; applicationIdsIndex < applicationIdsJsonList.GetLength(); ++applicationIdsIndex) {
      applicationIdsJsonList[applicationIdsIndex].AsString(m_applicationIds[applicationIdsIndex]);
    }
    payload.WithArray("applicationIds", std::move(applicationIdsJsonList));
  }

  if (m_entityGuidsHasBeenSet) {
    Aws::Utils::Array<JsonValue> entityGuidsJsonList(m_entityGuids.size());
    for (unsigned entityGuidsIndex = 0; entityGuidsIndex < entityGuidsJsonList.GetLength(); ++entityGuidsIndex) {
      entityGuidsJsonList[entityGuidsIndex].AsString(m_entityGuids[entityGuidsIndex]);
    }
    payload.WithArray("entityGuids", std::move(entityGuidsJsonList));
  }

  if (m_alertPolicyIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> alertPolicyIdsJsonList(m_alertPolicyIds.size());
    for (unsigned alertPolicyIdsIndex = 0; alertPolicyIdsIndex < alertPolicyIdsJsonList.GetLength(); ++alertPolicyIdsIndex) {
      alertPolicyIdsJsonList[alertPolicyIdsIndex].AsString(m_alertPolicyIds[alertPolicyIdsIndex]);
    }
    payload.WithArray("alertPolicyIds", std::move(alertPolicyIdsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
