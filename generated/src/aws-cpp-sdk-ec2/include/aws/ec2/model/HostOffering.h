/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/CurrencyCodeValues.h>
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
   * <p>Details about the Dedicated Host Reservation offering.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/HostOffering">AWS
   * API Reference</a></p>
   */
  class HostOffering
  {
  public:
    AWS_EC2_API HostOffering();
    AWS_EC2_API HostOffering(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API HostOffering& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The currency of the offering.</p>
     */
    inline const CurrencyCodeValues& GetCurrencyCode() const{ return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    inline void SetCurrencyCode(const CurrencyCodeValues& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }
    inline void SetCurrencyCode(CurrencyCodeValues&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }
    inline HostOffering& WithCurrencyCode(const CurrencyCodeValues& value) { SetCurrencyCode(value); return *this;}
    inline HostOffering& WithCurrencyCode(CurrencyCodeValues&& value) { SetCurrencyCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the offering (in seconds).</p>
     */
    inline int GetDuration() const{ return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }
    inline HostOffering& WithDuration(int value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hourly price of the offering.</p>
     */
    inline const Aws::String& GetHourlyPrice() const{ return m_hourlyPrice; }
    inline bool HourlyPriceHasBeenSet() const { return m_hourlyPriceHasBeenSet; }
    inline void SetHourlyPrice(const Aws::String& value) { m_hourlyPriceHasBeenSet = true; m_hourlyPrice = value; }
    inline void SetHourlyPrice(Aws::String&& value) { m_hourlyPriceHasBeenSet = true; m_hourlyPrice = std::move(value); }
    inline void SetHourlyPrice(const char* value) { m_hourlyPriceHasBeenSet = true; m_hourlyPrice.assign(value); }
    inline HostOffering& WithHourlyPrice(const Aws::String& value) { SetHourlyPrice(value); return *this;}
    inline HostOffering& WithHourlyPrice(Aws::String&& value) { SetHourlyPrice(std::move(value)); return *this;}
    inline HostOffering& WithHourlyPrice(const char* value) { SetHourlyPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance family of the offering.</p>
     */
    inline const Aws::String& GetInstanceFamily() const{ return m_instanceFamily; }
    inline bool InstanceFamilyHasBeenSet() const { return m_instanceFamilyHasBeenSet; }
    inline void SetInstanceFamily(const Aws::String& value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily = value; }
    inline void SetInstanceFamily(Aws::String&& value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily = std::move(value); }
    inline void SetInstanceFamily(const char* value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily.assign(value); }
    inline HostOffering& WithInstanceFamily(const Aws::String& value) { SetInstanceFamily(value); return *this;}
    inline HostOffering& WithInstanceFamily(Aws::String&& value) { SetInstanceFamily(std::move(value)); return *this;}
    inline HostOffering& WithInstanceFamily(const char* value) { SetInstanceFamily(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the offering.</p>
     */
    inline const Aws::String& GetOfferingId() const{ return m_offeringId; }
    inline bool OfferingIdHasBeenSet() const { return m_offeringIdHasBeenSet; }
    inline void SetOfferingId(const Aws::String& value) { m_offeringIdHasBeenSet = true; m_offeringId = value; }
    inline void SetOfferingId(Aws::String&& value) { m_offeringIdHasBeenSet = true; m_offeringId = std::move(value); }
    inline void SetOfferingId(const char* value) { m_offeringIdHasBeenSet = true; m_offeringId.assign(value); }
    inline HostOffering& WithOfferingId(const Aws::String& value) { SetOfferingId(value); return *this;}
    inline HostOffering& WithOfferingId(Aws::String&& value) { SetOfferingId(std::move(value)); return *this;}
    inline HostOffering& WithOfferingId(const char* value) { SetOfferingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The available payment option.</p>
     */
    inline const PaymentOption& GetPaymentOption() const{ return m_paymentOption; }
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }
    inline void SetPaymentOption(const PaymentOption& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }
    inline void SetPaymentOption(PaymentOption&& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = std::move(value); }
    inline HostOffering& WithPaymentOption(const PaymentOption& value) { SetPaymentOption(value); return *this;}
    inline HostOffering& WithPaymentOption(PaymentOption&& value) { SetPaymentOption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upfront price of the offering. Does not apply to No Upfront
     * offerings.</p>
     */
    inline const Aws::String& GetUpfrontPrice() const{ return m_upfrontPrice; }
    inline bool UpfrontPriceHasBeenSet() const { return m_upfrontPriceHasBeenSet; }
    inline void SetUpfrontPrice(const Aws::String& value) { m_upfrontPriceHasBeenSet = true; m_upfrontPrice = value; }
    inline void SetUpfrontPrice(Aws::String&& value) { m_upfrontPriceHasBeenSet = true; m_upfrontPrice = std::move(value); }
    inline void SetUpfrontPrice(const char* value) { m_upfrontPriceHasBeenSet = true; m_upfrontPrice.assign(value); }
    inline HostOffering& WithUpfrontPrice(const Aws::String& value) { SetUpfrontPrice(value); return *this;}
    inline HostOffering& WithUpfrontPrice(Aws::String&& value) { SetUpfrontPrice(std::move(value)); return *this;}
    inline HostOffering& WithUpfrontPrice(const char* value) { SetUpfrontPrice(value); return *this;}
    ///@}
  private:

    CurrencyCodeValues m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    int m_duration;
    bool m_durationHasBeenSet = false;

    Aws::String m_hourlyPrice;
    bool m_hourlyPriceHasBeenSet = false;

    Aws::String m_instanceFamily;
    bool m_instanceFamilyHasBeenSet = false;

    Aws::String m_offeringId;
    bool m_offeringIdHasBeenSet = false;

    PaymentOption m_paymentOption;
    bool m_paymentOptionHasBeenSet = false;

    Aws::String m_upfrontPrice;
    bool m_upfrontPriceHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
