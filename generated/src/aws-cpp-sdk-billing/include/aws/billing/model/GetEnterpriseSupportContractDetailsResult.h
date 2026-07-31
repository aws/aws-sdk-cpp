/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/AdditionalCharge.h>
#include <aws/billing/model/ChargeAccount.h>
#include <aws/billing/model/ContractAccount.h>
#include <aws/billing/model/PricingPlan.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>The response structure for GetEnterpriseSupportContractDetails.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/GetEnterpriseSupportContractDetailsResponse">AWS
 * API Reference</a></p>
 */
class GetEnterpriseSupportContractDetailsResult {
 public:
  AWS_BILLING_API GetEnterpriseSupportContractDetailsResult() = default;
  AWS_BILLING_API GetEnterpriseSupportContractDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BILLING_API GetEnterpriseSupportContractDetailsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>When true, the Enterprise Support contract is active. When false, the
   * Enterprise Support Contract is inactive.</p>
   */
  inline bool GetIsContractActive() const { return m_isContractActive; }
  inline void SetIsContractActive(bool value) {
    m_isContractActiveHasBeenSet = true;
    m_isContractActive = value;
  }
  inline GetEnterpriseSupportContractDetailsResult& WithIsContractActive(bool value) {
    SetIsContractActive(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The method used to distribute the total Support charge amount across each
   * account in the Support profile. Valid values: Proportional, Fixed_Percentage.
   * Proportional means support charges are distributed to each account in proportion
   * to its eligible Spend. Fixed_Percentage means support charges are distributed
   * across accounts according to pre-configured percentages from the contract.</p>
   */
  inline const Aws::String& GetSupportAllocationMethod() const { return m_supportAllocationMethod; }
  template <typename SupportAllocationMethodT = Aws::String>
  void SetSupportAllocationMethod(SupportAllocationMethodT&& value) {
    m_supportAllocationMethodHasBeenSet = true;
    m_supportAllocationMethod = std::forward<SupportAllocationMethodT>(value);
  }
  template <typename SupportAllocationMethodT = Aws::String>
  GetEnterpriseSupportContractDetailsResult& WithSupportAllocationMethod(SupportAllocationMethodT&& value) {
    SetSupportAllocationMethod(std::forward<SupportAllocationMethodT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When supportReservedInstanceTreatmentMethod = AmortizedCustom, only amortized
   * fees for Reserved Instances purchased on or after this date are included in the
   * calculation. This field is Null for all other treatment methods.</p>
   */
  inline const Aws::Utils::DateTime& GetSupportReservedInstanceAmortizationStartDate() const {
    return m_supportReservedInstanceAmortizationStartDate;
  }
  template <typename SupportReservedInstanceAmortizationStartDateT = Aws::Utils::DateTime>
  void SetSupportReservedInstanceAmortizationStartDate(SupportReservedInstanceAmortizationStartDateT&& value) {
    m_supportReservedInstanceAmortizationStartDateHasBeenSet = true;
    m_supportReservedInstanceAmortizationStartDate = std::forward<SupportReservedInstanceAmortizationStartDateT>(value);
  }
  template <typename SupportReservedInstanceAmortizationStartDateT = Aws::Utils::DateTime>
  GetEnterpriseSupportContractDetailsResult& WithSupportReservedInstanceAmortizationStartDate(
      SupportReservedInstanceAmortizationStartDateT&& value) {
    SetSupportReservedInstanceAmortizationStartDate(std::forward<SupportReservedInstanceAmortizationStartDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The method used to include Reserved Instance (RI) fees in the Enterprise
   * Support charge calculation. Valid values: None (RI fees excluded from
   * Support-eligible spend), Upfront (full upfront RI fees included in month of
   * purchase), Amortized (RI fees spread over commitment term for RIs purchased on
   * or after Support subscription start date), AmortizedCustom (same as Amortized
   * but only for RIs purchased on or after a specified custom start date),
   * AmortizedAll (RI fees amortized for all active RIs including those purchased
   * before Support subscription started).</p>
   */
  inline const Aws::String& GetSupportReservedInstanceTreatmentMethod() const { return m_supportReservedInstanceTreatmentMethod; }
  template <typename SupportReservedInstanceTreatmentMethodT = Aws::String>
  void SetSupportReservedInstanceTreatmentMethod(SupportReservedInstanceTreatmentMethodT&& value) {
    m_supportReservedInstanceTreatmentMethodHasBeenSet = true;
    m_supportReservedInstanceTreatmentMethod = std::forward<SupportReservedInstanceTreatmentMethodT>(value);
  }
  template <typename SupportReservedInstanceTreatmentMethodT = Aws::String>
  GetEnterpriseSupportContractDetailsResult& WithSupportReservedInstanceTreatmentMethod(SupportReservedInstanceTreatmentMethodT&& value) {
    SetSupportReservedInstanceTreatmentMethod(std::forward<SupportReservedInstanceTreatmentMethodT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>This is applicable when supportSavingsPlansTreatmentMethod = Amortized and is
   * Null for all other methods. It shows the start date from which Savings Plan fees
   * are included in Support Eligible Spend.</p>
   */
  inline const Aws::Utils::DateTime& GetSupportSavingsPlansAmortizationStartDate() const {
    return m_supportSavingsPlansAmortizationStartDate;
  }
  template <typename SupportSavingsPlansAmortizationStartDateT = Aws::Utils::DateTime>
  void SetSupportSavingsPlansAmortizationStartDate(SupportSavingsPlansAmortizationStartDateT&& value) {
    m_supportSavingsPlansAmortizationStartDateHasBeenSet = true;
    m_supportSavingsPlansAmortizationStartDate = std::forward<SupportSavingsPlansAmortizationStartDateT>(value);
  }
  template <typename SupportSavingsPlansAmortizationStartDateT = Aws::Utils::DateTime>
  GetEnterpriseSupportContractDetailsResult& WithSupportSavingsPlansAmortizationStartDate(
      SupportSavingsPlansAmortizationStartDateT&& value) {
    SetSupportSavingsPlansAmortizationStartDate(std::forward<SupportSavingsPlansAmortizationStartDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The method used to include Savings Plans fees in Enterprise Support charge
   * calculations. Valid values: None (Savings Plan fees excluded from
   * Support-eligible spend), Upfront (full upfront Savings Plan fees included in
   * month of purchase), Amortized (Savings Plan fees spread over commitment term for
   * Savings Plans purchased on or after Support subscription start date),
   * AmortizedCustom (same as Amortized but only for Savings Plans purchased on or
   * after a specified custom start date), AmortizedAll (Savings Plan fees amortized
   * for all active Savings Plans including those purchased before Support
   * subscription started).</p>
   */
  inline const Aws::String& GetSupportSavingsPlansTreatmentMethod() const { return m_supportSavingsPlansTreatmentMethod; }
  template <typename SupportSavingsPlansTreatmentMethodT = Aws::String>
  void SetSupportSavingsPlansTreatmentMethod(SupportSavingsPlansTreatmentMethodT&& value) {
    m_supportSavingsPlansTreatmentMethodHasBeenSet = true;
    m_supportSavingsPlansTreatmentMethod = std::forward<SupportSavingsPlansTreatmentMethodT>(value);
  }
  template <typename SupportSavingsPlansTreatmentMethodT = Aws::String>
  GetEnterpriseSupportContractDetailsResult& WithSupportSavingsPlansTreatmentMethod(SupportSavingsPlansTreatmentMethodT&& value) {
    SetSupportSavingsPlansTreatmentMethod(std::forward<SupportSavingsPlansTreatmentMethodT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The start date for accounts subscribed or unsubscribed to Support billing
   * during the billing month.</p>
   */
  inline const Aws::Utils::DateTime& GetSupportProrateStartDate() const { return m_supportProrateStartDate; }
  template <typename SupportProrateStartDateT = Aws::Utils::DateTime>
  void SetSupportProrateStartDate(SupportProrateStartDateT&& value) {
    m_supportProrateStartDateHasBeenSet = true;
    m_supportProrateStartDate = std::forward<SupportProrateStartDateT>(value);
  }
  template <typename SupportProrateStartDateT = Aws::Utils::DateTime>
  GetEnterpriseSupportContractDetailsResult& WithSupportProrateStartDate(SupportProrateStartDateT&& value) {
    SetSupportProrateStartDate(std::forward<SupportProrateStartDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of accounts covered by the Enterprise Support contract.</p>
   */
  inline const Aws::Vector<ContractAccount>& GetContractPayerAccountIds() const { return m_contractPayerAccountIds; }
  template <typename ContractPayerAccountIdsT = Aws::Vector<ContractAccount>>
  void SetContractPayerAccountIds(ContractPayerAccountIdsT&& value) {
    m_contractPayerAccountIdsHasBeenSet = true;
    m_contractPayerAccountIds = std::forward<ContractPayerAccountIdsT>(value);
  }
  template <typename ContractPayerAccountIdsT = Aws::Vector<ContractAccount>>
  GetEnterpriseSupportContractDetailsResult& WithContractPayerAccountIds(ContractPayerAccountIdsT&& value) {
    SetContractPayerAccountIds(std::forward<ContractPayerAccountIdsT>(value));
    return *this;
  }
  template <typename ContractPayerAccountIdsT = ContractAccount>
  GetEnterpriseSupportContractDetailsResult& AddContractPayerAccountIds(ContractPayerAccountIdsT&& value) {
    m_contractPayerAccountIdsHasBeenSet = true;
    m_contractPayerAccountIds.emplace_back(std::forward<ContractPayerAccountIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of payer accounts and their charge allocation percentages.</p>
   */
  inline const Aws::Vector<ChargeAccount>& GetChargedPayerAccountIds() const { return m_chargedPayerAccountIds; }
  template <typename ChargedPayerAccountIdsT = Aws::Vector<ChargeAccount>>
  void SetChargedPayerAccountIds(ChargedPayerAccountIdsT&& value) {
    m_chargedPayerAccountIdsHasBeenSet = true;
    m_chargedPayerAccountIds = std::forward<ChargedPayerAccountIdsT>(value);
  }
  template <typename ChargedPayerAccountIdsT = Aws::Vector<ChargeAccount>>
  GetEnterpriseSupportContractDetailsResult& WithChargedPayerAccountIds(ChargedPayerAccountIdsT&& value) {
    SetChargedPayerAccountIds(std::forward<ChargedPayerAccountIdsT>(value));
    return *this;
  }
  template <typename ChargedPayerAccountIdsT = ChargeAccount>
  GetEnterpriseSupportContractDetailsResult& AddChargedPayerAccountIds(ChargedPayerAccountIdsT&& value) {
    m_chargedPayerAccountIdsHasBeenSet = true;
    m_chargedPayerAccountIds.emplace_back(std::forward<ChargedPayerAccountIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Any Additional support charges applied to the contract.</p>
   */
  inline const Aws::Vector<AdditionalCharge>& GetAdditionalSupportCharge() const { return m_additionalSupportCharge; }
  template <typename AdditionalSupportChargeT = Aws::Vector<AdditionalCharge>>
  void SetAdditionalSupportCharge(AdditionalSupportChargeT&& value) {
    m_additionalSupportChargeHasBeenSet = true;
    m_additionalSupportCharge = std::forward<AdditionalSupportChargeT>(value);
  }
  template <typename AdditionalSupportChargeT = Aws::Vector<AdditionalCharge>>
  GetEnterpriseSupportContractDetailsResult& WithAdditionalSupportCharge(AdditionalSupportChargeT&& value) {
    SetAdditionalSupportCharge(std::forward<AdditionalSupportChargeT>(value));
    return *this;
  }
  template <typename AdditionalSupportChargeT = AdditionalCharge>
  GetEnterpriseSupportContractDetailsResult& AddAdditionalSupportCharge(AdditionalSupportChargeT&& value) {
    m_additionalSupportChargeHasBeenSet = true;
    m_additionalSupportCharge.emplace_back(std::forward<AdditionalSupportChargeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Any Additional support-eligible usage spend charges.</p>
   */
  inline const Aws::Vector<AdditionalCharge>& GetAdditionalSupportEligibleUsageSpend() const {
    return m_additionalSupportEligibleUsageSpend;
  }
  template <typename AdditionalSupportEligibleUsageSpendT = Aws::Vector<AdditionalCharge>>
  void SetAdditionalSupportEligibleUsageSpend(AdditionalSupportEligibleUsageSpendT&& value) {
    m_additionalSupportEligibleUsageSpendHasBeenSet = true;
    m_additionalSupportEligibleUsageSpend = std::forward<AdditionalSupportEligibleUsageSpendT>(value);
  }
  template <typename AdditionalSupportEligibleUsageSpendT = Aws::Vector<AdditionalCharge>>
  GetEnterpriseSupportContractDetailsResult& WithAdditionalSupportEligibleUsageSpend(AdditionalSupportEligibleUsageSpendT&& value) {
    SetAdditionalSupportEligibleUsageSpend(std::forward<AdditionalSupportEligibleUsageSpendT>(value));
    return *this;
  }
  template <typename AdditionalSupportEligibleUsageSpendT = AdditionalCharge>
  GetEnterpriseSupportContractDetailsResult& AddAdditionalSupportEligibleUsageSpend(AdditionalSupportEligibleUsageSpendT&& value) {
    m_additionalSupportEligibleUsageSpendHasBeenSet = true;
    m_additionalSupportEligibleUsageSpend.emplace_back(std::forward<AdditionalSupportEligibleUsageSpendT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pricing plans associated with this Enterprise Support contract.</p>
   */
  inline const Aws::Vector<PricingPlan>& GetPricingPlans() const { return m_pricingPlans; }
  template <typename PricingPlansT = Aws::Vector<PricingPlan>>
  void SetPricingPlans(PricingPlansT&& value) {
    m_pricingPlansHasBeenSet = true;
    m_pricingPlans = std::forward<PricingPlansT>(value);
  }
  template <typename PricingPlansT = Aws::Vector<PricingPlan>>
  GetEnterpriseSupportContractDetailsResult& WithPricingPlans(PricingPlansT&& value) {
    SetPricingPlans(std::forward<PricingPlansT>(value));
    return *this;
  }
  template <typename PricingPlansT = PricingPlan>
  GetEnterpriseSupportContractDetailsResult& AddPricingPlans(PricingPlansT&& value) {
    m_pricingPlansHasBeenSet = true;
    m_pricingPlans.emplace_back(std::forward<PricingPlansT>(value));
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
  GetEnterpriseSupportContractDetailsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  bool m_isContractActive{false};

  Aws::String m_supportAllocationMethod;

  Aws::Utils::DateTime m_supportReservedInstanceAmortizationStartDate{};

  Aws::String m_supportReservedInstanceTreatmentMethod;

  Aws::Utils::DateTime m_supportSavingsPlansAmortizationStartDate{};

  Aws::String m_supportSavingsPlansTreatmentMethod;

  Aws::Utils::DateTime m_supportProrateStartDate{};

  Aws::Vector<ContractAccount> m_contractPayerAccountIds;

  Aws::Vector<ChargeAccount> m_chargedPayerAccountIds;

  Aws::Vector<AdditionalCharge> m_additionalSupportCharge;

  Aws::Vector<AdditionalCharge> m_additionalSupportEligibleUsageSpend;

  Aws::Vector<PricingPlan> m_pricingPlans;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_isContractActiveHasBeenSet = false;
  bool m_supportAllocationMethodHasBeenSet = false;
  bool m_supportReservedInstanceAmortizationStartDateHasBeenSet = false;
  bool m_supportReservedInstanceTreatmentMethodHasBeenSet = false;
  bool m_supportSavingsPlansAmortizationStartDateHasBeenSet = false;
  bool m_supportSavingsPlansTreatmentMethodHasBeenSet = false;
  bool m_supportProrateStartDateHasBeenSet = false;
  bool m_contractPayerAccountIdsHasBeenSet = false;
  bool m_chargedPayerAccountIdsHasBeenSet = false;
  bool m_additionalSupportChargeHasBeenSet = false;
  bool m_additionalSupportEligibleUsageSpendHasBeenSet = false;
  bool m_pricingPlansHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
