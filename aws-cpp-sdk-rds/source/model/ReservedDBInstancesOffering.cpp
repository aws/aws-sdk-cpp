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

#include <aws/rds/model/ReservedDBInstancesOffering.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
{
namespace Model
{

ReservedDBInstancesOffering::ReservedDBInstancesOffering() : 
    m_reservedDBInstancesOfferingIdHasBeenSet(false),
    m_dBInstanceClassHasBeenSet(false),
    m_duration(0),
    m_durationHasBeenSet(false),
    m_fixedPrice(0.0),
    m_fixedPriceHasBeenSet(false),
    m_usagePrice(0.0),
    m_usagePriceHasBeenSet(false),
    m_currencyCodeHasBeenSet(false),
    m_productDescriptionHasBeenSet(false),
    m_offeringTypeHasBeenSet(false),
    m_multiAZ(false),
    m_multiAZHasBeenSet(false),
    m_recurringChargesHasBeenSet(false)
{
}

ReservedDBInstancesOffering::ReservedDBInstancesOffering(const XmlNode& xmlNode) : 
    m_reservedDBInstancesOfferingIdHasBeenSet(false),
    m_dBInstanceClassHasBeenSet(false),
    m_duration(0),
    m_durationHasBeenSet(false),
    m_fixedPrice(0.0),
    m_fixedPriceHasBeenSet(false),
    m_usagePrice(0.0),
    m_usagePriceHasBeenSet(false),
    m_currencyCodeHasBeenSet(false),
    m_productDescriptionHasBeenSet(false),
    m_offeringTypeHasBeenSet(false),
    m_multiAZ(false),
    m_multiAZHasBeenSet(false),
    m_recurringChargesHasBeenSet(false)
{
  *this = xmlNode;
}

ReservedDBInstancesOffering& ReservedDBInstancesOffering::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode reservedDBInstancesOfferingIdNode = resultNode.FirstChild("ReservedDBInstancesOfferingId");
    if(!reservedDBInstancesOfferingIdNode.IsNull())
    {
      m_reservedDBInstancesOfferingId = reservedDBInstancesOfferingIdNode.GetText();
      m_reservedDBInstancesOfferingIdHasBeenSet = true;
    }
    XmlNode dBInstanceClassNode = resultNode.FirstChild("DBInstanceClass");
    if(!dBInstanceClassNode.IsNull())
    {
      m_dBInstanceClass = dBInstanceClassNode.GetText();
      m_dBInstanceClassHasBeenSet = true;
    }
    XmlNode durationNode = resultNode.FirstChild("Duration");
    if(!durationNode.IsNull())
    {
      m_duration = StringUtils::ConvertToInt32(StringUtils::Trim(durationNode.GetText().c_str()).c_str());
      m_durationHasBeenSet = true;
    }
    XmlNode fixedPriceNode = resultNode.FirstChild("FixedPrice");
    if(!fixedPriceNode.IsNull())
    {
      m_fixedPrice = StringUtils::ConvertToDouble(StringUtils::Trim(fixedPriceNode.GetText().c_str()).c_str());
      m_fixedPriceHasBeenSet = true;
    }
    XmlNode usagePriceNode = resultNode.FirstChild("UsagePrice");
    if(!usagePriceNode.IsNull())
    {
      m_usagePrice = StringUtils::ConvertToDouble(StringUtils::Trim(usagePriceNode.GetText().c_str()).c_str());
      m_usagePriceHasBeenSet = true;
    }
    XmlNode currencyCodeNode = resultNode.FirstChild("CurrencyCode");
    if(!currencyCodeNode.IsNull())
    {
      m_currencyCode = currencyCodeNode.GetText();
      m_currencyCodeHasBeenSet = true;
    }
    XmlNode productDescriptionNode = resultNode.FirstChild("ProductDescription");
    if(!productDescriptionNode.IsNull())
    {
      m_productDescription = productDescriptionNode.GetText();
      m_productDescriptionHasBeenSet = true;
    }
    XmlNode offeringTypeNode = resultNode.FirstChild("OfferingType");
    if(!offeringTypeNode.IsNull())
    {
      m_offeringType = offeringTypeNode.GetText();
      m_offeringTypeHasBeenSet = true;
    }
    XmlNode multiAZNode = resultNode.FirstChild("MultiAZ");
    if(!multiAZNode.IsNull())
    {
      m_multiAZ = StringUtils::ConvertToBool(StringUtils::Trim(multiAZNode.GetText().c_str()).c_str());
      m_multiAZHasBeenSet = true;
    }
    XmlNode recurringChargesNode = resultNode.FirstChild("RecurringCharges");
    if(!recurringChargesNode.IsNull())
    {
      XmlNode recurringChargesMember = recurringChargesNode.FirstChild("RecurringCharge");
      while(!recurringChargesMember.IsNull())
      {
        m_recurringCharges.push_back(recurringChargesMember);
        recurringChargesMember = recurringChargesMember.NextNode("RecurringCharge");
      }

      m_recurringChargesHasBeenSet = true;
    }
  }

  return *this;
}

