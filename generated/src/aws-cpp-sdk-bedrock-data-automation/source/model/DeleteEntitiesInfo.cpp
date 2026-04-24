/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/DeleteEntitiesInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockDataAutomation {
namespace Model {

DeleteEntitiesInfo::DeleteEntitiesInfo(JsonView jsonValue) { *this = jsonValue; }

DeleteEntitiesInfo& DeleteEntitiesInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("entityIds")) {
    Aws::Utils::Array<JsonView> entityIdsJsonList = jsonValue.GetArray("entityIds");
    for (unsigned entityIdsIndex = 0; entityIdsIndex < entityIdsJsonList.GetLength(); ++entityIdsIndex) {
      m_entityIds.push_back(entityIdsJsonList[entityIdsIndex].AsString());
    }
    m_entityIdsHasBeenSet = true;
  }
  return *this;
}

JsonValue DeleteEntitiesInfo::Jsonize() const {
  JsonValue payload;

  if (m_entityIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> entityIdsJsonList(m_entityIds.size());
    for (unsigned entityIdsIndex = 0; entityIdsIndex < entityIdsJsonList.GetLength(); ++entityIdsIndex) {
      entityIdsJsonList[entityIdsIndex].AsString(m_entityIds[entityIdsIndex]);
    }
    payload.WithArray("entityIds", std::move(entityIdsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
