/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/invoicing/Invoicing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Invoicing
{
namespace Model
{

  /**
   * <p> The discounted amount. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/DiscountsBreakdownAmount">AWS
   * API Reference</a></p>
   */
  class DiscountsBreakdownAmount
  {
  public:
    AWS_INVOICING_API DiscountsBreakdownAmount() = default;
    AWS_INVOICING_API DiscountsBreakdownAmount(Aws::Utils::Json::JsonView jsonValue);
    AWS_INVOICING_API DiscountsBreakdownAmount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INVOICING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The list of discounts information. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DiscountsBreakdownAmount& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The discounted amount. </p>
     */
    inline const Aws::String& GetAmount() const { return m_amount; }
    inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }
    template<typename AmountT = Aws::String>
    void SetAmount(AmountT&& value) { m_amountHasBeenSet = true; m_amount = std::forward<AmountT>(value); }
    template<typename AmountT = Aws::String>
    DiscountsBreakdownAmount& WithAmount(AmountT&& value) { SetAmount(std::forward<AmountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The details for the discount rate.. </p>
     */
    inline const Aws::String& GetRate() const { return m_rate; }
    inline bool RateHasBeenSet() const { return m_rateHasBeenSet; }
    template<typename RateT = Aws::String>
    void SetRate(RateT&& value) { m_rateHasBeenSet = true; m_rate = std::forward<RateT>(value); }
    template<typename RateT = Aws::String>
    DiscountsBreakdownAmount& WithRate(RateT&& value) { SetRate(std::forward<RateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_amount;
    bool m_amountHasBeenSet = false;

    Aws::String m_rate;
    bool m_rateHasBeenSet = false;
  };

} // namespace Model
} // namespace Invoicing
} // namespace Aws
