/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/Amount.h>
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
 * <p>An allocation of an investment disbursement to a specific recipient account.
 * The account is the target account that receives the investment, not your
 * account.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/InvestmentDistribution">AWS
 * API Reference</a></p>
 */
class InvestmentDistribution {
 public:
  AWS_BILLING_API InvestmentDistribution() = default;
  AWS_BILLING_API InvestmentDistribution(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API InvestmentDistribution& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The recipient Amazon Web Services account ID that receives this portion of
   * the investment. This must be one of the eligible investment accounts on the
   * contract.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  InvestmentDistribution& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The monetary value allocated to the recipient account.</p>
   */
  inline const Amount& GetInvestmentAmount() const { return m_investmentAmount; }
  inline bool InvestmentAmountHasBeenSet() const { return m_investmentAmountHasBeenSet; }
  template <typename InvestmentAmountT = Amount>
  void SetInvestmentAmount(InvestmentAmountT&& value) {
    m_investmentAmountHasBeenSet = true;
    m_investmentAmount = std::forward<InvestmentAmountT>(value);
  }
  template <typename InvestmentAmountT = Amount>
  InvestmentDistribution& WithInvestmentAmount(InvestmentAmountT&& value) {
    SetInvestmentAmount(std::forward<InvestmentAmountT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountId;

  Amount m_investmentAmount;
  bool m_accountIdHasBeenSet = false;
  bool m_investmentAmountHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
