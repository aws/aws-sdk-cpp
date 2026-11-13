/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/MemberAccountRanking.h>

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
 * <p>Contains overview information about an account, including its findings and,
 * for an organization, its member accounts.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/AccountOverview">AWS
 * API Reference</a></p>
 */
class AccountOverview {
 public:
  AWS_GUARDDUTY_API AccountOverview() = default;
  AWS_GUARDDUTY_API AccountOverview(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API AccountOverview& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Web Services account ID.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  AccountOverview& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the account.</p>
   */
  inline const Aws::String& GetAccountStatus() const { return m_accountStatus; }
  inline bool AccountStatusHasBeenSet() const { return m_accountStatusHasBeenSet; }
  template <typename AccountStatusT = Aws::String>
  void SetAccountStatus(AccountStatusT&& value) {
    m_accountStatusHasBeenSet = true;
    m_accountStatus = std::forward<AccountStatusT>(value);
  }
  template <typename AccountStatusT = Aws::String>
  AccountOverview& WithAccountStatus(AccountStatusT&& value) {
    SetAccountStatus(std::forward<AccountStatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the detector of the account.</p>
   */
  inline const Aws::String& GetDetectorId() const { return m_detectorId; }
  inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }
  template <typename DetectorIdT = Aws::String>
  void SetDetectorId(DetectorIdT&& value) {
    m_detectorIdHasBeenSet = true;
    m_detectorId = std::forward<DetectorIdT>(value);
  }
  template <typename DetectorIdT = Aws::String>
  AccountOverview& WithDetectorId(DetectorIdT&& value) {
    SetDetectorId(std::forward<DetectorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Region of the detector.</p>
   */
  inline const Aws::String& GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  template <typename RegionT = Aws::String>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::String>
  AccountOverview& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The account ID of the GuardDuty delegated administrator account.</p>
   */
  inline const Aws::String& GetDelegatedAdminAccountId() const { return m_delegatedAdminAccountId; }
  inline bool DelegatedAdminAccountIdHasBeenSet() const { return m_delegatedAdminAccountIdHasBeenSet; }
  template <typename DelegatedAdminAccountIdT = Aws::String>
  void SetDelegatedAdminAccountId(DelegatedAdminAccountIdT&& value) {
    m_delegatedAdminAccountIdHasBeenSet = true;
    m_delegatedAdminAccountId = std::forward<DelegatedAdminAccountIdT>(value);
  }
  template <typename DelegatedAdminAccountIdT = Aws::String>
  AccountOverview& WithDelegatedAdminAccountId(DelegatedAdminAccountIdT&& value) {
    SetDelegatedAdminAccountId(std::forward<DelegatedAdminAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of member accounts.</p>
   */
  inline long long GetTotalMemberAccounts() const { return m_totalMemberAccounts; }
  inline bool TotalMemberAccountsHasBeenSet() const { return m_totalMemberAccountsHasBeenSet; }
  inline void SetTotalMemberAccounts(long long value) {
    m_totalMemberAccountsHasBeenSet = true;
    m_totalMemberAccounts = value;
  }
  inline AccountOverview& WithTotalMemberAccounts(long long value) {
    SetTotalMemberAccounts(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of findings.</p>
   */
  inline long long GetTotalFindings() const { return m_totalFindings; }
  inline bool TotalFindingsHasBeenSet() const { return m_totalFindingsHasBeenSet; }
  inline void SetTotalFindings(long long value) {
    m_totalFindingsHasBeenSet = true;
    m_totalFindings = value;
  }
  inline AccountOverview& WithTotalFindings(long long value) {
    SetTotalFindings(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of accounts that have findings.</p>
   */
  inline long long GetAffectedAccountCount() const { return m_affectedAccountCount; }
  inline bool AffectedAccountCountHasBeenSet() const { return m_affectedAccountCountHasBeenSet; }
  inline void SetAffectedAccountCount(long long value) {
    m_affectedAccountCountHasBeenSet = true;
    m_affectedAccountCount = value;
  }
  inline AccountOverview& WithAffectedAccountCount(long long value) {
    SetAffectedAccountCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A ranking of member accounts.</p>
   */
  inline const Aws::Vector<MemberAccountRanking>& GetAccountRankings() const { return m_accountRankings; }
  inline bool AccountRankingsHasBeenSet() const { return m_accountRankingsHasBeenSet; }
  template <typename AccountRankingsT = Aws::Vector<MemberAccountRanking>>
  void SetAccountRankings(AccountRankingsT&& value) {
    m_accountRankingsHasBeenSet = true;
    m_accountRankings = std::forward<AccountRankingsT>(value);
  }
  template <typename AccountRankingsT = Aws::Vector<MemberAccountRanking>>
  AccountOverview& WithAccountRankings(AccountRankingsT&& value) {
    SetAccountRankings(std::forward<AccountRankingsT>(value));
    return *this;
  }
  template <typename AccountRankingsT = MemberAccountRanking>
  AccountOverview& AddAccountRankings(AccountRankingsT&& value) {
    m_accountRankingsHasBeenSet = true;
    m_accountRankings.emplace_back(std::forward<AccountRankingsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountId;

  Aws::String m_accountStatus;

  Aws::String m_detectorId;

  Aws::String m_region;

  Aws::String m_delegatedAdminAccountId;

  long long m_totalMemberAccounts{0};

  long long m_totalFindings{0};

  long long m_affectedAccountCount{0};

  Aws::Vector<MemberAccountRanking> m_accountRankings;
  bool m_accountIdHasBeenSet = false;
  bool m_accountStatusHasBeenSet = false;
  bool m_detectorIdHasBeenSet = false;
  bool m_regionHasBeenSet = false;
  bool m_delegatedAdminAccountIdHasBeenSet = false;
  bool m_totalMemberAccountsHasBeenSet = false;
  bool m_totalFindingsHasBeenSet = false;
  bool m_affectedAccountCountHasBeenSet = false;
  bool m_accountRankingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
