/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/PricingPlan.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Billing {
namespace Model {
/**
 * <p>The response structure for GetEnterpriseSupportChargeSummary.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/GetEnterpriseSupportChargeSummaryResponse">AWS
 * API Reference</a></p>
 */
class GetEnterpriseSupportChargeSummaryResult {
 public:
  AWS_BILLING_API GetEnterpriseSupportChargeSummaryResult() = default;
  AWS_BILLING_API GetEnterpriseSupportChargeSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BILLING_API GetEnterpriseSupportChargeSummaryResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The payer account ID that is authorized to view Enterprise Support data for
   * all accounts in its Support profile.</p>
   */
  inline const Aws::String& GetPayerAccountId() const { return m_payerAccountId; }
  template <typename PayerAccountIdT = Aws::String>
  void SetPayerAccountId(PayerAccountIdT&& value) {
    m_payerAccountIdHasBeenSet = true;
    m_payerAccountId = std::forward<PayerAccountIdT>(value);
  }
  template <typename PayerAccountIdT = Aws::String>
  GetEnterpriseSupportChargeSummaryResult& WithPayerAccountId(PayerAccountIdT&& value) {
    SetPayerAccountId(std::forward<PayerAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The billing month in YYYY-MM format. This must be a month in the past.</p>
   */
  inline const Aws::String& GetBillingMonth() const { return m_billingMonth; }
  template <typename BillingMonthT = Aws::String>
  void SetBillingMonth(BillingMonthT&& value) {
    m_billingMonthHasBeenSet = true;
    m_billingMonth = std::forward<BillingMonthT>(value);
  }
  template <typename BillingMonthT = Aws::String>
  GetEnterpriseSupportChargeSummaryResult& WithBillingMonth(BillingMonthT&& value) {
    SetBillingMonth(std::forward<BillingMonthT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The start date of the billing period.</p>
   */
  inline const Aws::Utils::DateTime& GetBillingPeriodStartDate() const { return m_billingPeriodStartDate; }
  template <typename BillingPeriodStartDateT = Aws::Utils::DateTime>
  void SetBillingPeriodStartDate(BillingPeriodStartDateT&& value) {
    m_billingPeriodStartDateHasBeenSet = true;
    m_billingPeriodStartDate = std::forward<BillingPeriodStartDateT>(value);
  }
  template <typename BillingPeriodStartDateT = Aws::Utils::DateTime>
  GetEnterpriseSupportChargeSummaryResult& WithBillingPeriodStartDate(BillingPeriodStartDateT&& value) {
    SetBillingPeriodStartDate(std::forward<BillingPeriodStartDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end date of the billing period.</p>
   */
  inline const Aws::Utils::DateTime& GetBillingPeriodEndDate() const { return m_billingPeriodEndDate; }
  template <typename BillingPeriodEndDateT = Aws::Utils::DateTime>
  void SetBillingPeriodEndDate(BillingPeriodEndDateT&& value) {
    m_billingPeriodEndDateHasBeenSet = true;
    m_billingPeriodEndDate = std::forward<BillingPeriodEndDateT>(value);
  }
  template <typename BillingPeriodEndDateT = Aws::Utils::DateTime>
  GetEnterpriseSupportChargeSummaryResult& WithBillingPeriodEndDate(BillingPeriodEndDateT&& value) {
    SetBillingPeriodEndDate(std::forward<BillingPeriodEndDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When true, the Support charge amount is estimated. When false, the Support
   * charge amount is finalized.</p>
   */
  inline bool GetIsEstimated() const { return m_isEstimated; }
  inline void SetIsEstimated(bool value) {
    m_isEstimatedHasBeenSet = true;
    m_isEstimated = value;
  }
  inline GetEnterpriseSupportChargeSummaryResult& WithIsEstimated(bool value) {
    SetIsEstimated(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date the bill was generated.</p>
   */
  inline const Aws::Utils::DateTime& GetBillDate() const { return m_billDate; }
  template <typename BillDateT = Aws::Utils::DateTime>
  void SetBillDate(BillDateT&& value) {
    m_billDateHasBeenSet = true;
    m_billDate = std::forward<BillDateT>(value);
  }
  template <typename BillDateT = Aws::Utils::DateTime>
  GetEnterpriseSupportChargeSummaryResult& WithBillDate(BillDateT&& value) {
    SetBillDate(std::forward<BillDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Support charge amount for the account.</p>
   */
  inline const Aws::String& GetSupportCharge() const { return m_supportCharge; }
  template <typename SupportChargeT = Aws::String>
  void SetSupportCharge(SupportChargeT&& value) {
    m_supportChargeHasBeenSet = true;
    m_supportCharge = std::forward<SupportChargeT>(value);
  }
  template <typename SupportChargeT = Aws::String>
  GetEnterpriseSupportChargeSummaryResult& WithSupportCharge(SupportChargeT&& value) {
    SetSupportCharge(std::forward<SupportChargeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total Support charge amount for all accounts in the Support profile.</p>
   */
  inline const Aws::String& GetTotalSupportCharge() const { return m_totalSupportCharge; }
  template <typename TotalSupportChargeT = Aws::String>
  void SetTotalSupportCharge(TotalSupportChargeT&& value) {
    m_totalSupportChargeHasBeenSet = true;
    m_totalSupportCharge = std::forward<TotalSupportChargeT>(value);
  }
  template <typename TotalSupportChargeT = Aws::String>
  GetEnterpriseSupportChargeSummaryResult& WithTotalSupportCharge(TotalSupportChargeT&& value) {
    SetTotalSupportCharge(std::forward<TotalSupportChargeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The support discount amount.</p>
   */
  inline const Aws::String& GetSupportDiscount() const { return m_supportDiscount; }
  template <typename SupportDiscountT = Aws::String>
  void SetSupportDiscount(SupportDiscountT&& value) {
    m_supportDiscountHasBeenSet = true;
    m_supportDiscount = std::forward<SupportDiscountT>(value);
  }
  template <typename SupportDiscountT = Aws::String>
  GetEnterpriseSupportChargeSummaryResult& WithSupportDiscount(SupportDiscountT&& value) {
    SetSupportDiscount(std::forward<SupportDiscountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total Support-eligible Spend from all accounts in the Support profile.
   * This includes eligible spend from usage of Amazon Web Services, Reserved
   * Instances, and Savings Plans.</p>
   */
  inline const Aws::String& GetTotalSupportEligibleSpend() const { return m_totalSupportEligibleSpend; }
  template <typename TotalSupportEligibleSpendT = Aws::String>
  void SetTotalSupportEligibleSpend(TotalSupportEligibleSpendT&& value) {
    m_totalSupportEligibleSpendHasBeenSet = true;
    m_totalSupportEligibleSpend = std::forward<TotalSupportEligibleSpendT>(value);
  }
  template <typename TotalSupportEligibleSpendT = Aws::String>
  GetEnterpriseSupportChargeSummaryResult& WithTotalSupportEligibleSpend(TotalSupportEligibleSpendT&& value) {
    SetTotalSupportEligibleSpend(std::forward<TotalSupportEligibleSpendT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total Support-eligible spend from usage of Amazon Web Services from all
   * accounts in the Support profile.</p>
   */
  inline const Aws::String& GetTotalSupportEligibleUsageSpend() const { return m_totalSupportEligibleUsageSpend; }
  template <typename TotalSupportEligibleUsageSpendT = Aws::String>
  void SetTotalSupportEligibleUsageSpend(TotalSupportEligibleUsageSpendT&& value) {
    m_totalSupportEligibleUsageSpendHasBeenSet = true;
    m_totalSupportEligibleUsageSpend = std::forward<TotalSupportEligibleUsageSpendT>(value);
  }
  template <typename TotalSupportEligibleUsageSpendT = Aws::String>
  GetEnterpriseSupportChargeSummaryResult& WithTotalSupportEligibleUsageSpend(TotalSupportEligibleUsageSpendT&& value) {
    SetTotalSupportEligibleUsageSpend(std::forward<TotalSupportEligibleUsageSpendT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total Support-eligible Reserved Instance spend from all accounts in the
   * Support profile.</p>
   */
  inline const Aws::String& GetTotalSupportEligibleReservedInstanceSpend() const { return m_totalSupportEligibleReservedInstanceSpend; }
  template <typename TotalSupportEligibleReservedInstanceSpendT = Aws::String>
  void SetTotalSupportEligibleReservedInstanceSpend(TotalSupportEligibleReservedInstanceSpendT&& value) {
    m_totalSupportEligibleReservedInstanceSpendHasBeenSet = true;
    m_totalSupportEligibleReservedInstanceSpend = std::forward<TotalSupportEligibleReservedInstanceSpendT>(value);
  }
  template <typename TotalSupportEligibleReservedInstanceSpendT = Aws::String>
  GetEnterpriseSupportChargeSummaryResult& WithTotalSupportEligibleReservedInstanceSpend(
      TotalSupportEligibleReservedInstanceSpendT&& value) {
    SetTotalSupportEligibleReservedInstanceSpend(std::forward<TotalSupportEligibleReservedInstanceSpendT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total Support-eligible Savings Plan spend from all accounts in the
   * Support profile.</p>
   */
  inline const Aws::String& GetTotalSupportEligibleSavingsPlanSpend() const { return m_totalSupportEligibleSavingsPlanSpend; }
  template <typename TotalSupportEligibleSavingsPlanSpendT = Aws::String>
  void SetTotalSupportEligibleSavingsPlanSpend(TotalSupportEligibleSavingsPlanSpendT&& value) {
    m_totalSupportEligibleSavingsPlanSpendHasBeenSet = true;
    m_totalSupportEligibleSavingsPlanSpend = std::forward<TotalSupportEligibleSavingsPlanSpendT>(value);
  }
  template <typename TotalSupportEligibleSavingsPlanSpendT = Aws::String>
  GetEnterpriseSupportChargeSummaryResult& WithTotalSupportEligibleSavingsPlanSpend(TotalSupportEligibleSavingsPlanSpendT&& value) {
    SetTotalSupportEligibleSavingsPlanSpend(std::forward<TotalSupportEligibleSavingsPlanSpendT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The percentage applied to the total Support-eligible spend to calculate the
   * total Support charge across all accounts in the Support profile.</p>
   */
  inline const Aws::String& GetSupportChargePercentage() const { return m_supportChargePercentage; }
  template <typename SupportChargePercentageT = Aws::String>
  void SetSupportChargePercentage(SupportChargePercentageT&& value) {
    m_supportChargePercentageHasBeenSet = true;
    m_supportChargePercentage = std::forward<SupportChargePercentageT>(value);
  }
  template <typename SupportChargePercentageT = Aws::String>
  GetEnterpriseSupportChargeSummaryResult& WithSupportChargePercentage(SupportChargePercentageT&& value) {
    SetSupportChargePercentage(std::forward<SupportChargePercentageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The effective pricing plan used for the support charge calculation.</p>
   */
  inline const PricingPlan& GetSupportEffectivePricingPlan() const { return m_supportEffectivePricingPlan; }
  template <typename SupportEffectivePricingPlanT = PricingPlan>
  void SetSupportEffectivePricingPlan(SupportEffectivePricingPlanT&& value) {
    m_supportEffectivePricingPlanHasBeenSet = true;
    m_supportEffectivePricingPlan = std::forward<SupportEffectivePricingPlanT>(value);
  }
  template <typename SupportEffectivePricingPlanT = PricingPlan>
  GetEnterpriseSupportChargeSummaryResult& WithSupportEffectivePricingPlan(SupportEffectivePricingPlanT&& value) {
    SetSupportEffectivePricingPlan(std::forward<SupportEffectivePricingPlanT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetEnterpriseSupportChargeSummaryResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_payerAccountId;

  Aws::String m_billingMonth;

  Aws::Utils::DateTime m_billingPeriodStartDate{};

  Aws::Utils::DateTime m_billingPeriodEndDate{};

  bool m_isEstimated{false};

  Aws::Utils::DateTime m_billDate{};

  Aws::String m_supportCharge;

  Aws::String m_totalSupportCharge;

  Aws::String m_supportDiscount;

  Aws::String m_totalSupportEligibleSpend;

  Aws::String m_totalSupportEligibleUsageSpend;

  Aws::String m_totalSupportEligibleReservedInstanceSpend;

  Aws::String m_totalSupportEligibleSavingsPlanSpend;

  Aws::String m_supportChargePercentage;

  PricingPlan m_supportEffectivePricingPlan;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_payerAccountIdHasBeenSet = false;
  bool m_billingMonthHasBeenSet = false;
  bool m_billingPeriodStartDateHasBeenSet = false;
  bool m_billingPeriodEndDateHasBeenSet = false;
  bool m_isEstimatedHasBeenSet = false;
  bool m_billDateHasBeenSet = false;
  bool m_supportChargeHasBeenSet = false;
  bool m_totalSupportChargeHasBeenSet = false;
  bool m_supportDiscountHasBeenSet = false;
  bool m_totalSupportEligibleSpendHasBeenSet = false;
  bool m_totalSupportEligibleUsageSpendHasBeenSet = false;
  bool m_totalSupportEligibleReservedInstanceSpendHasBeenSet = false;
  bool m_totalSupportEligibleSavingsPlanSpendHasBeenSet = false;
  bool m_supportChargePercentageHasBeenSet = false;
  bool m_supportEffectivePricingPlanHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
