/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/SyntheticDataColumnProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {

SyntheticDataColumnProperties::SyntheticDataColumnProperties(JsonView jsonValue) { *this = jsonValue; }

SyntheticDataColumnProperties& SyntheticDataColumnProperties::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("columnName")) {
    m_columnName = jsonValue.GetString("columnName");
    m_columnNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("columnType")) {
    m_columnType = SyntheticDataColumnTypeMapper::GetSyntheticDataColumnTypeForName(jsonValue.GetString("columnType"));
    m_columnTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("isPredictiveValue")) {
    m_isPredictiveValue = jsonValue.GetBool("isPredictiveValue");
    m_isPredictiveValueHasBeenSet = true;
  }
  return *this;
}

JsonValue SyntheticDataColumnProperties::Jsonize() const {
  JsonValue payload;

  if (m_columnNameHasBeenSet) {
    payload.WithString("columnName", m_columnName);
  }

  if (m_columnTypeHasBeenSet) {
    payload.WithString("columnType", SyntheticDataColumnTypeMapper::GetNameForSyntheticDataColumnType(m_columnType));
  }

  if (m_isPredictiveValueHasBeenSet) {
    payload.WithBool("isPredictiveValue", m_isPredictiveValue);
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
