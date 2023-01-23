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


    /**
     * <p>The currency of the offering.</p>
     */
    inline const CurrencyCodeValues& GetCurrencyCode() const{ return m_currencyCode; }

    /**
     * <p>The currency of the offering.</p>
     */
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }

    /**
     * <p>The currency of the offering.</p>
     */
    inline void SetCurrencyCode(const CurrencyCodeValues& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }

    /**
     * <p>The currency of the offering.</p>
     */
    inline void SetCurrencyCode(CurrencyCodeValues&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }

    /**
     * <p>The currency of the offering.</p>
     */
    inline HostOffering& WithCurrencyCode(const CurrencyCodeValues& value) { SetCurrencyCode(value); return *this;}

    /**
     * <p>The currency of the offering.</p>
     */
    inline HostOffering& WithCurrencyCode(CurrencyCodeValues&& value) { SetCurrencyCode(std::move(value)); return *this;}


    /**
     * <p>The duration of the offering (in seconds).</p>
     */
    inline int GetDuration() const{ return m_duration; }

    /**
     * <p>The duration of the offering (in seconds).</p>
     */
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }

    /**
     * <p>The duration of the offering (in seconds).</p>
     */
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * <p>The duration of the offering (in seconds).</p>
     */
    inline HostOffering& WithDuration(int value) { SetDuration(value); return *this;}


    /**
     * <p>The hourly price of the offering.</p>
     */
    inline const Aws::String& GetHourlyPrice() const{ return m_hourlyPrice; }

    /**
     * <p>The hourly price of the offering.</p>
     */
    inline bool HourlyPriceHasBeenSet() const { return m_hourlyPriceHasBeenSet; }

    /**
     * <p>The hourly price of the offering.</p>
     */
    inline void SetHourlyPrice(const Aws::String& value) { m_hourlyPriceHasBeenSet = true; m_hourlyPrice = value; }

    /**
     * <p>The hourly price of the offering.</p>
     */
    inline void SetHourlyPrice(Aws::String&& value) { m_hourlyPriceHasBeenSet = true; m_hourlyPrice = std::move(value); }

    /**
     * <p>The hourly price of the offering.</p>
     */
    inline void SetHourlyPrice(const char* value) { m_hourlyPriceHasBeenSet = true; m_hourlyPrice.assign(value); }

    /**
     * <p>The hourly price of the offering.</p>
     */
    inline HostOffering& WithHourlyPrice(const Aws::String& value) { SetHourlyPrice(value); return *this;}

    /**
     * <p>The hourly price of the offering.</p>
     */
    inline HostOffering& WithHourlyPrice(Aws::String&& value) { SetHourlyPrice(std::move(value)); return *this;}

    /**
     * <p>The hourly price of the offering.</p>
     */
    inline HostOffering& WithHourlyPrice(const char* value) { SetHourlyPrice(value); return *this;}


    /**
     * <p>The instance family of the offering.</p>
     */
    inline const Aws::String& GetInstanceFamily() const{ return m_instanceFamily; }

    /**
     * <p>The instance family of the offering.</p>
     */
    inline bool InstanceFamilyHasBeenSet() const { return m_instanceFamilyHasBeenSet; }

    /**
     * <p>The instance family of the offering.</p>
     */
    inline void SetInstanceFamily(const Aws::String& value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily = value; }

    /**
     * <p>The instance family of the offering.</p>
     */
    inline void SetInstanceFamily(Aws::String&& value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily = std::move(value); }

    /**
     * <p>The instance family of the offering.</p>
     */
    inline void SetInstanceFamily(const char* value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily.assign(value); }

    /**
     * <p>The instance family of the offering.</p>
     */
    inline HostOffering& WithInstanceFamily(const Aws::String& value) { SetInstanceFamily(value); return *this;}

    /**
     * <p>The instance family of the offering.</p>
     */
    inline HostOffering& WithInstanceFamily(Aws::String&& value) { SetInstanceFamily(std::move(value)); return *this;}

    /**
     * <p>The instance family of the offering.</p>
     */
    inline HostOffering& WithInstanceFamily(const char* value) { SetInstanceFamily(value); return *this;}


    /**
     * <p>The ID of the offering.</p>
     */
    inline const Aws::String& GetOfferingId() const{ return m_offeringId; }

    /**
     * <p>The ID of the offering.</p>
     */
    inline bool OfferingIdHasBeenSet() const { return m_offeringIdHasBeenSet; }

    /**
     * <p>The ID of the offering.</p>
     */
    inline void SetOfferingId(const Aws::String& value) { m_offeringIdHasBeenSet = true; m_offeringId = value; }

    /**
     * <p>The ID of the offering.</p>
     */
    inline void SetOfferingId(Aws::String&& value) { m_offeringIdHasBeenSet = true; m_offeringId = std::move(value); }

    /**
     * <p>The ID of the offering.</p>
     */
    inline void SetOfferingId(const char* value) { m_offeringIdHasBeenSet = true; m_offeringId.assign(value); }

    /**
     * <p>The ID of the offering.</p>
     */
    inline HostOffering& WithOfferingId(const Aws::String& value) { SetOfferingId(value); return *this;}

    /**
     * <p>The ID of the offering.</p>
     */
    inline HostOffering& WithOfferingId(Aws::String&& value) { SetOfferingId(std::move(value)); return *this;}

    /**
     * <p>The ID of the offering.</p>
     */
    inline HostOffering& WithOfferingId(const char* value) { SetOfferingId(value); return *this;}


    /**
     * <p>The available payment option.</p>
     */
    inline const PaymentOption& GetPaymentOption() const{ return m_paymentOption; }

    /**
     * <p>The available payment option.</p>
     */
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }

    /**
     * <p>The available payment option.</p>
     */
    inline void SetPaymentOption(const PaymentOption& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }

    /**
     * <p>The available payment option.</p>
     */
    inline void SetPaymentOption(PaymentOption&& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = std::move(value); }

    /**
     * <p>The available payment option.</p>
     */
    inline HostOffering& WithPaymentOption(const PaymentOption& value) { SetPaymentOption(value); return *this;}

    /**
     * <p>The available payment option.</p>
     */
    inline HostOffering& WithPaymentOption(PaymentOption&& value) { SetPaymentOption(std::move(value)); return *this;}


    /**
     * <p>The upfront price of the offering. Does not apply to No Upfront
     * offerings.</p>
     */
    inline const Aws::String& GetUpfrontPrice() const{ return m_upfrontPrice; }

    /**
     * <p>The upfront price of the offering. Does not apply to No Upfront
     * offerings.</p>
     */
    inline bool UpfrontPriceHasBeenSet() const { return m_upfrontPriceHasBeenSet; }

    /**
     * <p>The upfront price of the offering. Does not apply to No Upfront
     * offerings.</p>
     */
    inline void SetUpfrontPrice(const Aws::String& value) { m_upfrontPriceHasBeenSet = true; m_upfrontPrice = value; }

    /**
     * <p>The upfront price of the offering. Does not apply to No Upfront
     * offerings.</p>
     */
    inline void SetUpfrontPrice(Aws::String&& value) { m_upfrontPriceHasBeenSet = true; m_upfrontPrice = std::move(value); }

    /**
     * <p>The upfront price of the offering. Does not apply to No Upfront
     * offerings.</p>
     */
    inline void SetUpfrontPrice(const char* value) { m_upfrontPriceHasBeenSet = true; m_upfrontPrice.assign(value); }

    /**
     * <p>The upfront price of the offering. Does not apply to No Upfront
     * offerings.</p>
     */
    inline HostOffering& WithUpfrontPrice(const Aws::String& value) { SetUpfrontPrice(value); return *this;}

    /**
     * <p>The upfront price of the offering. Does not apply to No Upfront
     * offerings.</p>
     */
    inline HostOffering& WithUpfrontPrice(Aws::String&& value) { SetUpfrontPrice(std::move(value)); return *this;}

    /**
     * <p>The upfront price of the offering. Does not apply to No Upfront
     * offerings.</p>
     */
    inline HostOffering& WithUpfrontPrice(const char* value) { SetUpfrontPrice(value); return *this;}

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
