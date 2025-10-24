﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/Change.h>
#include <aws/cleanrooms/model/ChangeRequestStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace CleanRooms {
namespace Model {

/**
 * <p>Summary information about a collaboration change request.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/CollaborationChangeRequestSummary">AWS
 * API Reference</a></p>
 */
class CollaborationChangeRequestSummary {
 public:
  AWS_CLEANROOMS_API CollaborationChangeRequestSummary() = default;
  AWS_CLEANROOMS_API CollaborationChangeRequestSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API CollaborationChangeRequestSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier for the change request.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  CollaborationChangeRequestSummary& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the collaboration.</p>
   */
  inline const Aws::String& GetCollaborationId() const { return m_collaborationId; }
  inline bool CollaborationIdHasBeenSet() const { return m_collaborationIdHasBeenSet; }
  template <typename CollaborationIdT = Aws::String>
  void SetCollaborationId(CollaborationIdT&& value) {
    m_collaborationIdHasBeenSet = true;
    m_collaborationId = std::forward<CollaborationIdT>(value);
  }
  template <typename CollaborationIdT = Aws::String>
  CollaborationChangeRequestSummary& WithCollaborationId(CollaborationIdT&& value) {
    SetCollaborationId(std::forward<CollaborationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the change request was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
  inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
  template <typename CreateTimeT = Aws::Utils::DateTime>
  void SetCreateTime(CreateTimeT&& value) {
    m_createTimeHasBeenSet = true;
    m_createTime = std::forward<CreateTimeT>(value);
  }
  template <typename CreateTimeT = Aws::Utils::DateTime>
  CollaborationChangeRequestSummary& WithCreateTime(CreateTimeT&& value) {
    SetCreateTime(std::forward<CreateTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the change request was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
  inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
  template <typename UpdateTimeT = Aws::Utils::DateTime>
  void SetUpdateTime(UpdateTimeT&& value) {
    m_updateTimeHasBeenSet = true;
    m_updateTime = std::forward<UpdateTimeT>(value);
  }
  template <typename UpdateTimeT = Aws::Utils::DateTime>
  CollaborationChangeRequestSummary& WithUpdateTime(UpdateTimeT&& value) {
    SetUpdateTime(std::forward<UpdateTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the change request.</p>
   */
  inline ChangeRequestStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ChangeRequestStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CollaborationChangeRequestSummary& WithStatus(ChangeRequestStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the change request was automatically approved.</p>
   */
  inline bool GetIsAutoApproved() const { return m_isAutoApproved; }
  inline bool IsAutoApprovedHasBeenSet() const { return m_isAutoApprovedHasBeenSet; }
  inline void SetIsAutoApproved(bool value) {
    m_isAutoApprovedHasBeenSet = true;
    m_isAutoApproved = value;
  }
  inline CollaborationChangeRequestSummary& WithIsAutoApproved(bool value) {
    SetIsAutoApproved(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Summary of the changes in this change request.</p>
   */
  inline const Aws::Vector<Change>& GetChanges() const { return m_changes; }
  inline bool ChangesHasBeenSet() const { return m_changesHasBeenSet; }
  template <typename ChangesT = Aws::Vector<Change>>
  void SetChanges(ChangesT&& value) {
    m_changesHasBeenSet = true;
    m_changes = std::forward<ChangesT>(value);
  }
  template <typename ChangesT = Aws::Vector<Change>>
  CollaborationChangeRequestSummary& WithChanges(ChangesT&& value) {
    SetChanges(std::forward<ChangesT>(value));
    return *this;
  }
  template <typename ChangesT = Change>
  CollaborationChangeRequestSummary& AddChanges(ChangesT&& value) {
    m_changesHasBeenSet = true;
    m_changes.emplace_back(std::forward<ChangesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;
  bool m_idHasBeenSet = false;

  Aws::String m_collaborationId;
  bool m_collaborationIdHasBeenSet = false;

  Aws::Utils::DateTime m_createTime{};
  bool m_createTimeHasBeenSet = false;

  Aws::Utils::DateTime m_updateTime{};
  bool m_updateTimeHasBeenSet = false;

  ChangeRequestStatus m_status{ChangeRequestStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  bool m_isAutoApproved{false};
  bool m_isAutoApprovedHasBeenSet = false;

  Aws::Vector<Change> m_changes;
  bool m_changesHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
