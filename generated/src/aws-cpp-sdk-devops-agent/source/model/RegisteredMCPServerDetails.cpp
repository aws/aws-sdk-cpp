/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/RegisteredMCPServerDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

RegisteredMCPServerDetails::RegisteredMCPServerDetails(JsonView jsonValue) { *this = jsonValue; }

RegisteredMCPServerDetails& RegisteredMCPServerDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endpoint")) {
    m_endpoint = jsonValue.GetString("endpoint");
    m_endpointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("authorizationMethod")) {
    m_authorizationMethod =
        MCPServerAuthorizationMethodMapper::GetMCPServerAuthorizationMethodForName(jsonValue.GetString("authorizationMethod"));
    m_authorizationMethodHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("apiKeyHeader")) {
    m_apiKeyHeader = jsonValue.GetString("apiKeyHeader");
    m_apiKeyHeaderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("customHeaderNames")) {
    Aws::Utils::Array<JsonView> customHeaderNamesJsonList = jsonValue.GetArray("customHeaderNames");
    for (unsigned customHeaderNamesIndex = 0; customHeaderNamesIndex < customHeaderNamesJsonList.GetLength(); ++customHeaderNamesIndex) {
      m_customHeaderNames.push_back(customHeaderNamesJsonList[customHeaderNamesIndex].AsString());
    }
    m_customHeaderNamesHasBeenSet = true;
  }
  return *this;
}

JsonValue RegisteredMCPServerDetails::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_endpointHasBeenSet) {
    payload.WithString("endpoint", m_endpoint);
  }

  if (m_authorizationMethodHasBeenSet) {
    payload.WithString("authorizationMethod",
                       MCPServerAuthorizationMethodMapper::GetNameForMCPServerAuthorizationMethod(m_authorizationMethod));
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_apiKeyHeaderHasBeenSet) {
    payload.WithString("apiKeyHeader", m_apiKeyHeader);
  }

  if (m_customHeaderNamesHasBeenSet) {
    Aws::Utils::Array<JsonValue> customHeaderNamesJsonList(m_customHeaderNames.size());
    for (unsigned customHeaderNamesIndex = 0; customHeaderNamesIndex < customHeaderNamesJsonList.GetLength(); ++customHeaderNamesIndex) {
      customHeaderNamesJsonList[customHeaderNamesIndex].AsString(m_customHeaderNames[customHeaderNamesIndex]);
    }
    payload.WithArray("customHeaderNames", std::move(customHeaderNamesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
