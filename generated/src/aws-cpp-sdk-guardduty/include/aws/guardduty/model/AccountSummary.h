/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

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
 * <p>Contains the number of findings in an Amazon Web Services
 * account.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/AccountSummary">AWS
 * API Reference</a></p>
 */
class AccountSummary {
 public:
  AWS_GUARDDUTY_API AccountSummary() = default;
  AWS_GUARDDUTY_API AccountSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API AccountSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  AccountSummary& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of findings in the account.</p>
   */
  inline int GetFindingCount() const { return m_findingCount; }
  inline bool FindingCountHasBeenSet() const { return m_findingCountHasBeenSet; }
  inline void SetFindingCount(int value) {
    m_findingCountHasBeenSet = true;
    m_findingCount = value;
  }
  inline AccountSummary& WithFindingCount(int value) {
    SetFindingCount(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountId;

  int m_findingCount{0};
  bool m_accountIdHasBeenSet = false;
  bool m_findingCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