void ReservedDBInstancesOffering::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_reservedDBInstancesOfferingIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReservedDBInstancesOfferingId=" << StringUtils::URLEncode(m_reservedDBInstancesOfferingId.c_str()) << "&";
  }

  if(m_dBInstanceClassHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBInstanceClass=" << StringUtils::URLEncode(m_dBInstanceClass.c_str()) << "&";
  }

  if(m_durationHasBeenSet)
  {
      oStream << location << index << locationValue << ".Duration=" << m_duration << "&";
  }

  if(m_fixedPriceHasBeenSet)
  {
        oStream << location << index << locationValue << ".FixedPrice=" << StringUtils::URLEncode(m_fixedPrice) << "&";
  }

  if(m_usagePriceHasBeenSet)
  {
        oStream << location << index << locationValue << ".UsagePrice=" << StringUtils::URLEncode(m_usagePrice) << "&";
  }

  if(m_currencyCodeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CurrencyCode=" << StringUtils::URLEncode(m_currencyCode.c_str()) << "&";
  }

  if(m_productDescriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".ProductDescription=" << StringUtils::URLEncode(m_productDescription.c_str()) << "&";
  }

  if(m_offeringTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".OfferingType=" << StringUtils::URLEncode(m_offeringType.c_str()) << "&";
  }

  if(m_multiAZHasBeenSet)
  {
      oStream << location << index << locationValue << ".MultiAZ=" << std::boolalpha << m_multiAZ << "&";
  }

  if(m_recurringChargesHasBeenSet)
  {
      unsigned recurringChargesIdx = 1;
      for(auto& item : m_recurringCharges)
      {
        Aws::StringStream recurringChargesSs;
        recurringChargesSs << location << index << locationValue << ".RecurringCharge." << recurringChargesIdx++;
        item.OutputToStream(oStream, recurringChargesSs.str().c_str());
      }
  }

}

void ReservedDBInstancesOffering::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_reservedDBInstancesOfferingIdHasBeenSet)
  {
      oStream << location << ".ReservedDBInstancesOfferingId=" << StringUtils::URLEncode(m_reservedDBInstancesOfferingId.c_str()) << "&";
  }
  if(m_dBInstanceClassHasBeenSet)
  {
      oStream << location << ".DBInstanceClass=" << StringUtils::URLEncode(m_dBInstanceClass.c_str()) << "&";
  }
  if(m_durationHasBeenSet)
  {
      oStream << location << ".Duration=" << m_duration << "&";
  }
  if(m_fixedPriceHasBeenSet)
  {
        oStream << location << ".FixedPrice=" << StringUtils::URLEncode(m_fixedPrice) << "&";
  }
  if(m_usagePriceHasBeenSet)
  {
        oStream << location << ".UsagePrice=" << StringUtils::URLEncode(m_usagePrice) << "&";
  }
  if(m_currencyCodeHasBeenSet)
  {
      oStream << location << ".CurrencyCode=" << StringUtils::URLEncode(m_currencyCode.c_str()) << "&";
  }
  if(m_productDescriptionHasBeenSet)
  {
      oStream << location << ".ProductDescription=" << StringUtils::URLEncode(m_productDescription.c_str()) << "&";
  }
  if(m_offeringTypeHasBeenSet)
  {
      oStream << location << ".OfferingType=" << StringUtils::URLEncode(m_offeringType.c_str()) << "&";
  }
  if(m_multiAZHasBeenSet)
  {
      oStream << location << ".MultiAZ=" << std::boolalpha << m_multiAZ << "&";
  }
  if(m_recurringChargesHasBeenSet)
  {
      unsigned recurringChargesIdx = 1;
      for(auto& item : m_recurringCharges)
      {
        Aws::StringStream recurringChargesSs;
        recurringChargesSs << location <<  ".RecurringCharge." << recurringChargesIdx++;
        item.OutputToStream(oStream, recurringChargesSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
