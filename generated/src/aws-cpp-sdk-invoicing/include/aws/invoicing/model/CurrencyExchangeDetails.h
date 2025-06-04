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
   * <p>The details of currency exchange. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/CurrencyExchangeDetails">AWS
   * API Reference</a></p>
   */
  class CurrencyExchangeDetails
  {
  public:
    AWS_INVOICING_API CurrencyExchangeDetails() = default;
    AWS_INVOICING_API CurrencyExchangeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_INVOICING_API CurrencyExchangeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INVOICING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The exchange source currency. </p>
     */
    inline const Aws::String& GetSourceCurrencyCode() const { return m_sourceCurrencyCode; }
    inline bool SourceCurrencyCodeHasBeenSet() const { return m_sourceCurrencyCodeHasBeenSet; }
    template<typename SourceCurrencyCodeT = Aws::String>
    void SetSourceCurrencyCode(SourceCurrencyCodeT&& value) { m_sourceCurrencyCodeHasBeenSet = true; m_sourceCurrencyCode = std::forward<SourceCurrencyCodeT>(value); }
    template<typename SourceCurrencyCodeT = Aws::String>
    CurrencyExchangeDetails& WithSourceCurrencyCode(SourceCurrencyCodeT&& value) { SetSourceCurrencyCode(std::forward<SourceCurrencyCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exchange target currency. </p>
     */
    inline const Aws::String& GetTargetCurrencyCode() const { return m_targetCurrencyCode; }
    inline bool TargetCurrencyCodeHasBeenSet() const { return m_targetCurrencyCodeHasBeenSet; }
    template<typename TargetCurrencyCodeT = Aws::String>
    void SetTargetCurrencyCode(TargetCurrencyCodeT&& value) { m_targetCurrencyCodeHasBeenSet = true; m_targetCurrencyCode = std::forward<TargetCurrencyCodeT>(value); }
    template<typename TargetCurrencyCodeT = Aws::String>
    CurrencyExchangeDetails& WithTargetCurrencyCode(TargetCurrencyCodeT&& value) { SetTargetCurrencyCode(std::forward<TargetCurrencyCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency exchange rate. </p>
     */
    inline const Aws::String& GetRate() const { return m_rate; }
    inline bool RateHasBeenSet() const { return m_rateHasBeenSet; }
    template<typename RateT = Aws::String>
    void SetRate(RateT&& value) { m_rateHasBeenSet = true; m_rate = std::forward<RateT>(value); }
    template<typename RateT = Aws::String>
    CurrencyExchangeDetails& WithRate(RateT&& value) { SetRate(std::forward<RateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceCurrencyCode;
    bool m_sourceCurrencyCodeHasBeenSet = false;

    Aws::String m_targetCurrencyCode;
    bool m_targetCurrencyCodeHasBeenSet = false;

    Aws::String m_rate;
    bool m_rateHasBeenSet = false;
  };

} // namespace Model
} // namespace Invoicing
} // namespace Aws
