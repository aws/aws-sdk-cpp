/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/AnalysisType.h>
#include <aws/guardduty/model/InvestigationAccountAnalysis.h>
#include <aws/guardduty/model/InvestigationIndicator.h>
#include <aws/guardduty/model/InvestigationThreatAssessment.h>
#include <aws/guardduty/model/KubernetesPolicyViolation.h>
#include <aws/guardduty/model/Process.h>
#include <aws/guardduty/model/S3Analysis.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains an assessment that GuardDuty derived from the data during an
 * investigation, such as a threat assessment, a comparison against normal
 * behavior, or a process lineage. The record contains at most one of the payload
 * members, the one that corresponds to <code>AnalysisType</code>.
 * <code>Indicators</code> can accompany any analysis type.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/AnalysisRecord">AWS
 * API Reference</a></p>
 */
class AnalysisRecord {
 public:
  AWS_GUARDDUTY_API AnalysisRecord() = default;
  AWS_GUARDDUTY_API AnalysisRecord(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API AnalysisRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The kind of analysis. The value identifies the payload member that can be
   * set: <code>REPUTATION</code>, <code>THREAT_ASSESSMENT</code>, and
   * <code>RDS_THREAT_ASSESSMENT</code> (<code>ThreatAssessment</code>);
   * <code>KUBERNETES_POLICY_VIOLATION</code>
   * (<code>KubernetesPolicyViolation</code>); <code>S3_EXPOSURE</code>,
   * <code>S3_ACTOR_CONTEXT</code>, and <code>S3_PEN_TEST</code>
   * (<code>S3Analysis</code>); <code>PROCESS_LINEAGE</code>
   * (<code>Processes</code>); and <code>TREND</code> and <code>BASELINE</code>
   * (<code>AccountAnalysis</code>).</p>
   */
  inline AnalysisType GetAnalysisType() const { return m_analysisType; }
  inline bool AnalysisTypeHasBeenSet() const { return m_analysisTypeHasBeenSet; }
  inline void SetAnalysisType(AnalysisType value) {
    m_analysisTypeHasBeenSet = true;
    m_analysisType = value;
  }
  inline AnalysisRecord& WithAnalysisType(AnalysisType value) {
    SetAnalysisType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A threat assessment. Set when <code>AnalysisType</code> is
   * <code>REPUTATION</code>, <code>THREAT_ASSESSMENT</code>, or
   * <code>RDS_THREAT_ASSESSMENT</code>.</p>
   */
  inline const InvestigationThreatAssessment& GetThreatAssessment() const { return m_threatAssessment; }
  inline bool ThreatAssessmentHasBeenSet() const { return m_threatAssessmentHasBeenSet; }
  template <typename ThreatAssessmentT = InvestigationThreatAssessment>
  void SetThreatAssessment(ThreatAssessmentT&& value) {
    m_threatAssessmentHasBeenSet = true;
    m_threatAssessment = std::forward<ThreatAssessmentT>(value);
  }
  template <typename ThreatAssessmentT = InvestigationThreatAssessment>
  AnalysisRecord& WithThreatAssessment(ThreatAssessmentT&& value) {
    SetThreatAssessment(std::forward<ThreatAssessmentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An assessment of a Kubernetes policy violation. Set when
   * <code>AnalysisType</code> is <code>KUBERNETES_POLICY_VIOLATION</code>.</p>
   */
  inline const KubernetesPolicyViolation& GetKubernetesPolicyViolation() const { return m_kubernetesPolicyViolation; }
  inline bool KubernetesPolicyViolationHasBeenSet() const { return m_kubernetesPolicyViolationHasBeenSet; }
  template <typename KubernetesPolicyViolationT = KubernetesPolicyViolation>
  void SetKubernetesPolicyViolation(KubernetesPolicyViolationT&& value) {
    m_kubernetesPolicyViolationHasBeenSet = true;
    m_kubernetesPolicyViolation = std::forward<KubernetesPolicyViolationT>(value);
  }
  template <typename KubernetesPolicyViolationT = KubernetesPolicyViolation>
  AnalysisRecord& WithKubernetesPolicyViolation(KubernetesPolicyViolationT&& value) {
    SetKubernetesPolicyViolation(std::forward<KubernetesPolicyViolationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An analysis of Amazon S3 activity or exposure. Set when
   * <code>AnalysisType</code> is <code>S3_EXPOSURE</code>,
   * <code>S3_ACTOR_CONTEXT</code>, or <code>S3_PEN_TEST</code>.</p>
   */
  inline const S3Analysis& GetS3Analysis() const { return m_s3Analysis; }
  inline bool S3AnalysisHasBeenSet() const { return m_s3AnalysisHasBeenSet; }
  template <typename S3AnalysisT = S3Analysis>
  void SetS3Analysis(S3AnalysisT&& value) {
    m_s3AnalysisHasBeenSet = true;
    m_s3Analysis = std::forward<S3AnalysisT>(value);
  }
  template <typename S3AnalysisT = S3Analysis>
  AnalysisRecord& WithS3Analysis(S3AnalysisT&& value) {
    SetS3Analysis(std::forward<S3AnalysisT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The processes in a process lineage. Set when <code>AnalysisType</code> is
   * <code>PROCESS_LINEAGE</code>.</p>
   */
  inline const Aws::Vector<Process>& GetProcesses() const { return m_processes; }
  inline bool ProcessesHasBeenSet() const { return m_processesHasBeenSet; }
  template <typename ProcessesT = Aws::Vector<Process>>
  void SetProcesses(ProcessesT&& value) {
    m_processesHasBeenSet = true;
    m_processes = std::forward<ProcessesT>(value);
  }
  template <typename ProcessesT = Aws::Vector<Process>>
  AnalysisRecord& WithProcesses(ProcessesT&& value) {
    SetProcesses(std::forward<ProcessesT>(value));
    return *this;
  }
  template <typename ProcessesT = Process>
  AnalysisRecord& AddProcesses(ProcessesT&& value) {
    m_processesHasBeenSet = true;
    m_processes.emplace_back(std::forward<ProcessesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An analysis of the findings in an account over time. Set when
   * <code>AnalysisType</code> is <code>TREND</code> or <code>BASELINE</code>.</p>
   */
  inline const InvestigationAccountAnalysis& GetAccountAnalysis() const { return m_accountAnalysis; }
  inline bool AccountAnalysisHasBeenSet() const { return m_accountAnalysisHasBeenSet; }
  template <typename AccountAnalysisT = InvestigationAccountAnalysis>
  void SetAccountAnalysis(AccountAnalysisT&& value) {
    m_accountAnalysisHasBeenSet = true;
    m_accountAnalysis = std::forward<AccountAnalysisT>(value);
  }
  template <typename AccountAnalysisT = InvestigationAccountAnalysis>
  AnalysisRecord& WithAccountAnalysis(AccountAnalysisT&& value) {
    SetAccountAnalysis(std::forward<AccountAnalysisT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The threat indicators associated with the analysis, such as an IP address, a
   * domain, or a file hash.</p>
   */
  inline const Aws::Vector<InvestigationIndicator>& GetIndicators() const { return m_indicators; }
  inline bool IndicatorsHasBeenSet() const { return m_indicatorsHasBeenSet; }
  template <typename IndicatorsT = Aws::Vector<InvestigationIndicator>>
  void SetIndicators(IndicatorsT&& value) {
    m_indicatorsHasBeenSet = true;
    m_indicators = std::forward<IndicatorsT>(value);
  }
  template <typename IndicatorsT = Aws::Vector<InvestigationIndicator>>
  AnalysisRecord& WithIndicators(IndicatorsT&& value) {
    SetIndicators(std::forward<IndicatorsT>(value));
    return *this;
  }
  template <typename IndicatorsT = InvestigationIndicator>
  AnalysisRecord& AddIndicators(IndicatorsT&& value) {
    m_indicatorsHasBeenSet = true;
    m_indicators.emplace_back(std::forward<IndicatorsT>(value));
    return *this;
  }
  ///@}
 private:
  AnalysisType m_analysisType{AnalysisType::NOT_SET};

  InvestigationThreatAssessment m_threatAssessment;

  KubernetesPolicyViolation m_kubernetesPolicyViolation;

  S3Analysis m_s3Analysis;

  Aws::Vector<Process> m_processes;

  InvestigationAccountAnalysis m_accountAnalysis;

  Aws::Vector<InvestigationIndicator> m_indicators;
  bool m_analysisTypeHasBeenSet = false;
  bool m_threatAssessmentHasBeenSet = false;
  bool m_kubernetesPolicyViolationHasBeenSet = false;
  bool m_s3AnalysisHasBeenSet = false;
  bool m_processesHasBeenSet = false;
  bool m_accountAnalysisHasBeenSet = false;
  bool m_indicatorsHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
