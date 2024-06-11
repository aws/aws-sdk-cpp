/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/CurrencyCodeValues.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/PaymentOption.h>
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
   * <p>Describes the result of the purchase.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/Purchase">AWS API
   * Reference</a></p>
   */
  class Purchase
  {
  public:
    AWS_EC2_API Purchase();
    AWS_EC2_API Purchase(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API Purchase& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The currency in which the <code>UpfrontPrice</code> and
     * <code>HourlyPrice</code> amounts are specified. At this time, the only supported
     * currency is <code>USD</code>.</p>
     */
    inline const CurrencyCodeValues& GetCurrencyCode() const{ return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    inline void SetCurrencyCode(const CurrencyCodeValues& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }
    inline void SetCurrencyCode(CurrencyCodeValues&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }
    inline Purchase& WithCurrencyCode(const CurrencyCodeValues& value) { SetCurrencyCode(value); return *this;}
    inline Purchase& WithCurrencyCode(CurrencyCodeValues&& value) { SetCurrencyCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the reservation's term in seconds.</p>
     */
    inline int GetDuration() const{ return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }
    inline Purchase& WithDuration(int value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the Dedicated Hosts associated with the reservation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHostIdSet() const{ return m_hostIdSet; }
    inline bool HostIdSetHasBeenSet() const { return m_hostIdSetHasBeenSet; }
    inline void SetHostIdSet(const Aws::Vector<Aws::String>& value) { m_hostIdSetHasBeenSet = true; m_hostIdSet = value; }
    inline void SetHostIdSet(Aws::Vector<Aws::String>&& value) { m_hostIdSetHasBeenSet = true; m_hostIdSet = std::move(value); }
    inline Purchase& WithHostIdSet(const Aws::Vector<Aws::String>& value) { SetHostIdSet(value); return *this;}
    inline Purchase& WithHostIdSet(Aws::Vector<Aws::String>&& value) { SetHostIdSet(std::move(value)); return *this;}
    inline Purchase& AddHostIdSet(const Aws::String& value) { m_hostIdSetHasBeenSet = true; m_hostIdSet.push_back(value); return *this; }
    inline Purchase& AddHostIdSet(Aws::String&& value) { m_hostIdSetHasBeenSet = true; m_hostIdSet.push_back(std::move(value)); return *this; }
    inline Purchase& AddHostIdSet(const char* value) { m_hostIdSetHasBeenSet = true; m_hostIdSet.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the reservation.</p>
     */
    inline const Aws::String& GetHostReservationId() const{ return m_hostReservationId; }
    inline bool HostReservationIdHasBeenSet() const { return m_hostReservationIdHasBeenSet; }
    inline void SetHostReservationId(const Aws::String& value) { m_hostReservationIdHasBeenSet = true; m_hostReservationId = value; }
    inline void SetHostReservationId(Aws::String&& value) { m_hostReservationIdHasBeenSet = true; m_hostReservationId = std::move(value); }
    inline void SetHostReservationId(const char* value) { m_hostReservationIdHasBeenSet = true; m_hostReservationId.assign(value); }
    inline Purchase& WithHostReservationId(const Aws::String& value) { SetHostReservationId(value); return *this;}
    inline Purchase& WithHostReservationId(Aws::String&& value) { SetHostReservationId(std::move(value)); return *this;}
    inline Purchase& WithHostReservationId(const char* value) { SetHostReservationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hourly price of the reservation per hour.</p>
     */
    inline const Aws::String& GetHourlyPrice() const{ return m_hourlyPrice; }
    inline bool HourlyPriceHasBeenSet() const { return m_hourlyPriceHasBeenSet; }
    inline void SetHourlyPrice(const Aws::String& value) { m_hourlyPriceHasBeenSet = true; m_hourlyPrice = value; }
    inline void SetHourlyPrice(Aws::String&& value) { m_hourlyPriceHasBeenSet = true; m_hourlyPrice = std::move(value); }
    inline void SetHourlyPrice(const char* value) { m_hourlyPriceHasBeenSet = true; m_hourlyPrice.assign(value); }
    inline Purchase& WithHourlyPrice(const Aws::String& value) { SetHourlyPrice(value); return *this;}
    inline Purchase& WithHourlyPrice(Aws::String&& value) { SetHourlyPrice(std::move(value)); return *this;}
    inline Purchase& WithHourlyPrice(const char* value) { SetHourlyPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance family on the Dedicated Host that the reservation can be
     * associated with.</p>
     */
    inline const Aws::String& GetInstanceFamily() const{ return m_instanceFamily; }
    inline bool InstanceFamilyHasBeenSet() const { return m_instanceFamilyHasBeenSet; }
    inline void SetInstanceFamily(const Aws::String& value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily = value; }
    inline void SetInstanceFamily(Aws::String&& value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily = std::move(value); }
    inline void SetInstanceFamily(const char* value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily.assign(value); }
    inline Purchase& WithInstanceFamily(const Aws::String& value) { SetInstanceFamily(value); return *this;}
    inline Purchase& WithInstanceFamily(Aws::String&& value) { SetInstanceFamily(std::move(value)); return *this;}
    inline Purchase& WithInstanceFamily(const char* value) { SetInstanceFamily(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The payment option for the reservation.</p>
     */
    inline const PaymentOption& GetPaymentOption() const{ return m_paymentOption; }
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }
    inline void SetPaymentOption(const PaymentOption& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }
    inline void SetPaymentOption(PaymentOption&& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = std::move(value); }
    inline Purchase& WithPaymentOption(const PaymentOption& value) { SetPaymentOption(value); return *this;}
    inline Purchase& WithPaymentOption(PaymentOption&& value) { SetPaymentOption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upfront price of the reservation.</p>
     */
    inline const Aws::String& GetUpfrontPrice() const{ return m_upfrontPrice; }
    inline bool UpfrontPriceHasBeenSet() const { return m_upfrontPriceHasBeenSet; }
    inline void SetUpfrontPrice(const Aws::String& value) { m_upfrontPriceHasBeenSet = true; m_upfrontPrice = value; }
    inline void SetUpfrontPrice(Aws::String&& value) { m_upfrontPriceHasBeenSet = true; m_upfrontPrice = std::move(value); }
    inline void SetUpfrontPrice(const char* value) { m_upfrontPriceHasBeenSet = true; m_upfrontPrice.assign(value); }
    inline Purchase& WithUpfrontPrice(const Aws::String& value) { SetUpfrontPrice(value); return *this;}
    inline Purchase& WithUpfrontPrice(Aws::String&& value) { SetUpfrontPrice(std::move(value)); return *this;}
    inline Purchase& WithUpfrontPrice(const char* value) { SetUpfrontPrice(value); return *this;}
    ///@}
  private:

    CurrencyCodeValues m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    int m_duration;
    bool m_durationHasBeenSet = false;

    Aws::Vector<Aws::String> m_hostIdSet;
    bool m_hostIdSetHasBeenSet = false;

    Aws::String m_hostReservationId;
    bool m_hostReservationIdHasBeenSet = false;

    Aws::String m_hourlyPrice;
    bool m_hourlyPriceHasBeenSet = false;

    Aws::String m_instanceFamily;
    bool m_instanceFamilyHasBeenSet = false;

    PaymentOption m_paymentOption;
    bool m_paymentOptionHasBeenSet = false;

    Aws::String m_upfrontPrice;
    bool m_upfrontPriceHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
