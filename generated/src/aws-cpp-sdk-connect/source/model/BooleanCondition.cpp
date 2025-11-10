/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/BooleanCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

BooleanCondition::BooleanCondition(JsonView jsonValue) { *this = jsonValue; }

BooleanCondition& BooleanCondition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FieldName")) {
    m_fieldName = jsonValue.GetString("FieldName");
    m_fieldNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ComparisonType")) {
    m_comparisonType = BooleanComparisonTypeMapper::GetBooleanComparisonTypeForName(jsonValue.GetString("ComparisonType"));
    m_comparisonTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue BooleanCondition::Jsonize() const {
  JsonValue payload;

  if (m_fieldNameHasBeenSet) {
    payload.WithString("FieldName", m_fieldName);
  }

  if (m_comparisonTypeHasBeenSet) {
    payload.WithString("ComparisonType", BooleanComparisonTypeMapper::GetNameForBooleanComparisonType(m_comparisonType));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
