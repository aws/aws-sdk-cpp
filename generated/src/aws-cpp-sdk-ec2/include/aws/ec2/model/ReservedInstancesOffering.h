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
#include <aws/ec2/model/RIProductDescription.h>
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
  class ReservedInstancesOffering
  {
  public:
    AWS_EC2_API ReservedInstancesOffering() = default;
    AWS_EC2_API ReservedInstancesOffering(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ReservedInstancesOffering& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The currency of the Reserved Instance offering you are purchasing. It's
     * specified using ISO 4217 standard currency codes. At this time, the only
     * supported currency is <code>USD</code>.</p>
     */
    inline CurrencyCodeValues GetCurrencyCode() const { return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    inline void SetCurrencyCode(CurrencyCodeValues value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }
    inline ReservedInstancesOffering& WithCurrencyCode(CurrencyCodeValues value) { SetCurrencyCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tenancy of the instance.</p>
     */
    inline Tenancy GetInstanceTenancy() const { return m_instanceTenancy; }
    inline bool InstanceTenancyHasBeenSet() const { return m_instanceTenancyHasBeenSet; }
    inline void SetInstanceTenancy(Tenancy value) { m_instanceTenancyHasBeenSet = true; m_instanceTenancy = value; }
    inline ReservedInstancesOffering& WithInstanceTenancy(Tenancy value) { SetInstanceTenancy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the offering is available through the Reserved Instance
     * Marketplace (resale) or Amazon Web Services. If it's a Reserved Instance
     * Marketplace offering, this is <code>true</code>.</p>
     */
    inline bool GetMarketplace() const { return m_marketplace; }
    inline bool MarketplaceHasBeenSet() const { return m_marketplaceHasBeenSet; }
    inline void SetMarketplace(bool value) { m_marketplaceHasBeenSet = true; m_marketplace = value; }
    inline ReservedInstancesOffering& WithMarketplace(bool value) { SetMarketplace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>convertible</code> it can be exchanged for Reserved Instances of the
     * same or higher monetary value, with different configurations. If
     * <code>standard</code>, it is not possible to perform an exchange.</p>
     */
    inline OfferingClassType GetOfferingClass() const { return m_offeringClass; }
    inline bool OfferingClassHasBeenSet() const { return m_offeringClassHasBeenSet; }
    inline void SetOfferingClass(OfferingClassType value) { m_offeringClassHasBeenSet = true; m_offeringClass = value; }
    inline ReservedInstancesOffering& WithOfferingClass(OfferingClassType value) { SetOfferingClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Reserved Instance offering type.</p>
     */
    inline OfferingTypeValues GetOfferingType() const { return m_offeringType; }
    inline bool OfferingTypeHasBeenSet() const { return m_offeringTypeHasBeenSet; }
    inline void SetOfferingType(OfferingTypeValues value) { m_offeringTypeHasBeenSet = true; m_offeringType = value; }
    inline ReservedInstancesOffering& WithOfferingType(OfferingTypeValues value) { SetOfferingType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pricing details of the Reserved Instance offering.</p>
     */
    inline const Aws::Vector<PricingDetail>& GetPricingDetails() const { return m_pricingDetails; }
    inline bool PricingDetailsHasBeenSet() const { return m_pricingDetailsHasBeenSet; }
    template<typename PricingDetailsT = Aws::Vector<PricingDetail>>
    void SetPricingDetails(PricingDetailsT&& value) { m_pricingDetailsHasBeenSet = true; m_pricingDetails = std::forward<PricingDetailsT>(value); }
    template<typename PricingDetailsT = Aws::Vector<PricingDetail>>
    ReservedInstancesOffering& WithPricingDetails(PricingDetailsT&& value) { SetPricingDetails(std::forward<PricingDetailsT>(value)); return *this;}
    template<typename PricingDetailsT = PricingDetail>
    ReservedInstancesOffering& AddPricingDetails(PricingDetailsT&& value) { m_pricingDetailsHasBeenSet = true; m_pricingDetails.emplace_back(std::forward<PricingDetailsT>(value)); return *this; }
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
    ReservedInstancesOffering& WithRecurringCharges(RecurringChargesT&& value) { SetRecurringCharges(std::forward<RecurringChargesT>(value)); return *this;}
    template<typename RecurringChargesT = RecurringCharge>
    ReservedInstancesOffering& AddRecurringCharges(RecurringChargesT&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.emplace_back(std::forward<RecurringChargesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether the Reserved Instance is applied to instances in a Region or an
     * Availability Zone.</p>
     */
    inline Scope GetScope() const { return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(Scope value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline ReservedInstancesOffering& WithScope(Scope value) { SetScope(value); return *this;}
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
    ReservedInstancesOffering& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) { SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Reserved Instance offering. This is the offering ID used in
     * <a>GetReservedInstancesExchangeQuote</a> to confirm that an exchange can be
     * made.</p>
     */
    inline const Aws::String& GetReservedInstancesOfferingId() const { return m_reservedInstancesOfferingId; }
    inline bool ReservedInstancesOfferingIdHasBeenSet() const { return m_reservedInstancesOfferingIdHasBeenSet; }
    template<typename ReservedInstancesOfferingIdT = Aws::String>
    void SetReservedInstancesOfferingId(ReservedInstancesOfferingIdT&& value) { m_reservedInstancesOfferingIdHasBeenSet = true; m_reservedInstancesOfferingId = std::forward<ReservedInstancesOfferingIdT>(value); }
    template<typename ReservedInstancesOfferingIdT = Aws::String>
    ReservedInstancesOffering& WithReservedInstancesOfferingId(ReservedInstancesOfferingIdT&& value) { SetReservedInstancesOfferingId(std::forward<ReservedInstancesOfferingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type on which the Reserved Instance can be used.</p>
     */
    inline InstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(InstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline ReservedInstancesOffering& WithInstanceType(InstanceType value) { SetInstanceType(value); return *this;}
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
    ReservedInstancesOffering& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the Reserved Instance, in seconds.</p>
     */
    inline long long GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(long long value) { m_durationHasBeenSet = true; m_duration = value; }
    inline ReservedInstancesOffering& WithDuration(long long value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The usage price of the Reserved Instance, per hour.</p>
     */
    inline double GetUsagePrice() const { return m_usagePrice; }
    inline bool UsagePriceHasBeenSet() const { return m_usagePriceHasBeenSet; }
    inline void SetUsagePrice(double value) { m_usagePriceHasBeenSet = true; m_usagePrice = value; }
    inline ReservedInstancesOffering& WithUsagePrice(double value) { SetUsagePrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The purchase price of the Reserved Instance.</p>
     */
    inline double GetFixedPrice() const { return m_fixedPrice; }
    inline bool FixedPriceHasBeenSet() const { return m_fixedPriceHasBeenSet; }
    inline void SetFixedPrice(double value) { m_fixedPriceHasBeenSet = true; m_fixedPrice = value; }
    inline ReservedInstancesOffering& WithFixedPrice(double value) { SetFixedPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Reserved Instance product platform description.</p>
     */
    inline RIProductDescription GetProductDescription() const { return m_productDescription; }
    inline bool ProductDescriptionHasBeenSet() const { return m_productDescriptionHasBeenSet; }
    inline void SetProductDescription(RIProductDescription value) { m_productDescriptionHasBeenSet = true; m_productDescription = value; }
    inline ReservedInstancesOffering& WithProductDescription(RIProductDescription value) { SetProductDescription(value); return *this;}
    ///@}
  private:

    CurrencyCodeValues m_currencyCode{CurrencyCodeValues::NOT_SET};
    bool m_currencyCodeHasBeenSet = false;

    Tenancy m_instanceTenancy{Tenancy::NOT_SET};
    bool m_instanceTenancyHasBeenSet = false;

    bool m_marketplace{false};
    bool m_marketplaceHasBeenSet = false;

    OfferingClassType m_offeringClass{OfferingClassType::NOT_SET};
    bool m_offeringClassHasBeenSet = false;

    OfferingTypeValues m_offeringType{OfferingTypeValues::NOT_SET};
    bool m_offeringTypeHasBeenSet = false;

    Aws::Vector<PricingDetail> m_pricingDetails;
    bool m_pricingDetailsHasBeenSet = false;

    Aws::Vector<RecurringCharge> m_recurringCharges;
    bool m_recurringChargesHasBeenSet = false;

    Scope m_scope{Scope::NOT_SET};
    bool m_scopeHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    Aws::String m_reservedInstancesOfferingId;
    bool m_reservedInstancesOfferingIdHasBeenSet = false;

    InstanceType m_instanceType{InstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    long long m_duration{0};
    bool m_durationHasBeenSet = false;

    double m_usagePrice{0.0};
    bool m_usagePriceHasBeenSet = false;

    double m_fixedPrice{0.0};
    bool m_fixedPriceHasBeenSet = false;

    RIProductDescription m_productDescription{RIProductDescription::NOT_SET};
    bool m_productDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
