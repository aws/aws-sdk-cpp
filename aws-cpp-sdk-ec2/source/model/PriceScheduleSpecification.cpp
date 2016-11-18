/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

PriceScheduleSpecification::PriceScheduleSpecification() : 
    m_term(0),
    m_termHasBeenSet(false),
    m_price(0.0),
    m_priceHasBeenSet(false),
    m_currencyCode(CurrencyCodeValues::NOT_SET),
    m_currencyCodeHasBeenSet(false)
{
}

PriceScheduleSpecification::PriceScheduleSpecification(const XmlNode& xmlNode) : 
    m_term(0),
    m_termHasBeenSet(false),
    m_price(0.0),
    m_priceHasBeenSet(false),
    m_currencyCode(CurrencyCodeValues::NOT_SET),
    m_currencyCodeHasBeenSet(false)
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
      m_term = StringUtils::ConvertToInt64(StringUtils::Trim(termNode.GetText().c_str()).c_str());
      m_termHasBeenSet = true;
    }
    XmlNode priceNode = resultNode.FirstChild("price");
    if(!priceNode.IsNull())
    {
      m_price = StringUtils::ConvertToDouble(StringUtils::Trim(priceNode.GetText().c_str()).c_str());
      m_priceHasBeenSet = true;
    }
    XmlNode currencyCodeNode = resultNode.FirstChild("currencyCode");
    if(!currencyCodeNode.IsNull())
    {
      m_currencyCode = CurrencyCodeValuesMapper::GetCurrencyCodeValuesForName(StringUtils::Trim(currencyCodeNode.GetText().c_str()).c_str());
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
      oStream << location << index << locationValue << ".CurrencyCode=" << CurrencyCodeValuesMapper::GetNameForCurrencyCodeValues(m_currencyCode) << "&";
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
      oStream << location << ".CurrencyCode=" << CurrencyCodeValuesMapper::GetNameForCurrencyCodeValues(m_currencyCode) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
