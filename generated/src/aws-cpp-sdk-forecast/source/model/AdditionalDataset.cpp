/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/forecast/model/AdditionalDataset.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ForecastService {
namespace Model {

AdditionalDataset::AdditionalDataset(JsonView jsonValue) { *this = jsonValue; }

AdditionalDataset& AdditionalDataset::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Configuration")) {
    Aws::Map<Aws::String, JsonView> configurationJsonMap = jsonValue.GetObject("Configuration").GetAllObjects();
    for (auto& configurationItem : configurationJsonMap) {
      Aws::Utils::Array<JsonView> values2JsonList = configurationItem.second.AsArray();
      Aws::Vector<Aws::String> values2List;
      values2List.reserve((size_t)values2JsonList.GetLength());
      for (unsigned values2Index = 0; values2Index < values2JsonList.GetLength(); ++values2Index) {
        values2List.push_back(values2JsonList[values2Index].AsString());
      }
      m_configuration[configurationItem.first] = std::move(values2List);
    }
    m_configurationHasBeenSet = true;
  }
  return *this;
}

JsonValue AdditionalDataset::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_configurationHasBeenSet) {
    JsonValue configurationJsonMap;
    for (auto& configurationItem : m_configuration) {
      Aws::Utils::Array<JsonValue> valuesJsonList(configurationItem.second.size());
      for (unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex) {
        valuesJsonList[valuesIndex].AsString(configurationItem.second[valuesIndex]);
      }
      configurationJsonMap.WithArray(configurationItem.first, std::move(valuesJsonList));
    }
    payload.WithObject("Configuration", std::move(configurationJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace ForecastService
}  // namespace Aws
