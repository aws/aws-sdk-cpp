/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/ExploitabilityVerdict.h>
#include <aws/continuum/model/FlowVerdict.h>
#include <aws/continuum/model/ReasoningStep.h>
#include <aws/continuum/model/ValidationExploitArtifact.h>
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
 * <p>Validation's result for one finding within a multi-finding
 * bundle.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/PerFindingResult">AWS
 * API Reference</a></p>
 */
class PerFindingResult {
 public:
  AWS_CONTINUUM_API PerFindingResult() = default;
  AWS_CONTINUUM_API PerFindingResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API PerFindingResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The finding assessed.</p>
   */
  inline const Aws::String& GetFindingId() const { return m_findingId; }
  inline bool FindingIdHasBeenSet() const { return m_findingIdHasBeenSet; }
  template <typename FindingIdT = Aws::String>
  void SetFindingId(FindingIdT&& value) {
    m_findingIdHasBeenSet = true;
    m_findingId = std::forward<FindingIdT>(value);
  }
  template <typename FindingIdT = Aws::String>
  PerFindingResult& WithFindingId(FindingIdT&& value) {
    SetFindingId(std::forward<FindingIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Exploitability verdict for this finding.</p>
   */
  inline ExploitabilityVerdict GetExploitable() const { return m_exploitable; }
  inline bool ExploitableHasBeenSet() const { return m_exploitableHasBeenSet; }
  inline void SetExploitable(ExploitabilityVerdict value) {
    m_exploitableHasBeenSet = true;
    m_exploitable = value;
  }
  inline PerFindingResult& WithExploitable(ExploitabilityVerdict value) {
    SetExploitable(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Confidence in this finding's verdict. Absent when out of range.</p>
   */
  inline double GetConfidence() const { return m_confidence; }
  inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
  inline void SetConfidence(double value) {
    m_confidenceHasBeenSet = true;
    m_confidence = value;
  }
  inline PerFindingResult& WithConfidence(double value) {
    SetConfidence(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Per-flow verdicts recorded for this finding.</p>
   */
  inline const Aws::Vector<FlowVerdict>& GetFlowVerdicts() const { return m_flowVerdicts; }
  inline bool FlowVerdictsHasBeenSet() const { return m_flowVerdictsHasBeenSet; }
  template <typename FlowVerdictsT = Aws::Vector<FlowVerdict>>
  void SetFlowVerdicts(FlowVerdictsT&& value) {
    m_flowVerdictsHasBeenSet = true;
    m_flowVerdicts = std::forward<FlowVerdictsT>(value);
  }
  template <typename FlowVerdictsT = Aws::Vector<FlowVerdict>>
  PerFindingResult& WithFlowVerdicts(FlowVerdictsT&& value) {
    SetFlowVerdicts(std::forward<FlowVerdictsT>(value));
    return *this;
  }
  template <typename FlowVerdictsT = FlowVerdict>
  PerFindingResult& AddFlowVerdicts(FlowVerdictsT&& value) {
    m_flowVerdictsHasBeenSet = true;
    m_flowVerdicts.emplace_back(std::forward<FlowVerdictsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Reasoning chain recorded for this finding.</p>
   */
  inline const Aws::Vector<ReasoningStep>& GetReasoningChain() const { return m_reasoningChain; }
  inline bool ReasoningChainHasBeenSet() const { return m_reasoningChainHasBeenSet; }
  template <typename ReasoningChainT = Aws::Vector<ReasoningStep>>
  void SetReasoningChain(ReasoningChainT&& value) {
    m_reasoningChainHasBeenSet = true;
    m_reasoningChain = std::forward<ReasoningChainT>(value);
  }
  template <typename ReasoningChainT = Aws::Vector<ReasoningStep>>
  PerFindingResult& WithReasoningChain(ReasoningChainT&& value) {
    SetReasoningChain(std::forward<ReasoningChainT>(value));
    return *this;
  }
  template <typename ReasoningChainT = ReasoningStep>
  PerFindingResult& AddReasoningChain(ReasoningChainT&& value) {
    m_reasoningChainHasBeenSet = true;
    m_reasoningChain.emplace_back(std::forward<ReasoningChainT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Exploit artifact produced for this finding, when there was one.</p>
   */
  inline const ValidationExploitArtifact& GetExploitArtifact() const { return m_exploitArtifact; }
  inline bool ExploitArtifactHasBeenSet() const { return m_exploitArtifactHasBeenSet; }
  template <typename ExploitArtifactT = ValidationExploitArtifact>
  void SetExploitArtifact(ExploitArtifactT&& value) {
    m_exploitArtifactHasBeenSet = true;
    m_exploitArtifact = std::forward<ExploitArtifactT>(value);
  }
  template <typename ExploitArtifactT = ValidationExploitArtifact>
  PerFindingResult& WithExploitArtifact(ExploitArtifactT&& value) {
    SetExploitArtifact(std::forward<ExploitArtifactT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_findingId;

  ExploitabilityVerdict m_exploitable{ExploitabilityVerdict::NOT_SET};

  double m_confidence{0.0};

  Aws::Vector<FlowVerdict> m_flowVerdicts;

  Aws::Vector<ReasoningStep> m_reasoningChain;

  ValidationExploitArtifact m_exploitArtifact;
  bool m_findingIdHasBeenSet = false;
  bool m_exploitableHasBeenSet = false;
  bool m_confidenceHasBeenSet = false;
  bool m_flowVerdictsHasBeenSet = false;
  bool m_reasoningChainHasBeenSet = false;
  bool m_exploitArtifactHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
