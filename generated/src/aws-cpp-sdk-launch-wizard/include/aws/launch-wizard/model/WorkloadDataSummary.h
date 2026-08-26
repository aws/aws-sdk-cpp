/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>
#include <aws/launch-wizard/model/AccountConstraint.h>
#include <aws/launch-wizard/model/WorkloadStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LaunchWizard {
namespace Model {

/**
 * <p>Describes workload data.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/launch-wizard-2018-05-10/WorkloadDataSummary">AWS
 * API Reference</a></p>
 */
class WorkloadDataSummary {
 public:
  AWS_LAUNCHWIZARD_API WorkloadDataSummary() = default;
  AWS_LAUNCHWIZARD_API WorkloadDataSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAUNCHWIZARD_API WorkloadDataSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAUNCHWIZARD_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the workload.</p>
   */
  inline const Aws::String& GetWorkloadName() const { return m_workloadName; }
  inline bool WorkloadNameHasBeenSet() const { return m_workloadNameHasBeenSet; }
  template <typename WorkloadNameT = Aws::String>
  void SetWorkloadName(WorkloadNameT&& value) {
    m_workloadNameHasBeenSet = true;
    m_workloadName = std::forward<WorkloadNameT>(value);
  }
  template <typename WorkloadNameT = Aws::String>
  WorkloadDataSummary& WithWorkloadName(WorkloadNameT&& value) {
    SetWorkloadName(std::forward<WorkloadNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the workload data.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  WorkloadDataSummary& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the workload.</p>
   */
  inline WorkloadStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(WorkloadStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline WorkloadDataSummary& WithStatus(WorkloadStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional list of constraints describing what kind of AWS account is allowed
   * to deploy this workload or deployment pattern. Within a single list the
   * semantics are OR: an account satisfies the list if it satisfies any entry.
   * Workload-level and pattern-level lists combine with AND at deployment time. An
   * absent or empty list at this level means no constraint at this level.</p>
   */
  inline const Aws::Vector<AccountConstraint>& GetAccountConstraints() const { return m_accountConstraints; }
  inline bool AccountConstraintsHasBeenSet() const { return m_accountConstraintsHasBeenSet; }
  template <typename AccountConstraintsT = Aws::Vector<AccountConstraint>>
  void SetAccountConstraints(AccountConstraintsT&& value) {
    m_accountConstraintsHasBeenSet = true;
    m_accountConstraints = std::forward<AccountConstraintsT>(value);
  }
  template <typename AccountConstraintsT = Aws::Vector<AccountConstraint>>
  WorkloadDataSummary& WithAccountConstraints(AccountConstraintsT&& value) {
    SetAccountConstraints(std::forward<AccountConstraintsT>(value));
    return *this;
  }
  template <typename AccountConstraintsT = AccountConstraint>
  WorkloadDataSummary& AddAccountConstraints(AccountConstraintsT&& value) {
    m_accountConstraintsHasBeenSet = true;
    m_accountConstraints.emplace_back(std::forward<AccountConstraintsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workloadName;

  Aws::String m_displayName;

  WorkloadStatus m_status{WorkloadStatus::NOT_SET};

  Aws::Vector<AccountConstraint> m_accountConstraints;
  bool m_workloadNameHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_accountConstraintsHasBeenSet = false;
};

}  // namespace Model
}  // namespace LaunchWizard
}  // namespace Aws
