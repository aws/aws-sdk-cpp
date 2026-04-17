/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/model/RecommenderConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {

RecommenderConfig::RecommenderConfig(JsonView jsonValue) { *this = jsonValue; }

RecommenderConfig& RecommenderConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("EventsConfig")) {
    m_eventsConfig = jsonValue.GetObject("EventsConfig");
    m_eventsConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TrainingFrequency")) {
    m_trainingFrequency = jsonValue.GetInteger("TrainingFrequency");
    m_trainingFrequencyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InferenceConfig")) {
    m_inferenceConfig = jsonValue.GetObject("InferenceConfig");
    m_inferenceConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IncludedColumns")) {
    Aws::Map<Aws::String, JsonView> includedColumnsJsonMap = jsonValue.GetObject("IncludedColumns").GetAllObjects();
    for (auto& includedColumnsItem : includedColumnsJsonMap) {
      Aws::Utils::Array<JsonView> columnNamesList2JsonList = includedColumnsItem.second.AsArray();
      Aws::Vector<Aws::String> columnNamesList2List;
      columnNamesList2List.reserve((size_t)columnNamesList2JsonList.GetLength());
      for (unsigned columnNamesList2Index = 0; columnNamesList2Index < columnNamesList2JsonList.GetLength(); ++columnNamesList2Index) {
        columnNamesList2List.push_back(columnNamesList2JsonList[columnNamesList2Index].AsString());
      }
      m_includedColumns[includedColumnsItem.first] = std::move(columnNamesList2List);
    }
    m_includedColumnsHasBeenSet = true;
  }
  return *this;
}

JsonValue RecommenderConfig::Jsonize() const {
  JsonValue payload;

  if (m_eventsConfigHasBeenSet) {
    payload.WithObject("EventsConfig", m_eventsConfig.Jsonize());
  }

  if (m_trainingFrequencyHasBeenSet) {
    payload.WithInteger("TrainingFrequency", m_trainingFrequency);
  }

  if (m_inferenceConfigHasBeenSet) {
    payload.WithObject("InferenceConfig", m_inferenceConfig.Jsonize());
  }

  if (m_includedColumnsHasBeenSet) {
    JsonValue includedColumnsJsonMap;
    for (auto& includedColumnsItem : m_includedColumns) {
      Aws::Utils::Array<JsonValue> columnNamesListJsonList(includedColumnsItem.second.size());
      for (unsigned columnNamesListIndex = 0; columnNamesListIndex < columnNamesListJsonList.GetLength(); ++columnNamesListIndex) {
        columnNamesListJsonList[columnNamesListIndex].AsString(includedColumnsItem.second[columnNamesListIndex]);
      }
      includedColumnsJsonMap.WithArray(includedColumnsItem.first, std::move(columnNamesListJsonList));
    }
    payload.WithObject("IncludedColumns", std::move(includedColumnsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
