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

#include <aws/ec2/model/HostOffering.h>
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

HostOffering::HostOffering() : 
    m_currencyCode(CurrencyCodeValues::NOT_SET),
    m_currencyCodeHasBeenSet(false),
    m_duration(0),
    m_durationHasBeenSet(false),
    m_hourlyPriceHasBeenSet(false),
    m_instanceFamilyHasBeenSet(false),
    m_offeringIdHasBeenSet(false),
    m_paymentOption(PaymentOption::NOT_SET),
    m_paymentOptionHasBeenSet(false),
    m_upfrontPriceHasBeenSet(false)
{
}

HostOffering::HostOffering(const XmlNode& xmlNode) : 
    m_currencyCode(CurrencyCodeValues::NOT_SET),
    m_currencyCodeHasBeenSet(false),
    m_duration(0),
    m_durationHasBeenSet(false),
    m_hourlyPriceHasBeenSet(false),
    m_instanceFamilyHasBeenSet(false),
    m_offeringIdHasBeenSet(false),
    m_paymentOption(PaymentOption::NOT_SET),
    m_paymentOptionHasBeenSet(false),
    m_upfrontPriceHasBeenSet(false)
{
  *this = xmlNode;
}

HostOffering& HostOffering::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode currencyCodeNode = resultNode.FirstChild("currencyCode");
    if(!currencyCodeNode.IsNull())
    {
      m_currencyCode = CurrencyCodeValuesMapper::GetCurrencyCodeValuesForName(StringUtils::Trim(currencyCodeNode.GetText().c_str()).c_str());
      m_currencyCodeHasBeenSet = true;
    }
    XmlNode durationNode = resultNode.FirstChild("duration");
    if(!durationNode.IsNull())
    {
      m_duration = StringUtils::ConvertToInt32(StringUtils::Trim(durationNode.GetText().c_str()).c_str());
      m_durationHasBeenSet = true;
    }
    XmlNode hourlyPriceNode = resultNode.FirstChild("hourlyPrice");
    if(!hourlyPriceNode.IsNull())
    {
      m_hourlyPrice = hourlyPriceNode.GetText();
      m_hourlyPriceHasBeenSet = true;
    }
    XmlNode instanceFamilyNode = resultNode.FirstChild("instanceFamily");
    if(!instanceFamilyNode.IsNull())
    {
      m_instanceFamily = instanceFamilyNode.GetText();
      m_instanceFamilyHasBeenSet = true;
    }
    XmlNode offeringIdNode = resultNode.FirstChild("offeringId");
    if(!offeringIdNode.IsNull())
    {
      m_offeringId = offeringIdNode.GetText();
      m_offeringIdHasBeenSet = true;
    }
    XmlNode paymentOptionNode = resultNode.FirstChild("paymentOption");
    if(!paymentOptionNode.IsNull())
    {
      m_paymentOption = PaymentOptionMapper::GetPaymentOptionForName(StringUtils::Trim(paymentOptionNode.GetText().c_str()).c_str());
      m_paymentOptionHasBeenSet = true;
    }
    XmlNode upfrontPriceNode = resultNode.FirstChild("upfrontPrice");
    if(!upfrontPriceNode.IsNull())
    {
      m_upfrontPrice = upfrontPriceNode.GetText();
      m_upfrontPriceHasBeenSet = true;
    }
  }

  return *this;
}

void HostOffering::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_currencyCodeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CurrencyCode=" << CurrencyCodeValuesMapper::GetNameForCurrencyCodeValues(m_currencyCode) << "&";
  }

  if(m_durationHasBeenSet)
  {
      oStream << location << index << locationValue << ".Duration=" << m_duration << "&";
  }

  if(m_hourlyPriceHasBeenSet)
  {
      oStream << location << index << locationValue << ".HourlyPrice=" << StringUtils::URLEncode(m_hourlyPrice.c_str()) << "&";
  }

  if(m_instanceFamilyHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceFamily=" << StringUtils::URLEncode(m_instanceFamily.c_str()) << "&";
  }

  if(m_offeringIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OfferingId=" << StringUtils::URLEncode(m_offeringId.c_str()) << "&";
  }

  if(m_paymentOptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".PaymentOption=" << PaymentOptionMapper::GetNameForPaymentOption(m_paymentOption) << "&";
  }

  if(m_upfrontPriceHasBeenSet)
  {
      oStream << location << index << locationValue << ".UpfrontPrice=" << StringUtils::URLEncode(m_upfrontPrice.c_str()) << "&";
  }

}

void HostOffering::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_currencyCodeHasBeenSet)
  {
      oStream << location << ".CurrencyCode=" << CurrencyCodeValuesMapper::GetNameForCurrencyCodeValues(m_currencyCode) << "&";
  }
  if(m_durationHasBeenSet)
  {
      oStream << location << ".Duration=" << m_duration << "&";
  }
  if(m_hourlyPriceHasBeenSet)
  {
      oStream << location << ".HourlyPrice=" << StringUtils::URLEncode(m_hourlyPrice.c_str()) << "&";
  }
  if(m_instanceFamilyHasBeenSet)
  {
      oStream << location << ".InstanceFamily=" << StringUtils::URLEncode(m_instanceFamily.c_str()) << "&";
  }
  if(m_offeringIdHasBeenSet)
  {
      oStream << location << ".OfferingId=" << StringUtils::URLEncode(m_offeringId.c_str()) << "&";
  }
  if(m_paymentOptionHasBeenSet)
  {
      oStream << location << ".PaymentOption=" << PaymentOptionMapper::GetNameForPaymentOption(m_paymentOption) << "&";
  }
  if(m_upfrontPriceHasBeenSet)
  {
      oStream << location << ".UpfrontPrice=" << StringUtils::URLEncode(m_upfrontPrice.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
