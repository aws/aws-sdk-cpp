/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elasticmapreduce/model/StepAdditionalInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EMR {
namespace Model {

StepAdditionalInfo::StepAdditionalInfo(JsonView jsonValue) { *this = jsonValue; }

StepAdditionalInfo& StepAdditionalInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ResourceManagerApplicationIds")) {
    Aws::Utils::Array<JsonView> resourceManagerApplicationIdsJsonList = jsonValue.GetArray("ResourceManagerApplicationIds");
    for (unsigned resourceManagerApplicationIdsIndex = 0;
         resourceManagerApplicationIdsIndex < resourceManagerApplicationIdsJsonList.GetLength(); ++resourceManagerApplicationIdsIndex) {
      m_resourceManagerApplicationIds.push_back(resourceManagerApplicationIdsJsonList[resourceManagerApplicationIdsIndex].AsString());
    }
    m_resourceManagerApplicationIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceManager")) {
    m_resourceManager = jsonValue.GetString("ResourceManager");
    m_resourceManagerHasBeenSet = true;
  }
  return *this;
}

JsonValue StepAdditionalInfo::Jsonize() const {
  JsonValue payload;

  if (m_resourceManagerApplicationIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourceManagerApplicationIdsJsonList(m_resourceManagerApplicationIds.size());
    for (unsigned resourceManagerApplicationIdsIndex = 0;
         resourceManagerApplicationIdsIndex < resourceManagerApplicationIdsJsonList.GetLength(); ++resourceManagerApplicationIdsIndex) {
      resourceManagerApplicationIdsJsonList[resourceManagerApplicationIdsIndex].AsString(
          m_resourceManagerApplicationIds[resourceManagerApplicationIdsIndex]);
    }
    payload.WithArray("ResourceManagerApplicationIds", std::move(resourceManagerApplicationIdsJsonList));
  }

  if (m_resourceManagerHasBeenSet) {
    payload.WithString("ResourceManager", m_resourceManager);
  }

  return payload;
}

}  // namespace Model
}  // namespace EMR
}  // namespace Aws
