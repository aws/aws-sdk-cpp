/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/Checklist.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectHealth {
namespace Model {

/**
 * <p>Real-time extraction is in preview release for Amazon Connect Health and is
 * subject to change. To request access to this feature, contact your AWS account
 * team.</p> <p>The session's checklist as of this point in the session. Each event
 * carries every item with its current status, not only the items that
 * changed.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/MedicalScribeChecklistEvent">AWS
 * API Reference</a></p>
 */
class MedicalScribeChecklistEvent {
 public:
  AWS_CONNECTHEALTH_API MedicalScribeChecklistEvent() = default;
  AWS_CONNECTHEALTH_API MedicalScribeChecklistEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API MedicalScribeChecklistEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The version of this snapshot. Versions increase within a session and can skip
   * values. Keep the snapshot with the highest version and ignore any event whose
   * version is not higher, including after you reconnect to the session. Versions of
   * checklist events and periodontal chart events are independent.</p>
   */
  inline long long GetSnapshotVersion() const { return m_snapshotVersion; }
  inline bool SnapshotVersionHasBeenSet() const { return m_snapshotVersionHasBeenSet; }
  inline void SetSnapshotVersion(long long value) {
    m_snapshotVersionHasBeenSet = true;
    m_snapshotVersion = value;
  }
  inline MedicalScribeChecklistEvent& WithSnapshotVersion(long long value) {
    SetSnapshotVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The checklists for the session. The list is empty when no checklist is
   * active.</p>
   */
  inline const Aws::Vector<Checklist>& GetChecklists() const { return m_checklists; }
  inline bool ChecklistsHasBeenSet() const { return m_checklistsHasBeenSet; }
  template <typename ChecklistsT = Aws::Vector<Checklist>>
  void SetChecklists(ChecklistsT&& value) {
    m_checklistsHasBeenSet = true;
    m_checklists = std::forward<ChecklistsT>(value);
  }
  template <typename ChecklistsT = Aws::Vector<Checklist>>
  MedicalScribeChecklistEvent& WithChecklists(ChecklistsT&& value) {
    SetChecklists(std::forward<ChecklistsT>(value));
    return *this;
  }
  template <typename ChecklistsT = Checklist>
  MedicalScribeChecklistEvent& AddChecklists(ChecklistsT&& value) {
    m_checklistsHasBeenSet = true;
    m_checklists.emplace_back(std::forward<ChecklistsT>(value));
    return *this;
  }
  ///@}
 private:
  long long m_snapshotVersion{0};

  Aws::Vector<Checklist> m_checklists;
  bool m_snapshotVersionHasBeenSet = false;
  bool m_checklistsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
