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
 * <p>A discount applied to a Business Support account charge, including the
 * discount amount, percentage, type, and source.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/BusinessSupportDiscount">AWS
 * API Reference</a></p>
 */
class BusinessSupportDiscount {
 public:
  AWS_BILLING_API BusinessSupportDiscount() = default;
  AWS_BILLING_API BusinessSupportDiscount(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API BusinessSupportDiscount& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The discount amount applied to the Business Support charge. This value is
   * negative, representing a reduction in the charge.</p>
   */
  inline const Aws::String& GetDiscountAmount() const { return m_discountAmount; }
  inline bool DiscountAmountHasBeenSet() const { return m_discountAmountHasBeenSet; }
  template <typename DiscountAmountT = Aws::String>
  void SetDiscountAmount(DiscountAmountT&& value) {
    m_discountAmountHasBeenSet = true;
    m_discountAmount = std::forward<DiscountAmountT>(value);
  }
  template <typename DiscountAmountT = Aws::String>
  BusinessSupportDiscount& WithDiscountAmount(DiscountAmountT&& value) {
    SetDiscountAmount(std::forward<DiscountAmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The discount percentage applied to the Business Support charge, expressed as
   * a decimal (for example, <code>0.12</code> for a 12% discount).</p>
   */
  inline const Aws::String& GetDiscountPercentage() const { return m_discountPercentage; }
  inline bool DiscountPercentageHasBeenSet() const { return m_discountPercentageHasBeenSet; }
  template <typename DiscountPercentageT = Aws::String>
  void SetDiscountPercentage(DiscountPercentageT&& value) {
    m_discountPercentageHasBeenSet = true;
    m_discountPercentage = std::forward<DiscountPercentageT>(value);
  }
  template <typename DiscountPercentageT = Aws::String>
  BusinessSupportDiscount& WithDiscountPercentage(DiscountPercentageT&& value) {
    SetDiscountPercentage(std::forward<DiscountPercentageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of discount applied. Valid values: <code>Distributor_Discount</code>
   * (a discount applied through a distributor arrangement),
   * <code>SPP_Discount</code> (a discount applied through the Solution Provider
   * Program).</p>
   */
  inline const Aws::String& GetDiscountType() const { return m_discountType; }
  inline bool DiscountTypeHasBeenSet() const { return m_discountTypeHasBeenSet; }
  template <typename DiscountTypeT = Aws::String>
  void SetDiscountType(DiscountTypeT&& value) {
    m_discountTypeHasBeenSet = true;
    m_discountType = std::forward<DiscountTypeT>(value);
  }
  template <typename DiscountTypeT = Aws::String>
  BusinessSupportDiscount& WithDiscountType(DiscountTypeT&& value) {
    SetDiscountType(std::forward<DiscountTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source or program through which the discount was applied.</p>
   */
  inline const Aws::String& GetDiscountSource() const { return m_discountSource; }
  inline bool DiscountSourceHasBeenSet() const { return m_discountSourceHasBeenSet; }
  template <typename DiscountSourceT = Aws::String>
  void SetDiscountSource(DiscountSourceT&& value) {
    m_discountSourceHasBeenSet = true;
    m_discountSource = std::forward<DiscountSourceT>(value);
  }
  template <typename DiscountSourceT = Aws::String>
  BusinessSupportDiscount& WithDiscountSource(DiscountSourceT&& value) {
    SetDiscountSource(std::forward<DiscountSourceT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_discountAmount;

  Aws::String m_discountPercentage;

  Aws::String m_discountType;

  Aws::String m_discountSource;
  bool m_discountAmountHasBeenSet = false;
  bool m_discountPercentageHasBeenSet = false;
  bool m_discountTypeHasBeenSet = false;
  bool m_discountSourceHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
