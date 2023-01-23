/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ReservedInstancesOffering.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

ReservedInstancesOffering::ReservedInstancesOffering() : 
    m_availabilityZoneHasBeenSet(false),
    m_duration(0),
    m_durationHasBeenSet(false),
    m_fixedPrice(0.0),
    m_fixedPriceHasBeenSet(false),
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_productDescription(RIProductDescription::NOT_SET),
    m_productDescriptionHasBeenSet(false),
    m_reservedInstancesOfferingIdHasBeenSet(false),
    m_usagePrice(0.0),
    m_usagePriceHasBeenSet(false),
    m_currencyCode(CurrencyCodeValues::NOT_SET),
    m_currencyCodeHasBeenSet(false),
    m_instanceTenancy(Tenancy::NOT_SET),
    m_instanceTenancyHasBeenSet(false),
    m_marketplace(false),
    m_marketplaceHasBeenSet(false),
    m_offeringClass(OfferingClassType::NOT_SET),
    m_offeringClassHasBeenSet(false),
    m_offeringType(OfferingTypeValues::NOT_SET),
    m_offeringTypeHasBeenSet(false),
    m_pricingDetailsHasBeenSet(false),
    m_recurringChargesHasBeenSet(false),
    m_scope(Scope::NOT_SET),
    m_scopeHasBeenSet(false)
{
}

ReservedInstancesOffering::ReservedInstancesOffering(const XmlNode& xmlNode) : 
    m_availabilityZoneHasBeenSet(false),
    m_duration(0),
    m_durationHasBeenSet(false),
    m_fixedPrice(0.0),
    m_fixedPriceHasBeenSet(false),
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_productDescription(RIProductDescription::NOT_SET),
    m_productDescriptionHasBeenSet(false),
    m_reservedInstancesOfferingIdHasBeenSet(false),
    m_usagePrice(0.0),
    m_usagePriceHasBeenSet(false),
    m_currencyCode(CurrencyCodeValues::NOT_SET),
    m_currencyCodeHasBeenSet(false),
    m_instanceTenancy(Tenancy::NOT_SET),
    m_instanceTenancyHasBeenSet(false),
    m_marketplace(false),
    m_marketplaceHasBeenSet(false),
    m_offeringClass(OfferingClassType::NOT_SET),
    m_offeringClassHasBeenSet(false),
    m_offeringType(OfferingTypeValues::NOT_SET),
    m_offeringTypeHasBeenSet(false),
    m_pricingDetailsHasBeenSet(false),
    m_recurringChargesHasBeenSet(false),
    m_scope(Scope::NOT_SET),
    m_scopeHasBeenSet(false)
{
  *this = xmlNode;
}

