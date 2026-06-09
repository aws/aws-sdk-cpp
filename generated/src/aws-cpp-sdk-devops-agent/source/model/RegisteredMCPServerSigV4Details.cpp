/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/RegisteredMCPServerSigV4Details.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

RegisteredMCPServerSigV4Details::RegisteredMCPServerSigV4Details(JsonView jsonValue) { *this = jsonValue; }

RegisteredMCPServerSigV4Details& RegisteredMCPServerSigV4Details::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endpoint")) {
    m_endpoint = jsonValue.GetString("endpoint");
    m_endpointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("region")) {
    m_region = jsonValue.GetString("region");
    m_regionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("service")) {
    m_service = jsonValue.GetString("service");
    m_serviceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mcpRoleArn")) {
    m_mcpRoleArn = jsonValue.GetString("mcpRoleArn");
    m_mcpRoleArnHasBeenSet = true;
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

JsonValue RegisteredMCPServerSigV4Details::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_endpointHasBeenSet) {
    payload.WithString("endpoint", m_endpoint);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_regionHasBeenSet) {
    payload.WithString("region", m_region);
  }

  if (m_serviceHasBeenSet) {
    payload.WithString("service", m_service);
  }

  if (m_mcpRoleArnHasBeenSet) {
    payload.WithString("mcpRoleArn", m_mcpRoleArn);
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
