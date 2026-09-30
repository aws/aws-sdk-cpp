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
 * <p>A service-level spend entry contributing to Business Support eligible
 * spend.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/BusinessSupportServiceSpend">AWS
 * API Reference</a></p>
 */
class BusinessSupportServiceSpend {
 public:
  AWS_BILLING_API BusinessSupportServiceSpend() = default;
  AWS_BILLING_API BusinessSupportServiceSpend(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API BusinessSupportServiceSpend& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the Amazon Web Services service contributing to the
   * Support-eligible spend.</p>
   */
  inline const Aws::String& GetContributingService() const { return m_contributingService; }
  inline bool ContributingServiceHasBeenSet() const { return m_contributingServiceHasBeenSet; }
  template <typename ContributingServiceT = Aws::String>
  void SetContributingService(ContributingServiceT&& value) {
    m_contributingServiceHasBeenSet = true;
    m_contributingService = std::forward<ContributingServiceT>(value);
  }
  template <typename ContributingServiceT = Aws::String>
  BusinessSupportServiceSpend& WithContributingService(ContributingServiceT&& value) {
    SetContributingService(std::forward<ContributingServiceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the line item. Valid values: <code>Usage</code>.</p>
   */
  inline const Aws::String& GetItemType() const { return m_itemType; }
  inline bool ItemTypeHasBeenSet() const { return m_itemTypeHasBeenSet; }
  template <typename ItemTypeT = Aws::String>
  void SetItemType(ItemTypeT&& value) {
    m_itemTypeHasBeenSet = true;
    m_itemType = std::forward<ItemTypeT>(value);
  }
  template <typename ItemTypeT = Aws::String>
  BusinessSupportServiceSpend& WithItemType(ItemTypeT&& value) {
    SetItemType(std::forward<ItemTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable description of the service spend entry.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  BusinessSupportServiceSpend& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Support-eligible spend amount for this service.</p>
   */
  inline const Aws::String& GetChargeAmount() const { return m_chargeAmount; }
  inline bool ChargeAmountHasBeenSet() const { return m_chargeAmountHasBeenSet; }
  template <typename ChargeAmountT = Aws::String>
  void SetChargeAmount(ChargeAmountT&& value) {
    m_chargeAmountHasBeenSet = true;
    m_chargeAmount = std::forward<ChargeAmountT>(value);
  }
  template <typename ChargeAmountT = Aws::String>
  BusinessSupportServiceSpend& WithChargeAmount(ChargeAmountT&& value) {
    SetChargeAmount(std::forward<ChargeAmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ISO 4217 currency code for the charge amount (for example,
   * <code>USD</code>).</p>
   */
  inline const Aws::String& GetCurrency() const { return m_currency; }
  inline bool CurrencyHasBeenSet() const { return m_currencyHasBeenSet; }
  template <typename CurrencyT = Aws::String>
  void SetCurrency(CurrencyT&& value) {
    m_currencyHasBeenSet = true;
    m_currency = std::forward<CurrencyT>(value);
  }
  template <typename CurrencyT = Aws::String>
  BusinessSupportServiceSpend& WithCurrency(CurrencyT&& value) {
    SetCurrency(std::forward<CurrencyT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_contributingService;

  Aws::String m_itemType;

  Aws::String m_description;

  Aws::String m_chargeAmount;

  Aws::String m_currency;
  bool m_contributingServiceHasBeenSet = false;
  bool m_itemTypeHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_chargeAmountHasBeenSet = false;
  bool m_currencyHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