ReservedInstancesOffering& ReservedInstancesOffering::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode availabilityZoneNode = resultNode.FirstChild("availabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneNode.GetText());
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode durationNode = resultNode.FirstChild("duration");
    if(!durationNode.IsNull())
    {
      m_duration = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(durationNode.GetText()).c_str()).c_str());
      m_durationHasBeenSet = true;
    }
    XmlNode fixedPriceNode = resultNode.FirstChild("fixedPrice");
    if(!fixedPriceNode.IsNull())
    {
      m_fixedPrice = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(fixedPriceNode.GetText()).c_str()).c_str());
      m_fixedPriceHasBeenSet = true;
    }
    XmlNode instanceTypeNode = resultNode.FirstChild("instanceType");
    if(!instanceTypeNode.IsNull())
    {
      m_instanceType = InstanceTypeMapper::GetInstanceTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instanceTypeNode.GetText()).c_str()).c_str());
      m_instanceTypeHasBeenSet = true;
    }
    XmlNode productDescriptionNode = resultNode.FirstChild("productDescription");
    if(!productDescriptionNode.IsNull())
    {
      m_productDescription = RIProductDescriptionMapper::GetRIProductDescriptionForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(productDescriptionNode.GetText()).c_str()).c_str());
      m_productDescriptionHasBeenSet = true;
    }
    XmlNode reservedInstancesOfferingIdNode = resultNode.FirstChild("reservedInstancesOfferingId");
    if(!reservedInstancesOfferingIdNode.IsNull())
    {
      m_reservedInstancesOfferingId = Aws::Utils::Xml::DecodeEscapedXmlText(reservedInstancesOfferingIdNode.GetText());
      m_reservedInstancesOfferingIdHasBeenSet = true;
    }
    XmlNode usagePriceNode = resultNode.FirstChild("usagePrice");
    if(!usagePriceNode.IsNull())
    {
      m_usagePrice = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(usagePriceNode.GetText()).c_str()).c_str());
      m_usagePriceHasBeenSet = true;
    }
    XmlNode currencyCodeNode = resultNode.FirstChild("currencyCode");
    if(!currencyCodeNode.IsNull())
    {
      m_currencyCode = CurrencyCodeValuesMapper::GetCurrencyCodeValuesForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(currencyCodeNode.GetText()).c_str()).c_str());
      m_currencyCodeHasBeenSet = true;
    }
    XmlNode instanceTenancyNode = resultNode.FirstChild("instanceTenancy");
    if(!instanceTenancyNode.IsNull())
    {
      m_instanceTenancy = TenancyMapper::GetTenancyForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instanceTenancyNode.GetText()).c_str()).c_str());
      m_instanceTenancyHasBeenSet = true;
    }
    XmlNode marketplaceNode = resultNode.FirstChild("marketplace");
    if(!marketplaceNode.IsNull())
    {
      m_marketplace = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(marketplaceNode.GetText()).c_str()).c_str());
      m_marketplaceHasBeenSet = true;
    }
    XmlNode offeringClassNode = resultNode.FirstChild("offeringClass");
    if(!offeringClassNode.IsNull())
    {
      m_offeringClass = OfferingClassTypeMapper::GetOfferingClassTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(offeringClassNode.GetText()).c_str()).c_str());
      m_offeringClassHasBeenSet = true;
    }
    XmlNode offeringTypeNode = resultNode.FirstChild("offeringType");
    if(!offeringTypeNode.IsNull())
    {
      m_offeringType = OfferingTypeValuesMapper::GetOfferingTypeValuesForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(offeringTypeNode.GetText()).c_str()).c_str());
      m_offeringTypeHasBeenSet = true;
    }
    XmlNode pricingDetailsNode = resultNode.FirstChild("pricingDetailsSet");
    if(!pricingDetailsNode.IsNull())
    {
      XmlNode pricingDetailsMember = pricingDetailsNode.FirstChild("item");
      while(!pricingDetailsMember.IsNull())
      {
        m_pricingDetails.push_back(pricingDetailsMember);
        pricingDetailsMember = pricingDetailsMember.NextNode("item");
      }

      m_pricingDetailsHasBeenSet = true;
    }
    XmlNode recurringChargesNode = resultNode.FirstChild("recurringCharges");
    if(!recurringChargesNode.IsNull())
    {
      XmlNode recurringChargesMember = recurringChargesNode.FirstChild("item");
      while(!recurringChargesMember.IsNull())
      {
        m_recurringCharges.push_back(recurringChargesMember);
        recurringChargesMember = recurringChargesMember.NextNode("item");
      }

      m_recurringChargesHasBeenSet = true;
    }
    XmlNode scopeNode = resultNode.FirstChild("scope");
    if(!scopeNode.IsNull())
    {
      m_scope = ScopeMapper::GetScopeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(scopeNode.GetText()).c_str()).c_str());
      m_scopeHasBeenSet = true;
    }
  }

  return *this;
}

