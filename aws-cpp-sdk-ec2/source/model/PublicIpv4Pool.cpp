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

#include <aws/ec2/model/PublicIpv4Pool.h>
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

PublicIpv4Pool::PublicIpv4Pool() : 
    m_poolIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_poolAddressRangesHasBeenSet(false),
    m_totalAddressCount(0),
    m_totalAddressCountHasBeenSet(false),
    m_totalAvailableAddressCount(0),
    m_totalAvailableAddressCountHasBeenSet(false)
{
}

PublicIpv4Pool::PublicIpv4Pool(const XmlNode& xmlNode) : 
    m_poolIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_poolAddressRangesHasBeenSet(false),
    m_totalAddressCount(0),
    m_totalAddressCountHasBeenSet(false),
    m_totalAvailableAddressCount(0),
    m_totalAvailableAddressCountHasBeenSet(false)
{
  *this = xmlNode;
}

PublicIpv4Pool& PublicIpv4Pool::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode poolIdNode = resultNode.FirstChild("poolId");
    if(!poolIdNode.IsNull())
    {
      m_poolId = poolIdNode.GetText();
      m_poolIdHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
      m_descriptionHasBeenSet = true;
    }
    XmlNode poolAddressRangesNode = resultNode.FirstChild("poolAddressRangeSet");
    if(!poolAddressRangesNode.IsNull())
    {
      XmlNode poolAddressRangesMember = poolAddressRangesNode.FirstChild("item");
      while(!poolAddressRangesMember.IsNull())
      {
        m_poolAddressRanges.push_back(poolAddressRangesMember);
        poolAddressRangesMember = poolAddressRangesMember.NextNode("item");
      }

      m_poolAddressRangesHasBeenSet = true;
    }
    XmlNode totalAddressCountNode = resultNode.FirstChild("totalAddressCount");
    if(!totalAddressCountNode.IsNull())
    {
      m_totalAddressCount = StringUtils::ConvertToInt32(StringUtils::Trim(totalAddressCountNode.GetText().c_str()).c_str());
      m_totalAddressCountHasBeenSet = true;
    }
    XmlNode totalAvailableAddressCountNode = resultNode.FirstChild("totalAvailableAddressCount");
    if(!totalAvailableAddressCountNode.IsNull())
    {
      m_totalAvailableAddressCount = StringUtils::ConvertToInt32(StringUtils::Trim(totalAvailableAddressCountNode.GetText().c_str()).c_str());
      m_totalAvailableAddressCountHasBeenSet = true;
    }
  }

  return *this;
}

void PublicIpv4Pool::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_poolIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".PoolId=" << StringUtils::URLEncode(m_poolId.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_poolAddressRangesHasBeenSet)
  {
      unsigned poolAddressRangesIdx = 1;
      for(auto& item : m_poolAddressRanges)
      {
        Aws::StringStream poolAddressRangesSs;
        poolAddressRangesSs << location << index << locationValue << ".PoolAddressRangeSet." << poolAddressRangesIdx++;
        item.OutputToStream(oStream, poolAddressRangesSs.str().c_str());
      }
  }

  if(m_totalAddressCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".TotalAddressCount=" << m_totalAddressCount << "&";
  }

  if(m_totalAvailableAddressCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".TotalAvailableAddressCount=" << m_totalAvailableAddressCount << "&";
  }

}

void PublicIpv4Pool::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_poolIdHasBeenSet)
  {
      oStream << location << ".PoolId=" << StringUtils::URLEncode(m_poolId.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_poolAddressRangesHasBeenSet)
  {
      unsigned poolAddressRangesIdx = 1;
      for(auto& item : m_poolAddressRanges)
      {
        Aws::StringStream poolAddressRangesSs;
        poolAddressRangesSs << location <<  ".PoolAddressRangeSet." << poolAddressRangesIdx++;
        item.OutputToStream(oStream, poolAddressRangesSs.str().c_str());
      }
  }
  if(m_totalAddressCountHasBeenSet)
  {
      oStream << location << ".TotalAddressCount=" << m_totalAddressCount << "&";
  }
  if(m_totalAvailableAddressCountHasBeenSet)
  {
      oStream << location << ".TotalAvailableAddressCount=" << m_totalAvailableAddressCount << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
