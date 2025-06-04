/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/invoicing/Invoicing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/invoicing/model/AmountBreakdown.h>
#include <aws/invoicing/model/CurrencyExchangeDetails.h>
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
   * <p> The amount charged after taxes, in the preferred currency. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/InvoiceCurrencyAmount">AWS
   * API Reference</a></p>
   */
  class InvoiceCurrencyAmount
  {
  public:
    AWS_INVOICING_API InvoiceCurrencyAmount() = default;
    AWS_INVOICING_API InvoiceCurrencyAmount(Aws::Utils::Json::JsonView jsonValue);
    AWS_INVOICING_API InvoiceCurrencyAmount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INVOICING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The invoice currency amount. </p>
     */
    inline const Aws::String& GetTotalAmount() const { return m_totalAmount; }
    inline bool TotalAmountHasBeenSet() const { return m_totalAmountHasBeenSet; }
    template<typename TotalAmountT = Aws::String>
    void SetTotalAmount(TotalAmountT&& value) { m_totalAmountHasBeenSet = true; m_totalAmount = std::forward<TotalAmountT>(value); }
    template<typename TotalAmountT = Aws::String>
    InvoiceCurrencyAmount& WithTotalAmount(TotalAmountT&& value) { SetTotalAmount(std::forward<TotalAmountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Details about the invoice total amount before tax. </p>
     */
    inline const Aws::String& GetTotalAmountBeforeTax() const { return m_totalAmountBeforeTax; }
    inline bool TotalAmountBeforeTaxHasBeenSet() const { return m_totalAmountBeforeTaxHasBeenSet; }
    template<typename TotalAmountBeforeTaxT = Aws::String>
    void SetTotalAmountBeforeTax(TotalAmountBeforeTaxT&& value) { m_totalAmountBeforeTaxHasBeenSet = true; m_totalAmountBeforeTax = std::forward<TotalAmountBeforeTaxT>(value); }
    template<typename TotalAmountBeforeTaxT = Aws::String>
    InvoiceCurrencyAmount& WithTotalAmountBeforeTax(TotalAmountBeforeTaxT&& value) { SetTotalAmountBeforeTax(std::forward<TotalAmountBeforeTaxT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency dominion of the invoice document.</p>
     */
    inline const Aws::String& GetCurrencyCode() const { return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    template<typename CurrencyCodeT = Aws::String>
    void SetCurrencyCode(CurrencyCodeT&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::forward<CurrencyCodeT>(value); }
    template<typename CurrencyCodeT = Aws::String>
    InvoiceCurrencyAmount& WithCurrencyCode(CurrencyCodeT&& value) { SetCurrencyCode(std::forward<CurrencyCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Details about the invoice currency amount. </p>
     */
    inline const AmountBreakdown& GetAmountBreakdown() const { return m_amountBreakdown; }
    inline bool AmountBreakdownHasBeenSet() const { return m_amountBreakdownHasBeenSet; }
    template<typename AmountBreakdownT = AmountBreakdown>
    void SetAmountBreakdown(AmountBreakdownT&& value) { m_amountBreakdownHasBeenSet = true; m_amountBreakdown = std::forward<AmountBreakdownT>(value); }
    template<typename AmountBreakdownT = AmountBreakdown>
    InvoiceCurrencyAmount& WithAmountBreakdown(AmountBreakdownT&& value) { SetAmountBreakdown(std::forward<AmountBreakdownT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The details of currency exchange. </p>
     */
    inline const CurrencyExchangeDetails& GetCurrencyExchangeDetails() const { return m_currencyExchangeDetails; }
    inline bool CurrencyExchangeDetailsHasBeenSet() const { return m_currencyExchangeDetailsHasBeenSet; }
    template<typename CurrencyExchangeDetailsT = CurrencyExchangeDetails>
    void SetCurrencyExchangeDetails(CurrencyExchangeDetailsT&& value) { m_currencyExchangeDetailsHasBeenSet = true; m_currencyExchangeDetails = std::forward<CurrencyExchangeDetailsT>(value); }
    template<typename CurrencyExchangeDetailsT = CurrencyExchangeDetails>
    InvoiceCurrencyAmount& WithCurrencyExchangeDetails(CurrencyExchangeDetailsT&& value) { SetCurrencyExchangeDetails(std::forward<CurrencyExchangeDetailsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_totalAmount;
    bool m_totalAmountHasBeenSet = false;

    Aws::String m_totalAmountBeforeTax;
    bool m_totalAmountBeforeTaxHasBeenSet = false;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    AmountBreakdown m_amountBreakdown;
    bool m_amountBreakdownHasBeenSet = false;

    CurrencyExchangeDetails m_currencyExchangeDetails;
    bool m_currencyExchangeDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace Invoicing
} // namespace Aws
