/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/NotebookRunStatus.h>
#include <aws/datazone/model/TriggerSource.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DataZone {
namespace Model {

/**
 * <p>The summary of a notebook run in Amazon SageMaker Unified
 * Studio.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/NotebookRunSummary">AWS
 * API Reference</a></p>
 */
class NotebookRunSummary {
 public:
  AWS_DATAZONE_API NotebookRunSummary() = default;
  AWS_DATAZONE_API NotebookRunSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API NotebookRunSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the notebook run.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  NotebookRunSummary& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the Amazon SageMaker Unified Studio domain.</p>
   */
  inline const Aws::String& GetDomainId() const { return m_domainId; }
  inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
  template <typename DomainIdT = Aws::String>
  void SetDomainId(DomainIdT&& value) {
    m_domainIdHasBeenSet = true;
    m_domainId = std::forward<DomainIdT>(value);
  }
  template <typename DomainIdT = Aws::String>
  NotebookRunSummary& WithDomainId(DomainIdT&& value) {
    SetDomainId(std::forward<DomainIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the project that owns the notebook run.</p>
   */
  inline const Aws::String& GetOwningProjectId() const { return m_owningProjectId; }
  inline bool OwningProjectIdHasBeenSet() const { return m_owningProjectIdHasBeenSet; }
  template <typename OwningProjectIdT = Aws::String>
  void SetOwningProjectId(OwningProjectIdT&& value) {
    m_owningProjectIdHasBeenSet = true;
    m_owningProjectId = std::forward<OwningProjectIdT>(value);
  }
  template <typename OwningProjectIdT = Aws::String>
  NotebookRunSummary& WithOwningProjectId(OwningProjectIdT&& value) {
    SetOwningProjectId(std::forward<OwningProjectIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the notebook.</p>
   */
  inline const Aws::String& GetNotebookId() const { return m_notebookId; }
  inline bool NotebookIdHasBeenSet() const { return m_notebookIdHasBeenSet; }
  template <typename NotebookIdT = Aws::String>
  void SetNotebookId(NotebookIdT&& value) {
    m_notebookIdHasBeenSet = true;
    m_notebookId = std::forward<NotebookIdT>(value);
  }
  template <typename NotebookIdT = Aws::String>
  NotebookRunSummary& WithNotebookId(NotebookIdT&& value) {
    SetNotebookId(std::forward<NotebookIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the schedule associated with the notebook run.</p>
   */
  inline const Aws::String& GetScheduleId() const { return m_scheduleId; }
  inline bool ScheduleIdHasBeenSet() const { return m_scheduleIdHasBeenSet; }
  template <typename ScheduleIdT = Aws::String>
  void SetScheduleId(ScheduleIdT&& value) {
    m_scheduleIdHasBeenSet = true;
    m_scheduleId = std::forward<ScheduleIdT>(value);
  }
  template <typename ScheduleIdT = Aws::String>
  NotebookRunSummary& WithScheduleId(ScheduleIdT&& value) {
    SetScheduleId(std::forward<ScheduleIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the notebook run.</p>
   */
  inline NotebookRunStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(NotebookRunStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline NotebookRunSummary& WithStatus(NotebookRunStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source that triggered the notebook run.</p>
   */
  inline const TriggerSource& GetTriggerSource() const { return m_triggerSource; }
  inline bool TriggerSourceHasBeenSet() const { return m_triggerSourceHasBeenSet; }
  template <typename TriggerSourceT = TriggerSource>
  void SetTriggerSource(TriggerSourceT&& value) {
    m_triggerSourceHasBeenSet = true;
    m_triggerSource = std::forward<TriggerSourceT>(value);
  }
  template <typename TriggerSourceT = TriggerSource>
  NotebookRunSummary& WithTriggerSource(TriggerSourceT&& value) {
    SetTriggerSource(std::forward<TriggerSourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the notebook run was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  NotebookRunSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the user who created the notebook run.</p>
   */
  inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
  inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
  template <typename CreatedByT = Aws::String>
  void SetCreatedBy(CreatedByT&& value) {
    m_createdByHasBeenSet = true;
    m_createdBy = std::forward<CreatedByT>(value);
  }
  template <typename CreatedByT = Aws::String>
  NotebookRunSummary& WithCreatedBy(CreatedByT&& value) {
    SetCreatedBy(std::forward<CreatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the notebook run was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  NotebookRunSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the user who last updated the notebook run.</p>
   */
  inline const Aws::String& GetUpdatedBy() const { return m_updatedBy; }
  inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }
  template <typename UpdatedByT = Aws::String>
  void SetUpdatedBy(UpdatedByT&& value) {
    m_updatedByHasBeenSet = true;
    m_updatedBy = std::forward<UpdatedByT>(value);
  }
  template <typename UpdatedByT = Aws::String>
  NotebookRunSummary& WithUpdatedBy(UpdatedByT&& value) {
    SetUpdatedBy(std::forward<UpdatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the notebook run started executing.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  NotebookRunSummary& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the notebook run completed.</p>
   */
  inline const Aws::Utils::DateTime& GetCompletedAt() const { return m_completedAt; }
  inline bool CompletedAtHasBeenSet() const { return m_completedAtHasBeenSet; }
  template <typename CompletedAtT = Aws::Utils::DateTime>
  void SetCompletedAt(CompletedAtT&& value) {
    m_completedAtHasBeenSet = true;
    m_completedAt = std::forward<CompletedAtT>(value);
  }
  template <typename CompletedAtT = Aws::Utils::DateTime>
  NotebookRunSummary& WithCompletedAt(CompletedAtT&& value) {
    SetCompletedAt(std::forward<CompletedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_domainId;

  Aws::String m_owningProjectId;

  Aws::String m_notebookId;

  Aws::String m_scheduleId;

  NotebookRunStatus m_status{NotebookRunStatus::NOT_SET};

  TriggerSource m_triggerSource;

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_createdBy;

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_updatedBy;

  Aws::Utils::DateTime m_startedAt{};

  Aws::Utils::DateTime m_completedAt{};
  bool m_idHasBeenSet = false;
  bool m_domainIdHasBeenSet = false;
  bool m_owningProjectIdHasBeenSet = false;
  bool m_notebookIdHasBeenSet = false;
  bool m_scheduleIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_triggerSourceHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_updatedByHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_completedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
