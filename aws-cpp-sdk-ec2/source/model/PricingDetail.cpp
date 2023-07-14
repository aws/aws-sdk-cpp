/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/PricingDetail.h>
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

PricingDetail::PricingDetail() : 
    m_count(0),
    m_countHasBeenSet(false),
    m_price(0.0),
    m_priceHasBeenSet(false)
{
}

PricingDetail::PricingDetail(const XmlNode& xmlNode) : 
    m_count(0),
    m_countHasBeenSet(false),
    m_price(0.0),
    m_priceHasBeenSet(false)
{
  *this = xmlNode;
}

PricingDetail& PricingDetail::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode countNode = resultNode.FirstChild("count");
    if(!countNode.IsNull())
    {
      m_count = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(countNode.GetText()).c_str()).c_str());
      m_countHasBeenSet = true;
    }
    XmlNode priceNode = resultNode.FirstChild("price");
    if(!priceNode.IsNull())
    {
      m_price = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(priceNode.GetText()).c_str()).c_str());
      m_priceHasBeenSet = true;
    }
  }

  return *this;
}

void PricingDetail::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_countHasBeenSet)
  {
      oStream << location << index << locationValue << ".Count=" << m_count << "&";
  }

  if(m_priceHasBeenSet)
  {
        oStream << location << index << locationValue << ".Price=" << StringUtils::URLEncode(m_price) << "&";
  }

}

void PricingDetail::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_countHasBeenSet)
  {
      oStream << location << ".Count=" << m_count << "&";
  }
  if(m_priceHasBeenSet)
  {
        oStream << location << ".Price=" << StringUtils::URLEncode(m_price) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
