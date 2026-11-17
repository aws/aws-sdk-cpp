/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/GroundTruthConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

GroundTruthConfig::GroundTruthConfig(JsonView jsonValue) { *this = jsonValue; }

GroundTruthConfig& GroundTruthConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("fields")) {
    Aws::Utils::Array<JsonView> fieldsJsonList = jsonValue.GetArray("fields");
    for (unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex) {
      m_fields.push_back(GroundTruthFieldMapper::GetGroundTruthFieldForName(fieldsJsonList[fieldsIndex].AsString()));
    }
    m_fieldsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("qualityFilters")) {
    Aws::Utils::Array<JsonView> qualityFiltersJsonList = jsonValue.GetArray("qualityFilters");
    for (unsigned qualityFiltersIndex = 0; qualityFiltersIndex < qualityFiltersJsonList.GetLength(); ++qualityFiltersIndex) {
      m_qualityFilters.push_back(qualityFiltersJsonList[qualityFiltersIndex].AsObject());
    }
    m_qualityFiltersHasBeenSet = true;
  }
  return *this;
}

JsonValue GroundTruthConfig::Jsonize() const {
  JsonValue payload;

  if (m_fieldsHasBeenSet) {
    Aws::Utils::Array<JsonValue> fieldsJsonList(m_fields.size());
    for (unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex) {
      fieldsJsonList[fieldsIndex].AsString(GroundTruthFieldMapper::GetNameForGroundTruthField(m_fields[fieldsIndex]));
    }
    payload.WithArray("fields", std::move(fieldsJsonList));
  }

  if (m_qualityFiltersHasBeenSet) {
    Aws::Utils::Array<JsonValue> qualityFiltersJsonList(m_qualityFilters.size());
    for (unsigned qualityFiltersIndex = 0; qualityFiltersIndex < qualityFiltersJsonList.GetLength(); ++qualityFiltersIndex) {
      qualityFiltersJsonList[qualityFiltersIndex].AsObject(m_qualityFilters[qualityFiltersIndex].Jsonize());
    }
    payload.WithArray("qualityFilters", std::move(qualityFiltersJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
