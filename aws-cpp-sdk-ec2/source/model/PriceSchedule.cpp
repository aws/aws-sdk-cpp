/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/PriceSchedule.h>
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

PriceSchedule::PriceSchedule() : 
    m_active(false),
    m_activeHasBeenSet(false),
    m_currencyCode(CurrencyCodeValues::NOT_SET),
    m_currencyCodeHasBeenSet(false),
    m_price(0.0),
    m_priceHasBeenSet(false),
    m_term(0),
    m_termHasBeenSet(false)
{
}

PriceSchedule::PriceSchedule(const XmlNode& xmlNode) : 
    m_active(false),
    m_activeHasBeenSet(false),
    m_currencyCode(CurrencyCodeValues::NOT_SET),
    m_currencyCodeHasBeenSet(false),
    m_price(0.0),
    m_priceHasBeenSet(false),
    m_term(0),
    m_termHasBeenSet(false)
{
  *this = xmlNode;
}

PriceSchedule& PriceSchedule::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode activeNode = resultNode.FirstChild("active");
    if(!activeNode.IsNull())
    {
      m_active = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(activeNode.GetText()).c_str()).c_str());
      m_activeHasBeenSet = true;
    }
    XmlNode currencyCodeNode = resultNode.FirstChild("currencyCode");
    if(!currencyCodeNode.IsNull())
    {
      m_currencyCode = CurrencyCodeValuesMapper::GetCurrencyCodeValuesForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(currencyCodeNode.GetText()).c_str()).c_str());
      m_currencyCodeHasBeenSet = true;
    }
    XmlNode priceNode = resultNode.FirstChild("price");
    if(!priceNode.IsNull())
    {
      m_price = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(priceNode.GetText()).c_str()).c_str());
      m_priceHasBeenSet = true;
    }
    XmlNode termNode = resultNode.FirstChild("term");
    if(!termNode.IsNull())
    {
      m_term = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(termNode.GetText()).c_str()).c_str());
      m_termHasBeenSet = true;
    }
  }

  return *this;
}

void PriceSchedule::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_activeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Active=" << std::boolalpha << m_active << "&";
  }

  if(m_currencyCodeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CurrencyCode=" << CurrencyCodeValuesMapper::GetNameForCurrencyCodeValues(m_currencyCode) << "&";
  }

  if(m_priceHasBeenSet)
  {
        oStream << location << index << locationValue << ".Price=" << StringUtils::URLEncode(m_price) << "&";
  }

  if(m_termHasBeenSet)
  {
      oStream << location << index << locationValue << ".Term=" << m_term << "&";
  }

}

void PriceSchedule::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_activeHasBeenSet)
  {
      oStream << location << ".Active=" << std::boolalpha << m_active << "&";
  }
  if(m_currencyCodeHasBeenSet)
  {
      oStream << location << ".CurrencyCode=" << CurrencyCodeValuesMapper::GetNameForCurrencyCodeValues(m_currencyCode) << "&";
  }
  if(m_priceHasBeenSet)
  {
        oStream << location << ".Price=" << StringUtils::URLEncode(m_price) << "&";
  }
  if(m_termHasBeenSet)
  {
      oStream << location << ".Term=" << m_term << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
