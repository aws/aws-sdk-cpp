/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appintegrations/model/FileConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AppIntegrationsService {
namespace Model {

FileConfiguration::FileConfiguration(JsonView jsonValue) { *this = jsonValue; }

FileConfiguration& FileConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Folders")) {
    Aws::Utils::Array<JsonView> foldersJsonList = jsonValue.GetArray("Folders");
    for (unsigned foldersIndex = 0; foldersIndex < foldersJsonList.GetLength(); ++foldersIndex) {
      m_folders.push_back(foldersJsonList[foldersIndex].AsString());
    }
    m_foldersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Filters")) {
    Aws::Map<Aws::String, JsonView> filtersJsonMap = jsonValue.GetObject("Filters").GetAllObjects();
    for (auto& filtersItem : filtersJsonMap) {
      Aws::Utils::Array<JsonView> fieldsList2JsonList = filtersItem.second.AsArray();
      Aws::Vector<Aws::String> fieldsList2List;
      fieldsList2List.reserve((size_t)fieldsList2JsonList.GetLength());
      for (unsigned fieldsList2Index = 0; fieldsList2Index < fieldsList2JsonList.GetLength(); ++fieldsList2Index) {
        fieldsList2List.push_back(fieldsList2JsonList[fieldsList2Index].AsString());
      }
      m_filters[filtersItem.first] = std::move(fieldsList2List);
    }
    m_filtersHasBeenSet = true;
  }
  return *this;
}

JsonValue FileConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_foldersHasBeenSet) {
    Aws::Utils::Array<JsonValue> foldersJsonList(m_folders.size());
    for (unsigned foldersIndex = 0; foldersIndex < foldersJsonList.GetLength(); ++foldersIndex) {
      foldersJsonList[foldersIndex].AsString(m_folders[foldersIndex]);
    }
    payload.WithArray("Folders", std::move(foldersJsonList));
  }

  if (m_filtersHasBeenSet) {
    JsonValue filtersJsonMap;
    for (auto& filtersItem : m_filters) {
      Aws::Utils::Array<JsonValue> fieldsListJsonList(filtersItem.second.size());
      for (unsigned fieldsListIndex = 0; fieldsListIndex < fieldsListJsonList.GetLength(); ++fieldsListIndex) {
        fieldsListJsonList[fieldsListIndex].AsString(filtersItem.second[fieldsListIndex]);
      }
      filtersJsonMap.WithArray(filtersItem.first, std::move(fieldsListJsonList));
    }
    payload.WithObject("Filters", std::move(filtersJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace AppIntegrationsService
}  // namespace Aws
