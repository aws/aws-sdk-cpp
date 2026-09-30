/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/BusinessSupportDiscount.h>
#include <aws/billing/model/BusinessSupportServiceSpend.h>
#include <aws/billing/model/BusinessSupportTierCharge.h>
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
 * <p>Business Support charges for a linked account.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/BusinessSupportAccountCharge">AWS
 * API Reference</a></p>
 */
class BusinessSupportAccountCharge {
 public:
  AWS_BILLING_API BusinessSupportAccountCharge() = default;
  AWS_BILLING_API BusinessSupportAccountCharge(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API BusinessSupportAccountCharge& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  BusinessSupportAccountCharge& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Support plan name for this account. Valid values:
   * <code>AWSSupportBusiness</code> (Business Support plan),
   * <code>AWSSupportDeveloper</code> (Developer Support plan),
   * <code>AWSSupportEssential</code> (Basic Support plan).</p>
   */
  inline const Aws::String& GetSupportPlanName() const { return m_supportPlanName; }
  inline bool SupportPlanNameHasBeenSet() const { return m_supportPlanNameHasBeenSet; }
  template <typename SupportPlanNameT = Aws::String>
  void SetSupportPlanName(SupportPlanNameT&& value) {
    m_supportPlanNameHasBeenSet = true;
    m_supportPlanName = std::forward<SupportPlanNameT>(value);
  }
  template <typename SupportPlanNameT = Aws::String>
  BusinessSupportAccountCharge& WithSupportPlanName(SupportPlanNameT&& value) {
    SetSupportPlanName(std::forward<SupportPlanNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total Business Support charge amount for this account in the billing
   * month.</p>
   */
  inline const Aws::String& GetTotalCharge() const { return m_totalCharge; }
  inline bool TotalChargeHasBeenSet() const { return m_totalChargeHasBeenSet; }
  template <typename TotalChargeT = Aws::String>
  void SetTotalCharge(TotalChargeT&& value) {
    m_totalChargeHasBeenSet = true;
    m_totalCharge = std::forward<TotalChargeT>(value);
  }
  template <typename TotalChargeT = Aws::String>
  BusinessSupportAccountCharge& WithTotalCharge(TotalChargeT&& value) {
    SetTotalCharge(std::forward<TotalChargeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total Support-eligible spend used as the basis for calculating the
   * Business Support charge for this account.</p>
   */
  inline const Aws::String& GetTotalUsageBasis() const { return m_totalUsageBasis; }
  inline bool TotalUsageBasisHasBeenSet() const { return m_totalUsageBasisHasBeenSet; }
  template <typename TotalUsageBasisT = Aws::String>
  void SetTotalUsageBasis(TotalUsageBasisT&& value) {
    m_totalUsageBasisHasBeenSet = true;
    m_totalUsageBasis = std::forward<TotalUsageBasisT>(value);
  }
  template <typename TotalUsageBasisT = Aws::String>
  BusinessSupportAccountCharge& WithTotalUsageBasis(TotalUsageBasisT&& value) {
    SetTotalUsageBasis(std::forward<TotalUsageBasisT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tier-level charges that make up the total Business Support charge for
   * this account. Each tier represents a spend range with its own rate.</p>
   */
  inline const Aws::Vector<BusinessSupportTierCharge>& GetTierCharges() const { return m_tierCharges; }
  inline bool TierChargesHasBeenSet() const { return m_tierChargesHasBeenSet; }
  template <typename TierChargesT = Aws::Vector<BusinessSupportTierCharge>>
  void SetTierCharges(TierChargesT&& value) {
    m_tierChargesHasBeenSet = true;
    m_tierCharges = std::forward<TierChargesT>(value);
  }
  template <typename TierChargesT = Aws::Vector<BusinessSupportTierCharge>>
  BusinessSupportAccountCharge& WithTierCharges(TierChargesT&& value) {
    SetTierCharges(std::forward<TierChargesT>(value));
    return *this;
  }
  template <typename TierChargesT = BusinessSupportTierCharge>
  BusinessSupportAccountCharge& AddTierCharges(TierChargesT&& value) {
    m_tierChargesHasBeenSet = true;
    m_tierCharges.emplace_back(std::forward<TierChargesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The discount applied to the Business Support charge for this account, if any.
   * This field is absent when no discount applies.</p>
   */
  inline const BusinessSupportDiscount& GetSupportDiscount() const { return m_supportDiscount; }
  inline bool SupportDiscountHasBeenSet() const { return m_supportDiscountHasBeenSet; }
  template <typename SupportDiscountT = BusinessSupportDiscount>
  void SetSupportDiscount(SupportDiscountT&& value) {
    m_supportDiscountHasBeenSet = true;
    m_supportDiscount = std::forward<SupportDiscountT>(value);
  }
  template <typename SupportDiscountT = BusinessSupportDiscount>
  BusinessSupportAccountCharge& WithSupportDiscount(SupportDiscountT&& value) {
    SetSupportDiscount(std::forward<SupportDiscountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Support-eligible spend broken down by contributing service for this
   * account.</p>
   */
  inline const Aws::Vector<BusinessSupportServiceSpend>& GetSupportEligibleSpendByService() const {
    return m_supportEligibleSpendByService;
  }
  inline bool SupportEligibleSpendByServiceHasBeenSet() const { return m_supportEligibleSpendByServiceHasBeenSet; }
  template <typename SupportEligibleSpendByServiceT = Aws::Vector<BusinessSupportServiceSpend>>
  void SetSupportEligibleSpendByService(SupportEligibleSpendByServiceT&& value) {
    m_supportEligibleSpendByServiceHasBeenSet = true;
    m_supportEligibleSpendByService = std::forward<SupportEligibleSpendByServiceT>(value);
  }
  template <typename SupportEligibleSpendByServiceT = Aws::Vector<BusinessSupportServiceSpend>>
  BusinessSupportAccountCharge& WithSupportEligibleSpendByService(SupportEligibleSpendByServiceT&& value) {
    SetSupportEligibleSpendByService(std::forward<SupportEligibleSpendByServiceT>(value));
    return *this;
  }
  template <typename SupportEligibleSpendByServiceT = BusinessSupportServiceSpend>
  BusinessSupportAccountCharge& AddSupportEligibleSpendByService(SupportEligibleSpendByServiceT&& value) {
    m_supportEligibleSpendByServiceHasBeenSet = true;
    m_supportEligibleSpendByService.emplace_back(std::forward<SupportEligibleSpendByServiceT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountId;

  Aws::String m_supportPlanName;

  Aws::String m_totalCharge;

  Aws::String m_totalUsageBasis;

  Aws::Vector<BusinessSupportTierCharge> m_tierCharges;

  BusinessSupportDiscount m_supportDiscount;

  Aws::Vector<BusinessSupportServiceSpend> m_supportEligibleSpendByService;
  bool m_accountIdHasBeenSet = false;
  bool m_supportPlanNameHasBeenSet = false;
  bool m_totalChargeHasBeenSet = false;
  bool m_totalUsageBasisHasBeenSet = false;
  bool m_tierChargesHasBeenSet = false;
  bool m_supportDiscountHasBeenSet = false;
  bool m_supportEligibleSpendByServiceHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
