/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ReservedInstanceLimitPrice.h>
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

ReservedInstanceLimitPrice::ReservedInstanceLimitPrice(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ReservedInstanceLimitPrice& ReservedInstanceLimitPrice::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode amountNode = resultNode.FirstChild("amount");
    if(!amountNode.IsNull())
    {
      m_amount = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(amountNode.GetText()).c_str()).c_str());
      m_amountHasBeenSet = true;
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

void ReservedInstanceLimitPrice::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_amountHasBeenSet)
  {
        oStream << location << index << locationValue << ".Amount=" << StringUtils::URLEncode(m_amount) << "&";
  }

  if(m_currencyCodeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CurrencyCode=" << StringUtils::URLEncode(CurrencyCodeValuesMapper::GetNameForCurrencyCodeValues(m_currencyCode)) << "&";
  }

}

void ReservedInstanceLimitPrice::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_amountHasBeenSet)
  {
      oStream << location << ".Amount=" << StringUtils::URLEncode(m_amount) << "&";
  }
  if(m_currencyCodeHasBeenSet)
  {
      oStream << location << ".CurrencyCode=" << StringUtils::URLEncode(CurrencyCodeValuesMapper::GetNameForCurrencyCodeValues(m_currencyCode)) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
