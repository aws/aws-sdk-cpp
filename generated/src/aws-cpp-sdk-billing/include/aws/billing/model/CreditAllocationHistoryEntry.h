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
 * <p>A single entry in the credit allocation history, representing how a credit
 * was applied to a specific service during a billing month.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/CreditAllocationHistoryEntry">AWS
 * API Reference</a></p>
 */
class CreditAllocationHistoryEntry {
 public:
  AWS_BILLING_API CreditAllocationHistoryEntry() = default;
  AWS_BILLING_API CreditAllocationHistoryEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API CreditAllocationHistoryEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the credit that was applied.</p>
   */
  inline const Aws::String& GetCreditId() const { return m_creditId; }
  inline bool CreditIdHasBeenSet() const { return m_creditIdHasBeenSet; }
  template <typename CreditIdT = Aws::String>
  void SetCreditId(CreditIdT&& value) {
    m_creditIdHasBeenSet = true;
    m_creditId = std::forward<CreditIdT>(value);
  }
  template <typename CreditIdT = Aws::String>
  CreditAllocationHistoryEntry& WithCreditId(CreditIdT&& value) {
    SetCreditId(std::forward<CreditIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount of credit applied. Negative values represent credits that reduced
   * the bill.</p>
   */
  inline const Amount& GetCreditAmount() const { return m_creditAmount; }
  inline bool CreditAmountHasBeenSet() const { return m_creditAmountHasBeenSet; }
  template <typename CreditAmountT = Amount>
  void SetCreditAmount(CreditAmountT&& value) {
    m_creditAmountHasBeenSet = true;
    m_creditAmount = std::forward<CreditAmountT>(value);
  }
  template <typename CreditAmountT = Amount>
  CreditAllocationHistoryEntry& WithCreditAmount(CreditAmountT&& value) {
    SetCreditAmount(std::forward<CreditAmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable description of the credit allocation.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreditAllocationHistoryEntry& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account the credit was applied to.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  CreditAllocationHistoryEntry& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services service the credit was applied to.</p>
   */
  inline const Aws::String& GetAppliedServiceName() const { return m_appliedServiceName; }
  inline bool AppliedServiceNameHasBeenSet() const { return m_appliedServiceNameHasBeenSet; }
  template <typename AppliedServiceNameT = Aws::String>
  void SetAppliedServiceName(AppliedServiceNameT&& value) {
    m_appliedServiceNameHasBeenSet = true;
    m_appliedServiceName = std::forward<AppliedServiceNameT>(value);
  }
  template <typename AppliedServiceNameT = Aws::String>
  CreditAllocationHistoryEntry& WithAppliedServiceName(AppliedServiceNameT&& value) {
    SetAppliedServiceName(std::forward<AppliedServiceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The billing month of the application in <code>YYYY-MM</code> format.</p>
   */
  inline const Aws::String& GetBillingMonth() const { return m_billingMonth; }
  inline bool BillingMonthHasBeenSet() const { return m_billingMonthHasBeenSet; }
  template <typename BillingMonthT = Aws::String>
  void SetBillingMonth(BillingMonthT&& value) {
    m_billingMonthHasBeenSet = true;
    m_billingMonth = std::forward<BillingMonthT>(value);
  }
  template <typename BillingMonthT = Aws::String>
  CreditAllocationHistoryEntry& WithBillingMonth(BillingMonthT&& value) {
    SetBillingMonth(std::forward<BillingMonthT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> <code>true</code> when the entry was applied to an in-flight bill that has
   * not yet been finalized.</p>
   */
  inline bool GetIsEstimatedBill() const { return m_isEstimatedBill; }
  inline bool IsEstimatedBillHasBeenSet() const { return m_isEstimatedBillHasBeenSet; }
  inline void SetIsEstimatedBill(bool value) {
    m_isEstimatedBillHasBeenSet = true;
    m_isEstimatedBill = value;
  }
  inline CreditAllocationHistoryEntry& WithIsEstimatedBill(bool value) {
    SetIsEstimatedBill(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_creditId;

  Amount m_creditAmount;

  Aws::String m_description;

  Aws::String m_accountId;

  Aws::String m_appliedServiceName;

  Aws::String m_billingMonth;

  bool m_isEstimatedBill{false};
  bool m_creditIdHasBeenSet = false;
  bool m_creditAmountHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_accountIdHasBeenSet = false;
  bool m_appliedServiceNameHasBeenSet = false;
  bool m_billingMonthHasBeenSet = false;
  bool m_isEstimatedBillHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
