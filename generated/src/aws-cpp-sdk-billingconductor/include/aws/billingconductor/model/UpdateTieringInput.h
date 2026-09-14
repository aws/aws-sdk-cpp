/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/billingconductor/model/CustomTier.h>
#include <aws/billingconductor/model/UpdateFreeTierConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p> The set of tiering configurations for the pricing rule. </p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/UpdateTieringInput">AWS
 * API Reference</a></p>
 */
class UpdateTieringInput {
 public:
  AWS_BILLINGCONDUCTOR_API UpdateTieringInput() = default;
  AWS_BILLINGCONDUCTOR_API UpdateTieringInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLINGCONDUCTOR_API UpdateTieringInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The possible Amazon Web Services Free Tier configurations. </p>
   */
  inline const UpdateFreeTierConfig& GetFreeTier() const { return m_freeTier; }
  inline bool FreeTierHasBeenSet() const { return m_freeTierHasBeenSet; }
  template <typename FreeTierT = UpdateFreeTierConfig>
  void SetFreeTier(FreeTierT&& value) {
    m_freeTierHasBeenSet = true;
    m_freeTier = std::forward<FreeTierT>(value);
  }
  template <typename FreeTierT = UpdateFreeTierConfig>
  UpdateTieringInput& WithFreeTier(FreeTierT&& value) {
    SetFreeTier(std::forward<FreeTierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The set of custom tiers for the pricing rule. </p>
   */
  inline const Aws::Vector<CustomTier>& GetCustomTiers() const { return m_customTiers; }
  inline bool CustomTiersHasBeenSet() const { return m_customTiersHasBeenSet; }
  template <typename CustomTiersT = Aws::Vector<CustomTier>>
  void SetCustomTiers(CustomTiersT&& value) {
    m_customTiersHasBeenSet = true;
    m_customTiers = std::forward<CustomTiersT>(value);
  }
  template <typename CustomTiersT = Aws::Vector<CustomTier>>
  UpdateTieringInput& WithCustomTiers(CustomTiersT&& value) {
    SetCustomTiers(std::forward<CustomTiersT>(value));
    return *this;
  }
  template <typename CustomTiersT = CustomTier>
  UpdateTieringInput& AddCustomTiers(CustomTiersT&& value) {
    m_customTiersHasBeenSet = true;
    m_customTiers.emplace_back(std::forward<CustomTiersT>(value));
    return *this;
  }
  ///@}
 private:
  UpdateFreeTierConfig m_freeTier;

  Aws::Vector<CustomTier> m_customTiers;
  bool m_freeTierHasBeenSet = false;
  bool m_customTiersHasBeenSet = false;
};

}  // namespace Model
}  // namespace BillingConductor
}  // namespace Aws
