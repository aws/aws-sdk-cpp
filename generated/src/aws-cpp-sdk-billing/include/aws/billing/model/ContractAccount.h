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
 * <p>An account that is covered by the Enterprise Support contract.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/ContractAccount">AWS
 * API Reference</a></p>
 */
class ContractAccount {
 public:
  AWS_BILLING_API ContractAccount() = default;
  AWS_BILLING_API ContractAccount(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API ContractAccount& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  ContractAccount& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When true, Support charges are calculated on charges before private
   * discounts. When false, they are calculated after private discounts.</p>
   */
  inline bool GetIsGdn() const { return m_isGdn; }
  inline bool IsGdnHasBeenSet() const { return m_isGdnHasBeenSet; }
  inline void SetIsGdn(bool value) {
    m_isGdnHasBeenSet = true;
    m_isGdn = value;
  }
  inline ContractAccount& WithIsGdn(bool value) {
    SetIsGdn(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountId;

  bool m_isGdn{false};
  bool m_accountIdHasBeenSet = false;
  bool m_isGdnHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
