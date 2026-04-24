/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationAutomationRuleCategory.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Analysis details providing explanation for Contact Lens automation
 * decision.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationContactLensAnswerAnalysisDetails">AWS
 * API Reference</a></p>
 */
class EvaluationContactLensAnswerAnalysisDetails {
 public:
  AWS_CONNECT_API EvaluationContactLensAnswerAnalysisDetails() = default;
  AWS_CONNECT_API EvaluationContactLensAnswerAnalysisDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationContactLensAnswerAnalysisDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of match rule categories.</p>
   */
  inline const Aws::Vector<EvaluationAutomationRuleCategory>& GetMatchedRuleCategories() const { return m_matchedRuleCategories; }
  inline bool MatchedRuleCategoriesHasBeenSet() const { return m_matchedRuleCategoriesHasBeenSet; }
  template <typename MatchedRuleCategoriesT = Aws::Vector<EvaluationAutomationRuleCategory>>
  void SetMatchedRuleCategories(MatchedRuleCategoriesT&& value) {
    m_matchedRuleCategoriesHasBeenSet = true;
    m_matchedRuleCategories = std::forward<MatchedRuleCategoriesT>(value);
  }
  template <typename MatchedRuleCategoriesT = Aws::Vector<EvaluationAutomationRuleCategory>>
  EvaluationContactLensAnswerAnalysisDetails& WithMatchedRuleCategories(MatchedRuleCategoriesT&& value) {
    SetMatchedRuleCategories(std::forward<MatchedRuleCategoriesT>(value));
    return *this;
  }
  template <typename MatchedRuleCategoriesT = EvaluationAutomationRuleCategory>
  EvaluationContactLensAnswerAnalysisDetails& AddMatchedRuleCategories(MatchedRuleCategoriesT&& value) {
    m_matchedRuleCategoriesHasBeenSet = true;
    m_matchedRuleCategories.emplace_back(std::forward<MatchedRuleCategoriesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<EvaluationAutomationRuleCategory> m_matchedRuleCategories;
  bool m_matchedRuleCategoriesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
