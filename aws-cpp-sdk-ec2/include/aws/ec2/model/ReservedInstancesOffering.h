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
#include <aws/ec2/model/InstanceType.h>
#include <aws/ec2/model/RIProductDescription.h>
#include <aws/ec2/model/CurrencyCodeValues.h>
#include <aws/ec2/model/Tenancy.h>
#include <aws/ec2/model/OfferingClassType.h>
#include <aws/ec2/model/OfferingTypeValues.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Scope.h>
#include <aws/ec2/model/PricingDetail.h>
#include <aws/ec2/model/RecurringCharge.h>
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
   * <p>Describes a Reserved Instance offering.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReservedInstancesOffering">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ReservedInstancesOffering
  {
  public:
    ReservedInstancesOffering();
    ReservedInstancesOffering(const Aws::Utils::Xml::XmlNode& xmlNode);
    ReservedInstancesOffering& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    inline ReservedInstancesOffering& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone in which the Reserved Instance can be used.</p>
     */
    inline ReservedInstancesOffering& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone in which the Reserved Instance can be used.</p>
     */
    inline ReservedInstancesOffering& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


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
    inline ReservedInstancesOffering& WithDuration(long long value) { SetDuration(value); return *this;}


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
    inline ReservedInstancesOffering& WithFixedPrice(double value) { SetFixedPrice(value); return *this;}


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
    inline ReservedInstancesOffering& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type on which the Reserved Instance can be used.</p>
     */
    inline ReservedInstancesOffering& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


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
    inline ReservedInstancesOffering& WithProductDescription(const RIProductDescription& value) { SetProductDescription(value); return *this;}

    /**
     * <p>The Reserved Instance product platform description.</p>
     */
    inline ReservedInstancesOffering& WithProductDescription(RIProductDescription&& value) { SetProductDescription(std::move(value)); return *this;}


    /**
     * <p>The ID of the Reserved Instance offering. This is the offering ID used in
     * <a>GetReservedInstancesExchangeQuote</a> to confirm that an exchange can be
     * made.</p>
     */
    inline const Aws::String& GetReservedInstancesOfferingId() const{ return m_reservedInstancesOfferingId; }

    /**
     * <p>The ID of the Reserved Instance offering. This is the offering ID used in
     * <a>GetReservedInstancesExchangeQuote</a> to confirm that an exchange can be
     * made.</p>
     */
    inline void SetReservedInstancesOfferingId(const Aws::String& value) { m_reservedInstancesOfferingIdHasBeenSet = true; m_reservedInstancesOfferingId = value; }

    /**
     * <p>The ID of the Reserved Instance offering. This is the offering ID used in
     * <a>GetReservedInstancesExchangeQuote</a> to confirm that an exchange can be
     * made.</p>
     */
    inline void SetReservedInstancesOfferingId(Aws::String&& value) { m_reservedInstancesOfferingIdHasBeenSet = true; m_reservedInstancesOfferingId = std::move(value); }

    /**
     * <p>The ID of the Reserved Instance offering. This is the offering ID used in
     * <a>GetReservedInstancesExchangeQuote</a> to confirm that an exchange can be
     * made.</p>
     */
    inline void SetReservedInstancesOfferingId(const char* value) { m_reservedInstancesOfferingIdHasBeenSet = true; m_reservedInstancesOfferingId.assign(value); }

    /**
     * <p>The ID of the Reserved Instance offering. This is the offering ID used in
     * <a>GetReservedInstancesExchangeQuote</a> to confirm that an exchange can be
     * made.</p>
     */
    inline ReservedInstancesOffering& WithReservedInstancesOfferingId(const Aws::String& value) { SetReservedInstancesOfferingId(value); return *this;}

    /**
     * <p>The ID of the Reserved Instance offering. This is the offering ID used in
     * <a>GetReservedInstancesExchangeQuote</a> to confirm that an exchange can be
     * made.</p>
     */
    inline ReservedInstancesOffering& WithReservedInstancesOfferingId(Aws::String&& value) { SetReservedInstancesOfferingId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Reserved Instance offering. This is the offering ID used in
     * <a>GetReservedInstancesExchangeQuote</a> to confirm that an exchange can be
     * made.</p>
     */
    inline ReservedInstancesOffering& WithReservedInstancesOfferingId(const char* value) { SetReservedInstancesOfferingId(value); return *this;}


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
    inline ReservedInstancesOffering& WithUsagePrice(double value) { SetUsagePrice(value); return *this;}


    /**
     * <p>The currency of the Reserved Instance offering you are purchasing. It's
     * specified using ISO 4217 standard currency codes. At this time, the only
     * supported currency is <code>USD</code>.</p>
     */
    inline const CurrencyCodeValues& GetCurrencyCode() const{ return m_currencyCode; }

    /**
     * <p>The currency of the Reserved Instance offering you are purchasing. It's
     * specified using ISO 4217 standard currency codes. At this time, the only
     * supported currency is <code>USD</code>.</p>
     */
    inline void SetCurrencyCode(const CurrencyCodeValues& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }

    /**
     * <p>The currency of the Reserved Instance offering you are purchasing. It's
     * specified using ISO 4217 standard currency codes. At this time, the only
     * supported currency is <code>USD</code>.</p>
     */
    inline void SetCurrencyCode(CurrencyCodeValues&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }

    /**
     * <p>The currency of the Reserved Instance offering you are purchasing. It's
     * specified using ISO 4217 standard currency codes. At this time, the only
     * supported currency is <code>USD</code>.</p>
     */
    inline ReservedInstancesOffering& WithCurrencyCode(const CurrencyCodeValues& value) { SetCurrencyCode(value); return *this;}

    /**
     * <p>The currency of the Reserved Instance offering you are purchasing. It's
     * specified using ISO 4217 standard currency codes. At this time, the only
     * supported currency is <code>USD</code>.</p>
     */
    inline ReservedInstancesOffering& WithCurrencyCode(CurrencyCodeValues&& value) { SetCurrencyCode(std::move(value)); return *this;}


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
    inline ReservedInstancesOffering& WithInstanceTenancy(const Tenancy& value) { SetInstanceTenancy(value); return *this;}

    /**
     * <p>The tenancy of the instance.</p>
     */
    inline ReservedInstancesOffering& WithInstanceTenancy(Tenancy&& value) { SetInstanceTenancy(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the offering is available through the Reserved Instance
     * Marketplace (resale) or AWS. If it's a Reserved Instance Marketplace offering,
     * this is <code>true</code>.</p>
     */
    inline bool GetMarketplace() const{ return m_marketplace; }

    /**
     * <p>Indicates whether the offering is available through the Reserved Instance
     * Marketplace (resale) or AWS. If it's a Reserved Instance Marketplace offering,
     * this is <code>true</code>.</p>
     */
    inline void SetMarketplace(bool value) { m_marketplaceHasBeenSet = true; m_marketplace = value; }

    /**
     * <p>Indicates whether the offering is available through the Reserved Instance
     * Marketplace (resale) or AWS. If it's a Reserved Instance Marketplace offering,
     * this is <code>true</code>.</p>
     */
    inline ReservedInstancesOffering& WithMarketplace(bool value) { SetMarketplace(value); return *this;}


    /**
     * <p>If <code>convertible</code> it can be exchanged for Reserved Instances of the
     * same or higher monetary value, with different configurations. If
     * <code>standard</code>, it is not possible to perform an exchange.</p>
     */
    inline const OfferingClassType& GetOfferingClass() const{ return m_offeringClass; }

    /**
     * <p>If <code>convertible</code> it can be exchanged for Reserved Instances of the
     * same or higher monetary value, with different configurations. If
     * <code>standard</code>, it is not possible to perform an exchange.</p>
     */
    inline void SetOfferingClass(const OfferingClassType& value) { m_offeringClassHasBeenSet = true; m_offeringClass = value; }

    /**
     * <p>If <code>convertible</code> it can be exchanged for Reserved Instances of the
     * same or higher monetary value, with different configurations. If
     * <code>standard</code>, it is not possible to perform an exchange.</p>
     */
    inline void SetOfferingClass(OfferingClassType&& value) { m_offeringClassHasBeenSet = true; m_offeringClass = std::move(value); }

    /**
     * <p>If <code>convertible</code> it can be exchanged for Reserved Instances of the
     * same or higher monetary value, with different configurations. If
     * <code>standard</code>, it is not possible to perform an exchange.</p>
     */
    inline ReservedInstancesOffering& WithOfferingClass(const OfferingClassType& value) { SetOfferingClass(value); return *this;}

    /**
     * <p>If <code>convertible</code> it can be exchanged for Reserved Instances of the
     * same or higher monetary value, with different configurations. If
     * <code>standard</code>, it is not possible to perform an exchange.</p>
     */
    inline ReservedInstancesOffering& WithOfferingClass(OfferingClassType&& value) { SetOfferingClass(std::move(value)); return *this;}


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
    inline ReservedInstancesOffering& WithOfferingType(const OfferingTypeValues& value) { SetOfferingType(value); return *this;}

    /**
     * <p>The Reserved Instance offering type.</p>
     */
    inline ReservedInstancesOffering& WithOfferingType(OfferingTypeValues&& value) { SetOfferingType(std::move(value)); return *this;}


    /**
     * <p>The pricing details of the Reserved Instance offering.</p>
     */
    inline const Aws::Vector<PricingDetail>& GetPricingDetails() const{ return m_pricingDetails; }

    /**
     * <p>The pricing details of the Reserved Instance offering.</p>
     */
    inline void SetPricingDetails(const Aws::Vector<PricingDetail>& value) { m_pricingDetailsHasBeenSet = true; m_pricingDetails = value; }

    /**
     * <p>The pricing details of the Reserved Instance offering.</p>
     */
    inline void SetPricingDetails(Aws::Vector<PricingDetail>&& value) { m_pricingDetailsHasBeenSet = true; m_pricingDetails = std::move(value); }

    /**
     * <p>The pricing details of the Reserved Instance offering.</p>
     */
    inline ReservedInstancesOffering& WithPricingDetails(const Aws::Vector<PricingDetail>& value) { SetPricingDetails(value); return *this;}

    /**
     * <p>The pricing details of the Reserved Instance offering.</p>
     */
    inline ReservedInstancesOffering& WithPricingDetails(Aws::Vector<PricingDetail>&& value) { SetPricingDetails(std::move(value)); return *this;}

    /**
     * <p>The pricing details of the Reserved Instance offering.</p>
     */
    inline ReservedInstancesOffering& AddPricingDetails(const PricingDetail& value) { m_pricingDetailsHasBeenSet = true; m_pricingDetails.push_back(value); return *this; }

    /**
     * <p>The pricing details of the Reserved Instance offering.</p>
     */
    inline ReservedInstancesOffering& AddPricingDetails(PricingDetail&& value) { m_pricingDetailsHasBeenSet = true; m_pricingDetails.push_back(std::move(value)); return *this; }


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
    inline ReservedInstancesOffering& WithRecurringCharges(const Aws::Vector<RecurringCharge>& value) { SetRecurringCharges(value); return *this;}

    /**
     * <p>The recurring charge tag assigned to the resource.</p>
     */
    inline ReservedInstancesOffering& WithRecurringCharges(Aws::Vector<RecurringCharge>&& value) { SetRecurringCharges(std::move(value)); return *this;}

    /**
     * <p>The recurring charge tag assigned to the resource.</p>
     */
    inline ReservedInstancesOffering& AddRecurringCharges(const RecurringCharge& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.push_back(value); return *this; }

    /**
     * <p>The recurring charge tag assigned to the resource.</p>
     */
    inline ReservedInstancesOffering& AddRecurringCharges(RecurringCharge&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.push_back(std::move(value)); return *this; }


    /**
     * <p>Whether the Reserved Instance is applied to instances in a region or an
     * Availability Zone.</p>
     */
    inline const Scope& GetScope() const{ return m_scope; }

    /**
     * <p>Whether the Reserved Instance is applied to instances in a region or an
     * Availability Zone.</p>
     */
    inline void SetScope(const Scope& value) { m_scopeHasBeenSet = true; m_scope = value; }

    /**
     * <p>Whether the Reserved Instance is applied to instances in a region or an
     * Availability Zone.</p>
     */
    inline void SetScope(Scope&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }

    /**
     * <p>Whether the Reserved Instance is applied to instances in a region or an
     * Availability Zone.</p>
     */
    inline ReservedInstancesOffering& WithScope(const Scope& value) { SetScope(value); return *this;}

    /**
     * <p>Whether the Reserved Instance is applied to instances in a region or an
     * Availability Zone.</p>
     */
    inline ReservedInstancesOffering& WithScope(Scope&& value) { SetScope(std::move(value)); return *this;}

  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    long long m_duration;
    bool m_durationHasBeenSet;

    double m_fixedPrice;
    bool m_fixedPriceHasBeenSet;

    InstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet;

    RIProductDescription m_productDescription;
    bool m_productDescriptionHasBeenSet;

    Aws::String m_reservedInstancesOfferingId;
    bool m_reservedInstancesOfferingIdHasBeenSet;

    double m_usagePrice;
    bool m_usagePriceHasBeenSet;

    CurrencyCodeValues m_currencyCode;
    bool m_currencyCodeHasBeenSet;

    Tenancy m_instanceTenancy;
    bool m_instanceTenancyHasBeenSet;

    bool m_marketplace;
    bool m_marketplaceHasBeenSet;

    OfferingClassType m_offeringClass;
    bool m_offeringClassHasBeenSet;

    OfferingTypeValues m_offeringType;
    bool m_offeringTypeHasBeenSet;

    Aws::Vector<PricingDetail> m_pricingDetails;
    bool m_pricingDetailsHasBeenSet;

    Aws::Vector<RecurringCharge> m_recurringCharges;
    bool m_recurringChargesHasBeenSet;

    Scope m_scope;
    bool m_scopeHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
