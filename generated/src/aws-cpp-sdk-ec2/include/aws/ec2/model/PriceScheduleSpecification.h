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
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PriceScheduleSpecification">AWS
   * API Reference</a></p>
   */
  class PriceScheduleSpecification
  {
  public:
    AWS_EC2_API PriceScheduleSpecification();
    AWS_EC2_API PriceScheduleSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API PriceScheduleSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The currency for transacting the Reserved Instance resale. At this time, the
     * only supported currency is <code>USD</code>.</p>
     */
    inline const CurrencyCodeValues& GetCurrencyCode() const{ return m_currencyCode; }

    /**
     * <p>The currency for transacting the Reserved Instance resale. At this time, the
     * only supported currency is <code>USD</code>.</p>
     */
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }

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
    inline PriceScheduleSpecification& WithCurrencyCode(const CurrencyCodeValues& value) { SetCurrencyCode(value); return *this;}

    /**
     * <p>The currency for transacting the Reserved Instance resale. At this time, the
     * only supported currency is <code>USD</code>.</p>
     */
    inline PriceScheduleSpecification& WithCurrencyCode(CurrencyCodeValues&& value) { SetCurrencyCode(std::move(value)); return *this;}


    /**
     * <p>The fixed price for the term.</p>
     */
    inline double GetPrice() const{ return m_price; }

    /**
     * <p>The fixed price for the term.</p>
     */
    inline bool PriceHasBeenSet() const { return m_priceHasBeenSet; }

    /**
     * <p>The fixed price for the term.</p>
     */
    inline void SetPrice(double value) { m_priceHasBeenSet = true; m_price = value; }

    /**
     * <p>The fixed price for the term.</p>
     */
    inline PriceScheduleSpecification& WithPrice(double value) { SetPrice(value); return *this;}


    /**
     * <p>The number of months remaining in the reservation. For example, 2 is the
     * second to the last month before the capacity reservation expires.</p>
     */
    inline long long GetTerm() const{ return m_term; }

    /**
     * <p>The number of months remaining in the reservation. For example, 2 is the
     * second to the last month before the capacity reservation expires.</p>
     */
    inline bool TermHasBeenSet() const { return m_termHasBeenSet; }

    /**
     * <p>The number of months remaining in the reservation. For example, 2 is the
     * second to the last month before the capacity reservation expires.</p>
     */
    inline void SetTerm(long long value) { m_termHasBeenSet = true; m_term = value; }

    /**
     * <p>The number of months remaining in the reservation. For example, 2 is the
     * second to the last month before the capacity reservation expires.</p>
     */
    inline PriceScheduleSpecification& WithTerm(long long value) { SetTerm(value); return *this;}

  private:

    CurrencyCodeValues m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    double m_price;
    bool m_priceHasBeenSet = false;

    long long m_term;
    bool m_termHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
