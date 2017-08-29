/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/CurrencyCodeValues.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the limit price of a Reserved Instance offering.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReservedInstanceLimitPrice">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ReservedInstanceLimitPrice
  {
  public:
    ReservedInstanceLimitPrice();
    ReservedInstanceLimitPrice(const Aws::Utils::Xml::XmlNode& xmlNode);
    ReservedInstanceLimitPrice& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Used for Reserved Instance Marketplace offerings. Specifies the limit price
     * on the total order (instanceCount * price).</p>
     */
    inline double GetAmount() const{ return m_amount; }

    /**
     * <p>Used for Reserved Instance Marketplace offerings. Specifies the limit price
     * on the total order (instanceCount * price).</p>
     */
    inline void SetAmount(double value) { m_amountHasBeenSet = true; m_amount = value; }

    /**
     * <p>Used for Reserved Instance Marketplace offerings. Specifies the limit price
     * on the total order (instanceCount * price).</p>
     */
    inline ReservedInstanceLimitPrice& WithAmount(double value) { SetAmount(value); return *this;}


    /**
     * <p>The currency in which the <code>limitPrice</code> amount is specified. At
     * this time, the only supported currency is <code>USD</code>.</p>
     */
    inline const CurrencyCodeValues& GetCurrencyCode() const{ return m_currencyCode; }

    /**
     * <p>The currency in which the <code>limitPrice</code> amount is specified. At
     * this time, the only supported currency is <code>USD</code>.</p>
     */
    inline void SetCurrencyCode(const CurrencyCodeValues& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }

    /**
     * <p>The currency in which the <code>limitPrice</code> amount is specified. At
     * this time, the only supported currency is <code>USD</code>.</p>
     */
    inline void SetCurrencyCode(CurrencyCodeValues&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }

    /**
     * <p>The currency in which the <code>limitPrice</code> amount is specified. At
     * this time, the only supported currency is <code>USD</code>.</p>
     */
    inline ReservedInstanceLimitPrice& WithCurrencyCode(const CurrencyCodeValues& value) { SetCurrencyCode(value); return *this;}

    /**
     * <p>The currency in which the <code>limitPrice</code> amount is specified. At
     * this time, the only supported currency is <code>USD</code>.</p>
     */
    inline ReservedInstanceLimitPrice& WithCurrencyCode(CurrencyCodeValues&& value) { SetCurrencyCode(std::move(value)); return *this;}

  private:

    double m_amount;
    bool m_amountHasBeenSet;

    CurrencyCodeValues m_currencyCode;
    bool m_currencyCodeHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
