/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/InheritedDisallowedOutputColumns.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {

InheritedDisallowedOutputColumns::InheritedDisallowedOutputColumns(JsonView jsonValue) { *this = jsonValue; }

InheritedDisallowedOutputColumns& InheritedDisallowedOutputColumns::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("value")) {
    Aws::Utils::Array<JsonView> valueJsonList = jsonValue.GetArray("value");
    for (unsigned valueIndex = 0; valueIndex < valueJsonList.GetLength(); ++valueIndex) {
      m_value.push_back(valueJsonList[valueIndex].AsString());
    }
    m_valueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("columnLineage")) {
    Aws::Utils::Array<JsonView> columnLineageJsonList = jsonValue.GetArray("columnLineage");
    for (unsigned columnLineageIndex = 0; columnLineageIndex < columnLineageJsonList.GetLength(); ++columnLineageIndex) {
      m_columnLineage.push_back(columnLineageJsonList[columnLineageIndex].AsObject());
    }
    m_columnLineageHasBeenSet = true;
  }
  return *this;
}

JsonValue InheritedDisallowedOutputColumns::Jsonize() const {
  JsonValue payload;

  if (m_valueHasBeenSet) {
    Aws::Utils::Array<JsonValue> valueJsonList(m_value.size());
    for (unsigned valueIndex = 0; valueIndex < valueJsonList.GetLength(); ++valueIndex) {
      valueJsonList[valueIndex].AsString(m_value[valueIndex]);
    }
    payload.WithArray("value", std::move(valueJsonList));
  }

  if (m_columnLineageHasBeenSet) {
    Aws::Utils::Array<JsonValue> columnLineageJsonList(m_columnLineage.size());
    for (unsigned columnLineageIndex = 0; columnLineageIndex < columnLineageJsonList.GetLength(); ++columnLineageIndex) {
      columnLineageJsonList[columnLineageIndex].AsObject(m_columnLineage[columnLineageIndex].Jsonize());
    }
    payload.WithArray("columnLineage", std::move(columnLineageJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
