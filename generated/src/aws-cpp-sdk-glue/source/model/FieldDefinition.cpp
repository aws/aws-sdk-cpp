/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/FieldDefinition.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

FieldDefinition::FieldDefinition(JsonView jsonValue) { *this = jsonValue; }

FieldDefinition& FieldDefinition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FieldDataType")) {
    m_fieldDataType = FieldDataTypeMapper::GetFieldDataTypeForName(jsonValue.GetString("FieldDataType"));
    m_fieldDataTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResponseDateFormat")) {
    m_responseDateFormat = jsonValue.GetString("ResponseDateFormat");
    m_responseDateFormatHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IsPartitionable")) {
    m_isPartitionable = jsonValue.GetBool("IsPartitionable");
    m_isPartitionableHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IsNullable")) {
    m_isNullable = jsonValue.GetBool("IsNullable");
    m_isNullableHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IsQueryable")) {
    m_isQueryable = jsonValue.GetBool("IsQueryable");
    m_isQueryableHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IsOrderable")) {
    m_isOrderable = jsonValue.GetBool("IsOrderable");
    m_isOrderableHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FilterOverrides")) {
    m_filterOverrides = jsonValue.GetObject("FilterOverrides");
    m_filterOverridesHasBeenSet = true;
  }
  return *this;
}

JsonValue FieldDefinition::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_fieldDataTypeHasBeenSet) {
    payload.WithString("FieldDataType", FieldDataTypeMapper::GetNameForFieldDataType(m_fieldDataType));
  }

  if (m_responseDateFormatHasBeenSet) {
    payload.WithString("ResponseDateFormat", m_responseDateFormat);
  }

  if (m_isPartitionableHasBeenSet) {
    payload.WithBool("IsPartitionable", m_isPartitionable);
  }

  if (m_isNullableHasBeenSet) {
    payload.WithBool("IsNullable", m_isNullable);
  }

  if (m_isQueryableHasBeenSet) {
    payload.WithBool("IsQueryable", m_isQueryable);
  }

  if (m_isOrderableHasBeenSet) {
    payload.WithBool("IsOrderable", m_isOrderable);
  }

  if (m_filterOverridesHasBeenSet) {
    payload.WithObject("FilterOverrides", m_filterOverrides.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
