/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/FindingDiscardReason.h>
#include <aws/continuum/model/FindingSeverityId.h>
#include <aws/continuum/model/FindingStatus.h>
#include <aws/continuum/model/FindingType.h>
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
 * <p>A summary of a finding returned in list responses. Shares
 * FindingLifecycleFields with the read operations so the list and get projections
 * cannot drift. Carries a lean content subset -- fetch the finding for its full
 * contents.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/FindingSummary">AWS
 * API Reference</a></p>
 */
class FindingSummary {
 public:
  AWS_CONTINUUM_API FindingSummary() = default;
  AWS_CONTINUUM_API FindingSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API FindingSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the finding.</p>
   */
  inline const Aws::String& GetFindingId() const { return m_findingId; }
  inline bool FindingIdHasBeenSet() const { return m_findingIdHasBeenSet; }
  template <typename FindingIdT = Aws::String>
  void SetFindingId(FindingIdT&& value) {
    m_findingIdHasBeenSet = true;
    m_findingId = std::forward<FindingIdT>(value);
  }
  template <typename FindingIdT = Aws::String>
  FindingSummary& WithFindingId(FindingIdT&& value) {
    SetFindingId(std::forward<FindingIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the finding.</p>
   */
  inline const Aws::String& GetFindingArn() const { return m_findingArn; }
  inline bool FindingArnHasBeenSet() const { return m_findingArnHasBeenSet; }
  template <typename FindingArnT = Aws::String>
  void SetFindingArn(FindingArnT&& value) {
    m_findingArnHasBeenSet = true;
    m_findingArn = std::forward<FindingArnT>(value);
  }
  template <typename FindingArnT = Aws::String>
  FindingSummary& WithFindingArn(FindingArnT&& value) {
    SetFindingArn(std::forward<FindingArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The environment that owns the finding.</p>
   */
  inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
  inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
  template <typename EnvironmentIdT = Aws::String>
  void SetEnvironmentId(EnvironmentIdT&& value) {
    m_environmentIdHasBeenSet = true;
    m_environmentId = std::forward<EnvironmentIdT>(value);
  }
  template <typename EnvironmentIdT = Aws::String>
  FindingSummary& WithEnvironmentId(EnvironmentIdT&& value) {
    SetEnvironmentId(std::forward<EnvironmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The system that produced the finding.</p>
   */
  inline const Aws::String& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = Aws::String>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = Aws::String>
  FindingSummary& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The producer's own identifier for the finding.</p>
   */
  inline const Aws::String& GetSourceFindingId() const { return m_sourceFindingId; }
  inline bool SourceFindingIdHasBeenSet() const { return m_sourceFindingIdHasBeenSet; }
  template <typename SourceFindingIdT = Aws::String>
  void SetSourceFindingId(SourceFindingIdT&& value) {
    m_sourceFindingIdHasBeenSet = true;
    m_sourceFindingId = std::forward<SourceFindingIdT>(value);
  }
  template <typename SourceFindingIdT = Aws::String>
  FindingSummary& WithSourceFindingId(SourceFindingIdT&& value) {
    SetSourceFindingId(std::forward<SourceFindingIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the producer reported the finding -- its own clock, which is not
   * Continuum's ingestion time. <code>createdAt</code> is when Continuum accepted
   * it; these are genuinely different instants and a reader usually wants this
   * one.</p> <p>For CreateCodeFinding, this is the submitted OCSF document's own
   * top-level <code>time</code>. For findings Continuum's scanner produces, it is
   * the finding's own creation time.</p> <p>Continuum does not validate it for
   * plausibility: a producer's value is echoed as given, so a <code>timestamp</code>
   * here asserts the unit and format, not that the instant is genuine.</p>
   */
  inline const Aws::Utils::DateTime& GetReportedAt() const { return m_reportedAt; }
  inline bool ReportedAtHasBeenSet() const { return m_reportedAtHasBeenSet; }
  template <typename ReportedAtT = Aws::Utils::DateTime>
  void SetReportedAt(ReportedAtT&& value) {
    m_reportedAtHasBeenSet = true;
    m_reportedAt = std::forward<ReportedAtT>(value);
  }
  template <typename ReportedAtT = Aws::Utils::DateTime>
  FindingSummary& WithReportedAt(ReportedAtT&& value) {
    SetReportedAt(std::forward<ReportedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current lifecycle status of the finding.</p>
   */
  inline FindingStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(FindingStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline FindingSummary& WithStatus(FindingStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the status last transitioned.</p>
   */
  inline const Aws::Utils::DateTime& GetStatusUpdatedAt() const { return m_statusUpdatedAt; }
  inline bool StatusUpdatedAtHasBeenSet() const { return m_statusUpdatedAtHasBeenSet; }
  template <typename StatusUpdatedAtT = Aws::Utils::DateTime>
  void SetStatusUpdatedAt(StatusUpdatedAtT&& value) {
    m_statusUpdatedAtHasBeenSet = true;
    m_statusUpdatedAt = std::forward<StatusUpdatedAtT>(value);
  }
  template <typename StatusUpdatedAtT = Aws::Utils::DateTime>
  FindingSummary& WithStatusUpdatedAt(StatusUpdatedAtT&& value) {
    SetStatusUpdatedAt(std::forward<StatusUpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the finding was ingested.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  FindingSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scan that produced the finding, when it came from one. For a finding
   * Continuum's scanner produced, this is the Continuum scan run (see GetCodeScan).
   * For a finding submitted with CreateCodeFinding, it is the OCSF document's
   * <code>metadata.correlation_uid</code>, when that value is a valid ScanRunId.
   * Absent when the finding did not come from a scan.</p>
   */
  inline const Aws::String& GetScanRunId() const { return m_scanRunId; }
  inline bool ScanRunIdHasBeenSet() const { return m_scanRunIdHasBeenSet; }
  template <typename ScanRunIdT = Aws::String>
  void SetScanRunId(ScanRunIdT&& value) {
    m_scanRunIdHasBeenSet = true;
    m_scanRunId = std::forward<ScanRunIdT>(value);
  }
  template <typename ScanRunIdT = Aws::String>
  FindingSummary& WithScanRunId(ScanRunIdT&& value) {
    SetScanRunId(std::forward<ScanRunIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Human-readable context about the current status.</p>
   */
  inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
  inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
  template <typename StatusMessageT = Aws::String>
  void SetStatusMessage(StatusMessageT&& value) {
    m_statusMessageHasBeenSet = true;
    m_statusMessage = std::forward<StatusMessageT>(value);
  }
  template <typename StatusMessageT = Aws::String>
  FindingSummary& WithStatusMessage(StatusMessageT&& value) {
    SetStatusMessage(std::forward<StatusMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Why the finding was not escalated. Present only when status is DISCARDED.</p>
   */
  inline FindingDiscardReason GetDiscardReason() const { return m_discardReason; }
  inline bool DiscardReasonHasBeenSet() const { return m_discardReasonHasBeenSet; }
  inline void SetDiscardReason(FindingDiscardReason value) {
    m_discardReasonHasBeenSet = true;
    m_discardReason = value;
  }
  inline FindingSummary& WithDiscardReason(FindingDiscardReason value) {
    SetDiscardReason(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Customer-facing explanation accompanying <code>discardReason</code>.</p>
   */
  inline const Aws::String& GetDiscardReasoning() const { return m_discardReasoning; }
  inline bool DiscardReasoningHasBeenSet() const { return m_discardReasoningHasBeenSet; }
  template <typename DiscardReasoningT = Aws::String>
  void SetDiscardReasoning(DiscardReasoningT&& value) {
    m_discardReasoningHasBeenSet = true;
    m_discardReasoning = std::forward<DiscardReasoningT>(value);
  }
  template <typename DiscardReasoningT = Aws::String>
  FindingSummary& WithDiscardReasoning(DiscardReasoningT&& value) {
    SetDiscardReasoning(std::forward<DiscardReasoningT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The existing issue this finding duplicates. Present only for the
   * DUPLICATE_OF_* discard reasons.</p>
   */
  inline const Aws::String& GetDuplicateOfIssueId() const { return m_duplicateOfIssueId; }
  inline bool DuplicateOfIssueIdHasBeenSet() const { return m_duplicateOfIssueIdHasBeenSet; }
  template <typename DuplicateOfIssueIdT = Aws::String>
  void SetDuplicateOfIssueId(DuplicateOfIssueIdT&& value) {
    m_duplicateOfIssueIdHasBeenSet = true;
    m_duplicateOfIssueId = std::forward<DuplicateOfIssueIdT>(value);
  }
  template <typename DuplicateOfIssueIdT = Aws::String>
  FindingSummary& WithDuplicateOfIssueId(DuplicateOfIssueIdT&& value) {
    SetDuplicateOfIssueId(std::forward<DuplicateOfIssueIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The issue Continuum created from this finding.</p>
   */
  inline const Aws::String& GetCreatedIssueId() const { return m_createdIssueId; }
  inline bool CreatedIssueIdHasBeenSet() const { return m_createdIssueIdHasBeenSet; }
  template <typename CreatedIssueIdT = Aws::String>
  void SetCreatedIssueId(CreatedIssueIdT&& value) {
    m_createdIssueIdHasBeenSet = true;
    m_createdIssueId = std::forward<CreatedIssueIdT>(value);
  }
  template <typename CreatedIssueIdT = Aws::String>
  FindingSummary& WithCreatedIssueId(CreatedIssueIdT&& value) {
    SetCreatedIssueId(std::forward<CreatedIssueIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When processing finished, whether by creating an issue or discarding. Absent
   * while the finding is still in flight.</p>
   */
  inline const Aws::Utils::DateTime& GetCompletedAt() const { return m_completedAt; }
  inline bool CompletedAtHasBeenSet() const { return m_completedAtHasBeenSet; }
  template <typename CompletedAtT = Aws::Utils::DateTime>
  void SetCompletedAt(CompletedAtT&& value) {
    m_completedAtHasBeenSet = true;
    m_completedAt = std::forward<CompletedAtT>(value);
  }
  template <typename CompletedAtT = Aws::Utils::DateTime>
  FindingSummary& WithCompletedAt(CompletedAtT&& value) {
    SetCompletedAt(std::forward<CompletedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>What kind of finding this is.</p>
   */
  inline FindingType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(FindingType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline FindingSummary& WithType(FindingType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The producer's title for the finding.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  FindingSummary& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The finding's severity.</p>
   */
  inline FindingSeverityId GetSeverity() const { return m_severity; }
  inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
  inline void SetSeverity(FindingSeverityId value) {
    m_severityHasBeenSet = true;
    m_severity = value;
  }
  inline FindingSummary& WithSeverity(FindingSeverityId value) {
    SetSeverity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The producer's vulnerability category.</p>
   */
  inline const Aws::String& GetCategory() const { return m_category; }
  inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
  template <typename CategoryT = Aws::String>
  void SetCategory(CategoryT&& value) {
    m_categoryHasBeenSet = true;
    m_category = std::forward<CategoryT>(value);
  }
  template <typename CategoryT = Aws::String>
  FindingSummary& WithCategory(CategoryT&& value) {
    SetCategory(std::forward<CategoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The file the finding is about, when it has a code location.</p>
   */
  inline const Aws::String& GetFilePath() const { return m_filePath; }
  inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }
  template <typename FilePathT = Aws::String>
  void SetFilePath(FilePathT&& value) {
    m_filePathHasBeenSet = true;
    m_filePath = std::forward<FilePathT>(value);
  }
  template <typename FilePathT = Aws::String>
  FindingSummary& WithFilePath(FilePathT&& value) {
    SetFilePath(std::forward<FilePathT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_findingId;

  Aws::String m_findingArn;

  Aws::String m_environmentId;

  Aws::String m_source;

  Aws::String m_sourceFindingId;

  Aws::Utils::DateTime m_reportedAt{};

  FindingStatus m_status{FindingStatus::NOT_SET};

  Aws::Utils::DateTime m_statusUpdatedAt{};

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_scanRunId;

  Aws::String m_statusMessage;

  FindingDiscardReason m_discardReason{FindingDiscardReason::NOT_SET};

  Aws::String m_discardReasoning;

  Aws::String m_duplicateOfIssueId;

  Aws::String m_createdIssueId;

  Aws::Utils::DateTime m_completedAt{};

  FindingType m_type{FindingType::NOT_SET};

  Aws::String m_title;

  FindingSeverityId m_severity{FindingSeverityId::NOT_SET};

  Aws::String m_category;

  Aws::String m_filePath;
  bool m_findingIdHasBeenSet = false;
  bool m_findingArnHasBeenSet = false;
  bool m_environmentIdHasBeenSet = false;
  bool m_sourceHasBeenSet = false;
  bool m_sourceFindingIdHasBeenSet = false;
  bool m_reportedAtHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusUpdatedAtHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_scanRunIdHasBeenSet = false;
  bool m_statusMessageHasBeenSet = false;
  bool m_discardReasonHasBeenSet = false;
  bool m_discardReasoningHasBeenSet = false;
  bool m_duplicateOfIssueIdHasBeenSet = false;
  bool m_createdIssueIdHasBeenSet = false;
  bool m_completedAtHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_titleHasBeenSet = false;
  bool m_severityHasBeenSet = false;
  bool m_categoryHasBeenSet = false;
  bool m_filePathHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
