/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyStatementReference.h>
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
namespace Bedrock {
namespace Model {

/**
 * <p>Provides detailed fidelity analysis for a specific policy rule, including
 * which source document statements support it and how accurate the rule
 * is.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyRuleReport">AWS
 * API Reference</a></p>
 */
class AutomatedReasoningPolicyRuleReport {
 public:
  AWS_BEDROCK_API AutomatedReasoningPolicyRuleReport() = default;
  AWS_BEDROCK_API AutomatedReasoningPolicyRuleReport(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API AutomatedReasoningPolicyRuleReport& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the policy rule being analyzed in this report.</p>
   */
  inline const Aws::String& GetRule() const { return m_rule; }
  inline bool RuleHasBeenSet() const { return m_ruleHasBeenSet; }
  template <typename RuleT = Aws::String>
  void SetRule(RuleT&& value) {
    m_ruleHasBeenSet = true;
    m_rule = std::forward<RuleT>(value);
  }
  template <typename RuleT = Aws::String>
  AutomatedReasoningPolicyRuleReport& WithRule(RuleT&& value) {
    SetRule(std::forward<RuleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>References to statements from the source documents that provide the basis or
   * justification for this rule.</p>
   */
  inline const Aws::Vector<AutomatedReasoningPolicyStatementReference>& GetGroundingStatements() const { return m_groundingStatements; }
  inline bool GroundingStatementsHasBeenSet() const { return m_groundingStatementsHasBeenSet; }
  template <typename GroundingStatementsT = Aws::Vector<AutomatedReasoningPolicyStatementReference>>
  void SetGroundingStatements(GroundingStatementsT&& value) {
    m_groundingStatementsHasBeenSet = true;
    m_groundingStatements = std::forward<GroundingStatementsT>(value);
  }
  template <typename GroundingStatementsT = Aws::Vector<AutomatedReasoningPolicyStatementReference>>
  AutomatedReasoningPolicyRuleReport& WithGroundingStatements(GroundingStatementsT&& value) {
    SetGroundingStatements(std::forward<GroundingStatementsT>(value));
    return *this;
  }
  template <typename GroundingStatementsT = AutomatedReasoningPolicyStatementReference>
  AutomatedReasoningPolicyRuleReport& AddGroundingStatements(GroundingStatementsT&& value) {
    m_groundingStatementsHasBeenSet = true;
    m_groundingStatements.emplace_back(std::forward<GroundingStatementsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Explanations describing how the source statements support and justify this
   * specific rule.</p>
   */
  inline const Aws::Vector<Aws::String>& GetGroundingJustifications() const { return m_groundingJustifications; }
  inline bool GroundingJustificationsHasBeenSet() const { return m_groundingJustificationsHasBeenSet; }
  template <typename GroundingJustificationsT = Aws::Vector<Aws::String>>
  void SetGroundingJustifications(GroundingJustificationsT&& value) {
    m_groundingJustificationsHasBeenSet = true;
    m_groundingJustifications = std::forward<GroundingJustificationsT>(value);
  }
  template <typename GroundingJustificationsT = Aws::Vector<Aws::String>>
  AutomatedReasoningPolicyRuleReport& WithGroundingJustifications(GroundingJustificationsT&& value) {
    SetGroundingJustifications(std::forward<GroundingJustificationsT>(value));
    return *this;
  }
  template <typename GroundingJustificationsT = Aws::String>
  AutomatedReasoningPolicyRuleReport& AddGroundingJustifications(GroundingJustificationsT&& value) {
    m_groundingJustificationsHasBeenSet = true;
    m_groundingJustifications.emplace_back(std::forward<GroundingJustificationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A score from 0.0 to 1.0 indicating how accurately this rule represents the
   * source material.</p>
   */
  inline double GetAccuracyScore() const { return m_accuracyScore; }
  inline bool AccuracyScoreHasBeenSet() const { return m_accuracyScoreHasBeenSet; }
  inline void SetAccuracyScore(double value) {
    m_accuracyScoreHasBeenSet = true;
    m_accuracyScore = value;
  }
  inline AutomatedReasoningPolicyRuleReport& WithAccuracyScore(double value) {
    SetAccuracyScore(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A textual explanation of the accuracy score, describing why the rule received
   * this particular accuracy rating.</p>
   */
  inline const Aws::String& GetAccuracyJustification() const { return m_accuracyJustification; }
  inline bool AccuracyJustificationHasBeenSet() const { return m_accuracyJustificationHasBeenSet; }
  template <typename AccuracyJustificationT = Aws::String>
  void SetAccuracyJustification(AccuracyJustificationT&& value) {
    m_accuracyJustificationHasBeenSet = true;
    m_accuracyJustification = std::forward<AccuracyJustificationT>(value);
  }
  template <typename AccuracyJustificationT = Aws::String>
  AutomatedReasoningPolicyRuleReport& WithAccuracyJustification(AccuracyJustificationT&& value) {
    SetAccuracyJustification(std::forward<AccuracyJustificationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_rule;

  Aws::Vector<AutomatedReasoningPolicyStatementReference> m_groundingStatements;

  Aws::Vector<Aws::String> m_groundingJustifications;

  double m_accuracyScore{0.0};

  Aws::String m_accuracyJustification;
  bool m_ruleHasBeenSet = false;
  bool m_groundingStatementsHasBeenSet = false;
  bool m_groundingJustificationsHasBeenSet = false;
  bool m_accuracyScoreHasBeenSet = false;
  bool m_accuracyJustificationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
