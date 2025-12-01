/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/UpdateRoleMappings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

UpdateRoleMappings::UpdateRoleMappings(JsonView jsonValue) { *this = jsonValue; }

UpdateRoleMappings& UpdateRoleMappings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("addOrUpdateRoleMappings")) {
    Aws::Utils::Array<JsonView> addOrUpdateRoleMappingsJsonList = jsonValue.GetArray("addOrUpdateRoleMappings");
    for (unsigned addOrUpdateRoleMappingsIndex = 0; addOrUpdateRoleMappingsIndex < addOrUpdateRoleMappingsJsonList.GetLength();
         ++addOrUpdateRoleMappingsIndex) {
      m_addOrUpdateRoleMappings.push_back(addOrUpdateRoleMappingsJsonList[addOrUpdateRoleMappingsIndex].AsObject());
    }
    m_addOrUpdateRoleMappingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("removeRoleMappings")) {
    Aws::Utils::Array<JsonView> removeRoleMappingsJsonList = jsonValue.GetArray("removeRoleMappings");
    for (unsigned removeRoleMappingsIndex = 0; removeRoleMappingsIndex < removeRoleMappingsJsonList.GetLength();
         ++removeRoleMappingsIndex) {
      m_removeRoleMappings.push_back(removeRoleMappingsJsonList[removeRoleMappingsIndex].AsObject());
    }
    m_removeRoleMappingsHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateRoleMappings::Jsonize() const {
  JsonValue payload;

  if (m_addOrUpdateRoleMappingsHasBeenSet) {
    Aws::Utils::Array<JsonValue> addOrUpdateRoleMappingsJsonList(m_addOrUpdateRoleMappings.size());
    for (unsigned addOrUpdateRoleMappingsIndex = 0; addOrUpdateRoleMappingsIndex < addOrUpdateRoleMappingsJsonList.GetLength();
         ++addOrUpdateRoleMappingsIndex) {
      addOrUpdateRoleMappingsJsonList[addOrUpdateRoleMappingsIndex].AsObject(
          m_addOrUpdateRoleMappings[addOrUpdateRoleMappingsIndex].Jsonize());
    }
    payload.WithArray("addOrUpdateRoleMappings", std::move(addOrUpdateRoleMappingsJsonList));
  }

  if (m_removeRoleMappingsHasBeenSet) {
    Aws::Utils::Array<JsonValue> removeRoleMappingsJsonList(m_removeRoleMappings.size());
    for (unsigned removeRoleMappingsIndex = 0; removeRoleMappingsIndex < removeRoleMappingsJsonList.GetLength();
         ++removeRoleMappingsIndex) {
      removeRoleMappingsJsonList[removeRoleMappingsIndex].AsObject(m_removeRoleMappings[removeRoleMappingsIndex].Jsonize());
    }
    payload.WithArray("removeRoleMappings", std::move(removeRoleMappingsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
