/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iam-toolbox/model/Check.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IAMToolbox {
namespace Model {

Check::Check(JsonView jsonValue) { *this = jsonValue; }

Check& Check::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("checkType")) {
    m_checkType = CheckTypeMapper::GetCheckTypeForName(jsonValue.GetString("checkType"));
    m_checkTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("evaluatedEffect")) {
    m_evaluatedEffect = CheckEffectMapper::GetCheckEffectForName(jsonValue.GetString("evaluatedEffect"));
    m_evaluatedEffectHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetArn")) {
    m_targetArn = jsonValue.GetString("targetArn");
    m_targetArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("relevantPolicyTypes")) {
    Aws::Utils::Array<JsonView> relevantPolicyTypesJsonList = jsonValue.GetArray("relevantPolicyTypes");
    for (unsigned relevantPolicyTypesIndex = 0; relevantPolicyTypesIndex < relevantPolicyTypesJsonList.GetLength();
         ++relevantPolicyTypesIndex) {
      m_relevantPolicyTypes.push_back(
          PolicyTypeMapper::GetPolicyTypeForName(relevantPolicyTypesJsonList[relevantPolicyTypesIndex].AsString()));
    }
    m_relevantPolicyTypesHasBeenSet = true;
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

JsonValue Check::Jsonize() const {
  JsonValue payload;

  if (m_checkTypeHasBeenSet) {
    payload.WithString("checkType", CheckTypeMapper::GetNameForCheckType(m_checkType));
  }

  if (m_evaluatedEffectHasBeenSet) {
    payload.WithString("evaluatedEffect", CheckEffectMapper::GetNameForCheckEffect(m_evaluatedEffect));
  }

  if (m_targetArnHasBeenSet) {
    payload.WithString("targetArn", m_targetArn);
  }

  if (m_relevantPolicyTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> relevantPolicyTypesJsonList(m_relevantPolicyTypes.size());
    for (unsigned relevantPolicyTypesIndex = 0; relevantPolicyTypesIndex < relevantPolicyTypesJsonList.GetLength();
         ++relevantPolicyTypesIndex) {
      relevantPolicyTypesJsonList[relevantPolicyTypesIndex].AsString(
          PolicyTypeMapper::GetNameForPolicyType(m_relevantPolicyTypes[relevantPolicyTypesIndex]));
    }
    payload.WithArray("relevantPolicyTypes", std::move(relevantPolicyTypesJsonList));
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
