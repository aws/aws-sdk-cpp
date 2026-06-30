/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/InheritedAllowedResultReceiversSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {

InheritedAllowedResultReceiversSource::InheritedAllowedResultReceiversSource(JsonView jsonValue) { *this = jsonValue; }

InheritedAllowedResultReceiversSource& InheritedAllowedResultReceiversSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = BaseTableDependencyTypeMapper::GetBaseTableDependencyTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("value")) {
    Aws::Utils::Array<JsonView> valueJsonList = jsonValue.GetArray("value");
    for (unsigned valueIndex = 0; valueIndex < valueJsonList.GetLength(); ++valueIndex) {
      m_value.push_back(valueJsonList[valueIndex].AsString());
    }
    m_valueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceAccountId")) {
    m_sourceAccountId = jsonValue.GetString("sourceAccountId");
    m_sourceAccountIdHasBeenSet = true;
  }
  return *this;
}

JsonValue InheritedAllowedResultReceiversSource::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", BaseTableDependencyTypeMapper::GetNameForBaseTableDependencyType(m_type));
  }

  if (m_valueHasBeenSet) {
    Aws::Utils::Array<JsonValue> valueJsonList(m_value.size());
    for (unsigned valueIndex = 0; valueIndex < valueJsonList.GetLength(); ++valueIndex) {
      valueJsonList[valueIndex].AsString(m_value[valueIndex]);
    }
    payload.WithArray("value", std::move(valueJsonList));
  }

  if (m_sourceAccountIdHasBeenSet) {
    payload.WithString("sourceAccountId", m_sourceAccountId);
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
