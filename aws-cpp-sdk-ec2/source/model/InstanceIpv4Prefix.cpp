/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceIpv4Prefix.h>
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

InstanceIpv4Prefix::InstanceIpv4Prefix() : 
    m_ipv4PrefixHasBeenSet(false)
{
}

InstanceIpv4Prefix::InstanceIpv4Prefix(const XmlNode& xmlNode) : 
    m_ipv4PrefixHasBeenSet(false)
{
  *this = xmlNode;
}

InstanceIpv4Prefix& InstanceIpv4Prefix::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode ipv4PrefixNode = resultNode.FirstChild("ipv4Prefix");
    if(!ipv4PrefixNode.IsNull())
    {
      m_ipv4Prefix = Aws::Utils::Xml::DecodeEscapedXmlText(ipv4PrefixNode.GetText());
      m_ipv4PrefixHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceIpv4Prefix::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_ipv4PrefixHasBeenSet)
  {
      oStream << location << index << locationValue << ".Ipv4Prefix=" << StringUtils::URLEncode(m_ipv4Prefix.c_str()) << "&";
  }

}

void InstanceIpv4Prefix::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_ipv4PrefixHasBeenSet)
  {
      oStream << location << ".Ipv4Prefix=" << StringUtils::URLEncode(m_ipv4Prefix.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
