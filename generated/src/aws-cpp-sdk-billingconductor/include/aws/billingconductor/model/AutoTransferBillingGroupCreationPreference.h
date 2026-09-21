/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BillingConductor {
namespace Model {

/**
 * <p> The auto billing group creation preference for a billing transfer. When the
 * preference is enabled, Billing Conductor automatically creates an indirect
 * billing transfer billing group, with the specified pricing plan, for each
 * account that transfers its bill to the bill source account of the billing
 * transfer. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/AutoTransferBillingGroupCreationPreference">AWS
 * API Reference</a></p>
 */
class AutoTransferBillingGroupCreationPreference {
 public:
  AWS_BILLINGCONDUCTOR_API AutoTransferBillingGroupCreationPreference() = default;
  AWS_BILLINGCONDUCTOR_API AutoTransferBillingGroupCreationPreference(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLINGCONDUCTOR_API AutoTransferBillingGroupCreationPreference& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> Specifies whether Billing Conductor automatically creates billing groups for
   * the billing transfer. The preference is disabled by default. </p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline AutoTransferBillingGroupCreationPreference& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The Amazon Resource Name (ARN) of the pricing plan to apply to the
   * automatically created billing groups. This value is required when
   * <code>Enabled</code> is <code>true</code>, and must be omitted when
   * <code>Enabled</code> is <code>false</code>. </p>
   */
  inline const Aws::String& GetPricingPlanArn() const { return m_pricingPlanArn; }
  inline bool PricingPlanArnHasBeenSet() const { return m_pricingPlanArnHasBeenSet; }
  template <typename PricingPlanArnT = Aws::String>
  void SetPricingPlanArn(PricingPlanArnT&& value) {
    m_pricingPlanArnHasBeenSet = true;
    m_pricingPlanArn = std::forward<PricingPlanArnT>(value);
  }
  template <typename PricingPlanArnT = Aws::String>
  AutoTransferBillingGroupCreationPreference& WithPricingPlanArn(PricingPlanArnT&& value) {
    SetPricingPlanArn(std::forward<PricingPlanArnT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_enabled{false};

  Aws::String m_pricingPlanArn;
  bool m_enabledHasBeenSet = false;
  bool m_pricingPlanArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace BillingConductor
}  // namespace Aws
