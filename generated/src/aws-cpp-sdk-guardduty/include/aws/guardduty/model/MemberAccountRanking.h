/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/RiskLevel.h>

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
 * <p>Contains information about the position of a member account in a
 * ranking.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/MemberAccountRanking">AWS
 * API Reference</a></p>
 */
class MemberAccountRanking {
 public:
  AWS_GUARDDUTY_API MemberAccountRanking() = default;
  AWS_GUARDDUTY_API MemberAccountRanking(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API MemberAccountRanking& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The position of the account in the ranking.</p>
   */
  inline int GetRank() const { return m_rank; }
  inline bool RankHasBeenSet() const { return m_rankHasBeenSet; }
  inline void SetRank(int value) {
    m_rankHasBeenSet = true;
    m_rank = value;
  }
  inline MemberAccountRanking& WithRank(int value) {
    SetRank(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account ID of the member account.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  MemberAccountRanking& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of findings in the account.</p>
   */
  inline long long GetFindingCount() const { return m_findingCount; }
  inline bool FindingCountHasBeenSet() const { return m_findingCountHasBeenSet; }
  inline void SetFindingCount(long long value) {
    m_findingCountHasBeenSet = true;
    m_findingCount = value;
  }
  inline MemberAccountRanking& WithFindingCount(long long value) {
    SetFindingCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The assessed risk level of the account. Possible values are
   * <code>Info</code>, <code>Low</code>, <code>Medium</code>, <code>High</code>, and
   * <code>Critical</code>.</p>
   */
  inline RiskLevel GetRiskLevel() const { return m_riskLevel; }
  inline bool RiskLevelHasBeenSet() const { return m_riskLevelHasBeenSet; }
  inline void SetRiskLevel(RiskLevel value) {
    m_riskLevelHasBeenSet = true;
    m_riskLevel = value;
  }
  inline MemberAccountRanking& WithRiskLevel(RiskLevel value) {
    SetRiskLevel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the assessed risk level.</p>
   */
  inline const Aws::String& GetRiskRationale() const { return m_riskRationale; }
  inline bool RiskRationaleHasBeenSet() const { return m_riskRationaleHasBeenSet; }
  template <typename RiskRationaleT = Aws::String>
  void SetRiskRationale(RiskRationaleT&& value) {
    m_riskRationaleHasBeenSet = true;
    m_riskRationale = std::forward<RiskRationaleT>(value);
  }
  template <typename RiskRationaleT = Aws::String>
  MemberAccountRanking& WithRiskRationale(RiskRationaleT&& value) {
    SetRiskRationale(std::forward<RiskRationaleT>(value));
    return *this;
  }
  ///@}
 private:
  int m_rank{0};

  Aws::String m_accountId;

  long long m_findingCount{0};

  RiskLevel m_riskLevel{RiskLevel::NOT_SET};

  Aws::String m_riskRationale;
  bool m_rankHasBeenSet = false;
  bool m_accountIdHasBeenSet = false;
  bool m_findingCountHasBeenSet = false;
  bool m_riskLevelHasBeenSet = false;
  bool m_riskRationaleHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
