/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyReportSourceDocument.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyRuleReport.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyVariableReport.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
 * <p>A comprehensive analysis report that measures how accurately a generated
 * policy represents the source documents. The report includes coverage and
 * accuracy scores, detailed grounding information linking policy elements to
 * source statements, and annotated document content.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyFidelityReport">AWS
 * API Reference</a></p>
 */
class AutomatedReasoningPolicyFidelityReport {
 public:
  AWS_BEDROCK_API AutomatedReasoningPolicyFidelityReport() = default;
  AWS_BEDROCK_API AutomatedReasoningPolicyFidelityReport(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API AutomatedReasoningPolicyFidelityReport& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A score from 0.0 to 1.0 indicating how well the policy covers the statements
   * in the source documents. A higher score means more of the source content is
   * represented in the policy.</p>
   */
  inline double GetCoverageScore() const { return m_coverageScore; }
  inline bool CoverageScoreHasBeenSet() const { return m_coverageScoreHasBeenSet; }
  inline void SetCoverageScore(double value) {
    m_coverageScoreHasBeenSet = true;
    m_coverageScore = value;
  }
  inline AutomatedReasoningPolicyFidelityReport& WithCoverageScore(double value) {
    SetCoverageScore(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A score from 0.0 to 1.0 indicating how accurate the policy rules are relative
   * to the source documents. A higher score means the policy rules more faithfully
   * represent the source material.</p>
   */
  inline double GetAccuracyScore() const { return m_accuracyScore; }
  inline bool AccuracyScoreHasBeenSet() const { return m_accuracyScoreHasBeenSet; }
  inline void SetAccuracyScore(double value) {
    m_accuracyScoreHasBeenSet = true;
    m_accuracyScore = value;
  }
  inline AutomatedReasoningPolicyFidelityReport& WithAccuracyScore(double value) {
    SetAccuracyScore(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A mapping from rule identifiers to detailed fidelity reports for each rule,
   * showing which source statements ground each rule and how accurate it is.</p>
   */
  inline const Aws::Map<Aws::String, AutomatedReasoningPolicyRuleReport>& GetRuleReports() const { return m_ruleReports; }
  inline bool RuleReportsHasBeenSet() const { return m_ruleReportsHasBeenSet; }
  template <typename RuleReportsT = Aws::Map<Aws::String, AutomatedReasoningPolicyRuleReport>>
  void SetRuleReports(RuleReportsT&& value) {
    m_ruleReportsHasBeenSet = true;
    m_ruleReports = std::forward<RuleReportsT>(value);
  }
  template <typename RuleReportsT = Aws::Map<Aws::String, AutomatedReasoningPolicyRuleReport>>
  AutomatedReasoningPolicyFidelityReport& WithRuleReports(RuleReportsT&& value) {
    SetRuleReports(std::forward<RuleReportsT>(value));
    return *this;
  }
  template <typename RuleReportsKeyT = Aws::String, typename RuleReportsValueT = AutomatedReasoningPolicyRuleReport>
  AutomatedReasoningPolicyFidelityReport& AddRuleReports(RuleReportsKeyT&& key, RuleReportsValueT&& value) {
    m_ruleReportsHasBeenSet = true;
    m_ruleReports.emplace(std::forward<RuleReportsKeyT>(key), std::forward<RuleReportsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A mapping from variable names to detailed fidelity reports for each variable,
   * showing which source statements ground each variable and how accurate it is.</p>
   */
  inline const Aws::Map<Aws::String, AutomatedReasoningPolicyVariableReport>& GetVariableReports() const { return m_variableReports; }
  inline bool VariableReportsHasBeenSet() const { return m_variableReportsHasBeenSet; }
  template <typename VariableReportsT = Aws::Map<Aws::String, AutomatedReasoningPolicyVariableReport>>
  void SetVariableReports(VariableReportsT&& value) {
    m_variableReportsHasBeenSet = true;
    m_variableReports = std::forward<VariableReportsT>(value);
  }
  template <typename VariableReportsT = Aws::Map<Aws::String, AutomatedReasoningPolicyVariableReport>>
  AutomatedReasoningPolicyFidelityReport& WithVariableReports(VariableReportsT&& value) {
    SetVariableReports(std::forward<VariableReportsT>(value));
    return *this;
  }
  template <typename VariableReportsKeyT = Aws::String, typename VariableReportsValueT = AutomatedReasoningPolicyVariableReport>
  AutomatedReasoningPolicyFidelityReport& AddVariableReports(VariableReportsKeyT&& key, VariableReportsValueT&& value) {
    m_variableReportsHasBeenSet = true;
    m_variableReports.emplace(std::forward<VariableReportsKeyT>(key), std::forward<VariableReportsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of source documents with their content broken down into atomic
   * statements and annotated with line numbers for precise referencing.</p>
   */
  inline const Aws::Vector<AutomatedReasoningPolicyReportSourceDocument>& GetDocumentSources() const { return m_documentSources; }
  inline bool DocumentSourcesHasBeenSet() const { return m_documentSourcesHasBeenSet; }
  template <typename DocumentSourcesT = Aws::Vector<AutomatedReasoningPolicyReportSourceDocument>>
  void SetDocumentSources(DocumentSourcesT&& value) {
    m_documentSourcesHasBeenSet = true;
    m_documentSources = std::forward<DocumentSourcesT>(value);
  }
  template <typename DocumentSourcesT = Aws::Vector<AutomatedReasoningPolicyReportSourceDocument>>
  AutomatedReasoningPolicyFidelityReport& WithDocumentSources(DocumentSourcesT&& value) {
    SetDocumentSources(std::forward<DocumentSourcesT>(value));
    return *this;
  }
  template <typename DocumentSourcesT = AutomatedReasoningPolicyReportSourceDocument>
  AutomatedReasoningPolicyFidelityReport& AddDocumentSources(DocumentSourcesT&& value) {
    m_documentSourcesHasBeenSet = true;
    m_documentSources.emplace_back(std::forward<DocumentSourcesT>(value));
    return *this;
  }
  ///@}
 private:
  double m_coverageScore{0.0};

  double m_accuracyScore{0.0};

  Aws::Map<Aws::String, AutomatedReasoningPolicyRuleReport> m_ruleReports;

  Aws::Map<Aws::String, AutomatedReasoningPolicyVariableReport> m_variableReports;

  Aws::Vector<AutomatedReasoningPolicyReportSourceDocument> m_documentSources;
  bool m_coverageScoreHasBeenSet = false;
  bool m_accuracyScoreHasBeenSet = false;
  bool m_ruleReportsHasBeenSet = false;
  bool m_variableReportsHasBeenSet = false;
  bool m_documentSourcesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
