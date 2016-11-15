/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/CurrencyCode.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>A number representing the monetary amount for an offering or transaction.</p>
   */
  class AWS_DEVICEFARM_API MonetaryAmount
  {
  public:
    MonetaryAmount();
    MonetaryAmount(const Aws::Utils::Json::JsonValue& jsonValue);
    MonetaryAmount& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The numerical amount of an offering or transaction.</p>
     */
    inline double GetAmount() const{ return m_amount; }

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
     * "U.S. dollars."</p>
     */
    inline const CurrencyCode& GetCurrencyCode() const{ return m_currencyCode; }

    /**
     * <p>The currency code of a monetary amount. For example, <code>USD</code> means
     * "U.S. dollars."</p>
     */
    inline void SetCurrencyCode(const CurrencyCode& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }

    /**
     * <p>The currency code of a monetary amount. For example, <code>USD</code> means
     * "U.S. dollars."</p>
     */
    inline void SetCurrencyCode(CurrencyCode&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }

    /**
     * <p>The currency code of a monetary amount. For example, <code>USD</code> means
     * "U.S. dollars."</p>
     */
    inline MonetaryAmount& WithCurrencyCode(const CurrencyCode& value) { SetCurrencyCode(value); return *this;}

    /**
     * <p>The currency code of a monetary amount. For example, <code>USD</code> means
     * "U.S. dollars."</p>
     */
    inline MonetaryAmount& WithCurrencyCode(CurrencyCode&& value) { SetCurrencyCode(value); return *this;}

  private:
    double m_amount;
    bool m_amountHasBeenSet;
    CurrencyCode m_currencyCode;
    bool m_currencyCodeHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
