/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iam-toolbox/model/Evaluation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IAMToolbox {
namespace Model {

Evaluation::Evaluation(JsonView jsonValue) { *this = jsonValue; }

Evaluation& Evaluation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("action")) {
    m_action = jsonValue.GetString("action");
    m_actionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resource")) {
    m_resource = jsonValue.GetString("resource");
    m_resourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("context")) {
    Aws::Map<Aws::String, JsonView> contextJsonMap = jsonValue.GetObject("context").GetAllObjects();
    for (auto& contextItem : contextJsonMap) {
      m_context[contextItem.first] = contextItem.second.AsObject();
    }
    m_contextHasBeenSet = true;
  }
  if (jsonValue.ValueExists("evaluatedEffect")) {
    m_evaluatedEffect = EvaluatedEffectMapper::GetEvaluatedEffectForName(jsonValue.GetString("evaluatedEffect"));
    m_evaluatedEffectHasBeenSet = true;
  }
  if (jsonValue.ValueExists("matchedPolicies")) {
    Aws::Utils::Array<JsonView> matchedPoliciesJsonList = jsonValue.GetArray("matchedPolicies");
    for (unsigned matchedPoliciesIndex = 0; matchedPoliciesIndex < matchedPoliciesJsonList.GetLength(); ++matchedPoliciesIndex) {
      m_matchedPolicies.push_back(matchedPoliciesJsonList[matchedPoliciesIndex].AsObject());
    }
    m_matchedPoliciesHasBeenSet = true;
  }
  return *this;
}

JsonValue Evaluation::Jsonize() const {
  JsonValue payload;

  if (m_actionHasBeenSet) {
    payload.WithString("action", m_action);
  }

  if (m_resourceHasBeenSet) {
    payload.WithString("resource", m_resource);
  }

  if (m_contextHasBeenSet) {
    JsonValue contextJsonMap;
    for (auto& contextItem : m_context) {
      contextJsonMap.WithObject(contextItem.first, contextItem.second.View());
    }
    payload.WithObject("context", std::move(contextJsonMap));
  }

  if (m_evaluatedEffectHasBeenSet) {
    payload.WithString("evaluatedEffect", EvaluatedEffectMapper::GetNameForEvaluatedEffect(m_evaluatedEffect));
  }

  if (m_matchedPoliciesHasBeenSet) {
    Aws::Utils::Array<JsonValue> matchedPoliciesJsonList(m_matchedPolicies.size());
    for (unsigned matchedPoliciesIndex = 0; matchedPoliciesIndex < matchedPoliciesJsonList.GetLength(); ++matchedPoliciesIndex) {
      matchedPoliciesJsonList[matchedPoliciesIndex].AsObject(m_matchedPolicies[matchedPoliciesIndex].Jsonize());
    }
    payload.WithArray("matchedPolicies", std::move(matchedPoliciesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace IAMToolbox
}  // namespace Aws
