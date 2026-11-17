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
 * <p>One new credit to create from a split.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/SplitPortion">AWS
 * API Reference</a></p>
 */
class SplitPortion {
 public:
  AWS_BILLING_API SplitPortion() = default;
  AWS_BILLING_API SplitPortion(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API SplitPortion& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The amount of the new credit, in the currency of the credit that you split.
   * The amount must be at least 100.00 in that currency. For example, if the credit
   * is in USD, the amount must be at least USD $100.00.</p>
   */
  inline const Aws::String& GetAmount() const { return m_amount; }
  inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }
  template <typename AmountT = Aws::String>
  void SetAmount(AmountT&& value) {
    m_amountHasBeenSet = true;
    m_amount = std::forward<AmountT>(value);
  }
  template <typename AmountT = Aws::String>
  SplitPortion& WithAmount(AmountT&& value) {
    SetAmount(std::forward<AmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the new credit. If you omit it, the new credit gets the
   * original credit's description followed by its position in the request, for
   * example <code>MAP credit - 1/3</code>. If you split that credit again, the name
   * extends, for example <code>MAP credit - 1/3 - 2/2</code>. A generated name is at
   * most 93 characters. If it would be longer, the name keeps only the beginning of
   * the original description.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  SplitPortion& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_amount;

  Aws::String m_description;
  bool m_amountHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
