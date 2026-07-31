/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Billing {
namespace Model {

/**
 * <p>An account that is charged all or a portion of the total Support charge and
 * the percentage of the charge allocated to it.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/ChargeAccount">AWS
 * API Reference</a></p>
 */
class ChargeAccount {
 public:
  AWS_BILLING_API ChargeAccount() = default;
  AWS_BILLING_API ChargeAccount(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API ChargeAccount& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The account ID.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  ChargeAccount& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The percentage of the total Support charge allocated to this account. This is
   * 0.0 when supportAllocationMethod = Proportional.</p>
   */
  inline const Aws::String& GetChargePercentage() const { return m_chargePercentage; }
  inline bool ChargePercentageHasBeenSet() const { return m_chargePercentageHasBeenSet; }
  template <typename ChargePercentageT = Aws::String>
  void SetChargePercentage(ChargePercentageT&& value) {
    m_chargePercentageHasBeenSet = true;
    m_chargePercentage = std::forward<ChargePercentageT>(value);
  }
  template <typename ChargePercentageT = Aws::String>
  ChargeAccount& WithChargePercentage(ChargePercentageT&& value) {
    SetChargePercentage(std::forward<ChargePercentageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountId;

  Aws::String m_chargePercentage;
  bool m_accountIdHasBeenSet = false;
  bool m_chargePercentageHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
