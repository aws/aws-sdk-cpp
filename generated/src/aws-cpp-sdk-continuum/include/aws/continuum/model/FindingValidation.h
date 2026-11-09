/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/FindingBlockingReason.h>
#include <aws/continuum/model/FindingEvidence.h>
#include <aws/continuum/model/FindingSeverityAdjustment.h>
#include <aws/continuum/model/FindingVerdict.h>
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
 * <p>A validator's assessment of a finding. Present only when validation actually
 * ran -- absent for finding types that are ingested untested, rather than
 * reporting a verdict Continuum did not reach.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/FindingValidation">AWS
 * API Reference</a></p>
 */
class FindingValidation {
 public:
  AWS_CONTINUUM_API FindingValidation() = default;
  AWS_CONTINUUM_API FindingValidation(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API FindingValidation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The validator's conclusion.</p>
   */
  inline FindingVerdict GetVerdict() const { return m_verdict; }
  inline bool VerdictHasBeenSet() const { return m_verdictHasBeenSet; }
  inline void SetVerdict(FindingVerdict value) {
    m_verdictHasBeenSet = true;
    m_verdict = value;
  }
  inline FindingValidation& WithVerdict(FindingVerdict value) {
    SetVerdict(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Why the validator reached that verdict.</p>
   */
  inline FindingBlockingReason GetBlockingReason() const { return m_blockingReason; }
  inline bool BlockingReasonHasBeenSet() const { return m_blockingReasonHasBeenSet; }
  inline void SetBlockingReason(FindingBlockingReason value) {
    m_blockingReasonHasBeenSet = true;
    m_blockingReason = value;
  }
  inline FindingValidation& WithBlockingReason(FindingBlockingReason value) {
    SetBlockingReason(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The validator's confidence, from 0.0 to 1.0 inclusive. Advisory: it does not
   * drive Continuum's own routing decisions. The range is enforced server-side, not
   * by a @range trait -- the smithy-rs server SDK does not support range constraints
   * on double shapes (smithy-rs#2007).</p>
   */
  inline double GetConfidence() const { return m_confidence; }
  inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
  inline void SetConfidence(double value) {
    m_confidenceHasBeenSet = true;
    m_confidence = value;
  }
  inline FindingValidation& WithConfidence(double value) {
    SetConfidence(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The validator's reasoning.</p>
   */
  inline const Aws::String& GetRationale() const { return m_rationale; }
  inline bool RationaleHasBeenSet() const { return m_rationaleHasBeenSet; }
  template <typename RationaleT = Aws::String>
  void SetRationale(RationaleT&& value) {
    m_rationaleHasBeenSet = true;
    m_rationale = std::forward<RationaleT>(value);
  }
  template <typename RationaleT = Aws::String>
  FindingValidation& WithRationale(RationaleT&& value) {
    SetRationale(std::forward<RationaleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The validator's severity conclusion.</p>
   */
  inline FindingSeverityAdjustment GetSeverityAdjustment() const { return m_severityAdjustment; }
  inline bool SeverityAdjustmentHasBeenSet() const { return m_severityAdjustmentHasBeenSet; }
  inline void SetSeverityAdjustment(FindingSeverityAdjustment value) {
    m_severityAdjustmentHasBeenSet = true;
    m_severityAdjustment = value;
  }
  inline FindingValidation& WithSeverityAdjustment(FindingSeverityAdjustment value) {
    SetSeverityAdjustment(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Controls the validator found that reduce exploitability.</p>
   */
  inline const Aws::Vector<Aws::String>& GetMitigatingControls() const { return m_mitigatingControls; }
  inline bool MitigatingControlsHasBeenSet() const { return m_mitigatingControlsHasBeenSet; }
  template <typename MitigatingControlsT = Aws::Vector<Aws::String>>
  void SetMitigatingControls(MitigatingControlsT&& value) {
    m_mitigatingControlsHasBeenSet = true;
    m_mitigatingControls = std::forward<MitigatingControlsT>(value);
  }
  template <typename MitigatingControlsT = Aws::Vector<Aws::String>>
  FindingValidation& WithMitigatingControls(MitigatingControlsT&& value) {
    SetMitigatingControls(std::forward<MitigatingControlsT>(value));
    return *this;
  }
  template <typename MitigatingControlsT = Aws::String>
  FindingValidation& AddMitigatingControls(MitigatingControlsT&& value) {
    m_mitigatingControlsHasBeenSet = true;
    m_mitigatingControls.emplace_back(std::forward<MitigatingControlsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Conditions exploitation depends on, which bound the severity.</p>
   */
  inline const Aws::Vector<Aws::String>& GetPreconditions() const { return m_preconditions; }
  inline bool PreconditionsHasBeenSet() const { return m_preconditionsHasBeenSet; }
  template <typename PreconditionsT = Aws::Vector<Aws::String>>
  void SetPreconditions(PreconditionsT&& value) {
    m_preconditionsHasBeenSet = true;
    m_preconditions = std::forward<PreconditionsT>(value);
  }
  template <typename PreconditionsT = Aws::Vector<Aws::String>>
  FindingValidation& WithPreconditions(PreconditionsT&& value) {
    SetPreconditions(std::forward<PreconditionsT>(value));
    return *this;
  }
  template <typename PreconditionsT = Aws::String>
  FindingValidation& AddPreconditions(PreconditionsT&& value) {
    m_preconditionsHasBeenSet = true;
    m_preconditions.emplace_back(std::forward<PreconditionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Code citations supporting the verdict.</p>
   */
  inline const Aws::Vector<FindingEvidence>& GetEvidence() const { return m_evidence; }
  inline bool EvidenceHasBeenSet() const { return m_evidenceHasBeenSet; }
  template <typename EvidenceT = Aws::Vector<FindingEvidence>>
  void SetEvidence(EvidenceT&& value) {
    m_evidenceHasBeenSet = true;
    m_evidence = std::forward<EvidenceT>(value);
  }
  template <typename EvidenceT = Aws::Vector<FindingEvidence>>
  FindingValidation& WithEvidence(EvidenceT&& value) {
    SetEvidence(std::forward<EvidenceT>(value));
    return *this;
  }
  template <typename EvidenceT = FindingEvidence>
  FindingValidation& AddEvidence(EvidenceT&& value) {
    m_evidenceHasBeenSet = true;
    m_evidence.emplace_back(std::forward<EvidenceT>(value));
    return *this;
  }
  ///@}
 private:
  FindingVerdict m_verdict{FindingVerdict::NOT_SET};

  FindingBlockingReason m_blockingReason{FindingBlockingReason::NOT_SET};

  double m_confidence{0.0};

  Aws::String m_rationale;

  FindingSeverityAdjustment m_severityAdjustment{FindingSeverityAdjustment::NOT_SET};

  Aws::Vector<Aws::String> m_mitigatingControls;

  Aws::Vector<Aws::String> m_preconditions;

  Aws::Vector<FindingEvidence> m_evidence;
  bool m_verdictHasBeenSet = false;
  bool m_blockingReasonHasBeenSet = false;
  bool m_confidenceHasBeenSet = false;
  bool m_rationaleHasBeenSet = false;
  bool m_severityAdjustmentHasBeenSet = false;
  bool m_mitigatingControlsHasBeenSet = false;
  bool m_preconditionsHasBeenSet = false;
  bool m_evidenceHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
