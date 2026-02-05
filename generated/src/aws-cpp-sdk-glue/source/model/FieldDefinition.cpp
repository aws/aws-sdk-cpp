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

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
