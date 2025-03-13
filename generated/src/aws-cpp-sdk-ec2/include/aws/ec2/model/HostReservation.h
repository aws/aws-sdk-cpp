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
    AWS_EC2_API HostReservation() = default;
    AWS_EC2_API HostReservation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API HostReservation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The number of Dedicated Hosts the reservation is associated with.</p>
     */
    inline int GetCount() const { return m_count; }
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
    inline CurrencyCodeValues GetCurrencyCode() const { return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    inline void SetCurrencyCode(CurrencyCodeValues value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }
    inline HostReservation& WithCurrencyCode(CurrencyCodeValues value) { SetCurrencyCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The length of the reservation's term, specified in seconds. Can be
     * <code>31536000 (1 year)</code> | <code>94608000 (3 years)</code>.</p>
     */
    inline int GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }
    inline HostReservation& WithDuration(int value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the reservation ends.</p>
     */
    inline const Aws::Utils::DateTime& GetEnd() const { return m_end; }
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }
    template<typename EndT = Aws::Utils::DateTime>
    void SetEnd(EndT&& value) { m_endHasBeenSet = true; m_end = std::forward<EndT>(value); }
    template<typename EndT = Aws::Utils::DateTime>
    HostReservation& WithEnd(EndT&& value) { SetEnd(std::forward<EndT>(value)); return *this;}
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
    HostReservation& WithHostIdSet(HostIdSetT&& value) { SetHostIdSet(std::forward<HostIdSetT>(value)); return *this;}
    template<typename HostIdSetT = Aws::String>
    HostReservation& AddHostIdSet(HostIdSetT&& value) { m_hostIdSetHasBeenSet = true; m_hostIdSet.emplace_back(std::forward<HostIdSetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the reservation that specifies the associated Dedicated Hosts.</p>
     */
    inline const Aws::String& GetHostReservationId() const { return m_hostReservationId; }
    inline bool HostReservationIdHasBeenSet() const { return m_hostReservationIdHasBeenSet; }
    template<typename HostReservationIdT = Aws::String>
    void SetHostReservationId(HostReservationIdT&& value) { m_hostReservationIdHasBeenSet = true; m_hostReservationId = std::forward<HostReservationIdT>(value); }
    template<typename HostReservationIdT = Aws::String>
    HostReservation& WithHostReservationId(HostReservationIdT&& value) { SetHostReservationId(std::forward<HostReservationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hourly price of the reservation.</p>
     */
    inline const Aws::String& GetHourlyPrice() const { return m_hourlyPrice; }
    inline bool HourlyPriceHasBeenSet() const { return m_hourlyPriceHasBeenSet; }
    template<typename HourlyPriceT = Aws::String>
    void SetHourlyPrice(HourlyPriceT&& value) { m_hourlyPriceHasBeenSet = true; m_hourlyPrice = std::forward<HourlyPriceT>(value); }
    template<typename HourlyPriceT = Aws::String>
    HostReservation& WithHourlyPrice(HourlyPriceT&& value) { SetHourlyPrice(std::forward<HourlyPriceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance family of the Dedicated Host Reservation. The instance family on
     * the Dedicated Host must be the same in order for it to benefit from the
     * reservation.</p>
     */
    inline const Aws::String& GetInstanceFamily() const { return m_instanceFamily; }
    inline bool InstanceFamilyHasBeenSet() const { return m_instanceFamilyHasBeenSet; }
    template<typename InstanceFamilyT = Aws::String>
    void SetInstanceFamily(InstanceFamilyT&& value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily = std::forward<InstanceFamilyT>(value); }
    template<typename InstanceFamilyT = Aws::String>
    HostReservation& WithInstanceFamily(InstanceFamilyT&& value) { SetInstanceFamily(std::forward<InstanceFamilyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the reservation. This remains the same regardless of which
     * Dedicated Hosts are associated with it.</p>
     */
    inline const Aws::String& GetOfferingId() const { return m_offeringId; }
    inline bool OfferingIdHasBeenSet() const { return m_offeringIdHasBeenSet; }
    template<typename OfferingIdT = Aws::String>
    void SetOfferingId(OfferingIdT&& value) { m_offeringIdHasBeenSet = true; m_offeringId = std::forward<OfferingIdT>(value); }
    template<typename OfferingIdT = Aws::String>
    HostReservation& WithOfferingId(OfferingIdT&& value) { SetOfferingId(std::forward<OfferingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The payment option selected for this reservation.</p>
     */
    inline PaymentOption GetPaymentOption() const { return m_paymentOption; }
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }
    inline void SetPaymentOption(PaymentOption value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }
    inline HostReservation& WithPaymentOption(PaymentOption value) { SetPaymentOption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the reservation started.</p>
     */
    inline const Aws::Utils::DateTime& GetStart() const { return m_start; }
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }
    template<typename StartT = Aws::Utils::DateTime>
    void SetStart(StartT&& value) { m_startHasBeenSet = true; m_start = std::forward<StartT>(value); }
    template<typename StartT = Aws::Utils::DateTime>
    HostReservation& WithStart(StartT&& value) { SetStart(std::forward<StartT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the reservation.</p>
     */
    inline ReservationState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ReservationState value) { m_stateHasBeenSet = true; m_state = value; }
    inline HostReservation& WithState(ReservationState value) { SetState(value); return *this;}
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
    HostReservation& WithUpfrontPrice(UpfrontPriceT&& value) { SetUpfrontPrice(std::forward<UpfrontPriceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the Dedicated Host Reservation.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    HostReservation& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    HostReservation& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    int m_count{0};
    bool m_countHasBeenSet = false;

    CurrencyCodeValues m_currencyCode{CurrencyCodeValues::NOT_SET};
    bool m_currencyCodeHasBeenSet = false;

    int m_duration{0};
    bool m_durationHasBeenSet = false;

    Aws::Utils::DateTime m_end{};
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

    PaymentOption m_paymentOption{PaymentOption::NOT_SET};
    bool m_paymentOptionHasBeenSet = false;

    Aws::Utils::DateTime m_start{};
    bool m_startHasBeenSet = false;

    ReservationState m_state{ReservationState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_upfrontPrice;
    bool m_upfrontPriceHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
