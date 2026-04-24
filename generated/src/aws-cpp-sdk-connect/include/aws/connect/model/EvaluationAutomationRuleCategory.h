/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationTranscriptPointOfInterest.h>
#include <aws/connect/model/QuestionRuleCategoryAutomationCondition.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
 * <p>The Contact Lens category used by evaluation automation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationAutomationRuleCategory">AWS
 * API Reference</a></p>
 */
class EvaluationAutomationRuleCategory {
 public:
  AWS_CONNECT_API EvaluationAutomationRuleCategory() = default;
  AWS_CONNECT_API EvaluationAutomationRuleCategory(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationAutomationRuleCategory& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A category label.</p>
   */
  inline const Aws::String& GetCategory() const { return m_category; }
  inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
  template <typename CategoryT = Aws::String>
  void SetCategory(CategoryT&& value) {
    m_categoryHasBeenSet = true;
    m_category = std::forward<CategoryT>(value);
  }
  template <typename CategoryT = Aws::String>
  EvaluationAutomationRuleCategory& WithCategory(CategoryT&& value) {
    SetCategory(std::forward<CategoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An automation condition for a Contact Lens category.</p>
   */
  inline QuestionRuleCategoryAutomationCondition GetCondition() const { return m_condition; }
  inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
  inline void SetCondition(QuestionRuleCategoryAutomationCondition value) {
    m_conditionHasBeenSet = true;
    m_condition = value;
  }
  inline EvaluationAutomationRuleCategory& WithCondition(QuestionRuleCategoryAutomationCondition value) {
    SetCondition(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A point of interest in a contact transcript that indicates match of
   * condition.</p>
   */
  inline const Aws::Vector<EvaluationTranscriptPointOfInterest>& GetPointsOfInterest() const { return m_pointsOfInterest; }
  inline bool PointsOfInterestHasBeenSet() const { return m_pointsOfInterestHasBeenSet; }
  template <typename PointsOfInterestT = Aws::Vector<EvaluationTranscriptPointOfInterest>>
  void SetPointsOfInterest(PointsOfInterestT&& value) {
    m_pointsOfInterestHasBeenSet = true;
    m_pointsOfInterest = std::forward<PointsOfInterestT>(value);
  }
  template <typename PointsOfInterestT = Aws::Vector<EvaluationTranscriptPointOfInterest>>
  EvaluationAutomationRuleCategory& WithPointsOfInterest(PointsOfInterestT&& value) {
    SetPointsOfInterest(std::forward<PointsOfInterestT>(value));
    return *this;
  }
  template <typename PointsOfInterestT = EvaluationTranscriptPointOfInterest>
  EvaluationAutomationRuleCategory& AddPointsOfInterest(PointsOfInterestT&& value) {
    m_pointsOfInterestHasBeenSet = true;
    m_pointsOfInterest.emplace_back(std::forward<PointsOfInterestT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_category;

  QuestionRuleCategoryAutomationCondition m_condition{QuestionRuleCategoryAutomationCondition::NOT_SET};

  Aws::Vector<EvaluationTranscriptPointOfInterest> m_pointsOfInterest;
  bool m_categoryHasBeenSet = false;
  bool m_conditionHasBeenSet = false;
  bool m_pointsOfInterestHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
