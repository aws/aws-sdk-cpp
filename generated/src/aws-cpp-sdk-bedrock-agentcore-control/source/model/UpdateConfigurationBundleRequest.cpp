/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/UpdateConfigurationBundleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentCoreControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateConfigurationBundleRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_bundleNameHasBeenSet) {
    payload.WithString("bundleName", m_bundleName);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_componentsHasBeenSet) {
    JsonValue componentsJsonMap;
    for (auto& componentsItem : m_components) {
      componentsJsonMap.WithObject(componentsItem.first, componentsItem.second.Jsonize());
    }
    payload.WithObject("components", std::move(componentsJsonMap));
  }

  if (m_parentVersionIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> parentVersionIdsJsonList(m_parentVersionIds.size());
    for (unsigned parentVersionIdsIndex = 0; parentVersionIdsIndex < parentVersionIdsJsonList.GetLength(); ++parentVersionIdsIndex) {
      parentVersionIdsJsonList[parentVersionIdsIndex].AsString(m_parentVersionIds[parentVersionIdsIndex]);
    }
    payload.WithArray("parentVersionIds", std::move(parentVersionIdsJsonList));
  }

  if (m_branchNameHasBeenSet) {
    payload.WithString("branchName", m_branchName);
  }

  if (m_commitMessageHasBeenSet) {
    payload.WithString("commitMessage", m_commitMessage);
  }

  if (m_createdByHasBeenSet) {
    payload.WithObject("createdBy", m_createdBy.Jsonize());
  }

  return payload.View().WriteReadable();
}
