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
   * <p>Describes the price for a Reserved Instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PriceSchedule">AWS
   * API Reference</a></p>
   */
  class PriceSchedule
  {
  public:
    AWS_EC2_API PriceSchedule() = default;
    AWS_EC2_API PriceSchedule(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API PriceSchedule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The current price schedule, as determined by the term remaining for the
     * Reserved Instance in the listing.</p> <p>A specific price schedule is always in
     * effect, but only one price schedule can be active at any time. Take, for
     * example, a Reserved Instance listing that has five months remaining in its term.
     * When you specify price schedules for five months and two months, this means that
     * schedule 1, covering the first three months of the remaining term, will be
     * active during months 5, 4, and 3. Then schedule 2, covering the last two months
     * of the term, will be active for months 2 and 1.</p>
     */
    inline bool GetActive() const { return m_active; }
    inline bool ActiveHasBeenSet() const { return m_activeHasBeenSet; }
    inline void SetActive(bool value) { m_activeHasBeenSet = true; m_active = value; }
    inline PriceSchedule& WithActive(bool value) { SetActive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency for transacting the Reserved Instance resale. At this time, the
     * only supported currency is <code>USD</code>.</p>
     */
    inline CurrencyCodeValues GetCurrencyCode() const { return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    inline void SetCurrencyCode(CurrencyCodeValues value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }
    inline PriceSchedule& WithCurrencyCode(CurrencyCodeValues value) { SetCurrencyCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fixed price for the term.</p>
     */
    inline double GetPrice() const { return m_price; }
    inline bool PriceHasBeenSet() const { return m_priceHasBeenSet; }
    inline void SetPrice(double value) { m_priceHasBeenSet = true; m_price = value; }
    inline PriceSchedule& WithPrice(double value) { SetPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of months remaining in the reservation. For example, 2 is the
     * second to the last month before the capacity reservation expires.</p>
     */
    inline long long GetTerm() const { return m_term; }
    inline bool TermHasBeenSet() const { return m_termHasBeenSet; }
    inline void SetTerm(long long value) { m_termHasBeenSet = true; m_term = value; }
    inline PriceSchedule& WithTerm(long long value) { SetTerm(value); return *this;}
    ///@}
  private:

    bool m_active{false};
    bool m_activeHasBeenSet = false;

    CurrencyCodeValues m_currencyCode{CurrencyCodeValues::NOT_SET};
    bool m_currencyCodeHasBeenSet = false;

    double m_price{0.0};
    bool m_priceHasBeenSet = false;

    long long m_term{0};
    bool m_termHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
