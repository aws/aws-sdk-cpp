/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/invoicing/Invoicing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/invoicing/model/DiscountsBreakdown.h>
#include <aws/invoicing/model/TaxesBreakdown.h>
#include <aws/invoicing/model/FeesBreakdown.h>
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
   * <p>Details about how the total amount was calculated and categorized.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/AmountBreakdown">AWS
   * API Reference</a></p>
   */
  class AmountBreakdown
  {
  public:
    AWS_INVOICING_API AmountBreakdown() = default;
    AWS_INVOICING_API AmountBreakdown(Aws::Utils::Json::JsonView jsonValue);
    AWS_INVOICING_API AmountBreakdown& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INVOICING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The total of a set of the breakdown. </p>
     */
    inline const Aws::String& GetSubTotalAmount() const { return m_subTotalAmount; }
    inline bool SubTotalAmountHasBeenSet() const { return m_subTotalAmountHasBeenSet; }
    template<typename SubTotalAmountT = Aws::String>
    void SetSubTotalAmount(SubTotalAmountT&& value) { m_subTotalAmountHasBeenSet = true; m_subTotalAmount = std::forward<SubTotalAmountT>(value); }
    template<typename SubTotalAmountT = Aws::String>
    AmountBreakdown& WithSubTotalAmount(SubTotalAmountT&& value) { SetSubTotalAmount(std::forward<SubTotalAmountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The discounted amount. </p>
     */
    inline const DiscountsBreakdown& GetDiscounts() const { return m_discounts; }
    inline bool DiscountsHasBeenSet() const { return m_discountsHasBeenSet; }
    template<typename DiscountsT = DiscountsBreakdown>
    void SetDiscounts(DiscountsT&& value) { m_discountsHasBeenSet = true; m_discounts = std::forward<DiscountsT>(value); }
    template<typename DiscountsT = DiscountsBreakdown>
    AmountBreakdown& WithDiscounts(DiscountsT&& value) { SetDiscounts(std::forward<DiscountsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The tax amount. </p>
     */
    inline const TaxesBreakdown& GetTaxes() const { return m_taxes; }
    inline bool TaxesHasBeenSet() const { return m_taxesHasBeenSet; }
    template<typename TaxesT = TaxesBreakdown>
    void SetTaxes(TaxesT&& value) { m_taxesHasBeenSet = true; m_taxes = std::forward<TaxesT>(value); }
    template<typename TaxesT = TaxesBreakdown>
    AmountBreakdown& WithTaxes(TaxesT&& value) { SetTaxes(std::forward<TaxesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The fee amount. </p>
     */
    inline const FeesBreakdown& GetFees() const { return m_fees; }
    inline bool FeesHasBeenSet() const { return m_feesHasBeenSet; }
    template<typename FeesT = FeesBreakdown>
    void SetFees(FeesT&& value) { m_feesHasBeenSet = true; m_fees = std::forward<FeesT>(value); }
    template<typename FeesT = FeesBreakdown>
    AmountBreakdown& WithFees(FeesT&& value) { SetFees(std::forward<FeesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_subTotalAmount;
    bool m_subTotalAmountHasBeenSet = false;

    DiscountsBreakdown m_discounts;
    bool m_discountsHasBeenSet = false;

    TaxesBreakdown m_taxes;
    bool m_taxesHasBeenSet = false;

    FeesBreakdown m_fees;
    bool m_feesHasBeenSet = false;
  };

} // namespace Model
} // namespace Invoicing
} // namespace Aws
