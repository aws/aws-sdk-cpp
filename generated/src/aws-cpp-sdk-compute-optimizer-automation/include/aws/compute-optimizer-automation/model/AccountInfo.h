/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/EnrollmentStatus.h>
#include <aws/compute-optimizer-automation/model/OrganizationRuleMode.h>
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
namespace ComputeOptimizerAutomation {
namespace Model {

/**
 * <p> Contains information about an Amazon Web Services account's enrollment and
 * association status with Compute Optimizer Automation. </p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/AccountInfo">AWS
 * API Reference</a></p>
 */
class AccountInfo {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API AccountInfo() = default;
  AWS_COMPUTEOPTIMIZERAUTOMATION_API AccountInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API AccountInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The ID of the Amazon Web Services account. </p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  AccountInfo& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The enrollment status of the account: Active, Inactive, Pending, or Failed.
   * </p>
   */
  inline EnrollmentStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(EnrollmentStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline AccountInfo& WithStatus(EnrollmentStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the management account can create Automation rules that
   * implement optimization actions for this account. </p>
   */
  inline OrganizationRuleMode GetOrganizationRuleMode() const { return m_organizationRuleMode; }
  inline bool OrganizationRuleModeHasBeenSet() const { return m_organizationRuleModeHasBeenSet; }
  inline void SetOrganizationRuleMode(OrganizationRuleMode value) {
    m_organizationRuleModeHasBeenSet = true;
    m_organizationRuleMode = value;
  }
  inline AccountInfo& WithOrganizationRuleMode(OrganizationRuleMode value) {
    SetOrganizationRuleMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the current Automation enrollment status. </p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  AccountInfo& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the account's Automation enrollment status was last
   * updated. </p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const { return m_lastUpdatedTimestamp; }
  inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }
  template <typename LastUpdatedTimestampT = Aws::Utils::DateTime>
  void SetLastUpdatedTimestamp(LastUpdatedTimestampT&& value) {
    m_lastUpdatedTimestampHasBeenSet = true;
    m_lastUpdatedTimestamp = std::forward<LastUpdatedTimestampT>(value);
  }
  template <typename LastUpdatedTimestampT = Aws::Utils::DateTime>
  AccountInfo& WithLastUpdatedTimestamp(LastUpdatedTimestampT&& value) {
    SetLastUpdatedTimestamp(std::forward<LastUpdatedTimestampT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountId;
  bool m_accountIdHasBeenSet = false;

  EnrollmentStatus m_status{EnrollmentStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  OrganizationRuleMode m_organizationRuleMode{OrganizationRuleMode::NOT_SET};
  bool m_organizationRuleModeHasBeenSet = false;

  Aws::String m_statusReason;
  bool m_statusReasonHasBeenSet = false;

  Aws::Utils::DateTime m_lastUpdatedTimestamp{};
  bool m_lastUpdatedTimestampHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
