/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/PriceScheduleSpecification.h>
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

PriceScheduleSpecification::PriceScheduleSpecification(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

PriceScheduleSpecification& PriceScheduleSpecification::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode termNode = resultNode.FirstChild("term");
    if(!termNode.IsNull())
    {
      m_term = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(termNode.GetText()).c_str()).c_str());
      m_termHasBeenSet = true;
    }
    XmlNode priceNode = resultNode.FirstChild("price");
    if(!priceNode.IsNull())
    {
      m_price = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(priceNode.GetText()).c_str()).c_str());
      m_priceHasBeenSet = true;
    }
    XmlNode currencyCodeNode = resultNode.FirstChild("currencyCode");
    if(!currencyCodeNode.IsNull())
    {
      m_currencyCode = CurrencyCodeValuesMapper::GetCurrencyCodeValuesForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(currencyCodeNode.GetText()).c_str()));
      m_currencyCodeHasBeenSet = true;
    }
  }

  return *this;
}

void PriceScheduleSpecification::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_termHasBeenSet)
  {
      oStream << location << index << locationValue << ".Term=" << m_term << "&";
  }

  if(m_priceHasBeenSet)
  {
        oStream << location << index << locationValue << ".Price=" << StringUtils::URLEncode(m_price) << "&";
  }

  if(m_currencyCodeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CurrencyCode=" << StringUtils::URLEncode(CurrencyCodeValuesMapper::GetNameForCurrencyCodeValues(m_currencyCode)) << "&";
  }

}

void PriceScheduleSpecification::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_termHasBeenSet)
  {
      oStream << location << ".Term=" << m_term << "&";
  }
  if(m_priceHasBeenSet)
  {
      oStream << location << ".Price=" << StringUtils::URLEncode(m_price) << "&";
  }
  if(m_currencyCodeHasBeenSet)
  {
      oStream << location << ".CurrencyCode=" << StringUtils::URLEncode(CurrencyCodeValuesMapper::GetNameForCurrencyCodeValues(m_currencyCode)) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
