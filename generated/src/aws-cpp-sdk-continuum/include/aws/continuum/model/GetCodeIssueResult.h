/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/IssueEvidenceAvailability.h>
#include <aws/continuum/model/IssuePatchDelivery.h>
#include <aws/continuum/model/IssuePhase.h>
#include <aws/continuum/model/IssueSeverity.h>
#include <aws/continuum/model/IssueStatus.h>
#include <aws/continuum/model/IssueStatusReason.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Continuum {
namespace Model {
/**
 * <p>Contains the current state and details of the requested issue.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/GetCodeIssueOutput">AWS
 * API Reference</a></p>
 */
class GetCodeIssueResult {
 public:
  AWS_CONTINUUM_API GetCodeIssueResult() = default;
  AWS_CONTINUUM_API GetCodeIssueResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONTINUUM_API GetCodeIssueResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the issue.</p>
   */
  inline const Aws::String& GetIssueId() const { return m_issueId; }
  template <typename IssueIdT = Aws::String>
  void SetIssueId(IssueIdT&& value) {
    m_issueIdHasBeenSet = true;
    m_issueId = std::forward<IssueIdT>(value);
  }
  template <typename IssueIdT = Aws::String>
  GetCodeIssueResult& WithIssueId(IssueIdT&& value) {
    SetIssueId(std::forward<IssueIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the issue.</p>
   */
  inline const Aws::String& GetIssueArn() const { return m_issueArn; }
  template <typename IssueArnT = Aws::String>
  void SetIssueArn(IssueArnT&& value) {
    m_issueArnHasBeenSet = true;
    m_issueArn = std::forward<IssueArnT>(value);
  }
  template <typename IssueArnT = Aws::String>
  GetCodeIssueResult& WithIssueArn(IssueArnT&& value) {
    SetIssueArn(std::forward<IssueArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the issue.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetCodeIssueResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A free-form synopsis of the issue.</p>
   */
  inline const Aws::String& GetSynopsis() const { return m_synopsis; }
  template <typename SynopsisT = Aws::String>
  void SetSynopsis(SynopsisT&& value) {
    m_synopsisHasBeenSet = true;
    m_synopsis = std::forward<SynopsisT>(value);
  }
  template <typename SynopsisT = Aws::String>
  GetCodeIssueResult& WithSynopsis(SynopsisT&& value) {
    SetSynopsis(std::forward<SynopsisT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Current severity: the FindingSeverity seed at create, overwritten by the
   * authoritative severity that prioritization assigns after validation.</p>
   */
  inline IssueSeverity GetSeverity() const { return m_severity; }
  inline void SetSeverity(IssueSeverity value) {
    m_severityHasBeenSet = true;
    m_severity = value;
  }
  inline GetCodeIssueResult& WithSeverity(IssueSeverity value) {
    SetSeverity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The likelihood that this issue is a true positive, expressed as a percentage
   * (0-100).</p>
   */
  inline int GetConfidence() const { return m_confidence; }
  inline void SetConfidence(int value) {
    m_confidenceHasBeenSet = true;
    m_confidence = value;
  }
  inline GetCodeIssueResult& WithConfidence(int value) {
    SetConfidence(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The justification for the current severity. Always leads with a
   * customer-facing basis clause synthesized from how the severity was determined
   * (e.g. &quot;Severity from finding.&quot;, &quot;Severity from Continuum
   * system.&quot;); when prioritization has run, its own reasoning follows. Issues
   * created before the basis clause was introduced return their original reasoning
   * without it.</p>
   */
  inline const Aws::String& GetSeverityReasoning() const { return m_severityReasoning; }
  template <typename SeverityReasoningT = Aws::String>
  void SetSeverityReasoning(SeverityReasoningT&& value) {
    m_severityReasoningHasBeenSet = true;
    m_severityReasoning = std::forward<SeverityReasoningT>(value);
  }
  template <typename SeverityReasoningT = Aws::String>
  GetCodeIssueResult& WithSeverityReasoning(SeverityReasoningT&& value) {
    SetSeverityReasoning(std::forward<SeverityReasoningT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The remediation completion summary, when the green stage has run.</p>
   */
  inline const Aws::String& GetSummary() const { return m_summary; }
  template <typename SummaryT = Aws::String>
  void SetSummary(SummaryT&& value) {
    m_summaryHasBeenSet = true;
    m_summary = std::forward<SummaryT>(value);
  }
  template <typename SummaryT = Aws::String>
  GetCodeIssueResult& WithSummary(SummaryT&& value) {
    SetSummary(std::forward<SummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The findings that motivated this issue. Bare identifiers only -- a caller
   * authorized for GetCodeIssue is not necessarily authorized to read finding
   * detail; call GetCodeFinding for that. Every referenced finding is included
   * regardless of origin (both CustomerUploaded and ContinuumScanner).</p>
   */
  inline const Aws::Vector<Aws::String>& GetFindingIds() const { return m_findingIds; }
  template <typename FindingIdsT = Aws::Vector<Aws::String>>
  void SetFindingIds(FindingIdsT&& value) {
    m_findingIdsHasBeenSet = true;
    m_findingIds = std::forward<FindingIdsT>(value);
  }
  template <typename FindingIdsT = Aws::Vector<Aws::String>>
  GetCodeIssueResult& WithFindingIds(FindingIdsT&& value) {
    SetFindingIds(std::forward<FindingIdsT>(value));
    return *this;
  }
  template <typename FindingIdsT = Aws::String>
  GetCodeIssueResult& AddFindingIds(FindingIdsT&& value) {
    m_findingIdsHasBeenSet = true;
    m_findingIds.emplace_back(std::forward<FindingIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current lifecycle status of the issue.</p>
   */
  inline IssueStatus GetStatus() const { return m_status; }
  inline void SetStatus(IssueStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetCodeIssueResult& WithStatus(IssueStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The part of the workflow the issue is in. Present when status is IN_PROGRESS,
   * and when status is FAILED and the failing phase is known.</p>
   */
  inline IssuePhase GetPhase() const { return m_phase; }
  inline void SetPhase(IssuePhase value) {
    m_phaseHasBeenSet = true;
    m_phase = value;
  }
  inline GetCodeIssueResult& WithPhase(IssuePhase value) {
    SetPhase(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Why the issue failed. Present only when status is FAILED.</p>
   */
  inline IssueStatusReason GetStatusReason() const { return m_statusReason; }
  inline void SetStatusReason(IssueStatusReason value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = value;
  }
  inline GetCodeIssueResult& WithStatusReason(IssueStatusReason value) {
    SetStatusReason(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Customer-facing explanation of statusReason. Present only when status is
   * FAILED.</p>
   */
  inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
  template <typename StatusMessageT = Aws::String>
  void SetStatusMessage(StatusMessageT&& value) {
    m_statusMessageHasBeenSet = true;
    m_statusMessage = std::forward<StatusMessageT>(value);
  }
  template <typename StatusMessageT = Aws::String>
  GetCodeIssueResult& WithStatusMessage(StatusMessageT&& value) {
    SetStatusMessage(std::forward<StatusMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the status or phase last changed.</p>
   */
  inline const Aws::Utils::DateTime& GetStatusUpdatedAt() const { return m_statusUpdatedAt; }
  template <typename StatusUpdatedAtT = Aws::Utils::DateTime>
  void SetStatusUpdatedAt(StatusUpdatedAtT&& value) {
    m_statusUpdatedAtHasBeenSet = true;
    m_statusUpdatedAt = std::forward<StatusUpdatedAtT>(value);
  }
  template <typename StatusUpdatedAtT = Aws::Utils::DateTime>
  GetCodeIssueResult& WithStatusUpdatedAt(StatusUpdatedAtT&& value) {
    SetStatusUpdatedAt(std::forward<StatusUpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the issue was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetCodeIssueResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when any field of the issue last changed. Advances on every
   * mutation (including score-only updates that do not transition status), so it is
   * greater than or equal to statusUpdatedAt.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GetCodeIssueResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the issue has any attached evidence (formerly 'artifacts': tool
   * output, remediation proposals, patches). NONE = no evidence; AVAILABLE = at
   * least one evidence item exists. Computed at read time.</p>
   */
  inline IssueEvidenceAvailability GetEvidenceAvailability() const { return m_evidenceAvailability; }
  inline void SetEvidenceAvailability(IssueEvidenceAvailability value) {
    m_evidenceAvailabilityHasBeenSet = true;
    m_evidenceAvailability = value;
  }
  inline GetCodeIssueResult& WithEvidenceAvailability(IssueEvidenceAvailability value) {
    SetEvidenceAvailability(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Customer delivery of the issue's patches, summarized from its PATCH artifacts
   * at read time. Absent when no patch has a destination delivery.</p>
   */
  inline const IssuePatchDelivery& GetPatchDelivery() const { return m_patchDelivery; }
  template <typename PatchDeliveryT = IssuePatchDelivery>
  void SetPatchDelivery(PatchDeliveryT&& value) {
    m_patchDeliveryHasBeenSet = true;
    m_patchDelivery = std::forward<PatchDeliveryT>(value);
  }
  template <typename PatchDeliveryT = IssuePatchDelivery>
  GetCodeIssueResult& WithPatchDelivery(PatchDeliveryT&& value) {
    SetPatchDelivery(std::forward<PatchDeliveryT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetCodeIssueResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_issueId;

  Aws::String m_issueArn;

  Aws::String m_name;

  Aws::String m_synopsis;

  IssueSeverity m_severity{IssueSeverity::NOT_SET};

  int m_confidence{0};

  Aws::String m_severityReasoning;

  Aws::String m_summary;

  Aws::Vector<Aws::String> m_findingIds;

  IssueStatus m_status{IssueStatus::NOT_SET};

  IssuePhase m_phase{IssuePhase::NOT_SET};

  IssueStatusReason m_statusReason{IssueStatusReason::NOT_SET};

  Aws::String m_statusMessage;

  Aws::Utils::DateTime m_statusUpdatedAt{};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  IssueEvidenceAvailability m_evidenceAvailability{IssueEvidenceAvailability::NOT_SET};

  IssuePatchDelivery m_patchDelivery;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_issueIdHasBeenSet = false;
  bool m_issueArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_synopsisHasBeenSet = false;
  bool m_severityHasBeenSet = false;
  bool m_confidenceHasBeenSet = false;
  bool m_severityReasoningHasBeenSet = false;
  bool m_summaryHasBeenSet = false;
  bool m_findingIdsHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_phaseHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
  bool m_statusMessageHasBeenSet = false;
  bool m_statusUpdatedAtHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_evidenceAvailabilityHasBeenSet = false;
  bool m_patchDeliveryHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
