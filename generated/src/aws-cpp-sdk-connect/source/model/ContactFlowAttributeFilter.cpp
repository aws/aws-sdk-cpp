/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactFlowAttributeFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

ContactFlowAttributeFilter::ContactFlowAttributeFilter(JsonView jsonValue) { *this = jsonValue; }

ContactFlowAttributeFilter& ContactFlowAttributeFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("OrConditions")) {
    Aws::Utils::Array<JsonView> orConditionsJsonList = jsonValue.GetArray("OrConditions");
    for (unsigned orConditionsIndex = 0; orConditionsIndex < orConditionsJsonList.GetLength(); ++orConditionsIndex) {
      m_orConditions.push_back(orConditionsJsonList[orConditionsIndex].AsObject());
    }
    m_orConditionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AndCondition")) {
    m_andCondition = jsonValue.GetObject("AndCondition");
    m_andConditionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TagCondition")) {
    m_tagCondition = jsonValue.GetObject("TagCondition");
    m_tagConditionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ContactFlowTypeCondition")) {
    m_contactFlowTypeCondition = jsonValue.GetObject("ContactFlowTypeCondition");
    m_contactFlowTypeConditionHasBeenSet = true;
  }
  return *this;
}

JsonValue ContactFlowAttributeFilter::Jsonize() const {
  JsonValue payload;

  if (m_orConditionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> orConditionsJsonList(m_orConditions.size());
    for (unsigned orConditionsIndex = 0; orConditionsIndex < orConditionsJsonList.GetLength(); ++orConditionsIndex) {
      orConditionsJsonList[orConditionsIndex].AsObject(m_orConditions[orConditionsIndex].Jsonize());
    }
    payload.WithArray("OrConditions", std::move(orConditionsJsonList));
  }

  if (m_andConditionHasBeenSet) {
    payload.WithObject("AndCondition", m_andCondition.Jsonize());
  }

  if (m_tagConditionHasBeenSet) {
    payload.WithObject("TagCondition", m_tagCondition.Jsonize());
  }

  if (m_contactFlowTypeConditionHasBeenSet) {
    payload.WithObject("ContactFlowTypeCondition", m_contactFlowTypeCondition.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
