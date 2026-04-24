/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/ColumnClassificationDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRoomsML {
namespace Model {

ColumnClassificationDetails::ColumnClassificationDetails(JsonView jsonValue) { *this = jsonValue; }

ColumnClassificationDetails& ColumnClassificationDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("columnMapping")) {
    Aws::Utils::Array<JsonView> columnMappingJsonList = jsonValue.GetArray("columnMapping");
    for (unsigned columnMappingIndex = 0; columnMappingIndex < columnMappingJsonList.GetLength(); ++columnMappingIndex) {
      m_columnMapping.push_back(columnMappingJsonList[columnMappingIndex].AsObject());
    }
    m_columnMappingHasBeenSet = true;
  }
  return *this;
}

JsonValue ColumnClassificationDetails::Jsonize() const {
  JsonValue payload;

  if (m_columnMappingHasBeenSet) {
    Aws::Utils::Array<JsonValue> columnMappingJsonList(m_columnMapping.size());
    for (unsigned columnMappingIndex = 0; columnMappingIndex < columnMappingJsonList.GetLength(); ++columnMappingIndex) {
      columnMappingJsonList[columnMappingIndex].AsObject(m_columnMapping[columnMappingIndex].Jsonize());
    }
    payload.WithArray("columnMapping", std::move(columnMappingJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRoomsML
}  // namespace Aws
