/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
 * <p>A tier-level charge within a Business Support pricing plan. Business Support
 * uses tiered pricing where different percentage rates apply to different ranges
 * of Support-eligible spend.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/BusinessSupportTierCharge">AWS
 * API Reference</a></p>
 */
class BusinessSupportTierCharge {
 public:
  AWS_BILLING_API BusinessSupportTierCharge() = default;
  AWS_BILLING_API BusinessSupportTierCharge(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API BusinessSupportTierCharge& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A human-readable description of the pricing tier, including the spend range
   * and percentage rate applied.</p>
   */
  inline const Aws::String& GetTierDescription() const { return m_tierDescription; }
  inline bool TierDescriptionHasBeenSet() const { return m_tierDescriptionHasBeenSet; }
  template <typename TierDescriptionT = Aws::String>
  void SetTierDescription(TierDescriptionT&& value) {
    m_tierDescriptionHasBeenSet = true;
    m_tierDescription = std::forward<TierDescriptionT>(value);
  }
  template <typename TierDescriptionT = Aws::String>
  BusinessSupportTierCharge& WithTierDescription(TierDescriptionT&& value) {
    SetTierDescription(std::forward<TierDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The percentage rate applied to Support-eligible spend within this pricing
   * tier.</p>
   */
  inline const Aws::String& GetTierRate() const { return m_tierRate; }
  inline bool TierRateHasBeenSet() const { return m_tierRateHasBeenSet; }
  template <typename TierRateT = Aws::String>
  void SetTierRate(TierRateT&& value) {
    m_tierRateHasBeenSet = true;
    m_tierRate = std::forward<TierRateT>(value);
  }
  template <typename TierRateT = Aws::String>
  BusinessSupportTierCharge& WithTierRate(TierRateT&& value) {
    SetTierRate(std::forward<TierRateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount of Support-eligible spend that falls within this pricing tier.</p>
   */
  inline const Aws::String& GetUsageSlice() const { return m_usageSlice; }
  inline bool UsageSliceHasBeenSet() const { return m_usageSliceHasBeenSet; }
  template <typename UsageSliceT = Aws::String>
  void SetUsageSlice(UsageSliceT&& value) {
    m_usageSliceHasBeenSet = true;
    m_usageSlice = std::forward<UsageSliceT>(value);
  }
  template <typename UsageSliceT = Aws::String>
  BusinessSupportTierCharge& WithUsageSlice(UsageSliceT&& value) {
    SetUsageSlice(std::forward<UsageSliceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Business Support charge amount calculated for this pricing tier.</p>
   */
  inline const Aws::String& GetTierCharge() const { return m_tierCharge; }
  inline bool TierChargeHasBeenSet() const { return m_tierChargeHasBeenSet; }
  template <typename TierChargeT = Aws::String>
  void SetTierCharge(TierChargeT&& value) {
    m_tierChargeHasBeenSet = true;
    m_tierCharge = std::forward<TierChargeT>(value);
  }
  template <typename TierChargeT = Aws::String>
  BusinessSupportTierCharge& WithTierCharge(TierChargeT&& value) {
    SetTierCharge(std::forward<TierChargeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The start date of the charge period for this tier charge.</p>
   */
  inline const Aws::Utils::DateTime& GetChargePeriodStartDate() const { return m_chargePeriodStartDate; }
  inline bool ChargePeriodStartDateHasBeenSet() const { return m_chargePeriodStartDateHasBeenSet; }
  template <typename ChargePeriodStartDateT = Aws::Utils::DateTime>
  void SetChargePeriodStartDate(ChargePeriodStartDateT&& value) {
    m_chargePeriodStartDateHasBeenSet = true;
    m_chargePeriodStartDate = std::forward<ChargePeriodStartDateT>(value);
  }
  template <typename ChargePeriodStartDateT = Aws::Utils::DateTime>
  BusinessSupportTierCharge& WithChargePeriodStartDate(ChargePeriodStartDateT&& value) {
    SetChargePeriodStartDate(std::forward<ChargePeriodStartDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end date of the charge period for this tier charge.</p>
   */
  inline const Aws::Utils::DateTime& GetChargePeriodEndDate() const { return m_chargePeriodEndDate; }
  inline bool ChargePeriodEndDateHasBeenSet() const { return m_chargePeriodEndDateHasBeenSet; }
  template <typename ChargePeriodEndDateT = Aws::Utils::DateTime>
  void SetChargePeriodEndDate(ChargePeriodEndDateT&& value) {
    m_chargePeriodEndDateHasBeenSet = true;
    m_chargePeriodEndDate = std::forward<ChargePeriodEndDateT>(value);
  }
  template <typename ChargePeriodEndDateT = Aws::Utils::DateTime>
  BusinessSupportTierCharge& WithChargePeriodEndDate(ChargePeriodEndDateT&& value) {
    SetChargePeriodEndDate(std::forward<ChargePeriodEndDateT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_tierDescription;

  Aws::String m_tierRate;

  Aws::String m_usageSlice;

  Aws::String m_tierCharge;

  Aws::Utils::DateTime m_chargePeriodStartDate{};

  Aws::Utils::DateTime m_chargePeriodEndDate{};
  bool m_tierDescriptionHasBeenSet = false;
  bool m_tierRateHasBeenSet = false;
  bool m_usageSliceHasBeenSet = false;
  bool m_tierChargeHasBeenSet = false;
  bool m_chargePeriodStartDateHasBeenSet = false;
  bool m_chargePeriodEndDateHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
