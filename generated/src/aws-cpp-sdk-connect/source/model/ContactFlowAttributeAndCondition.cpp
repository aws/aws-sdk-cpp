/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactFlowAttributeAndCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

ContactFlowAttributeAndCondition::ContactFlowAttributeAndCondition(JsonView jsonValue) { *this = jsonValue; }

ContactFlowAttributeAndCondition& ContactFlowAttributeAndCondition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TagConditions")) {
    Aws::Utils::Array<JsonView> tagConditionsJsonList = jsonValue.GetArray("TagConditions");
    for (unsigned tagConditionsIndex = 0; tagConditionsIndex < tagConditionsJsonList.GetLength(); ++tagConditionsIndex) {
      m_tagConditions.push_back(tagConditionsJsonList[tagConditionsIndex].AsObject());
    }
    m_tagConditionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ContactFlowTypeCondition")) {
    m_contactFlowTypeCondition = jsonValue.GetObject("ContactFlowTypeCondition");
    m_contactFlowTypeConditionHasBeenSet = true;
  }
  return *this;
}

JsonValue ContactFlowAttributeAndCondition::Jsonize() const {
  JsonValue payload;

  if (m_tagConditionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagConditionsJsonList(m_tagConditions.size());
    for (unsigned tagConditionsIndex = 0; tagConditionsIndex < tagConditionsJsonList.GetLength(); ++tagConditionsIndex) {
      tagConditionsJsonList[tagConditionsIndex].AsObject(m_tagConditions[tagConditionsIndex].Jsonize());
    }
    payload.WithArray("TagConditions", std::move(tagConditionsJsonList));
  }

  if (m_contactFlowTypeConditionHasBeenSet) {
    payload.WithObject("ContactFlowTypeCondition", m_contactFlowTypeCondition.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
