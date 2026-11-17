/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ListDatasetVersionsFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

ListDatasetVersionsFilter::ListDatasetVersionsFilter(JsonView jsonValue) { *this = jsonValue; }

ListDatasetVersionsFilter& ListDatasetVersionsFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("exampleCountByField")) {
    Aws::Utils::Array<JsonView> exampleCountByFieldJsonList = jsonValue.GetArray("exampleCountByField");
    for (unsigned exampleCountByFieldIndex = 0; exampleCountByFieldIndex < exampleCountByFieldJsonList.GetLength();
         ++exampleCountByFieldIndex) {
      m_exampleCountByField.push_back(exampleCountByFieldJsonList[exampleCountByFieldIndex].AsObject());
    }
    m_exampleCountByFieldHasBeenSet = true;
  }
  return *this;
}

JsonValue ListDatasetVersionsFilter::Jsonize() const {
  JsonValue payload;

  if (m_exampleCountByFieldHasBeenSet) {
    Aws::Utils::Array<JsonValue> exampleCountByFieldJsonList(m_exampleCountByField.size());
    for (unsigned exampleCountByFieldIndex = 0; exampleCountByFieldIndex < exampleCountByFieldJsonList.GetLength();
         ++exampleCountByFieldIndex) {
      exampleCountByFieldJsonList[exampleCountByFieldIndex].AsObject(m_exampleCountByField[exampleCountByFieldIndex].Jsonize());
    }
    payload.WithArray("exampleCountByField", std::move(exampleCountByFieldJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
