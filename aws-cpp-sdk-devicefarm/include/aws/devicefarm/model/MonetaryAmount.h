/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/CurrencyCode.h>
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
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>A number that represents the monetary amount for an offering or
   * transaction.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/MonetaryAmount">AWS
   * API Reference</a></p>
   */
  class MonetaryAmount
  {
  public:
    AWS_DEVICEFARM_API MonetaryAmount();
    AWS_DEVICEFARM_API MonetaryAmount(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API MonetaryAmount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The numerical amount of an offering or transaction.</p>
     */
    inline double GetAmount() const{ return m_amount; }

    /**
     * <p>The numerical amount of an offering or transaction.</p>
     */
    inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }

    /**
     * <p>The numerical amount of an offering or transaction.</p>
     */
    inline void SetAmount(double value) { m_amountHasBeenSet = true; m_amount = value; }

    /**
     * <p>The numerical amount of an offering or transaction.</p>
     */
    inline MonetaryAmount& WithAmount(double value) { SetAmount(value); return *this;}


    /**
     * <p>The currency code of a monetary amount. For example, <code>USD</code> means
     * U.S. dollars.</p>
     */
    inline const CurrencyCode& GetCurrencyCode() const{ return m_currencyCode; }

    /**
     * <p>The currency code of a monetary amount. For example, <code>USD</code> means
     * U.S. dollars.</p>
     */
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }

    /**
     * <p>The currency code of a monetary amount. For example, <code>USD</code> means
     * U.S. dollars.</p>
     */
    inline void SetCurrencyCode(const CurrencyCode& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }

    /**
     * <p>The currency code of a monetary amount. For example, <code>USD</code> means
     * U.S. dollars.</p>
     */
    inline void SetCurrencyCode(CurrencyCode&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }

    /**
     * <p>The currency code of a monetary amount. For example, <code>USD</code> means
     * U.S. dollars.</p>
     */
    inline MonetaryAmount& WithCurrencyCode(const CurrencyCode& value) { SetCurrencyCode(value); return *this;}

    /**
     * <p>The currency code of a monetary amount. For example, <code>USD</code> means
     * U.S. dollars.</p>
     */
    inline MonetaryAmount& WithCurrencyCode(CurrencyCode&& value) { SetCurrencyCode(std::move(value)); return *this;}

  private:

    double m_amount;
    bool m_amountHasBeenSet = false;

    CurrencyCode m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
