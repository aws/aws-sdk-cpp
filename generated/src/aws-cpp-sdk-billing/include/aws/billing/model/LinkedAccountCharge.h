/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/EnterpriseSupportTimePeriod.h>
#include <aws/billing/model/ServiceLevelAccountUsage.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>Enterprise Support charges for a linked account.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/LinkedAccountCharge">AWS
 * API Reference</a></p>
 */
class LinkedAccountCharge {
 public:
  AWS_BILLING_API LinkedAccountCharge() = default;
  AWS_BILLING_API LinkedAccountCharge(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API LinkedAccountCharge& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The linked account ID.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  LinkedAccountCharge& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The payer account ID that is authorized to view Enterprise Support data for
   * all accounts in its Support profile.</p>
   */
  inline const Aws::String& GetPayerAccountId() const { return m_payerAccountId; }
  inline bool PayerAccountIdHasBeenSet() const { return m_payerAccountIdHasBeenSet; }
  template <typename PayerAccountIdT = Aws::String>
  void SetPayerAccountId(PayerAccountIdT&& value) {
    m_payerAccountIdHasBeenSet = true;
    m_payerAccountId = std::forward<PayerAccountIdT>(value);
  }
  template <typename PayerAccountIdT = Aws::String>
  LinkedAccountCharge& WithPayerAccountId(PayerAccountIdT&& value) {
    SetPayerAccountId(std::forward<PayerAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of account.</p>
   */
  inline const Aws::String& GetAccountType() const { return m_accountType; }
  inline bool AccountTypeHasBeenSet() const { return m_accountTypeHasBeenSet; }
  template <typename AccountTypeT = Aws::String>
  void SetAccountType(AccountTypeT&& value) {
    m_accountTypeHasBeenSet = true;
    m_accountType = std::forward<AccountTypeT>(value);
  }
  template <typename AccountTypeT = Aws::String>
  LinkedAccountCharge& WithAccountType(AccountTypeT&& value) {
    SetAccountType(std::forward<AccountTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of billable seconds in the billing period based on when the
   * account was subscribed to Enterprise Support.</p>
   */
  inline long long GetBillableSeconds() const { return m_billableSeconds; }
  inline bool BillableSecondsHasBeenSet() const { return m_billableSecondsHasBeenSet; }
  inline void SetBillableSeconds(long long value) {
    m_billableSecondsHasBeenSet = true;
    m_billableSeconds = value;
  }
  inline LinkedAccountCharge& WithBillableSeconds(long long value) {
    SetBillableSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of seconds in the billing period.</p>
   */
  inline long long GetTotalSeconds() const { return m_totalSeconds; }
  inline bool TotalSecondsHasBeenSet() const { return m_totalSecondsHasBeenSet; }
  inline void SetTotalSeconds(long long value) {
    m_totalSecondsHasBeenSet = true;
    m_totalSeconds = value;
  }
  inline LinkedAccountCharge& WithTotalSeconds(long long value) {
    SetTotalSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total support-eligible spend for this account.</p>
   */
  inline const Aws::String& GetTotalSupportEligibleSpend() const { return m_totalSupportEligibleSpend; }
  inline bool TotalSupportEligibleSpendHasBeenSet() const { return m_totalSupportEligibleSpendHasBeenSet; }
  template <typename TotalSupportEligibleSpendT = Aws::String>
  void SetTotalSupportEligibleSpend(TotalSupportEligibleSpendT&& value) {
    m_totalSupportEligibleSpendHasBeenSet = true;
    m_totalSupportEligibleSpend = std::forward<TotalSupportEligibleSpendT>(value);
  }
  template <typename TotalSupportEligibleSpendT = Aws::String>
  LinkedAccountCharge& WithTotalSupportEligibleSpend(TotalSupportEligibleSpendT&& value) {
    SetTotalSupportEligibleSpend(std::forward<TotalSupportEligibleSpendT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The prorated total support-eligible spend based on when the account was
   * subscribed to Enterprise Support.</p>
   */
  inline const Aws::String& GetProratedTotalSupportEligibleSpend() const { return m_proratedTotalSupportEligibleSpend; }
  inline bool ProratedTotalSupportEligibleSpendHasBeenSet() const { return m_proratedTotalSupportEligibleSpendHasBeenSet; }
  template <typename ProratedTotalSupportEligibleSpendT = Aws::String>
  void SetProratedTotalSupportEligibleSpend(ProratedTotalSupportEligibleSpendT&& value) {
    m_proratedTotalSupportEligibleSpendHasBeenSet = true;
    m_proratedTotalSupportEligibleSpend = std::forward<ProratedTotalSupportEligibleSpendT>(value);
  }
  template <typename ProratedTotalSupportEligibleSpendT = Aws::String>
  LinkedAccountCharge& WithProratedTotalSupportEligibleSpend(ProratedTotalSupportEligibleSpendT&& value) {
    SetProratedTotalSupportEligibleSpend(std::forward<ProratedTotalSupportEligibleSpendT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time periods during which this account was linked.</p>
   */
  inline const Aws::Vector<EnterpriseSupportTimePeriod>& GetLinkedTimePeriods() const { return m_linkedTimePeriods; }
  inline bool LinkedTimePeriodsHasBeenSet() const { return m_linkedTimePeriodsHasBeenSet; }
  template <typename LinkedTimePeriodsT = Aws::Vector<EnterpriseSupportTimePeriod>>
  void SetLinkedTimePeriods(LinkedTimePeriodsT&& value) {
    m_linkedTimePeriodsHasBeenSet = true;
    m_linkedTimePeriods = std::forward<LinkedTimePeriodsT>(value);
  }
  template <typename LinkedTimePeriodsT = Aws::Vector<EnterpriseSupportTimePeriod>>
  LinkedAccountCharge& WithLinkedTimePeriods(LinkedTimePeriodsT&& value) {
    SetLinkedTimePeriods(std::forward<LinkedTimePeriodsT>(value));
    return *this;
  }
  template <typename LinkedTimePeriodsT = EnterpriseSupportTimePeriod>
  LinkedAccountCharge& AddLinkedTimePeriods(LinkedTimePeriodsT&& value) {
    m_linkedTimePeriodsHasBeenSet = true;
    m_linkedTimePeriods.emplace_back(std::forward<LinkedTimePeriodsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The subscription time periods for this account.</p>
   */
  inline const Aws::Vector<EnterpriseSupportTimePeriod>& GetSubscriptionTimePeriods() const { return m_subscriptionTimePeriods; }
  inline bool SubscriptionTimePeriodsHasBeenSet() const { return m_subscriptionTimePeriodsHasBeenSet; }
  template <typename SubscriptionTimePeriodsT = Aws::Vector<EnterpriseSupportTimePeriod>>
  void SetSubscriptionTimePeriods(SubscriptionTimePeriodsT&& value) {
    m_subscriptionTimePeriodsHasBeenSet = true;
    m_subscriptionTimePeriods = std::forward<SubscriptionTimePeriodsT>(value);
  }
  template <typename SubscriptionTimePeriodsT = Aws::Vector<EnterpriseSupportTimePeriod>>
  LinkedAccountCharge& WithSubscriptionTimePeriods(SubscriptionTimePeriodsT&& value) {
    SetSubscriptionTimePeriods(std::forward<SubscriptionTimePeriodsT>(value));
    return *this;
  }
  template <typename SubscriptionTimePeriodsT = EnterpriseSupportTimePeriod>
  LinkedAccountCharge& AddSubscriptionTimePeriods(SubscriptionTimePeriodsT&& value) {
    m_subscriptionTimePeriodsHasBeenSet = true;
    m_subscriptionTimePeriods.emplace_back(std::forward<SubscriptionTimePeriodsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total support-eligible Reserved Instance spend for this account.</p>
   */
  inline const Aws::String& GetTotalSupportEligibleReservedInstanceSpend() const { return m_totalSupportEligibleReservedInstanceSpend; }
  inline bool TotalSupportEligibleReservedInstanceSpendHasBeenSet() const { return m_totalSupportEligibleReservedInstanceSpendHasBeenSet; }
  template <typename TotalSupportEligibleReservedInstanceSpendT = Aws::String>
  void SetTotalSupportEligibleReservedInstanceSpend(TotalSupportEligibleReservedInstanceSpendT&& value) {
    m_totalSupportEligibleReservedInstanceSpendHasBeenSet = true;
    m_totalSupportEligibleReservedInstanceSpend = std::forward<TotalSupportEligibleReservedInstanceSpendT>(value);
  }
  template <typename TotalSupportEligibleReservedInstanceSpendT = Aws::String>
  LinkedAccountCharge& WithTotalSupportEligibleReservedInstanceSpend(TotalSupportEligibleReservedInstanceSpendT&& value) {
    SetTotalSupportEligibleReservedInstanceSpend(std::forward<TotalSupportEligibleReservedInstanceSpendT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total support-eligible Savings Plan spend for this account.</p>
   */
  inline const Aws::String& GetTotalSupportEligibleSavingsPlanSpend() const { return m_totalSupportEligibleSavingsPlanSpend; }
  inline bool TotalSupportEligibleSavingsPlanSpendHasBeenSet() const { return m_totalSupportEligibleSavingsPlanSpendHasBeenSet; }
  template <typename TotalSupportEligibleSavingsPlanSpendT = Aws::String>
  void SetTotalSupportEligibleSavingsPlanSpend(TotalSupportEligibleSavingsPlanSpendT&& value) {
    m_totalSupportEligibleSavingsPlanSpendHasBeenSet = true;
    m_totalSupportEligibleSavingsPlanSpend = std::forward<TotalSupportEligibleSavingsPlanSpendT>(value);
  }
  template <typename TotalSupportEligibleSavingsPlanSpendT = Aws::String>
  LinkedAccountCharge& WithTotalSupportEligibleSavingsPlanSpend(TotalSupportEligibleSavingsPlanSpendT&& value) {
    SetTotalSupportEligibleSavingsPlanSpend(std::forward<TotalSupportEligibleSavingsPlanSpendT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The support-eligible spend broken down by service.</p>
   */
  inline const Aws::Vector<ServiceLevelAccountUsage>& GetSupportEligibleSpendByService() const { return m_supportEligibleSpendByService; }
  inline bool SupportEligibleSpendByServiceHasBeenSet() const { return m_supportEligibleSpendByServiceHasBeenSet; }
  template <typename SupportEligibleSpendByServiceT = Aws::Vector<ServiceLevelAccountUsage>>
  void SetSupportEligibleSpendByService(SupportEligibleSpendByServiceT&& value) {
    m_supportEligibleSpendByServiceHasBeenSet = true;
    m_supportEligibleSpendByService = std::forward<SupportEligibleSpendByServiceT>(value);
  }
  template <typename SupportEligibleSpendByServiceT = Aws::Vector<ServiceLevelAccountUsage>>
  LinkedAccountCharge& WithSupportEligibleSpendByService(SupportEligibleSpendByServiceT&& value) {
    SetSupportEligibleSpendByService(std::forward<SupportEligibleSpendByServiceT>(value));
    return *this;
  }
  template <typename SupportEligibleSpendByServiceT = ServiceLevelAccountUsage>
  LinkedAccountCharge& AddSupportEligibleSpendByService(SupportEligibleSpendByServiceT&& value) {
    m_supportEligibleSpendByServiceHasBeenSet = true;
    m_supportEligibleSpendByService.emplace_back(std::forward<SupportEligibleSpendByServiceT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountId;

  Aws::String m_payerAccountId;

  Aws::String m_accountType;

  long long m_billableSeconds{0};

  long long m_totalSeconds{0};

  Aws::String m_totalSupportEligibleSpend;

  Aws::String m_proratedTotalSupportEligibleSpend;

  Aws::Vector<EnterpriseSupportTimePeriod> m_linkedTimePeriods;

  Aws::Vector<EnterpriseSupportTimePeriod> m_subscriptionTimePeriods;

  Aws::String m_totalSupportEligibleReservedInstanceSpend;

  Aws::String m_totalSupportEligibleSavingsPlanSpend;

  Aws::Vector<ServiceLevelAccountUsage> m_supportEligibleSpendByService;
  bool m_accountIdHasBeenSet = false;
  bool m_payerAccountIdHasBeenSet = false;
  bool m_accountTypeHasBeenSet = false;
  bool m_billableSecondsHasBeenSet = false;
  bool m_totalSecondsHasBeenSet = false;
  bool m_totalSupportEligibleSpendHasBeenSet = false;
  bool m_proratedTotalSupportEligibleSpendHasBeenSet = false;
  bool m_linkedTimePeriodsHasBeenSet = false;
  bool m_subscriptionTimePeriodsHasBeenSet = false;
  bool m_totalSupportEligibleReservedInstanceSpendHasBeenSet = false;
  bool m_totalSupportEligibleSavingsPlanSpendHasBeenSet = false;
  bool m_supportEligibleSpendByServiceHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
