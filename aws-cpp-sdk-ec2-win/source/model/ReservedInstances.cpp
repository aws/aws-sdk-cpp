/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ReservedInstances.h>
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

ReservedInstances::ReservedInstances() : 
    m_availabilityZoneHasBeenSet(false),
    m_duration(0),
    m_durationHasBeenSet(false),
    m_endHasBeenSet(false),
    m_fixedPrice(0.0),
    m_fixedPriceHasBeenSet(false),
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_productDescription(RIProductDescription::NOT_SET),
    m_productDescriptionHasBeenSet(false),
    m_reservedInstancesIdHasBeenSet(false),
    m_startHasBeenSet(false),
    m_state(ReservedInstanceState::NOT_SET),
    m_stateHasBeenSet(false),
    m_usagePrice(0.0),
    m_usagePriceHasBeenSet(false),
    m_currencyCode(CurrencyCodeValues::NOT_SET),
    m_currencyCodeHasBeenSet(false),
    m_instanceTenancy(Tenancy::NOT_SET),
    m_instanceTenancyHasBeenSet(false),
    m_offeringClass(OfferingClassType::NOT_SET),
    m_offeringClassHasBeenSet(false),
    m_offeringType(OfferingTypeValues::NOT_SET),
    m_offeringTypeHasBeenSet(false),
    m_recurringChargesHasBeenSet(false),
    m_scope(Scope::NOT_SET),
    m_scopeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

ReservedInstances::ReservedInstances(const XmlNode& xmlNode) : 
    m_availabilityZoneHasBeenSet(false),
    m_duration(0),
    m_durationHasBeenSet(false),
    m_endHasBeenSet(false),
    m_fixedPrice(0.0),
    m_fixedPriceHasBeenSet(false),
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_productDescription(RIProductDescription::NOT_SET),
    m_productDescriptionHasBeenSet(false),
    m_reservedInstancesIdHasBeenSet(false),
    m_startHasBeenSet(false),
    m_state(ReservedInstanceState::NOT_SET),
    m_stateHasBeenSet(false),
    m_usagePrice(0.0),
    m_usagePriceHasBeenSet(false),
    m_currencyCode(CurrencyCodeValues::NOT_SET),
    m_currencyCodeHasBeenSet(false),
    m_instanceTenancy(Tenancy::NOT_SET),
    m_instanceTenancyHasBeenSet(false),
    m_offeringClass(OfferingClassType::NOT_SET),
    m_offeringClassHasBeenSet(false),
    m_offeringType(OfferingTypeValues::NOT_SET),
    m_offeringTypeHasBeenSet(false),
    m_recurringChargesHasBeenSet(false),
    m_scope(Scope::NOT_SET),
    m_scopeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

ReservedInstances& ReservedInstances::operator =(const XmlNode& xmlNode)
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
    XmlNode endNode = resultNode.FirstChild("end");
    if(!endNode.IsNull())
    {
      m_end = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(endNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_endHasBeenSet = true;
    }
    XmlNode fixedPriceNode = resultNode.FirstChild("fixedPrice");
    if(!fixedPriceNode.IsNull())
    {
      m_fixedPrice = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(fixedPriceNode.GetText()).c_str()).c_str());
      m_fixedPriceHasBeenSet = true;
    }
    XmlNode instanceCountNode = resultNode.FirstChild("instanceCount");
    if(!instanceCountNode.IsNull())
    {
      m_instanceCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instanceCountNode.GetText()).c_str()).c_str());
      m_instanceCountHasBeenSet = true;
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
    XmlNode reservedInstancesIdNode = resultNode.FirstChild("reservedInstancesId");
    if(!reservedInstancesIdNode.IsNull())
    {
      m_reservedInstancesId = Aws::Utils::Xml::DecodeEscapedXmlText(reservedInstancesIdNode.GetText());
      m_reservedInstancesIdHasBeenSet = true;
    }
    XmlNode startNode = resultNode.FirstChild("start");
    if(!startNode.IsNull())
    {
      m_start = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(startNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_startHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = ReservedInstanceStateMapper::GetReservedInstanceStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
      m_stateHasBeenSet = true;
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
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
    }
  }

  return *this;
}

void ReservedInstances::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_durationHasBeenSet)
  {
      oStream << location << index << locationValue << ".Duration=" << m_duration << "&";
  }

  if(m_endHasBeenSet)
  {
      oStream << location << index << locationValue << ".End=" << StringUtils::URLEncode(m_end.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_fixedPriceHasBeenSet)
  {
      oStream << location << index << locationValue << ".FixedPrice=" << m_fixedPrice << "&";
  }

  if(m_instanceCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceCount=" << m_instanceCount << "&";
  }

  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceType=" << InstanceTypeMapper::GetNameForInstanceType(m_instanceType) << "&";
  }

  if(m_productDescriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".ProductDescription=" << RIProductDescriptionMapper::GetNameForRIProductDescription(m_productDescription) << "&";
  }

  if(m_reservedInstancesIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReservedInstancesId=" << StringUtils::URLEncode(m_reservedInstancesId.c_str()) << "&";
  }

  if(m_startHasBeenSet)
  {
      oStream << location << index << locationValue << ".Start=" << StringUtils::URLEncode(m_start.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << ReservedInstanceStateMapper::GetNameForReservedInstanceState(m_state) << "&";
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

  if(m_offeringClassHasBeenSet)
  {
      oStream << location << index << locationValue << ".OfferingClass=" << OfferingClassTypeMapper::GetNameForOfferingClassType(m_offeringClass) << "&";
  }

  if(m_offeringTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".OfferingType=" << OfferingTypeValuesMapper::GetNameForOfferingTypeValues(m_offeringType) << "&";
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

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }

}

void ReservedInstances::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if(m_durationHasBeenSet)
  {
      oStream << location << ".Duration=" << m_duration << "&";
  }
  if(m_endHasBeenSet)
  {
      oStream << location << ".End=" << StringUtils::URLEncode(m_end.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_fixedPriceHasBeenSet)
  {
      oStream << location << ".FixedPrice=" << m_fixedPrice << "&";
  }
  if(m_instanceCountHasBeenSet)
  {
      oStream << location << ".InstanceCount=" << m_instanceCount << "&";
  }
  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << ".InstanceType=" << InstanceTypeMapper::GetNameForInstanceType(m_instanceType) << "&";
  }
  if(m_productDescriptionHasBeenSet)
  {
      oStream << location << ".ProductDescription=" << RIProductDescriptionMapper::GetNameForRIProductDescription(m_productDescription) << "&";
  }
  if(m_reservedInstancesIdHasBeenSet)
  {
      oStream << location << ".ReservedInstancesId=" << StringUtils::URLEncode(m_reservedInstancesId.c_str()) << "&";
  }
  if(m_startHasBeenSet)
  {
      oStream << location << ".Start=" << StringUtils::URLEncode(m_start.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << ReservedInstanceStateMapper::GetNameForReservedInstanceState(m_state) << "&";
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
  if(m_offeringClassHasBeenSet)
  {
      oStream << location << ".OfferingClass=" << OfferingClassTypeMapper::GetNameForOfferingClassType(m_offeringClass) << "&";
  }
  if(m_offeringTypeHasBeenSet)
  {
      oStream << location << ".OfferingType=" << OfferingTypeValuesMapper::GetNameForOfferingTypeValues(m_offeringType) << "&";
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
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location <<  ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
