/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/PricingPlanTier.h>
#include <aws/core/utils/DateTime.h>
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
 * <p>A pricing plan for Enterprise Support billing.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/PricingPlan">AWS
 * API Reference</a></p>
 */
class PricingPlan {
 public:
  AWS_BILLING_API PricingPlan() = default;
  AWS_BILLING_API PricingPlan(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API PricingPlan& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier for the pricing plan.</p>
   */
  inline const Aws::String& GetPricingPlanId() const { return m_pricingPlanId; }
  inline bool PricingPlanIdHasBeenSet() const { return m_pricingPlanIdHasBeenSet; }
  template <typename PricingPlanIdT = Aws::String>
  void SetPricingPlanId(PricingPlanIdT&& value) {
    m_pricingPlanIdHasBeenSet = true;
    m_pricingPlanId = std::forward<PricingPlanIdT>(value);
  }
  template <typename PricingPlanIdT = Aws::String>
  PricingPlan& WithPricingPlanId(PricingPlanIdT&& value) {
    SetPricingPlanId(std::forward<PricingPlanIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the pricing plan.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  PricingPlan& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the pricing plan.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  PricingPlan& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The start date of the pricing plan.</p>
   */
  inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
  inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
  template <typename StartDateT = Aws::Utils::DateTime>
  void SetStartDate(StartDateT&& value) {
    m_startDateHasBeenSet = true;
    m_startDate = std::forward<StartDateT>(value);
  }
  template <typename StartDateT = Aws::Utils::DateTime>
  PricingPlan& WithStartDate(StartDateT&& value) {
    SetStartDate(std::forward<StartDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end date of the pricing plan.</p>
   */
  inline const Aws::Utils::DateTime& GetEndDate() const { return m_endDate; }
  inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
  template <typename EndDateT = Aws::Utils::DateTime>
  void SetEndDate(EndDateT&& value) {
    m_endDateHasBeenSet = true;
    m_endDate = std::forward<EndDateT>(value);
  }
  template <typename EndDateT = Aws::Utils::DateTime>
  PricingPlan& WithEndDate(EndDateT&& value) {
    SetEndDate(std::forward<EndDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The discount percentage applied by this pricing plan.</p>
   */
  inline const Aws::String& GetPlanDiscountPercent() const { return m_planDiscountPercent; }
  inline bool PlanDiscountPercentHasBeenSet() const { return m_planDiscountPercentHasBeenSet; }
  template <typename PlanDiscountPercentT = Aws::String>
  void SetPlanDiscountPercent(PlanDiscountPercentT&& value) {
    m_planDiscountPercentHasBeenSet = true;
    m_planDiscountPercent = std::forward<PlanDiscountPercentT>(value);
  }
  template <typename PlanDiscountPercentT = Aws::String>
  PricingPlan& WithPlanDiscountPercent(PlanDiscountPercentT&& value) {
    SetPlanDiscountPercent(std::forward<PlanDiscountPercentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the discount applies to the minimum Support charge.</p>
   */
  inline bool GetDiscountAppliesToMinimumCharge() const { return m_discountAppliesToMinimumCharge; }
  inline bool DiscountAppliesToMinimumChargeHasBeenSet() const { return m_discountAppliesToMinimumChargeHasBeenSet; }
  inline void SetDiscountAppliesToMinimumCharge(bool value) {
    m_discountAppliesToMinimumChargeHasBeenSet = true;
    m_discountAppliesToMinimumCharge = value;
  }
  inline PricingPlan& WithDiscountAppliesToMinimumCharge(bool value) {
    SetDiscountAppliesToMinimumCharge(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The minimum Support charge amount for this pricing plan.</p>
   */
  inline const Aws::String& GetMinimumCharge() const { return m_minimumCharge; }
  inline bool MinimumChargeHasBeenSet() const { return m_minimumChargeHasBeenSet; }
  template <typename MinimumChargeT = Aws::String>
  void SetMinimumCharge(MinimumChargeT&& value) {
    m_minimumChargeHasBeenSet = true;
    m_minimumCharge = std::forward<MinimumChargeT>(value);
  }
  template <typename MinimumChargeT = Aws::String>
  PricingPlan& WithMinimumCharge(MinimumChargeT&& value) {
    SetMinimumCharge(std::forward<MinimumChargeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the pricing plan uses tiered pricing.</p>
   */
  inline const Aws::String& GetTiered() const { return m_tiered; }
  inline bool TieredHasBeenSet() const { return m_tieredHasBeenSet; }
  template <typename TieredT = Aws::String>
  void SetTiered(TieredT&& value) {
    m_tieredHasBeenSet = true;
    m_tiered = std::forward<TieredT>(value);
  }
  template <typename TieredT = Aws::String>
  PricingPlan& WithTiered(TieredT&& value) {
    SetTiered(std::forward<TieredT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pricing tiers within this plan.</p>
   */
  inline const Aws::Vector<PricingPlanTier>& GetTiers() const { return m_tiers; }
  inline bool TiersHasBeenSet() const { return m_tiersHasBeenSet; }
  template <typename TiersT = Aws::Vector<PricingPlanTier>>
  void SetTiers(TiersT&& value) {
    m_tiersHasBeenSet = true;
    m_tiers = std::forward<TiersT>(value);
  }
  template <typename TiersT = Aws::Vector<PricingPlanTier>>
  PricingPlan& WithTiers(TiersT&& value) {
    SetTiers(std::forward<TiersT>(value));
    return *this;
  }
  template <typename TiersT = PricingPlanTier>
  PricingPlan& AddTiers(TiersT&& value) {
    m_tiersHasBeenSet = true;
    m_tiers.emplace_back(std::forward<TiersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_pricingPlanId;

  Aws::String m_name;

  Aws::String m_description;

  Aws::Utils::DateTime m_startDate{};

  Aws::Utils::DateTime m_endDate{};

  Aws::String m_planDiscountPercent;

  bool m_discountAppliesToMinimumCharge{false};

  Aws::String m_minimumCharge;

  Aws::String m_tiered;

  Aws::Vector<PricingPlanTier> m_tiers;
  bool m_pricingPlanIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_startDateHasBeenSet = false;
  bool m_endDateHasBeenSet = false;
  bool m_planDiscountPercentHasBeenSet = false;
  bool m_discountAppliesToMinimumChargeHasBeenSet = false;
  bool m_minimumChargeHasBeenSet = false;
  bool m_tieredHasBeenSet = false;
  bool m_tiersHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
