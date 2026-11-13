/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/InvestigationType.h>
#include <aws/guardduty/model/QueryTimeWindow.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains information about what an investigation analyzed. Only the
 * identifier that matches <code>InvestigationType</code> is set.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/InvestigationScope">AWS
 * API Reference</a></p>
 */
class InvestigationScope {
 public:
  AWS_GUARDDUTY_API InvestigationScope() = default;
  AWS_GUARDDUTY_API InvestigationScope(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API InvestigationScope& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of investigation. Possible values:</p> <ul> <li> <p>
   * <code>FINDING</code> – An investigation of a specific GuardDuty finding.</p>
   * </li> <li> <p> <code>ACCOUNT</code> – An investigation of the threat posture of
   * an Amazon Web Services account.</p> </li> <li> <p> <code>ORGANIZATION</code> –
   * An investigation of your organization's threat posture.</p> </li> </ul>
   */
  inline InvestigationType GetInvestigationType() const { return m_investigationType; }
  inline bool InvestigationTypeHasBeenSet() const { return m_investigationTypeHasBeenSet; }
  inline void SetInvestigationType(InvestigationType value) {
    m_investigationTypeHasBeenSet = true;
    m_investigationType = value;
  }
  inline InvestigationScope& WithInvestigationType(InvestigationType value) {
    SetInvestigationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the finding that the investigation analyzed. Set only when
   * <code>InvestigationType</code> is <code>FINDING</code>.</p>
   */
  inline const Aws::String& GetFindingId() const { return m_findingId; }
  inline bool FindingIdHasBeenSet() const { return m_findingIdHasBeenSet; }
  template <typename FindingIdT = Aws::String>
  void SetFindingId(FindingIdT&& value) {
    m_findingIdHasBeenSet = true;
    m_findingId = std::forward<FindingIdT>(value);
  }
  template <typename FindingIdT = Aws::String>
  InvestigationScope& WithFindingId(FindingIdT&& value) {
    SetFindingId(std::forward<FindingIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that the investigation analyzed.
   * Set only when <code>InvestigationType</code> is <code>ACCOUNT</code>.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  InvestigationScope& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the administrator account of the organization that the
   * investigation analyzed. Set only when <code>InvestigationType</code> is
   * <code>ORGANIZATION</code>.</p>
   */
  inline const Aws::String& GetAdminAccountId() const { return m_adminAccountId; }
  inline bool AdminAccountIdHasBeenSet() const { return m_adminAccountIdHasBeenSet; }
  template <typename AdminAccountIdT = Aws::String>
  void SetAdminAccountId(AdminAccountIdT&& value) {
    m_adminAccountIdHasBeenSet = true;
    m_adminAccountId = std::forward<AdminAccountIdT>(value);
  }
  template <typename AdminAccountIdT = Aws::String>
  InvestigationScope& WithAdminAccountId(AdminAccountIdT&& value) {
    SetAdminAccountId(std::forward<AdminAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time window over which the investigation queried data, set only when
   * <code>InvestigationType</code> is <code>ACCOUNT</code> or
   * <code>ORGANIZATION</code>.</p>
   */
  inline const QueryTimeWindow& GetQueryTimeWindow() const { return m_queryTimeWindow; }
  inline bool QueryTimeWindowHasBeenSet() const { return m_queryTimeWindowHasBeenSet; }
  template <typename QueryTimeWindowT = QueryTimeWindow>
  void SetQueryTimeWindow(QueryTimeWindowT&& value) {
    m_queryTimeWindowHasBeenSet = true;
    m_queryTimeWindow = std::forward<QueryTimeWindowT>(value);
  }
  template <typename QueryTimeWindowT = QueryTimeWindow>
  InvestigationScope& WithQueryTimeWindow(QueryTimeWindowT&& value) {
    SetQueryTimeWindow(std::forward<QueryTimeWindowT>(value));
    return *this;
  }
  ///@}
 private:
  InvestigationType m_investigationType{InvestigationType::NOT_SET};

  Aws::String m_findingId;

  Aws::String m_accountId;

  Aws::String m_adminAccountId;

  QueryTimeWindow m_queryTimeWindow;
  bool m_investigationTypeHasBeenSet = false;
  bool m_findingIdHasBeenSet = false;
  bool m_accountIdHasBeenSet = false;
  bool m_adminAccountIdHasBeenSet = false;
  bool m_queryTimeWindowHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
