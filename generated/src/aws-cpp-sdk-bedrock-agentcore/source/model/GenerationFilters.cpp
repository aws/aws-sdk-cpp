/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/GenerationFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

GenerationFilters::GenerationFilters(JsonView jsonValue) { *this = jsonValue; }

GenerationFilters& GenerationFilters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("attributeFilters")) {
    Aws::Utils::Array<JsonView> attributeFiltersJsonList = jsonValue.GetArray("attributeFilters");
    for (unsigned attributeFiltersIndex = 0; attributeFiltersIndex < attributeFiltersJsonList.GetLength(); ++attributeFiltersIndex) {
      m_attributeFilters.push_back(attributeFiltersJsonList[attributeFiltersIndex].AsObject());
    }
    m_attributeFiltersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("turnCount")) {
    m_turnCount = jsonValue.GetObject("turnCount");
    m_turnCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("evaluatorFilters")) {
    Aws::Utils::Array<JsonView> evaluatorFiltersJsonList = jsonValue.GetArray("evaluatorFilters");
    for (unsigned evaluatorFiltersIndex = 0; evaluatorFiltersIndex < evaluatorFiltersJsonList.GetLength(); ++evaluatorFiltersIndex) {
      m_evaluatorFilters.push_back(evaluatorFiltersJsonList[evaluatorFiltersIndex].AsObject());
    }
    m_evaluatorFiltersHasBeenSet = true;
  }
  return *this;
}

JsonValue GenerationFilters::Jsonize() const {
  JsonValue payload;

  if (m_attributeFiltersHasBeenSet) {
    Aws::Utils::Array<JsonValue> attributeFiltersJsonList(m_attributeFilters.size());
    for (unsigned attributeFiltersIndex = 0; attributeFiltersIndex < attributeFiltersJsonList.GetLength(); ++attributeFiltersIndex) {
      attributeFiltersJsonList[attributeFiltersIndex].AsObject(m_attributeFilters[attributeFiltersIndex].Jsonize());
    }
    payload.WithArray("attributeFilters", std::move(attributeFiltersJsonList));
  }

  if (m_turnCountHasBeenSet) {
    payload.WithObject("turnCount", m_turnCount.Jsonize());
  }

  if (m_evaluatorFiltersHasBeenSet) {
    Aws::Utils::Array<JsonValue> evaluatorFiltersJsonList(m_evaluatorFilters.size());
    for (unsigned evaluatorFiltersIndex = 0; evaluatorFiltersIndex < evaluatorFiltersJsonList.GetLength(); ++evaluatorFiltersIndex) {
      evaluatorFiltersJsonList[evaluatorFiltersIndex].AsObject(m_evaluatorFilters[evaluatorFiltersIndex].Jsonize());
    }
    payload.WithArray("evaluatorFilters", std::move(evaluatorFiltersJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
