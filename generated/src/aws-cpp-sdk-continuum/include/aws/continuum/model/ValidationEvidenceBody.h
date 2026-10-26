/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/ExploitabilityVerdict.h>
#include <aws/continuum/model/FlowVerdict.h>
#include <aws/continuum/model/PerFindingResult.h>
#include <aws/continuum/model/ValidationExecutedProof.h>
#include <aws/continuum/model/ValidationExploitArtifact.h>
#include <aws/continuum/model/ValidationSourceAnalysis.h>
#include <aws/continuum/model/ValidationTerminalStatus.h>
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
namespace Continuum {
namespace Model {

/**
 * <p>Projected content for a VALIDATION_EVIDENCE artifact: the validation agent's
 * durable proof of exploitability.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/ValidationEvidenceBody">AWS
 * API Reference</a></p>
 */
class ValidationEvidenceBody {
 public:
  AWS_CONTINUUM_API ValidationEvidenceBody() = default;
  AWS_CONTINUUM_API ValidationEvidenceBody(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API ValidationEvidenceBody& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Exploitability verdict. Explicit UNCERTAIN replaces the producer's tri-state
   * <code>exploitable: true | false | null</code>, so an absent verdict is never
   * confused with a negative one.</p>
   */
  inline ExploitabilityVerdict GetExploitable() const { return m_exploitable; }
  inline bool ExploitableHasBeenSet() const { return m_exploitableHasBeenSet; }
  inline void SetExploitable(ExploitabilityVerdict value) {
    m_exploitableHasBeenSet = true;
    m_exploitable = value;
  }
  inline ValidationEvidenceBody& WithExploitable(ExploitabilityVerdict value) {
    SetExploitable(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How the validation run ended. Absent when the producer reported a status with
   * no mapping yet: the rest of the body still projects, so one unmapped enum never
   * costs a customer the whole artifact.</p>
   */
  inline ValidationTerminalStatus GetTerminalStatus() const { return m_terminalStatus; }
  inline bool TerminalStatusHasBeenSet() const { return m_terminalStatusHasBeenSet; }
  inline void SetTerminalStatus(ValidationTerminalStatus value) {
    m_terminalStatusHasBeenSet = true;
    m_terminalStatus = value;
  }
  inline ValidationEvidenceBody& WithTerminalStatus(ValidationTerminalStatus value) {
    SetTerminalStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>One verdict per attack flow assessed in the bundle.</p>
   */
  inline const Aws::Vector<FlowVerdict>& GetFlowVerdicts() const { return m_flowVerdicts; }
  inline bool FlowVerdictsHasBeenSet() const { return m_flowVerdictsHasBeenSet; }
  template <typename FlowVerdictsT = Aws::Vector<FlowVerdict>>
  void SetFlowVerdicts(FlowVerdictsT&& value) {
    m_flowVerdictsHasBeenSet = true;
    m_flowVerdicts = std::forward<FlowVerdictsT>(value);
  }
  template <typename FlowVerdictsT = Aws::Vector<FlowVerdict>>
  ValidationEvidenceBody& WithFlowVerdicts(FlowVerdictsT&& value) {
    SetFlowVerdicts(std::forward<FlowVerdictsT>(value));
    return *this;
  }
  template <typename FlowVerdictsT = FlowVerdict>
  ValidationEvidenceBody& AddFlowVerdicts(FlowVerdictsT&& value) {
    m_flowVerdictsHasBeenSet = true;
    m_flowVerdicts.emplace_back(std::forward<FlowVerdictsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Identifiers of attack flows upgraded to Confirmed provenance.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAttackFlowsConfirmed() const { return m_attackFlowsConfirmed; }
  inline bool AttackFlowsConfirmedHasBeenSet() const { return m_attackFlowsConfirmedHasBeenSet; }
  template <typename AttackFlowsConfirmedT = Aws::Vector<Aws::String>>
  void SetAttackFlowsConfirmed(AttackFlowsConfirmedT&& value) {
    m_attackFlowsConfirmedHasBeenSet = true;
    m_attackFlowsConfirmed = std::forward<AttackFlowsConfirmedT>(value);
  }
  template <typename AttackFlowsConfirmedT = Aws::Vector<Aws::String>>
  ValidationEvidenceBody& WithAttackFlowsConfirmed(AttackFlowsConfirmedT&& value) {
    SetAttackFlowsConfirmed(std::forward<AttackFlowsConfirmedT>(value));
    return *this;
  }
  template <typename AttackFlowsConfirmedT = Aws::String>
  ValidationEvidenceBody& AddAttackFlowsConfirmed(AttackFlowsConfirmedT&& value) {
    m_attackFlowsConfirmedHasBeenSet = true;
    m_attackFlowsConfirmed.emplace_back(std::forward<AttackFlowsConfirmedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Concrete payload and its observed effect, when validation produced one by
   * sending an HTTP request.</p> <p>Only an HTTP proof projects here. A validation
   * agent that proves exploitability by RUNNING code against the repository projects
   * <code>executedProof</code>, and one that proves it by reading the source
   * projects <code>sourceAnalysis</code>. All three are mutually exclusive: at most
   * one is present.</p>
   */
  inline const ValidationExploitArtifact& GetExploitArtifact() const { return m_exploitArtifact; }
  inline bool ExploitArtifactHasBeenSet() const { return m_exploitArtifactHasBeenSet; }
  template <typename ExploitArtifactT = ValidationExploitArtifact>
  void SetExploitArtifact(ExploitArtifactT&& value) {
    m_exploitArtifactHasBeenSet = true;
    m_exploitArtifact = std::forward<ExploitArtifactT>(value);
  }
  template <typename ExploitArtifactT = ValidationExploitArtifact>
  ValidationEvidenceBody& WithExploitArtifact(ExploitArtifactT&& value) {
    SetExploitArtifact(std::forward<ExploitArtifactT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Proof the agent produced by executing code against the repository under test,
   * with the output that execution produced.</p>
   */
  inline const ValidationExecutedProof& GetExecutedProof() const { return m_executedProof; }
  inline bool ExecutedProofHasBeenSet() const { return m_executedProofHasBeenSet; }
  template <typename ExecutedProofT = ValidationExecutedProof>
  void SetExecutedProof(ExecutedProofT&& value) {
    m_executedProofHasBeenSet = true;
    m_executedProof = std::forward<ExecutedProofT>(value);
  }
  template <typename ExecutedProofT = ValidationExecutedProof>
  ValidationEvidenceBody& WithExecutedProof(ExecutedProofT&& value) {
    SetExecutedProof(std::forward<ExecutedProofT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Proof the agent produced by reading the repository's source, with nothing
   * built or run.</p>
   */
  inline const ValidationSourceAnalysis& GetSourceAnalysis() const { return m_sourceAnalysis; }
  inline bool SourceAnalysisHasBeenSet() const { return m_sourceAnalysisHasBeenSet; }
  template <typename SourceAnalysisT = ValidationSourceAnalysis>
  void SetSourceAnalysis(SourceAnalysisT&& value) {
    m_sourceAnalysisHasBeenSet = true;
    m_sourceAnalysis = std::forward<SourceAnalysisT>(value);
  }
  template <typename SourceAnalysisT = ValidationSourceAnalysis>
  ValidationEvidenceBody& WithSourceAnalysis(SourceAnalysisT&& value) {
    SetSourceAnalysis(std::forward<SourceAnalysisT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Per-finding breakdown for a multi-finding bundle. Absent for a single-finding
   * bundle.</p>
   */
  inline const Aws::Vector<PerFindingResult>& GetPerFindingResults() const { return m_perFindingResults; }
  inline bool PerFindingResultsHasBeenSet() const { return m_perFindingResultsHasBeenSet; }
  template <typename PerFindingResultsT = Aws::Vector<PerFindingResult>>
  void SetPerFindingResults(PerFindingResultsT&& value) {
    m_perFindingResultsHasBeenSet = true;
    m_perFindingResults = std::forward<PerFindingResultsT>(value);
  }
  template <typename PerFindingResultsT = Aws::Vector<PerFindingResult>>
  ValidationEvidenceBody& WithPerFindingResults(PerFindingResultsT&& value) {
    SetPerFindingResults(std::forward<PerFindingResultsT>(value));
    return *this;
  }
  template <typename PerFindingResultsT = PerFindingResult>
  ValidationEvidenceBody& AddPerFindingResults(PerFindingResultsT&& value) {
    m_perFindingResultsHasBeenSet = true;
    m_perFindingResults.emplace_back(std::forward<PerFindingResultsT>(value));
    return *this;
  }
  ///@}
 private:
  ExploitabilityVerdict m_exploitable{ExploitabilityVerdict::NOT_SET};

  ValidationTerminalStatus m_terminalStatus{ValidationTerminalStatus::NOT_SET};

  Aws::Vector<FlowVerdict> m_flowVerdicts;

  Aws::Vector<Aws::String> m_attackFlowsConfirmed;

  ValidationExploitArtifact m_exploitArtifact;

  ValidationExecutedProof m_executedProof;

  ValidationSourceAnalysis m_sourceAnalysis;

  Aws::Vector<PerFindingResult> m_perFindingResults;
  bool m_exploitableHasBeenSet = false;
  bool m_terminalStatusHasBeenSet = false;
  bool m_flowVerdictsHasBeenSet = false;
  bool m_attackFlowsConfirmedHasBeenSet = false;
  bool m_exploitArtifactHasBeenSet = false;
  bool m_executedProofHasBeenSet = false;
  bool m_sourceAnalysisHasBeenSet = false;
  bool m_perFindingResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
