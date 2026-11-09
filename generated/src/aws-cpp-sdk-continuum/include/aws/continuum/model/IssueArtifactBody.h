/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/PatchBody.h>
#include <aws/continuum/model/PrevalidationSignalsBody.h>
#include <aws/continuum/model/RemediationProposalBody.h>
#include <aws/continuum/model/ValidationEvidenceBody.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>The projected body of an artifact. The active member is selected by the
 * artifact's artifactType, and for a type that carries more than one payload kind
 * by the stored content's own discriminator; <code>raw</code> carries content for
 * types with no defined shape yet and for content that did not match its
 * shape.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/IssueArtifactBody">AWS
 * API Reference</a></p>
 */
class IssueArtifactBody {
 public:
  AWS_CONTINUUM_API IssueArtifactBody() = default;
  AWS_CONTINUUM_API IssueArtifactBody(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API IssueArtifactBody& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Projected VALIDATION_EVIDENCE content.</p>
   */
  inline const ValidationEvidenceBody& GetValidationEvidence() const { return m_validationEvidence; }
  inline bool ValidationEvidenceHasBeenSet() const { return m_validationEvidenceHasBeenSet; }
  template <typename ValidationEvidenceT = ValidationEvidenceBody>
  void SetValidationEvidence(ValidationEvidenceT&& value) {
    m_validationEvidenceHasBeenSet = true;
    m_validationEvidence = std::forward<ValidationEvidenceT>(value);
  }
  template <typename ValidationEvidenceT = ValidationEvidenceBody>
  IssueArtifactBody& WithValidationEvidence(ValidationEvidenceT&& value) {
    SetValidationEvidence(std::forward<ValidationEvidenceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Projected EVIDENCE content whose stored envelope declares
   * <code>artifact_kind: prevalidation_signals</code> — the severity signals
   * prioritization uses.</p> <p>One artifactType can select different members here:
   * EVIDENCE also carries the prioritization markdown narrative, which is not JSON
   * and so returns through <code>raw</code>. The member is therefore chosen by
   * artifactType AND, for a type that carries more than one payload kind, the
   * content's own discriminator.</p>
   */
  inline const PrevalidationSignalsBody& GetPrevalidationSignals() const { return m_prevalidationSignals; }
  inline bool PrevalidationSignalsHasBeenSet() const { return m_prevalidationSignalsHasBeenSet; }
  template <typename PrevalidationSignalsT = PrevalidationSignalsBody>
  void SetPrevalidationSignals(PrevalidationSignalsT&& value) {
    m_prevalidationSignalsHasBeenSet = true;
    m_prevalidationSignals = std::forward<PrevalidationSignalsT>(value);
  }
  template <typename PrevalidationSignalsT = PrevalidationSignalsBody>
  IssueArtifactBody& WithPrevalidationSignals(PrevalidationSignalsT&& value) {
    SetPrevalidationSignals(std::forward<PrevalidationSignalsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Projected REMEDIATION_PROPOSAL content: a patch the remediation agent
   * produced, with the descriptors needed to apply and verify it.</p>
   * <p>REMEDIATION_PROPOSAL content that does not match this shape is returned
   * through <code>raw</code>.</p>
   */
  inline const RemediationProposalBody& GetRemediationProposal() const { return m_remediationProposal; }
  inline bool RemediationProposalHasBeenSet() const { return m_remediationProposalHasBeenSet; }
  template <typename RemediationProposalT = RemediationProposalBody>
  void SetRemediationProposal(RemediationProposalT&& value) {
    m_remediationProposalHasBeenSet = true;
    m_remediationProposal = std::forward<RemediationProposalT>(value);
  }
  template <typename RemediationProposalT = RemediationProposalBody>
  IssueArtifactBody& WithRemediationProposal(RemediationProposalT&& value) {
    SetRemediationProposal(std::forward<RemediationProposalT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Projected PATCH content: the remediation patch for one repository, with the
   * descriptors needed to verify and apply it and the state of its delivery to the
   * customer's own bucket or repository.</p> <p>Every PATCH projects here. The
   * descriptors come from members Control Plane computes or owns when it stores the
   * patch, not from producer metadata, so this member is the whole PATCH contract
   * and <code>metadata</code> is omitted for it.</p>
   */
  inline const PatchBody& GetPatch() const { return m_patch; }
  inline bool PatchHasBeenSet() const { return m_patchHasBeenSet; }
  template <typename PatchT = PatchBody>
  void SetPatch(PatchT&& value) {
    m_patchHasBeenSet = true;
    m_patch = std::forward<PatchT>(value);
  }
  template <typename PatchT = PatchBody>
  IssueArtifactBody& WithPatch(PatchT&& value) {
    SetPatch(std::forward<PatchT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The producer's content verbatim, for an artifactType with no defined shape or
   * content that failed to parse against its shape.</p>
   */
  inline const Aws::String& GetRaw() const { return m_raw; }
  inline bool RawHasBeenSet() const { return m_rawHasBeenSet; }
  template <typename RawT = Aws::String>
  void SetRaw(RawT&& value) {
    m_rawHasBeenSet = true;
    m_raw = std::forward<RawT>(value);
  }
  template <typename RawT = Aws::String>
  IssueArtifactBody& WithRaw(RawT&& value) {
    SetRaw(std::forward<RawT>(value));
    return *this;
  }
  ///@}
 private:
  ValidationEvidenceBody m_validationEvidence;

  PrevalidationSignalsBody m_prevalidationSignals;

  RemediationProposalBody m_remediationProposal;

  PatchBody m_patch;

  Aws::String m_raw;
  bool m_validationEvidenceHasBeenSet = false;
  bool m_prevalidationSignalsHasBeenSet = false;
  bool m_remediationProposalHasBeenSet = false;
  bool m_patchHasBeenSet = false;
  bool m_rawHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
