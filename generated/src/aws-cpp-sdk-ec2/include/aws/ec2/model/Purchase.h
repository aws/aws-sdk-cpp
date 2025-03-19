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
    AWS_EC2_API Purchase() = default;
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
    inline CurrencyCodeValues GetCurrencyCode() const { return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    inline void SetCurrencyCode(CurrencyCodeValues value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }
    inline Purchase& WithCurrencyCode(CurrencyCodeValues value) { SetCurrencyCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the reservation's term in seconds.</p>
     */
    inline int GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }
    inline Purchase& WithDuration(int value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the Dedicated Hosts associated with the reservation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHostIdSet() const { return m_hostIdSet; }
    inline bool HostIdSetHasBeenSet() const { return m_hostIdSetHasBeenSet; }
    template<typename HostIdSetT = Aws::Vector<Aws::String>>
    void SetHostIdSet(HostIdSetT&& value) { m_hostIdSetHasBeenSet = true; m_hostIdSet = std::forward<HostIdSetT>(value); }
    template<typename HostIdSetT = Aws::Vector<Aws::String>>
    Purchase& WithHostIdSet(HostIdSetT&& value) { SetHostIdSet(std::forward<HostIdSetT>(value)); return *this;}
    template<typename HostIdSetT = Aws::String>
    Purchase& AddHostIdSet(HostIdSetT&& value) { m_hostIdSetHasBeenSet = true; m_hostIdSet.emplace_back(std::forward<HostIdSetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the reservation.</p>
     */
    inline const Aws::String& GetHostReservationId() const { return m_hostReservationId; }
    inline bool HostReservationIdHasBeenSet() const { return m_hostReservationIdHasBeenSet; }
    template<typename HostReservationIdT = Aws::String>
    void SetHostReservationId(HostReservationIdT&& value) { m_hostReservationIdHasBeenSet = true; m_hostReservationId = std::forward<HostReservationIdT>(value); }
    template<typename HostReservationIdT = Aws::String>
    Purchase& WithHostReservationId(HostReservationIdT&& value) { SetHostReservationId(std::forward<HostReservationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hourly price of the reservation per hour.</p>
     */
    inline const Aws::String& GetHourlyPrice() const { return m_hourlyPrice; }
    inline bool HourlyPriceHasBeenSet() const { return m_hourlyPriceHasBeenSet; }
    template<typename HourlyPriceT = Aws::String>
    void SetHourlyPrice(HourlyPriceT&& value) { m_hourlyPriceHasBeenSet = true; m_hourlyPrice = std::forward<HourlyPriceT>(value); }
    template<typename HourlyPriceT = Aws::String>
    Purchase& WithHourlyPrice(HourlyPriceT&& value) { SetHourlyPrice(std::forward<HourlyPriceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance family on the Dedicated Host that the reservation can be
     * associated with.</p>
     */
    inline const Aws::String& GetInstanceFamily() const { return m_instanceFamily; }
    inline bool InstanceFamilyHasBeenSet() const { return m_instanceFamilyHasBeenSet; }
    template<typename InstanceFamilyT = Aws::String>
    void SetInstanceFamily(InstanceFamilyT&& value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily = std::forward<InstanceFamilyT>(value); }
    template<typename InstanceFamilyT = Aws::String>
    Purchase& WithInstanceFamily(InstanceFamilyT&& value) { SetInstanceFamily(std::forward<InstanceFamilyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The payment option for the reservation.</p>
     */
    inline PaymentOption GetPaymentOption() const { return m_paymentOption; }
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }
    inline void SetPaymentOption(PaymentOption value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }
    inline Purchase& WithPaymentOption(PaymentOption value) { SetPaymentOption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upfront price of the reservation.</p>
     */
    inline const Aws::String& GetUpfrontPrice() const { return m_upfrontPrice; }
    inline bool UpfrontPriceHasBeenSet() const { return m_upfrontPriceHasBeenSet; }
    template<typename UpfrontPriceT = Aws::String>
    void SetUpfrontPrice(UpfrontPriceT&& value) { m_upfrontPriceHasBeenSet = true; m_upfrontPrice = std::forward<UpfrontPriceT>(value); }
    template<typename UpfrontPriceT = Aws::String>
    Purchase& WithUpfrontPrice(UpfrontPriceT&& value) { SetUpfrontPrice(std::forward<UpfrontPriceT>(value)); return *this;}
    ///@}
  private:

    CurrencyCodeValues m_currencyCode{CurrencyCodeValues::NOT_SET};
    bool m_currencyCodeHasBeenSet = false;

    int m_duration{0};
    bool m_durationHasBeenSet = false;

    Aws::Vector<Aws::String> m_hostIdSet;
    bool m_hostIdSetHasBeenSet = false;

    Aws::String m_hostReservationId;
    bool m_hostReservationIdHasBeenSet = false;

    Aws::String m_hourlyPrice;
    bool m_hourlyPriceHasBeenSet = false;

    Aws::String m_instanceFamily;
    bool m_instanceFamilyHasBeenSet = false;

    PaymentOption m_paymentOption{PaymentOption::NOT_SET};
    bool m_paymentOptionHasBeenSet = false;

    Aws::String m_upfrontPrice;
    bool m_upfrontPriceHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
