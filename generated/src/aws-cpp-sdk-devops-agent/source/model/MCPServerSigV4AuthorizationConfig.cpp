/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/MCPServerSigV4AuthorizationConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

MCPServerSigV4AuthorizationConfig::MCPServerSigV4AuthorizationConfig(JsonView jsonValue) { *this = jsonValue; }

MCPServerSigV4AuthorizationConfig& MCPServerSigV4AuthorizationConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("region")) {
    m_region = jsonValue.GetString("region");
    m_regionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("service")) {
    m_service = jsonValue.GetString("service");
    m_serviceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("roleArn")) {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("customHeaders")) {
    Aws::Map<Aws::String, JsonView> customHeadersJsonMap = jsonValue.GetObject("customHeaders").GetAllObjects();
    for (auto& customHeadersItem : customHeadersJsonMap) {
      m_customHeaders[customHeadersItem.first] = customHeadersItem.second.AsString();
    }
    m_customHeadersHasBeenSet = true;
  }
  return *this;
}

JsonValue MCPServerSigV4AuthorizationConfig::Jsonize() const {
  JsonValue payload;

  if (m_regionHasBeenSet) {
    payload.WithString("region", m_region);
  }

  if (m_serviceHasBeenSet) {
    payload.WithString("service", m_service);
  }

  if (m_roleArnHasBeenSet) {
    payload.WithString("roleArn", m_roleArn);
  }

  if (m_customHeadersHasBeenSet) {
    JsonValue customHeadersJsonMap;
    for (auto& customHeadersItem : m_customHeaders) {
      customHeadersJsonMap.WithString(customHeadersItem.first, customHeadersItem.second);
    }
    payload.WithObject("customHeaders", std::move(customHeadersJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
