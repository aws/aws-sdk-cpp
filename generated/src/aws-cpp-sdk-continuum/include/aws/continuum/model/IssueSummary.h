/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/IssuePhase.h>
#include <aws/continuum/model/IssueSeverity.h>
#include <aws/continuum/model/IssueStatus.h>
#include <aws/continuum/model/IssueStatusReason.h>
#include <aws/core/utils/DateTime.h>
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
 * <p>A summary of an issue returned in list responses.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/IssueSummary">AWS
 * API Reference</a></p>
 */
class IssueSummary {
 public:
  AWS_CONTINUUM_API IssueSummary() = default;
  AWS_CONTINUUM_API IssueSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API IssueSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the issue.</p>
   */
  inline const Aws::String& GetIssueId() const { return m_issueId; }
  inline bool IssueIdHasBeenSet() const { return m_issueIdHasBeenSet; }
  template <typename IssueIdT = Aws::String>
  void SetIssueId(IssueIdT&& value) {
    m_issueIdHasBeenSet = true;
    m_issueId = std::forward<IssueIdT>(value);
  }
  template <typename IssueIdT = Aws::String>
  IssueSummary& WithIssueId(IssueIdT&& value) {
    SetIssueId(std::forward<IssueIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the issue.</p>
   */
  inline const Aws::String& GetIssueArn() const { return m_issueArn; }
  inline bool IssueArnHasBeenSet() const { return m_issueArnHasBeenSet; }
  template <typename IssueArnT = Aws::String>
  void SetIssueArn(IssueArnT&& value) {
    m_issueArnHasBeenSet = true;
    m_issueArn = std::forward<IssueArnT>(value);
  }
  template <typename IssueArnT = Aws::String>
  IssueSummary& WithIssueArn(IssueArnT&& value) {
    SetIssueArn(std::forward<IssueArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the issue.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  IssueSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Scanner-derived severity assigned to the issue.</p>
   */
  inline IssueSeverity GetSeverity() const { return m_severity; }
  inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
  inline void SetSeverity(IssueSeverity value) {
    m_severityHasBeenSet = true;
    m_severity = value;
  }
  inline IssueSummary& WithSeverity(IssueSeverity value) {
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
  inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
  inline void SetConfidence(int value) {
    m_confidenceHasBeenSet = true;
    m_confidence = value;
  }
  inline IssueSummary& WithConfidence(int value) {
    SetConfidence(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current lifecycle status of the issue.</p>
   */
  inline IssueStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(IssueStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline IssueSummary& WithStatus(IssueStatus value) {
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
  inline bool PhaseHasBeenSet() const { return m_phaseHasBeenSet; }
  inline void SetPhase(IssuePhase value) {
    m_phaseHasBeenSet = true;
    m_phase = value;
  }
  inline IssueSummary& WithPhase(IssuePhase value) {
    SetPhase(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Why the issue failed. Present only when status is FAILED.</p>
   */
  inline IssueStatusReason GetStatusReason() const { return m_statusReason; }
  inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
  inline void SetStatusReason(IssueStatusReason value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = value;
  }
  inline IssueSummary& WithStatusReason(IssueStatusReason value) {
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
  inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
  template <typename StatusMessageT = Aws::String>
  void SetStatusMessage(StatusMessageT&& value) {
    m_statusMessageHasBeenSet = true;
    m_statusMessage = std::forward<StatusMessageT>(value);
  }
  template <typename StatusMessageT = Aws::String>
  IssueSummary& WithStatusMessage(StatusMessageT&& value) {
    SetStatusMessage(std::forward<StatusMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the status or phase last changed.</p>
   */
  inline const Aws::Utils::DateTime& GetStatusUpdatedAt() const { return m_statusUpdatedAt; }
  inline bool StatusUpdatedAtHasBeenSet() const { return m_statusUpdatedAtHasBeenSet; }
  template <typename StatusUpdatedAtT = Aws::Utils::DateTime>
  void SetStatusUpdatedAt(StatusUpdatedAtT&& value) {
    m_statusUpdatedAtHasBeenSet = true;
    m_statusUpdatedAt = std::forward<StatusUpdatedAtT>(value);
  }
  template <typename StatusUpdatedAtT = Aws::Utils::DateTime>
  IssueSummary& WithStatusUpdatedAt(StatusUpdatedAtT&& value) {
    SetStatusUpdatedAt(std::forward<StatusUpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the issue was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  IssueSummary& WithCreatedAt(CreatedAtT&& value) {
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
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  IssueSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_issueId;

  Aws::String m_issueArn;

  Aws::String m_name;

  IssueSeverity m_severity{IssueSeverity::NOT_SET};

  int m_confidence{0};

  IssueStatus m_status{IssueStatus::NOT_SET};

  IssuePhase m_phase{IssuePhase::NOT_SET};

  IssueStatusReason m_statusReason{IssueStatusReason::NOT_SET};

  Aws::String m_statusMessage;

  Aws::Utils::DateTime m_statusUpdatedAt{};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_issueIdHasBeenSet = false;
  bool m_issueArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_severityHasBeenSet = false;
  bool m_confidenceHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_phaseHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
  bool m_statusMessageHasBeenSet = false;
  bool m_statusUpdatedAtHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
