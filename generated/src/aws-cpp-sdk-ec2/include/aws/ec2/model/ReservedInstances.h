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
    AWS_EC2_API ReservedInstances();
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
    inline const CurrencyCodeValues& GetCurrencyCode() const{ return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    inline void SetCurrencyCode(const CurrencyCodeValues& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }
    inline void SetCurrencyCode(CurrencyCodeValues&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }
    inline ReservedInstances& WithCurrencyCode(const CurrencyCodeValues& value) { SetCurrencyCode(value); return *this;}
    inline ReservedInstances& WithCurrencyCode(CurrencyCodeValues&& value) { SetCurrencyCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tenancy of the instance.</p>
     */
    inline const Tenancy& GetInstanceTenancy() const{ return m_instanceTenancy; }
    inline bool InstanceTenancyHasBeenSet() const { return m_instanceTenancyHasBeenSet; }
    inline void SetInstanceTenancy(const Tenancy& value) { m_instanceTenancyHasBeenSet = true; m_instanceTenancy = value; }
    inline void SetInstanceTenancy(Tenancy&& value) { m_instanceTenancyHasBeenSet = true; m_instanceTenancy = std::move(value); }
    inline ReservedInstances& WithInstanceTenancy(const Tenancy& value) { SetInstanceTenancy(value); return *this;}
    inline ReservedInstances& WithInstanceTenancy(Tenancy&& value) { SetInstanceTenancy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The offering class of the Reserved Instance.</p>
     */
    inline const OfferingClassType& GetOfferingClass() const{ return m_offeringClass; }
    inline bool OfferingClassHasBeenSet() const { return m_offeringClassHasBeenSet; }
    inline void SetOfferingClass(const OfferingClassType& value) { m_offeringClassHasBeenSet = true; m_offeringClass = value; }
    inline void SetOfferingClass(OfferingClassType&& value) { m_offeringClassHasBeenSet = true; m_offeringClass = std::move(value); }
    inline ReservedInstances& WithOfferingClass(const OfferingClassType& value) { SetOfferingClass(value); return *this;}
    inline ReservedInstances& WithOfferingClass(OfferingClassType&& value) { SetOfferingClass(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Reserved Instance offering type.</p>
     */
    inline const OfferingTypeValues& GetOfferingType() const{ return m_offeringType; }
    inline bool OfferingTypeHasBeenSet() const { return m_offeringTypeHasBeenSet; }
    inline void SetOfferingType(const OfferingTypeValues& value) { m_offeringTypeHasBeenSet = true; m_offeringType = value; }
    inline void SetOfferingType(OfferingTypeValues&& value) { m_offeringTypeHasBeenSet = true; m_offeringType = std::move(value); }
    inline ReservedInstances& WithOfferingType(const OfferingTypeValues& value) { SetOfferingType(value); return *this;}
    inline ReservedInstances& WithOfferingType(OfferingTypeValues&& value) { SetOfferingType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recurring charge tag assigned to the resource.</p>
     */
    inline const Aws::Vector<RecurringCharge>& GetRecurringCharges() const{ return m_recurringCharges; }
    inline bool RecurringChargesHasBeenSet() const { return m_recurringChargesHasBeenSet; }
    inline void SetRecurringCharges(const Aws::Vector<RecurringCharge>& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges = value; }
    inline void SetRecurringCharges(Aws::Vector<RecurringCharge>&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges = std::move(value); }
    inline ReservedInstances& WithRecurringCharges(const Aws::Vector<RecurringCharge>& value) { SetRecurringCharges(value); return *this;}
    inline ReservedInstances& WithRecurringCharges(Aws::Vector<RecurringCharge>&& value) { SetRecurringCharges(std::move(value)); return *this;}
    inline ReservedInstances& AddRecurringCharges(const RecurringCharge& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.push_back(value); return *this; }
    inline ReservedInstances& AddRecurringCharges(RecurringCharge&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The scope of the Reserved Instance.</p>
     */
    inline const Scope& GetScope() const{ return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(const Scope& value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline void SetScope(Scope&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }
    inline ReservedInstances& WithScope(const Scope& value) { SetScope(value); return *this;}
    inline ReservedInstances& WithScope(Scope&& value) { SetScope(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ReservedInstances& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline ReservedInstances& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline ReservedInstances& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline ReservedInstances& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the Reserved Instance.</p>
     */
    inline const Aws::String& GetReservedInstancesId() const{ return m_reservedInstancesId; }
    inline bool ReservedInstancesIdHasBeenSet() const { return m_reservedInstancesIdHasBeenSet; }
    inline void SetReservedInstancesId(const Aws::String& value) { m_reservedInstancesIdHasBeenSet = true; m_reservedInstancesId = value; }
    inline void SetReservedInstancesId(Aws::String&& value) { m_reservedInstancesIdHasBeenSet = true; m_reservedInstancesId = std::move(value); }
    inline void SetReservedInstancesId(const char* value) { m_reservedInstancesIdHasBeenSet = true; m_reservedInstancesId.assign(value); }
    inline ReservedInstances& WithReservedInstancesId(const Aws::String& value) { SetReservedInstancesId(value); return *this;}
    inline ReservedInstances& WithReservedInstancesId(Aws::String&& value) { SetReservedInstancesId(std::move(value)); return *this;}
    inline ReservedInstances& WithReservedInstancesId(const char* value) { SetReservedInstancesId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type on which the Reserved Instance can be used.</p>
     */
    inline const InstanceType& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const InstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline ReservedInstances& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}
    inline ReservedInstances& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone in which the Reserved Instance can be used.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline ReservedInstances& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline ReservedInstances& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline ReservedInstances& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the Reserved Instance started.</p>
     */
    inline const Aws::Utils::DateTime& GetStart() const{ return m_start; }
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }
    inline void SetStart(const Aws::Utils::DateTime& value) { m_startHasBeenSet = true; m_start = value; }
    inline void SetStart(Aws::Utils::DateTime&& value) { m_startHasBeenSet = true; m_start = std::move(value); }
    inline ReservedInstances& WithStart(const Aws::Utils::DateTime& value) { SetStart(value); return *this;}
    inline ReservedInstances& WithStart(Aws::Utils::DateTime&& value) { SetStart(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the Reserved Instance expires.</p>
     */
    inline const Aws::Utils::DateTime& GetEnd() const{ return m_end; }
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }
    inline void SetEnd(const Aws::Utils::DateTime& value) { m_endHasBeenSet = true; m_end = value; }
    inline void SetEnd(Aws::Utils::DateTime&& value) { m_endHasBeenSet = true; m_end = std::move(value); }
    inline ReservedInstances& WithEnd(const Aws::Utils::DateTime& value) { SetEnd(value); return *this;}
    inline ReservedInstances& WithEnd(Aws::Utils::DateTime&& value) { SetEnd(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the Reserved Instance, in seconds.</p>
     */
    inline long long GetDuration() const{ return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(long long value) { m_durationHasBeenSet = true; m_duration = value; }
    inline ReservedInstances& WithDuration(long long value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The usage price of the Reserved Instance, per hour.</p>
     */
    inline double GetUsagePrice() const{ return m_usagePrice; }
    inline bool UsagePriceHasBeenSet() const { return m_usagePriceHasBeenSet; }
    inline void SetUsagePrice(double value) { m_usagePriceHasBeenSet = true; m_usagePrice = value; }
    inline ReservedInstances& WithUsagePrice(double value) { SetUsagePrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The purchase price of the Reserved Instance.</p>
     */
    inline double GetFixedPrice() const{ return m_fixedPrice; }
    inline bool FixedPriceHasBeenSet() const { return m_fixedPriceHasBeenSet; }
    inline void SetFixedPrice(double value) { m_fixedPriceHasBeenSet = true; m_fixedPrice = value; }
    inline ReservedInstances& WithFixedPrice(double value) { SetFixedPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of reservations purchased.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline ReservedInstances& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Reserved Instance product platform description.</p>
     */
    inline const RIProductDescription& GetProductDescription() const{ return m_productDescription; }
    inline bool ProductDescriptionHasBeenSet() const { return m_productDescriptionHasBeenSet; }
    inline void SetProductDescription(const RIProductDescription& value) { m_productDescriptionHasBeenSet = true; m_productDescription = value; }
    inline void SetProductDescription(RIProductDescription&& value) { m_productDescriptionHasBeenSet = true; m_productDescription = std::move(value); }
    inline ReservedInstances& WithProductDescription(const RIProductDescription& value) { SetProductDescription(value); return *this;}
    inline ReservedInstances& WithProductDescription(RIProductDescription&& value) { SetProductDescription(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the Reserved Instance purchase.</p>
     */
    inline const ReservedInstanceState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const ReservedInstanceState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(ReservedInstanceState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline ReservedInstances& WithState(const ReservedInstanceState& value) { SetState(value); return *this;}
    inline ReservedInstances& WithState(ReservedInstanceState&& value) { SetState(std::move(value)); return *this;}
    ///@}
  private:

    CurrencyCodeValues m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    Tenancy m_instanceTenancy;
    bool m_instanceTenancyHasBeenSet = false;

    OfferingClassType m_offeringClass;
    bool m_offeringClassHasBeenSet = false;

    OfferingTypeValues m_offeringType;
    bool m_offeringTypeHasBeenSet = false;

    Aws::Vector<RecurringCharge> m_recurringCharges;
    bool m_recurringChargesHasBeenSet = false;

    Scope m_scope;
    bool m_scopeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_reservedInstancesId;
    bool m_reservedInstancesIdHasBeenSet = false;

    InstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::Utils::DateTime m_start;
    bool m_startHasBeenSet = false;

    Aws::Utils::DateTime m_end;
    bool m_endHasBeenSet = false;

    long long m_duration;
    bool m_durationHasBeenSet = false;

    double m_usagePrice;
    bool m_usagePriceHasBeenSet = false;

    double m_fixedPrice;
    bool m_fixedPriceHasBeenSet = false;

    int m_instanceCount;
    bool m_instanceCountHasBeenSet = false;

    RIProductDescription m_productDescription;
    bool m_productDescriptionHasBeenSet = false;

    ReservedInstanceState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
