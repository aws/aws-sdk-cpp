/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/CurrencyCodeValues.h>
#include <aws/ec2/model/Tenancy.h>
#include <aws/ec2/model/OfferingClassType.h>
#include <aws/ec2/model/OfferingTypeValues.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Scope.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/InstanceType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/RIProductDescription.h>
#include <aws/ec2/model/ReservedInstanceState.h>
#include <aws/ec2/model/RecurringCharge.h>
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
   * <p>Describes a Reserved Instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReservedInstances">AWS
   * API Reference</a></p>
   */
  class ReservedInstances
  {
  public:
    AWS_EC2_API ReservedInstances() = default;
    AWS_EC2_API ReservedInstances(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ReservedInstances& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The currency of the Reserved Instance. It's specified using ISO 4217 standard
     * currency codes. At this time, the only supported currency is
     * <code>USD</code>.</p>
     */
    inline CurrencyCodeValues GetCurrencyCode() const { return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    inline void SetCurrencyCode(CurrencyCodeValues value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }
    inline ReservedInstances& WithCurrencyCode(CurrencyCodeValues value) { SetCurrencyCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tenancy of the instance.</p>
     */
    inline Tenancy GetInstanceTenancy() const { return m_instanceTenancy; }
    inline bool InstanceTenancyHasBeenSet() const { return m_instanceTenancyHasBeenSet; }
    inline void SetInstanceTenancy(Tenancy value) { m_instanceTenancyHasBeenSet = true; m_instanceTenancy = value; }
    inline ReservedInstances& WithInstanceTenancy(Tenancy value) { SetInstanceTenancy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The offering class of the Reserved Instance.</p>
     */
    inline OfferingClassType GetOfferingClass() const { return m_offeringClass; }
    inline bool OfferingClassHasBeenSet() const { return m_offeringClassHasBeenSet; }
    inline void SetOfferingClass(OfferingClassType value) { m_offeringClassHasBeenSet = true; m_offeringClass = value; }
    inline ReservedInstances& WithOfferingClass(OfferingClassType value) { SetOfferingClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Reserved Instance offering type.</p>
     */
    inline OfferingTypeValues GetOfferingType() const { return m_offeringType; }
    inline bool OfferingTypeHasBeenSet() const { return m_offeringTypeHasBeenSet; }
    inline void SetOfferingType(OfferingTypeValues value) { m_offeringTypeHasBeenSet = true; m_offeringType = value; }
    inline ReservedInstances& WithOfferingType(OfferingTypeValues value) { SetOfferingType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recurring charge tag assigned to the resource.</p>
     */
    inline const Aws::Vector<RecurringCharge>& GetRecurringCharges() const { return m_recurringCharges; }
    inline bool RecurringChargesHasBeenSet() const { return m_recurringChargesHasBeenSet; }
    template<typename RecurringChargesT = Aws::Vector<RecurringCharge>>
    void SetRecurringCharges(RecurringChargesT&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges = std::forward<RecurringChargesT>(value); }
    template<typename RecurringChargesT = Aws::Vector<RecurringCharge>>
    ReservedInstances& WithRecurringCharges(RecurringChargesT&& value) { SetRecurringCharges(std::forward<RecurringChargesT>(value)); return *this;}
    template<typename RecurringChargesT = RecurringCharge>
    ReservedInstances& AddRecurringCharges(RecurringChargesT&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.emplace_back(std::forward<RecurringChargesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The scope of the Reserved Instance.</p>
     */
    inline Scope GetScope() const { return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(Scope value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline ReservedInstances& WithScope(Scope value) { SetScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    ReservedInstances& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ReservedInstances& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the Availability Zone.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    template<typename AvailabilityZoneIdT = Aws::String>
    void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value); }
    template<typename AvailabilityZoneIdT = Aws::String>
    ReservedInstances& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) { SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Reserved Instance.</p>
     */
    inline const Aws::String& GetReservedInstancesId() const { return m_reservedInstancesId; }
    inline bool ReservedInstancesIdHasBeenSet() const { return m_reservedInstancesIdHasBeenSet; }
    template<typename ReservedInstancesIdT = Aws::String>
    void SetReservedInstancesId(ReservedInstancesIdT&& value) { m_reservedInstancesIdHasBeenSet = true; m_reservedInstancesId = std::forward<ReservedInstancesIdT>(value); }
    template<typename ReservedInstancesIdT = Aws::String>
    ReservedInstances& WithReservedInstancesId(ReservedInstancesIdT&& value) { SetReservedInstancesId(std::forward<ReservedInstancesIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type on which the Reserved Instance can be used.</p>
     */
    inline InstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(InstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline ReservedInstances& WithInstanceType(InstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone in which the Reserved Instance can be used.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    ReservedInstances& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the Reserved Instance started.</p>
     */
    inline const Aws::Utils::DateTime& GetStart() const { return m_start; }
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }
    template<typename StartT = Aws::Utils::DateTime>
    void SetStart(StartT&& value) { m_startHasBeenSet = true; m_start = std::forward<StartT>(value); }
    template<typename StartT = Aws::Utils::DateTime>
    ReservedInstances& WithStart(StartT&& value) { SetStart(std::forward<StartT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the Reserved Instance expires.</p>
     */
    inline const Aws::Utils::DateTime& GetEnd() const { return m_end; }
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }
    template<typename EndT = Aws::Utils::DateTime>
    void SetEnd(EndT&& value) { m_endHasBeenSet = true; m_end = std::forward<EndT>(value); }
    template<typename EndT = Aws::Utils::DateTime>
    ReservedInstances& WithEnd(EndT&& value) { SetEnd(std::forward<EndT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the Reserved Instance, in seconds.</p>
     */
    inline long long GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(long long value) { m_durationHasBeenSet = true; m_duration = value; }
    inline ReservedInstances& WithDuration(long long value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The usage price of the Reserved Instance, per hour.</p>
     */
    inline double GetUsagePrice() const { return m_usagePrice; }
    inline bool UsagePriceHasBeenSet() const { return m_usagePriceHasBeenSet; }
    inline void SetUsagePrice(double value) { m_usagePriceHasBeenSet = true; m_usagePrice = value; }
    inline ReservedInstances& WithUsagePrice(double value) { SetUsagePrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The purchase price of the Reserved Instance.</p>
     */
    inline double GetFixedPrice() const { return m_fixedPrice; }
    inline bool FixedPriceHasBeenSet() const { return m_fixedPriceHasBeenSet; }
    inline void SetFixedPrice(double value) { m_fixedPriceHasBeenSet = true; m_fixedPrice = value; }
    inline ReservedInstances& WithFixedPrice(double value) { SetFixedPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of reservations purchased.</p>
     */
    inline int GetInstanceCount() const { return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline ReservedInstances& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Reserved Instance product platform description.</p>
     */
    inline RIProductDescription GetProductDescription() const { return m_productDescription; }
    inline bool ProductDescriptionHasBeenSet() const { return m_productDescriptionHasBeenSet; }
    inline void SetProductDescription(RIProductDescription value) { m_productDescriptionHasBeenSet = true; m_productDescription = value; }
    inline ReservedInstances& WithProductDescription(RIProductDescription value) { SetProductDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the Reserved Instance purchase.</p>
     */
    inline ReservedInstanceState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ReservedInstanceState value) { m_stateHasBeenSet = true; m_state = value; }
    inline ReservedInstances& WithState(ReservedInstanceState value) { SetState(value); return *this;}
    ///@}
  private:

    CurrencyCodeValues m_currencyCode{CurrencyCodeValues::NOT_SET};
    bool m_currencyCodeHasBeenSet = false;

    Tenancy m_instanceTenancy{Tenancy::NOT_SET};
    bool m_instanceTenancyHasBeenSet = false;

    OfferingClassType m_offeringClass{OfferingClassType::NOT_SET};
    bool m_offeringClassHasBeenSet = false;

    OfferingTypeValues m_offeringType{OfferingTypeValues::NOT_SET};
    bool m_offeringTypeHasBeenSet = false;

    Aws::Vector<RecurringCharge> m_recurringCharges;
    bool m_recurringChargesHasBeenSet = false;

    Scope m_scope{Scope::NOT_SET};
    bool m_scopeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    Aws::String m_reservedInstancesId;
    bool m_reservedInstancesIdHasBeenSet = false;

    InstanceType m_instanceType{InstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::Utils::DateTime m_start{};
    bool m_startHasBeenSet = false;

    Aws::Utils::DateTime m_end{};
    bool m_endHasBeenSet = false;

    long long m_duration{0};
    bool m_durationHasBeenSet = false;

    double m_usagePrice{0.0};
    bool m_usagePriceHasBeenSet = false;

    double m_fixedPrice{0.0};
    bool m_fixedPriceHasBeenSet = false;

    int m_instanceCount{0};
    bool m_instanceCountHasBeenSet = false;

    RIProductDescription m_productDescription{RIProductDescription::NOT_SET};
    bool m_productDescriptionHasBeenSet = false;

    ReservedInstanceState m_state{ReservedInstanceState::NOT_SET};
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
