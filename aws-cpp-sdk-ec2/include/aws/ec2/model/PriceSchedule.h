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
   * <p>Describes the price for a Reserved Instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PriceSchedule">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API PriceSchedule
  {
  public:
    PriceSchedule();
    PriceSchedule(const Aws::Utils::Xml::XmlNode& xmlNode);
    PriceSchedule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    inline bool GetActive() const{ return m_active; }

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
    inline void SetActive(bool value) { m_activeHasBeenSet = true; m_active = value; }

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
    inline PriceSchedule& WithActive(bool value) { SetActive(value); return *this;}


    /**
     * <p>The currency for transacting the Reserved Instance resale. At this time, the
     * only supported currency is <code>USD</code>.</p>
     */
    inline const CurrencyCodeValues& GetCurrencyCode() const{ return m_currencyCode; }

    /**
     * <p>The currency for transacting the Reserved Instance resale. At this time, the
     * only supported currency is <code>USD</code>.</p>
     */
    inline void SetCurrencyCode(const CurrencyCodeValues& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }

    /**
     * <p>The currency for transacting the Reserved Instance resale. At this time, the
     * only supported currency is <code>USD</code>.</p>
     */
    inline void SetCurrencyCode(CurrencyCodeValues&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }

    /**
     * <p>The currency for transacting the Reserved Instance resale. At this time, the
     * only supported currency is <code>USD</code>.</p>
     */
    inline PriceSchedule& WithCurrencyCode(const CurrencyCodeValues& value) { SetCurrencyCode(value); return *this;}

    /**
     * <p>The currency for transacting the Reserved Instance resale. At this time, the
     * only supported currency is <code>USD</code>.</p>
     */
    inline PriceSchedule& WithCurrencyCode(CurrencyCodeValues&& value) { SetCurrencyCode(std::move(value)); return *this;}


    /**
     * <p>The fixed price for the term.</p>
     */
    inline double GetPrice() const{ return m_price; }

    /**
     * <p>The fixed price for the term.</p>
     */
    inline void SetPrice(double value) { m_priceHasBeenSet = true; m_price = value; }

    /**
     * <p>The fixed price for the term.</p>
     */
    inline PriceSchedule& WithPrice(double value) { SetPrice(value); return *this;}


    /**
     * <p>The number of months remaining in the reservation. For example, 2 is the
     * second to the last month before the capacity reservation expires.</p>
     */
    inline long long GetTerm() const{ return m_term; }

    /**
     * <p>The number of months remaining in the reservation. For example, 2 is the
     * second to the last month before the capacity reservation expires.</p>
     */
    inline void SetTerm(long long value) { m_termHasBeenSet = true; m_term = value; }

    /**
     * <p>The number of months remaining in the reservation. For example, 2 is the
     * second to the last month before the capacity reservation expires.</p>
     */
    inline PriceSchedule& WithTerm(long long value) { SetTerm(value); return *this;}

  private:

    bool m_active;
    bool m_activeHasBeenSet;

    CurrencyCodeValues m_currencyCode;
    bool m_currencyCodeHasBeenSet;

    double m_price;
    bool m_priceHasBeenSet;

    long long m_term;
    bool m_termHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
