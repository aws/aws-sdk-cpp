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

#include <aws/ec2/model/IpPermission.h>
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

IpPermission::IpPermission() : 
    m_fromPort(0),
    m_fromPortHasBeenSet(false),
    m_ipProtocolHasBeenSet(false),
    m_ipRangesHasBeenSet(false),
    m_ipv6RangesHasBeenSet(false),
    m_prefixListIdsHasBeenSet(false),
    m_toPort(0),
    m_toPortHasBeenSet(false),
    m_userIdGroupPairsHasBeenSet(false)
{
}

IpPermission::IpPermission(const XmlNode& xmlNode) : 
    m_fromPort(0),
    m_fromPortHasBeenSet(false),
    m_ipProtocolHasBeenSet(false),
    m_ipRangesHasBeenSet(false),
    m_ipv6RangesHasBeenSet(false),
    m_prefixListIdsHasBeenSet(false),
    m_toPort(0),
    m_toPortHasBeenSet(false),
    m_userIdGroupPairsHasBeenSet(false)
{
  *this = xmlNode;
}

IpPermission& IpPermission::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode fromPortNode = resultNode.FirstChild("fromPort");
    if(!fromPortNode.IsNull())
    {
      m_fromPort = StringUtils::ConvertToInt32(StringUtils::Trim(fromPortNode.GetText().c_str()).c_str());
      m_fromPortHasBeenSet = true;
    }
    XmlNode ipProtocolNode = resultNode.FirstChild("ipProtocol");
    if(!ipProtocolNode.IsNull())
    {
      m_ipProtocol = ipProtocolNode.GetText();
      m_ipProtocolHasBeenSet = true;
    }
    XmlNode ipRangesNode = resultNode.FirstChild("ipRanges");
    if(!ipRangesNode.IsNull())
    {
      XmlNode ipRangesMember = ipRangesNode.FirstChild("item");
      while(!ipRangesMember.IsNull())
      {
        m_ipRanges.push_back(ipRangesMember);
        ipRangesMember = ipRangesMember.NextNode("item");
      }

      m_ipRangesHasBeenSet = true;
    }
    XmlNode ipv6RangesNode = resultNode.FirstChild("ipv6Ranges");
    if(!ipv6RangesNode.IsNull())
    {
      XmlNode ipv6RangesMember = ipv6RangesNode.FirstChild("item");
      while(!ipv6RangesMember.IsNull())
      {
        m_ipv6Ranges.push_back(ipv6RangesMember);
        ipv6RangesMember = ipv6RangesMember.NextNode("item");
      }

      m_ipv6RangesHasBeenSet = true;
    }
    XmlNode prefixListIdsNode = resultNode.FirstChild("prefixListIds");
    if(!prefixListIdsNode.IsNull())
    {
      XmlNode prefixListIdsMember = prefixListIdsNode.FirstChild("item");
      while(!prefixListIdsMember.IsNull())
      {
        m_prefixListIds.push_back(prefixListIdsMember);
        prefixListIdsMember = prefixListIdsMember.NextNode("item");
      }

      m_prefixListIdsHasBeenSet = true;
    }
    XmlNode toPortNode = resultNode.FirstChild("toPort");
    if(!toPortNode.IsNull())
    {
      m_toPort = StringUtils::ConvertToInt32(StringUtils::Trim(toPortNode.GetText().c_str()).c_str());
      m_toPortHasBeenSet = true;
    }
    XmlNode userIdGroupPairsNode = resultNode.FirstChild("groups");
    if(!userIdGroupPairsNode.IsNull())
    {
      XmlNode userIdGroupPairsMember = userIdGroupPairsNode.FirstChild("item");
      while(!userIdGroupPairsMember.IsNull())
      {
        m_userIdGroupPairs.push_back(userIdGroupPairsMember);
        userIdGroupPairsMember = userIdGroupPairsMember.NextNode("item");
      }

      m_userIdGroupPairsHasBeenSet = true;
    }
  }

  return *this;
}

