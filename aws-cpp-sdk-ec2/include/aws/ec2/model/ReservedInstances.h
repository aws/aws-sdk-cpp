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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/InstanceType.h>
#include <aws/ec2/model/RIProductDescription.h>
#include <aws/ec2/model/ReservedInstanceState.h>
#include <aws/ec2/model/CurrencyCodeValues.h>
#include <aws/ec2/model/Tenancy.h>
#include <aws/ec2/model/OfferingClassType.h>
#include <aws/ec2/model/OfferingTypeValues.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Scope.h>
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
  class AWS_EC2_API ReservedInstances
  {
  public:
    ReservedInstances();
    ReservedInstances(const Aws::Utils::Xml::XmlNode& xmlNode);
    ReservedInstances& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Availability Zone in which the Reserved Instance can be used.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone in which the Reserved Instance can be used.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone in which the Reserved Instance can be used.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone in which the Reserved Instance can be used.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone in which the Reserved Instance can be used.</p>
     */
    inline ReservedInstances& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone in which the Reserved Instance can be used.</p>
     */
    inline ReservedInstances& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone in which the Reserved Instance can be used.</p>
     */
    inline ReservedInstances& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The duration of the Reserved Instance, in seconds.</p>
     */
    inline long long GetDuration() const{ return m_duration; }

    /**
     * <p>The duration of the Reserved Instance, in seconds.</p>
     */
    inline void SetDuration(long long value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * <p>The duration of the Reserved Instance, in seconds.</p>
     */
    inline ReservedInstances& WithDuration(long long value) { SetDuration(value); return *this;}


    /**
     * <p>The time when the Reserved Instance expires.</p>
     */
    inline const Aws::Utils::DateTime& GetEnd() const{ return m_end; }

    /**
     * <p>The time when the Reserved Instance expires.</p>
     */
    inline void SetEnd(const Aws::Utils::DateTime& value) { m_endHasBeenSet = true; m_end = value; }

    /**
     * <p>The time when the Reserved Instance expires.</p>
     */
    inline void SetEnd(Aws::Utils::DateTime&& value) { m_endHasBeenSet = true; m_end = std::move(value); }

    /**
     * <p>The time when the Reserved Instance expires.</p>
     */
    inline ReservedInstances& WithEnd(const Aws::Utils::DateTime& value) { SetEnd(value); return *this;}

    /**
     * <p>The time when the Reserved Instance expires.</p>
     */
    inline ReservedInstances& WithEnd(Aws::Utils::DateTime&& value) { SetEnd(std::move(value)); return *this;}


    /**
     * <p>The purchase price of the Reserved Instance.</p>
     */
    inline double GetFixedPrice() const{ return m_fixedPrice; }

    /**
     * <p>The purchase price of the Reserved Instance.</p>
     */
    inline void SetFixedPrice(double value) { m_fixedPriceHasBeenSet = true; m_fixedPrice = value; }

    /**
     * <p>The purchase price of the Reserved Instance.</p>
     */
    inline ReservedInstances& WithFixedPrice(double value) { SetFixedPrice(value); return *this;}


    /**
     * <p>The number of reservations purchased.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }

    /**
     * <p>The number of reservations purchased.</p>
     */
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }

    /**
     * <p>The number of reservations purchased.</p>
     */
    inline ReservedInstances& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}


    /**
     * <p>The instance type on which the Reserved Instance can be used.</p>
     */
    inline const InstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type on which the Reserved Instance can be used.</p>
     */
    inline void SetInstanceType(const InstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type on which the Reserved Instance can be used.</p>
     */
    inline void SetInstanceType(InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type on which the Reserved Instance can be used.</p>
     */
    inline ReservedInstances& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type on which the Reserved Instance can be used.</p>
     */
    inline ReservedInstances& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>The Reserved Instance product platform description.</p>
     */
    inline const RIProductDescription& GetProductDescription() const{ return m_productDescription; }

    /**
     * <p>The Reserved Instance product platform description.</p>
     */
    inline void SetProductDescription(const RIProductDescription& value) { m_productDescriptionHasBeenSet = true; m_productDescription = value; }

    /**
     * <p>The Reserved Instance product platform description.</p>
     */
    inline void SetProductDescription(RIProductDescription&& value) { m_productDescriptionHasBeenSet = true; m_productDescription = std::move(value); }

    /**
     * <p>The Reserved Instance product platform description.</p>
     */
    inline ReservedInstances& WithProductDescription(const RIProductDescription& value) { SetProductDescription(value); return *this;}

    /**
     * <p>The Reserved Instance product platform description.</p>
     */
    inline ReservedInstances& WithProductDescription(RIProductDescription&& value) { SetProductDescription(std::move(value)); return *this;}


    /**
     * <p>The ID of the Reserved Instance.</p>
     */
    inline const Aws::String& GetReservedInstancesId() const{ return m_reservedInstancesId; }

    /**
     * <p>The ID of the Reserved Instance.</p>
     */
    inline void SetReservedInstancesId(const Aws::String& value) { m_reservedInstancesIdHasBeenSet = true; m_reservedInstancesId = value; }

    /**
     * <p>The ID of the Reserved Instance.</p>
     */
    inline void SetReservedInstancesId(Aws::String&& value) { m_reservedInstancesIdHasBeenSet = true; m_reservedInstancesId = std::move(value); }

    /**
     * <p>The ID of the Reserved Instance.</p>
     */
    inline void SetReservedInstancesId(const char* value) { m_reservedInstancesIdHasBeenSet = true; m_reservedInstancesId.assign(value); }

    /**
     * <p>The ID of the Reserved Instance.</p>
     */
    inline ReservedInstances& WithReservedInstancesId(const Aws::String& value) { SetReservedInstancesId(value); return *this;}

    /**
     * <p>The ID of the Reserved Instance.</p>
     */
    inline ReservedInstances& WithReservedInstancesId(Aws::String&& value) { SetReservedInstancesId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Reserved Instance.</p>
     */
    inline ReservedInstances& WithReservedInstancesId(const char* value) { SetReservedInstancesId(value); return *this;}


    /**
     * <p>The date and time the Reserved Instance started.</p>
     */
    inline const Aws::Utils::DateTime& GetStart() const{ return m_start; }

    /**
     * <p>The date and time the Reserved Instance started.</p>
     */
    inline void SetStart(const Aws::Utils::DateTime& value) { m_startHasBeenSet = true; m_start = value; }

    /**
     * <p>The date and time the Reserved Instance started.</p>
     */
    inline void SetStart(Aws::Utils::DateTime&& value) { m_startHasBeenSet = true; m_start = std::move(value); }

    /**
     * <p>The date and time the Reserved Instance started.</p>
     */
    inline ReservedInstances& WithStart(const Aws::Utils::DateTime& value) { SetStart(value); return *this;}

    /**
     * <p>The date and time the Reserved Instance started.</p>
     */
    inline ReservedInstances& WithStart(Aws::Utils::DateTime&& value) { SetStart(std::move(value)); return *this;}


    /**
     * <p>The state of the Reserved Instance purchase.</p>
     */
    inline const ReservedInstanceState& GetState() const{ return m_state; }

    /**
     * <p>The state of the Reserved Instance purchase.</p>
     */
    inline void SetState(const ReservedInstanceState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the Reserved Instance purchase.</p>
     */
    inline void SetState(ReservedInstanceState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the Reserved Instance purchase.</p>
     */
    inline ReservedInstances& WithState(const ReservedInstanceState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the Reserved Instance purchase.</p>
     */
    inline ReservedInstances& WithState(ReservedInstanceState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The usage price of the Reserved Instance, per hour.</p>
     */
    inline double GetUsagePrice() const{ return m_usagePrice; }

    /**
     * <p>The usage price of the Reserved Instance, per hour.</p>
     */
    inline void SetUsagePrice(double value) { m_usagePriceHasBeenSet = true; m_usagePrice = value; }

    /**
     * <p>The usage price of the Reserved Instance, per hour.</p>
     */
    inline ReservedInstances& WithUsagePrice(double value) { SetUsagePrice(value); return *this;}


    /**
     * <p>The currency of the Reserved Instance. It's specified using ISO 4217 standard
     * currency codes. At this time, the only supported currency is
     * <code>USD</code>.</p>
     */
    inline const CurrencyCodeValues& GetCurrencyCode() const{ return m_currencyCode; }

    /**
     * <p>The currency of the Reserved Instance. It's specified using ISO 4217 standard
     * currency codes. At this time, the only supported currency is
     * <code>USD</code>.</p>
     */
    inline void SetCurrencyCode(const CurrencyCodeValues& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }

    /**
     * <p>The currency of the Reserved Instance. It's specified using ISO 4217 standard
     * currency codes. At this time, the only supported currency is
     * <code>USD</code>.</p>
     */
    inline void SetCurrencyCode(CurrencyCodeValues&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }

    /**
     * <p>The currency of the Reserved Instance. It's specified using ISO 4217 standard
     * currency codes. At this time, the only supported currency is
     * <code>USD</code>.</p>
     */
    inline ReservedInstances& WithCurrencyCode(const CurrencyCodeValues& value) { SetCurrencyCode(value); return *this;}

    /**
     * <p>The currency of the Reserved Instance. It's specified using ISO 4217 standard
     * currency codes. At this time, the only supported currency is
     * <code>USD</code>.</p>
     */
    inline ReservedInstances& WithCurrencyCode(CurrencyCodeValues&& value) { SetCurrencyCode(std::move(value)); return *this;}


    /**
     * <p>The tenancy of the instance.</p>
     */
    inline const Tenancy& GetInstanceTenancy() const{ return m_instanceTenancy; }

    /**
     * <p>The tenancy of the instance.</p>
     */
    inline void SetInstanceTenancy(const Tenancy& value) { m_instanceTenancyHasBeenSet = true; m_instanceTenancy = value; }

    /**
     * <p>The tenancy of the instance.</p>
     */
    inline void SetInstanceTenancy(Tenancy&& value) { m_instanceTenancyHasBeenSet = true; m_instanceTenancy = std::move(value); }

    /**
     * <p>The tenancy of the instance.</p>
     */
    inline ReservedInstances& WithInstanceTenancy(const Tenancy& value) { SetInstanceTenancy(value); return *this;}

    /**
     * <p>The tenancy of the instance.</p>
     */
    inline ReservedInstances& WithInstanceTenancy(Tenancy&& value) { SetInstanceTenancy(std::move(value)); return *this;}


    /**
     * <p>The offering class of the Reserved Instance.</p>
     */
    inline const OfferingClassType& GetOfferingClass() const{ return m_offeringClass; }

    /**
     * <p>The offering class of the Reserved Instance.</p>
     */
    inline void SetOfferingClass(const OfferingClassType& value) { m_offeringClassHasBeenSet = true; m_offeringClass = value; }

    /**
     * <p>The offering class of the Reserved Instance.</p>
     */
    inline void SetOfferingClass(OfferingClassType&& value) { m_offeringClassHasBeenSet = true; m_offeringClass = std::move(value); }

    /**
     * <p>The offering class of the Reserved Instance.</p>
     */
    inline ReservedInstances& WithOfferingClass(const OfferingClassType& value) { SetOfferingClass(value); return *this;}

    /**
     * <p>The offering class of the Reserved Instance.</p>
     */
    inline ReservedInstances& WithOfferingClass(OfferingClassType&& value) { SetOfferingClass(std::move(value)); return *this;}


    /**
     * <p>The Reserved Instance offering type.</p>
     */
    inline const OfferingTypeValues& GetOfferingType() const{ return m_offeringType; }

    /**
     * <p>The Reserved Instance offering type.</p>
     */
    inline void SetOfferingType(const OfferingTypeValues& value) { m_offeringTypeHasBeenSet = true; m_offeringType = value; }

    /**
     * <p>The Reserved Instance offering type.</p>
     */
    inline void SetOfferingType(OfferingTypeValues&& value) { m_offeringTypeHasBeenSet = true; m_offeringType = std::move(value); }

    /**
     * <p>The Reserved Instance offering type.</p>
     */
    inline ReservedInstances& WithOfferingType(const OfferingTypeValues& value) { SetOfferingType(value); return *this;}

    /**
     * <p>The Reserved Instance offering type.</p>
     */
    inline ReservedInstances& WithOfferingType(OfferingTypeValues&& value) { SetOfferingType(std::move(value)); return *this;}


    /**
     * <p>The recurring charge tag assigned to the resource.</p>
     */
    inline const Aws::Vector<RecurringCharge>& GetRecurringCharges() const{ return m_recurringCharges; }

    /**
     * <p>The recurring charge tag assigned to the resource.</p>
     */
    inline void SetRecurringCharges(const Aws::Vector<RecurringCharge>& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges = value; }

    /**
     * <p>The recurring charge tag assigned to the resource.</p>
     */
    inline void SetRecurringCharges(Aws::Vector<RecurringCharge>&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges = std::move(value); }

    /**
     * <p>The recurring charge tag assigned to the resource.</p>
     */
    inline ReservedInstances& WithRecurringCharges(const Aws::Vector<RecurringCharge>& value) { SetRecurringCharges(value); return *this;}

    /**
     * <p>The recurring charge tag assigned to the resource.</p>
     */
    inline ReservedInstances& WithRecurringCharges(Aws::Vector<RecurringCharge>&& value) { SetRecurringCharges(std::move(value)); return *this;}

    /**
     * <p>The recurring charge tag assigned to the resource.</p>
     */
    inline ReservedInstances& AddRecurringCharges(const RecurringCharge& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.push_back(value); return *this; }

    /**
     * <p>The recurring charge tag assigned to the resource.</p>
     */
    inline ReservedInstances& AddRecurringCharges(RecurringCharge&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.push_back(std::move(value)); return *this; }


    /**
     * <p>The scope of the Reserved Instance.</p>
     */
    inline const Scope& GetScope() const{ return m_scope; }

    /**
     * <p>The scope of the Reserved Instance.</p>
     */
    inline void SetScope(const Scope& value) { m_scopeHasBeenSet = true; m_scope = value; }

    /**
     * <p>The scope of the Reserved Instance.</p>
     */
    inline void SetScope(Scope&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }

    /**
     * <p>The scope of the Reserved Instance.</p>
     */
    inline ReservedInstances& WithScope(const Scope& value) { SetScope(value); return *this;}

    /**
     * <p>The scope of the Reserved Instance.</p>
     */
    inline ReservedInstances& WithScope(Scope&& value) { SetScope(std::move(value)); return *this;}


    /**
     * <p>Any tags assigned to the resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags assigned to the resource.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Any tags assigned to the resource.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Any tags assigned to the resource.</p>
     */
    inline ReservedInstances& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags assigned to the resource.</p>
     */
    inline ReservedInstances& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags assigned to the resource.</p>
     */
    inline ReservedInstances& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags assigned to the resource.</p>
     */
    inline ReservedInstances& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    long long m_duration;
    bool m_durationHasBeenSet;

    Aws::Utils::DateTime m_end;
    bool m_endHasBeenSet;

    double m_fixedPrice;
    bool m_fixedPriceHasBeenSet;

    int m_instanceCount;
    bool m_instanceCountHasBeenSet;

    InstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet;

    RIProductDescription m_productDescription;
    bool m_productDescriptionHasBeenSet;

    Aws::String m_reservedInstancesId;
    bool m_reservedInstancesIdHasBeenSet;

    Aws::Utils::DateTime m_start;
    bool m_startHasBeenSet;

    ReservedInstanceState m_state;
    bool m_stateHasBeenSet;

    double m_usagePrice;
    bool m_usagePriceHasBeenSet;

    CurrencyCodeValues m_currencyCode;
    bool m_currencyCodeHasBeenSet;

    Tenancy m_instanceTenancy;
    bool m_instanceTenancyHasBeenSet;

    OfferingClassType m_offeringClass;
    bool m_offeringClassHasBeenSet;

    OfferingTypeValues m_offeringType;
    bool m_offeringTypeHasBeenSet;

    Aws::Vector<RecurringCharge> m_recurringCharges;
    bool m_recurringChargesHasBeenSet;

    Scope m_scope;
    bool m_scopeHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
