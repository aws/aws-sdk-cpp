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
 * <p>A tier within an Enterprise Support pricing plan.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/PricingPlanTier">AWS
 * API Reference</a></p>
 */
class PricingPlanTier {
 public:
  AWS_BILLING_API PricingPlanTier() = default;
  AWS_BILLING_API PricingPlanTier(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API PricingPlanTier& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The minimum spend threshold for this tier.</p>
   */
  inline const Aws::String& GetTierMinimum() const { return m_tierMinimum; }
  inline bool TierMinimumHasBeenSet() const { return m_tierMinimumHasBeenSet; }
  template <typename TierMinimumT = Aws::String>
  void SetTierMinimum(TierMinimumT&& value) {
    m_tierMinimumHasBeenSet = true;
    m_tierMinimum = std::forward<TierMinimumT>(value);
  }
  template <typename TierMinimumT = Aws::String>
  PricingPlanTier& WithTierMinimum(TierMinimumT&& value) {
    SetTierMinimum(std::forward<TierMinimumT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum spend threshold for this tier.</p>
   */
  inline const Aws::String& GetTierMaximum() const { return m_tierMaximum; }
  inline bool TierMaximumHasBeenSet() const { return m_tierMaximumHasBeenSet; }
  template <typename TierMaximumT = Aws::String>
  void SetTierMaximum(TierMaximumT&& value) {
    m_tierMaximumHasBeenSet = true;
    m_tierMaximum = std::forward<TierMaximumT>(value);
  }
  template <typename TierMaximumT = Aws::String>
  PricingPlanTier& WithTierMaximum(TierMaximumT&& value) {
    SetTierMaximum(std::forward<TierMaximumT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The base charge for this tier.</p>
   */
  inline const Aws::String& GetBaseCharge() const { return m_baseCharge; }
  inline bool BaseChargeHasBeenSet() const { return m_baseChargeHasBeenSet; }
  template <typename BaseChargeT = Aws::String>
  void SetBaseCharge(BaseChargeT&& value) {
    m_baseChargeHasBeenSet = true;
    m_baseCharge = std::forward<BaseChargeT>(value);
  }
  template <typename BaseChargeT = Aws::String>
  PricingPlanTier& WithBaseCharge(BaseChargeT&& value) {
    SetBaseCharge(std::forward<BaseChargeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The additional percentage applied to aggregate charges in this tier.</p>
   */
  inline const Aws::String& GetAdditionalPercentageOfAggregateCharges() const { return m_additionalPercentageOfAggregateCharges; }
  inline bool AdditionalPercentageOfAggregateChargesHasBeenSet() const { return m_additionalPercentageOfAggregateChargesHasBeenSet; }
  template <typename AdditionalPercentageOfAggregateChargesT = Aws::String>
  void SetAdditionalPercentageOfAggregateCharges(AdditionalPercentageOfAggregateChargesT&& value) {
    m_additionalPercentageOfAggregateChargesHasBeenSet = true;
    m_additionalPercentageOfAggregateCharges = std::forward<AdditionalPercentageOfAggregateChargesT>(value);
  }
  template <typename AdditionalPercentageOfAggregateChargesT = Aws::String>
  PricingPlanTier& WithAdditionalPercentageOfAggregateCharges(AdditionalPercentageOfAggregateChargesT&& value) {
    SetAdditionalPercentageOfAggregateCharges(std::forward<AdditionalPercentageOfAggregateChargesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The adjustment applied to aggregate charges.</p>
   */
  inline const Aws::String& GetAggregateChargesAdjustment() const { return m_aggregateChargesAdjustment; }
  inline bool AggregateChargesAdjustmentHasBeenSet() const { return m_aggregateChargesAdjustmentHasBeenSet; }
  template <typename AggregateChargesAdjustmentT = Aws::String>
  void SetAggregateChargesAdjustment(AggregateChargesAdjustmentT&& value) {
    m_aggregateChargesAdjustmentHasBeenSet = true;
    m_aggregateChargesAdjustment = std::forward<AggregateChargesAdjustmentT>(value);
  }
  template <typename AggregateChargesAdjustmentT = Aws::String>
  PricingPlanTier& WithAggregateChargesAdjustment(AggregateChargesAdjustmentT&& value) {
    SetAggregateChargesAdjustment(std::forward<AggregateChargesAdjustmentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the tier charges are calculated incrementally.</p>
   */
  inline bool GetIncremental() const { return m_incremental; }
  inline bool IncrementalHasBeenSet() const { return m_incrementalHasBeenSet; }
  inline void SetIncremental(bool value) {
    m_incrementalHasBeenSet = true;
    m_incremental = value;
  }
  inline PricingPlanTier& WithIncremental(bool value) {
    SetIncremental(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The increment amount for incremental tier calculations.</p>
   */
  inline const Aws::String& GetIncrement() const { return m_increment; }
  inline bool IncrementHasBeenSet() const { return m_incrementHasBeenSet; }
  template <typename IncrementT = Aws::String>
  void SetIncrement(IncrementT&& value) {
    m_incrementHasBeenSet = true;
    m_increment = std::forward<IncrementT>(value);
  }
  template <typename IncrementT = Aws::String>
  PricingPlanTier& WithIncrement(IncrementT&& value) {
    SetIncrement(std::forward<IncrementT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The charge per increment.</p>
   */
  inline const Aws::String& GetIncrementCharge() const { return m_incrementCharge; }
  inline bool IncrementChargeHasBeenSet() const { return m_incrementChargeHasBeenSet; }
  template <typename IncrementChargeT = Aws::String>
  void SetIncrementCharge(IncrementChargeT&& value) {
    m_incrementChargeHasBeenSet = true;
    m_incrementCharge = std::forward<IncrementChargeT>(value);
  }
  template <typename IncrementChargeT = Aws::String>
  PricingPlanTier& WithIncrementCharge(IncrementChargeT&& value) {
    SetIncrementCharge(std::forward<IncrementChargeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_tierMinimum;

  Aws::String m_tierMaximum;

  Aws::String m_baseCharge;

  Aws::String m_additionalPercentageOfAggregateCharges;

  Aws::String m_aggregateChargesAdjustment;

  bool m_incremental{false};

  Aws::String m_increment;

  Aws::String m_incrementCharge;
  bool m_tierMinimumHasBeenSet = false;
  bool m_tierMaximumHasBeenSet = false;
  bool m_baseChargeHasBeenSet = false;
  bool m_additionalPercentageOfAggregateChargesHasBeenSet = false;
  bool m_aggregateChargesAdjustmentHasBeenSet = false;
  bool m_incrementalHasBeenSet = false;
  bool m_incrementHasBeenSet = false;
  bool m_incrementChargeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
