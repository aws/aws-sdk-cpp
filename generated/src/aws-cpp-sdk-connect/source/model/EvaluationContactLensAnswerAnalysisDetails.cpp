/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationContactLensAnswerAnalysisDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationContactLensAnswerAnalysisDetails::EvaluationContactLensAnswerAnalysisDetails(JsonView jsonValue) { *this = jsonValue; }

EvaluationContactLensAnswerAnalysisDetails& EvaluationContactLensAnswerAnalysisDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("MatchedRuleCategories")) {
    Aws::Utils::Array<JsonView> matchedRuleCategoriesJsonList = jsonValue.GetArray("MatchedRuleCategories");
    for (unsigned matchedRuleCategoriesIndex = 0; matchedRuleCategoriesIndex < matchedRuleCategoriesJsonList.GetLength();
         ++matchedRuleCategoriesIndex) {
      m_matchedRuleCategories.push_back(matchedRuleCategoriesJsonList[matchedRuleCategoriesIndex].AsObject());
    }
    m_matchedRuleCategoriesHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationContactLensAnswerAnalysisDetails::Jsonize() const {
  JsonValue payload;

  if (m_matchedRuleCategoriesHasBeenSet) {
    Aws::Utils::Array<JsonValue> matchedRuleCategoriesJsonList(m_matchedRuleCategories.size());
    for (unsigned matchedRuleCategoriesIndex = 0; matchedRuleCategoriesIndex < matchedRuleCategoriesJsonList.GetLength();
         ++matchedRuleCategoriesIndex) {
      matchedRuleCategoriesJsonList[matchedRuleCategoriesIndex].AsObject(m_matchedRuleCategories[matchedRuleCategoriesIndex].Jsonize());
    }
    payload.WithArray("MatchedRuleCategories", std::move(matchedRuleCategoriesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
