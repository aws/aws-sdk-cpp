/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/SubnetIpPrefixes.h>
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

SubnetIpPrefixes::SubnetIpPrefixes(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

SubnetIpPrefixes& SubnetIpPrefixes::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode subnetIdNode = resultNode.FirstChild("subnetId");
    if(!subnetIdNode.IsNull())
    {
      m_subnetId = Aws::Utils::Xml::DecodeEscapedXmlText(subnetIdNode.GetText());
      m_subnetIdHasBeenSet = true;
    }
    XmlNode ipPrefixesNode = resultNode.FirstChild("ipPrefixSet");
    if(!ipPrefixesNode.IsNull())
    {
      XmlNode ipPrefixesMember = ipPrefixesNode.FirstChild("item");
      m_ipPrefixesHasBeenSet = !ipPrefixesMember.IsNull();
      while(!ipPrefixesMember.IsNull())
      {
        m_ipPrefixes.push_back(ipPrefixesMember.GetText());
        ipPrefixesMember = ipPrefixesMember.NextNode("item");
      }

      m_ipPrefixesHasBeenSet = true;
    }
  }

  return *this;
}

void SubnetIpPrefixes::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_subnetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }

  if(m_ipPrefixesHasBeenSet)
  {
      unsigned ipPrefixesIdx = 1;
      for(auto& item : m_ipPrefixes)
      {
        oStream << location << index << locationValue << ".IpPrefixSet." << ipPrefixesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void SubnetIpPrefixes::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_subnetIdHasBeenSet)
  {
      oStream << location << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }
  if(m_ipPrefixesHasBeenSet)
  {
      unsigned ipPrefixesIdx = 1;
      for(auto& item : m_ipPrefixes)
      {
        oStream << location << ".IpPrefixSet." << ipPrefixesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
