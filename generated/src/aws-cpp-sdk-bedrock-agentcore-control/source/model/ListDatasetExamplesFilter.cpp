/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ListDatasetExamplesFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

ListDatasetExamplesFilter::ListDatasetExamplesFilter(JsonView jsonValue) { *this = jsonValue; }

ListDatasetExamplesFilter& ListDatasetExamplesFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("generationIds")) {
    Aws::Utils::Array<JsonView> generationIdsJsonList = jsonValue.GetArray("generationIds");
    for (unsigned generationIdsIndex = 0; generationIdsIndex < generationIdsJsonList.GetLength(); ++generationIdsIndex) {
      m_generationIds.push_back(generationIdsJsonList[generationIdsIndex].AsString());
    }
    m_generationIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("exampleFields")) {
    Aws::Utils::Array<JsonView> exampleFieldsJsonList = jsonValue.GetArray("exampleFields");
    for (unsigned exampleFieldsIndex = 0; exampleFieldsIndex < exampleFieldsJsonList.GetLength(); ++exampleFieldsIndex) {
      m_exampleFields.push_back(exampleFieldsJsonList[exampleFieldsIndex].AsObject());
    }
    m_exampleFieldsHasBeenSet = true;
  }
  return *this;
}

JsonValue ListDatasetExamplesFilter::Jsonize() const {
  JsonValue payload;

  if (m_generationIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> generationIdsJsonList(m_generationIds.size());
    for (unsigned generationIdsIndex = 0; generationIdsIndex < generationIdsJsonList.GetLength(); ++generationIdsIndex) {
      generationIdsJsonList[generationIdsIndex].AsString(m_generationIds[generationIdsIndex]);
    }
    payload.WithArray("generationIds", std::move(generationIdsJsonList));
  }

  if (m_exampleFieldsHasBeenSet) {
    Aws::Utils::Array<JsonValue> exampleFieldsJsonList(m_exampleFields.size());
    for (unsigned exampleFieldsIndex = 0; exampleFieldsIndex < exampleFieldsJsonList.GetLength(); ++exampleFieldsIndex) {
      exampleFieldsJsonList[exampleFieldsIndex].AsObject(m_exampleFields[exampleFieldsIndex].Jsonize());
    }
    payload.WithArray("exampleFields", std::move(exampleFieldsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