void ReservedInstancesOffering::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_durationHasBeenSet)
  {
      oStream << location << index << locationValue << ".Duration=" << m_duration << "&";
  }

  if(m_fixedPriceHasBeenSet)
  {
      oStream << location << index << locationValue << ".FixedPrice=" << m_fixedPrice << "&";
  }

  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceType=" << InstanceTypeMapper::GetNameForInstanceType(m_instanceType) << "&";
  }

  if(m_productDescriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".ProductDescription=" << RIProductDescriptionMapper::GetNameForRIProductDescription(m_productDescription) << "&";
  }

  if(m_reservedInstancesOfferingIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReservedInstancesOfferingId=" << StringUtils::URLEncode(m_reservedInstancesOfferingId.c_str()) << "&";
  }

  if(m_usagePriceHasBeenSet)
  {
      oStream << location << index << locationValue << ".UsagePrice=" << m_usagePrice << "&";
  }

  if(m_currencyCodeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CurrencyCode=" << CurrencyCodeValuesMapper::GetNameForCurrencyCodeValues(m_currencyCode) << "&";
  }

  if(m_instanceTenancyHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceTenancy=" << TenancyMapper::GetNameForTenancy(m_instanceTenancy) << "&";
  }

  if(m_marketplaceHasBeenSet)
  {
      oStream << location << index << locationValue << ".Marketplace=" << std::boolalpha << m_marketplace << "&";
  }

  if(m_offeringClassHasBeenSet)
  {
      oStream << location << index << locationValue << ".OfferingClass=" << OfferingClassTypeMapper::GetNameForOfferingClassType(m_offeringClass) << "&";
  }

  if(m_offeringTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".OfferingType=" << OfferingTypeValuesMapper::GetNameForOfferingTypeValues(m_offeringType) << "&";
  }

  if(m_pricingDetailsHasBeenSet)
  {
      unsigned pricingDetailsIdx = 1;
      for(auto& item : m_pricingDetails)
      {
        Aws::StringStream pricingDetailsSs;
        pricingDetailsSs << location << index << locationValue << ".PricingDetailsSet." << pricingDetailsIdx++;
        item.OutputToStream(oStream, pricingDetailsSs.str().c_str());
      }
  }

  if(m_recurringChargesHasBeenSet)
  {
      unsigned recurringChargesIdx = 1;
      for(auto& item : m_recurringCharges)
      {
        Aws::StringStream recurringChargesSs;
        recurringChargesSs << location << index << locationValue << ".RecurringCharges." << recurringChargesIdx++;
        item.OutputToStream(oStream, recurringChargesSs.str().c_str());
      }
  }

  if(m_scopeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Scope=" << ScopeMapper::GetNameForScope(m_scope) << "&";
  }

}

void ReservedInstancesOffering::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if(m_durationHasBeenSet)
  {
      oStream << location << ".Duration=" << m_duration << "&";
  }
  if(m_fixedPriceHasBeenSet)
  {
      oStream << location << ".FixedPrice=" << m_fixedPrice << "&";
  }
  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << ".InstanceType=" << InstanceTypeMapper::GetNameForInstanceType(m_instanceType) << "&";
  }
  if(m_productDescriptionHasBeenSet)
  {
      oStream << location << ".ProductDescription=" << RIProductDescriptionMapper::GetNameForRIProductDescription(m_productDescription) << "&";
  }
  if(m_reservedInstancesOfferingIdHasBeenSet)
  {
      oStream << location << ".ReservedInstancesOfferingId=" << StringUtils::URLEncode(m_reservedInstancesOfferingId.c_str()) << "&";
  }
  if(m_usagePriceHasBeenSet)
  {
      oStream << location << ".UsagePrice=" << m_usagePrice << "&";
  }
  if(m_currencyCodeHasBeenSet)
  {
      oStream << location << ".CurrencyCode=" << CurrencyCodeValuesMapper::GetNameForCurrencyCodeValues(m_currencyCode) << "&";
  }
  if(m_instanceTenancyHasBeenSet)
  {
      oStream << location << ".InstanceTenancy=" << TenancyMapper::GetNameForTenancy(m_instanceTenancy) << "&";
  }
  if(m_marketplaceHasBeenSet)
  {
      oStream << location << ".Marketplace=" << std::boolalpha << m_marketplace << "&";
  }
  if(m_offeringClassHasBeenSet)
  {
      oStream << location << ".OfferingClass=" << OfferingClassTypeMapper::GetNameForOfferingClassType(m_offeringClass) << "&";
  }
  if(m_offeringTypeHasBeenSet)
  {
      oStream << location << ".OfferingType=" << OfferingTypeValuesMapper::GetNameForOfferingTypeValues(m_offeringType) << "&";
  }
  if(m_pricingDetailsHasBeenSet)
  {
      unsigned pricingDetailsIdx = 1;
      for(auto& item : m_pricingDetails)
      {
        Aws::StringStream pricingDetailsSs;
        pricingDetailsSs << location <<  ".PricingDetailsSet." << pricingDetailsIdx++;
        item.OutputToStream(oStream, pricingDetailsSs.str().c_str());
      }
  }
  if(m_recurringChargesHasBeenSet)
  {
      unsigned recurringChargesIdx = 1;
      for(auto& item : m_recurringCharges)
      {
        Aws::StringStream recurringChargesSs;
        recurringChargesSs << location <<  ".RecurringCharges." << recurringChargesIdx++;
        item.OutputToStream(oStream, recurringChargesSs.str().c_str());
      }
  }
  if(m_scopeHasBeenSet)
  {
      oStream << location << ".Scope=" << ScopeMapper::GetNameForScope(m_scope) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