void IpPermission::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_fromPortHasBeenSet)
  {
      oStream << location << index << locationValue << ".FromPort=" << m_fromPort << "&";
  }

  if(m_ipProtocolHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpProtocol=" << StringUtils::URLEncode(m_ipProtocol.c_str()) << "&";
  }

  if(m_ipRangesHasBeenSet)
  {
      unsigned ipRangesIdx = 1;
      for(auto& item : m_ipRanges)
      {
        Aws::StringStream ipRangesSs;
        ipRangesSs << location << index << locationValue << ".IpRanges." << ipRangesIdx++;
        item.OutputToStream(oStream, ipRangesSs.str().c_str());
      }
  }

  if(m_ipv6RangesHasBeenSet)
  {
      unsigned ipv6RangesIdx = 1;
      for(auto& item : m_ipv6Ranges)
      {
        Aws::StringStream ipv6RangesSs;
        ipv6RangesSs << location << index << locationValue << ".Ipv6Ranges." << ipv6RangesIdx++;
        item.OutputToStream(oStream, ipv6RangesSs.str().c_str());
      }
  }

  if(m_prefixListIdsHasBeenSet)
  {
      unsigned prefixListIdsIdx = 1;
      for(auto& item : m_prefixListIds)
      {
        Aws::StringStream prefixListIdsSs;
        prefixListIdsSs << location << index << locationValue << ".PrefixListIds." << prefixListIdsIdx++;
        item.OutputToStream(oStream, prefixListIdsSs.str().c_str());
      }
  }

  if(m_toPortHasBeenSet)
  {
      oStream << location << index << locationValue << ".ToPort=" << m_toPort << "&";
  }

  if(m_userIdGroupPairsHasBeenSet)
  {
      unsigned userIdGroupPairsIdx = 1;
      for(auto& item : m_userIdGroupPairs)
      {
        Aws::StringStream userIdGroupPairsSs;
        userIdGroupPairsSs << location << index << locationValue << ".Groups." << userIdGroupPairsIdx++;
        item.OutputToStream(oStream, userIdGroupPairsSs.str().c_str());
      }
  }

}

void IpPermission::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_fromPortHasBeenSet)
  {
      oStream << location << ".FromPort=" << m_fromPort << "&";
  }
  if(m_ipProtocolHasBeenSet)
  {
      oStream << location << ".IpProtocol=" << StringUtils::URLEncode(m_ipProtocol.c_str()) << "&";
  }
  if(m_ipRangesHasBeenSet)
  {
      unsigned ipRangesIdx = 1;
      for(auto& item : m_ipRanges)
      {
        Aws::StringStream ipRangesSs;
        ipRangesSs << location <<  ".IpRanges." << ipRangesIdx++;
        item.OutputToStream(oStream, ipRangesSs.str().c_str());
      }
  }
  if(m_ipv6RangesHasBeenSet)
  {
      unsigned ipv6RangesIdx = 1;
      for(auto& item : m_ipv6Ranges)
      {
        Aws::StringStream ipv6RangesSs;
        ipv6RangesSs << location <<  ".Ipv6Ranges." << ipv6RangesIdx++;
        item.OutputToStream(oStream, ipv6RangesSs.str().c_str());
      }
  }
  if(m_prefixListIdsHasBeenSet)
  {
      unsigned prefixListIdsIdx = 1;
      for(auto& item : m_prefixListIds)
      {
        Aws::StringStream prefixListIdsSs;
        prefixListIdsSs << location <<  ".PrefixListIds." << prefixListIdsIdx++;
        item.OutputToStream(oStream, prefixListIdsSs.str().c_str());
      }
  }
  if(m_toPortHasBeenSet)
  {
      oStream << location << ".ToPort=" << m_toPort << "&";
  }
  if(m_userIdGroupPairsHasBeenSet)
  {
      unsigned userIdGroupPairsIdx = 1;
      for(auto& item : m_userIdGroupPairs)
      {
        Aws::StringStream userIdGroupPairsSs;
        userIdGroupPairsSs << location <<  ".Groups." << userIdGroupPairsIdx++;
        item.OutputToStream(oStream, userIdGroupPairsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
