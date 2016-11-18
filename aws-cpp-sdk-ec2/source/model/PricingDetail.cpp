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
    m_price(0.0),
    m_priceHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false)
{
}

PricingDetail::PricingDetail(const XmlNode& xmlNode) : 
    m_price(0.0),
    m_priceHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false)
{
  *this = xmlNode;
}

PricingDetail& PricingDetail::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode priceNode = resultNode.FirstChild("price");
    if(!priceNode.IsNull())
    {
      m_price = StringUtils::ConvertToDouble(StringUtils::Trim(priceNode.GetText().c_str()).c_str());
      m_priceHasBeenSet = true;
    }
    XmlNode countNode = resultNode.FirstChild("count");
    if(!countNode.IsNull())
    {
      m_count = StringUtils::ConvertToInt32(StringUtils::Trim(countNode.GetText().c_str()).c_str());
      m_countHasBeenSet = true;
    }
  }

  return *this;
}

void PricingDetail::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_priceHasBeenSet)
  {
        oStream << location << index << locationValue << ".Price=" << StringUtils::URLEncode(m_price) << "&";
  }

  if(m_countHasBeenSet)
  {
      oStream << location << index << locationValue << ".Count=" << m_count << "&";
  }

}

void PricingDetail::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_priceHasBeenSet)
  {
        oStream << location << ".Price=" << StringUtils::URLEncode(m_price) << "&";
  }
  if(m_countHasBeenSet)
  {
      oStream << location << ".Count=" << m_count << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
