/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactEvaluationAttributeCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

ContactEvaluationAttributeCondition::ContactEvaluationAttributeCondition(JsonView jsonValue) { *this = jsonValue; }

ContactEvaluationAttributeCondition& ContactEvaluationAttributeCondition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AttributeKey")) {
    m_attributeKey = ContactEvaluationAttributeKeyMapper::GetContactEvaluationAttributeKeyForName(jsonValue.GetString("AttributeKey"));
    m_attributeKeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AttributeValue")) {
    m_attributeValue = jsonValue.GetObject("AttributeValue");
    m_attributeValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ComparisonType")) {
    m_comparisonType = ContactEvaluationAttributeComparisonTypeMapper::GetContactEvaluationAttributeComparisonTypeForName(
        jsonValue.GetString("ComparisonType"));
    m_comparisonTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue ContactEvaluationAttributeCondition::Jsonize() const {
  JsonValue payload;

  if (m_attributeKeyHasBeenSet) {
    payload.WithString("AttributeKey", ContactEvaluationAttributeKeyMapper::GetNameForContactEvaluationAttributeKey(m_attributeKey));
  }

  if (m_attributeValueHasBeenSet) {
    payload.WithObject("AttributeValue", m_attributeValue.Jsonize());
  }

  if (m_comparisonTypeHasBeenSet) {
    payload.WithString("ComparisonType", ContactEvaluationAttributeComparisonTypeMapper::GetNameForContactEvaluationAttributeComparisonType(
                                             m_comparisonType));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
