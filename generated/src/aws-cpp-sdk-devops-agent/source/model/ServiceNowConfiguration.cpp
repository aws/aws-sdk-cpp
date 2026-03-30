/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/ServiceNowConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

ServiceNowConfiguration::ServiceNowConfiguration(JsonView jsonValue) { *this = jsonValue; }

ServiceNowConfiguration& ServiceNowConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("instanceId")) {
    m_instanceId = jsonValue.GetString("instanceId");
    m_instanceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("authScopes")) {
    Aws::Utils::Array<JsonView> authScopesJsonList = jsonValue.GetArray("authScopes");
    for (unsigned authScopesIndex = 0; authScopesIndex < authScopesJsonList.GetLength(); ++authScopesIndex) {
      m_authScopes.push_back(authScopesJsonList[authScopesIndex].AsString());
    }
    m_authScopesHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceNowConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_instanceIdHasBeenSet) {
    payload.WithString("instanceId", m_instanceId);
  }

  if (m_authScopesHasBeenSet) {
    Aws::Utils::Array<JsonValue> authScopesJsonList(m_authScopes.size());
    for (unsigned authScopesIndex = 0; authScopesIndex < authScopesJsonList.GetLength(); ++authScopesIndex) {
      authScopesJsonList[authScopesIndex].AsString(m_authScopes[authScopesIndex]);
    }
    payload.WithArray("authScopes", std::move(authScopesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
