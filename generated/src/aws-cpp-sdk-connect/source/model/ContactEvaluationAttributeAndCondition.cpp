/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactEvaluationAttributeAndCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

ContactEvaluationAttributeAndCondition::ContactEvaluationAttributeAndCondition(JsonView jsonValue) { *this = jsonValue; }

ContactEvaluationAttributeAndCondition& ContactEvaluationAttributeAndCondition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TagConditions")) {
    Aws::Utils::Array<JsonView> tagConditionsJsonList = jsonValue.GetArray("TagConditions");
    for (unsigned tagConditionsIndex = 0; tagConditionsIndex < tagConditionsJsonList.GetLength(); ++tagConditionsIndex) {
      m_tagConditions.push_back(tagConditionsJsonList[tagConditionsIndex].AsObject());
    }
    m_tagConditionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AttributeConditions")) {
    Aws::Utils::Array<JsonView> attributeConditionsJsonList = jsonValue.GetArray("AttributeConditions");
    for (unsigned attributeConditionsIndex = 0; attributeConditionsIndex < attributeConditionsJsonList.GetLength();
         ++attributeConditionsIndex) {
      m_attributeConditions.push_back(attributeConditionsJsonList[attributeConditionsIndex].AsObject());
    }
    m_attributeConditionsHasBeenSet = true;
  }
  return *this;
}

JsonValue ContactEvaluationAttributeAndCondition::Jsonize() const {
  JsonValue payload;

  if (m_tagConditionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagConditionsJsonList(m_tagConditions.size());
    for (unsigned tagConditionsIndex = 0; tagConditionsIndex < tagConditionsJsonList.GetLength(); ++tagConditionsIndex) {
      tagConditionsJsonList[tagConditionsIndex].AsObject(m_tagConditions[tagConditionsIndex].Jsonize());
    }
    payload.WithArray("TagConditions", std::move(tagConditionsJsonList));
  }

  if (m_attributeConditionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> attributeConditionsJsonList(m_attributeConditions.size());
    for (unsigned attributeConditionsIndex = 0; attributeConditionsIndex < attributeConditionsJsonList.GetLength();
         ++attributeConditionsIndex) {
      attributeConditionsJsonList[attributeConditionsIndex].AsObject(m_attributeConditions[attributeConditionsIndex].Jsonize());
    }
    payload.WithArray("AttributeConditions", std::move(attributeConditionsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
