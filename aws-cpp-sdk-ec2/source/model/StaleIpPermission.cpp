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

#include <aws/ec2/model/StaleIpPermission.h>
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

StaleIpPermission::StaleIpPermission() : 
    m_fromPort(0),
    m_fromPortHasBeenSet(false),
    m_ipProtocolHasBeenSet(false),
    m_ipRangesHasBeenSet(false),
    m_prefixListIdsHasBeenSet(false),
    m_toPort(0),
    m_toPortHasBeenSet(false),
    m_userIdGroupPairsHasBeenSet(false)
{
}

StaleIpPermission::StaleIpPermission(const XmlNode& xmlNode) : 
    m_fromPort(0),
    m_fromPortHasBeenSet(false),
    m_ipProtocolHasBeenSet(false),
    m_ipRangesHasBeenSet(false),
    m_prefixListIdsHasBeenSet(false),
    m_toPort(0),
    m_toPortHasBeenSet(false),
    m_userIdGroupPairsHasBeenSet(false)
{
  *this = xmlNode;
}

StaleIpPermission& StaleIpPermission::operator =(const XmlNode& xmlNode)
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
        m_ipRanges.push_back(ipRangesMember.GetText());
        ipRangesMember = ipRangesMember.NextNode("item");
      }

      m_ipRangesHasBeenSet = true;
    }
    XmlNode prefixListIdsNode = resultNode.FirstChild("prefixListIds");
    if(!prefixListIdsNode.IsNull())
    {
      XmlNode prefixListIdsMember = prefixListIdsNode.FirstChild("item");
      while(!prefixListIdsMember.IsNull())
      {
        m_prefixListIds.push_back(prefixListIdsMember.GetText());
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

void StaleIpPermission::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
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
        oStream << location << index << locationValue << ".IpRanges." << ipRangesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_prefixListIdsHasBeenSet)
  {
      unsigned prefixListIdsIdx = 1;
      for(auto& item : m_prefixListIds)
      {
        oStream << location << index << locationValue << ".PrefixListIds." << prefixListIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
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

void StaleIpPermission::OutputToStream(Aws::OStream& oStream, const char* location) const
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
        oStream << location << ".IpRanges." << ipRangesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_prefixListIdsHasBeenSet)
  {
      unsigned prefixListIdsIdx = 1;
      for(auto& item : m_prefixListIds)
      {
        oStream << location << ".PrefixListIds." << prefixListIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
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
