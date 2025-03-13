/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ReservedInstanceLimitPrice
  {
  public:
    AWS_EC2_API ReservedInstanceLimitPrice() = default;
    AWS_EC2_API ReservedInstanceLimitPrice(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ReservedInstanceLimitPrice& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Used for Reserved Instance Marketplace offerings. Specifies the limit price
     * on the total order (instanceCount * price).</p>
     */
    inline double GetAmount() const { return m_amount; }
    inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }
    inline void SetAmount(double value) { m_amountHasBeenSet = true; m_amount = value; }
    inline ReservedInstanceLimitPrice& WithAmount(double value) { SetAmount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency in which the <code>limitPrice</code> amount is specified. At
     * this time, the only supported currency is <code>USD</code>.</p>
     */
    inline CurrencyCodeValues GetCurrencyCode() const { return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    inline void SetCurrencyCode(CurrencyCodeValues value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }
    inline ReservedInstanceLimitPrice& WithCurrencyCode(CurrencyCodeValues value) { SetCurrencyCode(value); return *this;}
    ///@}
  private:

    double m_amount{0.0};
    bool m_amountHasBeenSet = false;

    CurrencyCodeValues m_currencyCode{CurrencyCodeValues::NOT_SET};
    bool m_currencyCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
