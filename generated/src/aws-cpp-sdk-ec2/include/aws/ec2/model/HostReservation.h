/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/CurrencyCodeValues.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/PaymentOption.h>
#include <aws/ec2/model/ReservationState.h>
#include <aws/ec2/model/Tag.h>
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
   * <p>Details about the Dedicated Host Reservation and associated Dedicated
   * Hosts.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/HostReservation">AWS
   * API Reference</a></p>
   */
  class HostReservation
  {
  public:
    AWS_EC2_API HostReservation();
    AWS_EC2_API HostReservation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API HostReservation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The number of Dedicated Hosts the reservation is associated with.</p>
     */
    inline int GetCount() const{ return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline HostReservation& WithCount(int value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency in which the <code>upfrontPrice</code> and
     * <code>hourlyPrice</code> amounts are specified. At this time, the only supported
     * currency is <code>USD</code>.</p>
     */
    inline const CurrencyCodeValues& GetCurrencyCode() const{ return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    inline void SetCurrencyCode(const CurrencyCodeValues& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }
    inline void SetCurrencyCode(CurrencyCodeValues&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }
    inline HostReservation& WithCurrencyCode(const CurrencyCodeValues& value) { SetCurrencyCode(value); return *this;}
    inline HostReservation& WithCurrencyCode(CurrencyCodeValues&& value) { SetCurrencyCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The length of the reservation's term, specified in seconds. Can be
     * <code>31536000 (1 year)</code> | <code>94608000 (3 years)</code>.</p>
     */
    inline int GetDuration() const{ return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }
    inline HostReservation& WithDuration(int value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the reservation ends.</p>
     */
    inline const Aws::Utils::DateTime& GetEnd() const{ return m_end; }
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }
    inline void SetEnd(const Aws::Utils::DateTime& value) { m_endHasBeenSet = true; m_end = value; }
    inline void SetEnd(Aws::Utils::DateTime&& value) { m_endHasBeenSet = true; m_end = std::move(value); }
    inline HostReservation& WithEnd(const Aws::Utils::DateTime& value) { SetEnd(value); return *this;}
    inline HostReservation& WithEnd(Aws::Utils::DateTime&& value) { SetEnd(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the Dedicated Hosts associated with the reservation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHostIdSet() const{ return m_hostIdSet; }
    inline bool HostIdSetHasBeenSet() const { return m_hostIdSetHasBeenSet; }
    inline void SetHostIdSet(const Aws::Vector<Aws::String>& value) { m_hostIdSetHasBeenSet = true; m_hostIdSet = value; }
    inline void SetHostIdSet(Aws::Vector<Aws::String>&& value) { m_hostIdSetHasBeenSet = true; m_hostIdSet = std::move(value); }
    inline HostReservation& WithHostIdSet(const Aws::Vector<Aws::String>& value) { SetHostIdSet(value); return *this;}
    inline HostReservation& WithHostIdSet(Aws::Vector<Aws::String>&& value) { SetHostIdSet(std::move(value)); return *this;}
    inline HostReservation& AddHostIdSet(const Aws::String& value) { m_hostIdSetHasBeenSet = true; m_hostIdSet.push_back(value); return *this; }
    inline HostReservation& AddHostIdSet(Aws::String&& value) { m_hostIdSetHasBeenSet = true; m_hostIdSet.push_back(std::move(value)); return *this; }
    inline HostReservation& AddHostIdSet(const char* value) { m_hostIdSetHasBeenSet = true; m_hostIdSet.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the reservation that specifies the associated Dedicated Hosts.</p>
     */
    inline const Aws::String& GetHostReservationId() const{ return m_hostReservationId; }
    inline bool HostReservationIdHasBeenSet() const { return m_hostReservationIdHasBeenSet; }
    inline void SetHostReservationId(const Aws::String& value) { m_hostReservationIdHasBeenSet = true; m_hostReservationId = value; }
    inline void SetHostReservationId(Aws::String&& value) { m_hostReservationIdHasBeenSet = true; m_hostReservationId = std::move(value); }
    inline void SetHostReservationId(const char* value) { m_hostReservationIdHasBeenSet = true; m_hostReservationId.assign(value); }
    inline HostReservation& WithHostReservationId(const Aws::String& value) { SetHostReservationId(value); return *this;}
    inline HostReservation& WithHostReservationId(Aws::String&& value) { SetHostReservationId(std::move(value)); return *this;}
    inline HostReservation& WithHostReservationId(const char* value) { SetHostReservationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hourly price of the reservation.</p>
     */
    inline const Aws::String& GetHourlyPrice() const{ return m_hourlyPrice; }
    inline bool HourlyPriceHasBeenSet() const { return m_hourlyPriceHasBeenSet; }
    inline void SetHourlyPrice(const Aws::String& value) { m_hourlyPriceHasBeenSet = true; m_hourlyPrice = value; }
    inline void SetHourlyPrice(Aws::String&& value) { m_hourlyPriceHasBeenSet = true; m_hourlyPrice = std::move(value); }
    inline void SetHourlyPrice(const char* value) { m_hourlyPriceHasBeenSet = true; m_hourlyPrice.assign(value); }
    inline HostReservation& WithHourlyPrice(const Aws::String& value) { SetHourlyPrice(value); return *this;}
    inline HostReservation& WithHourlyPrice(Aws::String&& value) { SetHourlyPrice(std::move(value)); return *this;}
    inline HostReservation& WithHourlyPrice(const char* value) { SetHourlyPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance family of the Dedicated Host Reservation. The instance family on
     * the Dedicated Host must be the same in order for it to benefit from the
     * reservation.</p>
     */
    inline const Aws::String& GetInstanceFamily() const{ return m_instanceFamily; }
    inline bool InstanceFamilyHasBeenSet() const { return m_instanceFamilyHasBeenSet; }
    inline void SetInstanceFamily(const Aws::String& value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily = value; }
    inline void SetInstanceFamily(Aws::String&& value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily = std::move(value); }
    inline void SetInstanceFamily(const char* value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily.assign(value); }
    inline HostReservation& WithInstanceFamily(const Aws::String& value) { SetInstanceFamily(value); return *this;}
    inline HostReservation& WithInstanceFamily(Aws::String&& value) { SetInstanceFamily(std::move(value)); return *this;}
    inline HostReservation& WithInstanceFamily(const char* value) { SetInstanceFamily(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the reservation. This remains the same regardless of which
     * Dedicated Hosts are associated with it.</p>
     */
    inline const Aws::String& GetOfferingId() const{ return m_offeringId; }
    inline bool OfferingIdHasBeenSet() const { return m_offeringIdHasBeenSet; }
    inline void SetOfferingId(const Aws::String& value) { m_offeringIdHasBeenSet = true; m_offeringId = value; }
    inline void SetOfferingId(Aws::String&& value) { m_offeringIdHasBeenSet = true; m_offeringId = std::move(value); }
    inline void SetOfferingId(const char* value) { m_offeringIdHasBeenSet = true; m_offeringId.assign(value); }
    inline HostReservation& WithOfferingId(const Aws::String& value) { SetOfferingId(value); return *this;}
    inline HostReservation& WithOfferingId(Aws::String&& value) { SetOfferingId(std::move(value)); return *this;}
    inline HostReservation& WithOfferingId(const char* value) { SetOfferingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The payment option selected for this reservation.</p>
     */
    inline const PaymentOption& GetPaymentOption() const{ return m_paymentOption; }
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }
    inline void SetPaymentOption(const PaymentOption& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }
    inline void SetPaymentOption(PaymentOption&& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = std::move(value); }
    inline HostReservation& WithPaymentOption(const PaymentOption& value) { SetPaymentOption(value); return *this;}
    inline HostReservation& WithPaymentOption(PaymentOption&& value) { SetPaymentOption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the reservation started.</p>
     */
    inline const Aws::Utils::DateTime& GetStart() const{ return m_start; }
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }
    inline void SetStart(const Aws::Utils::DateTime& value) { m_startHasBeenSet = true; m_start = value; }
    inline void SetStart(Aws::Utils::DateTime&& value) { m_startHasBeenSet = true; m_start = std::move(value); }
    inline HostReservation& WithStart(const Aws::Utils::DateTime& value) { SetStart(value); return *this;}
    inline HostReservation& WithStart(Aws::Utils::DateTime&& value) { SetStart(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the reservation.</p>
     */
    inline const ReservationState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const ReservationState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(ReservationState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline HostReservation& WithState(const ReservationState& value) { SetState(value); return *this;}
    inline HostReservation& WithState(ReservationState&& value) { SetState(std::move(value)); return *this;}
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
    inline HostReservation& WithUpfrontPrice(const Aws::String& value) { SetUpfrontPrice(value); return *this;}
    inline HostReservation& WithUpfrontPrice(Aws::String&& value) { SetUpfrontPrice(std::move(value)); return *this;}
    inline HostReservation& WithUpfrontPrice(const char* value) { SetUpfrontPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the Dedicated Host Reservation.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline HostReservation& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline HostReservation& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline HostReservation& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline HostReservation& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    int m_count;
    bool m_countHasBeenSet = false;

    CurrencyCodeValues m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    int m_duration;
    bool m_durationHasBeenSet = false;

    Aws::Utils::DateTime m_end;
    bool m_endHasBeenSet = false;

    Aws::Vector<Aws::String> m_hostIdSet;
    bool m_hostIdSetHasBeenSet = false;

    Aws::String m_hostReservationId;
    bool m_hostReservationIdHasBeenSet = false;

    Aws::String m_hourlyPrice;
    bool m_hourlyPriceHasBeenSet = false;

    Aws::String m_instanceFamily;
    bool m_instanceFamilyHasBeenSet = false;

    Aws::String m_offeringId;
    bool m_offeringIdHasBeenSet = false;

    PaymentOption m_paymentOption;
    bool m_paymentOptionHasBeenSet = false;

    Aws::Utils::DateTime m_start;
    bool m_startHasBeenSet = false;

    ReservationState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_upfrontPrice;
    bool m_upfrontPriceHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
