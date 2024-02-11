/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/SubnetConfiguration.h>
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

SubnetConfiguration::SubnetConfiguration() : 
    m_subnetIdHasBeenSet(false),
    m_ipv4HasBeenSet(false),
    m_ipv6HasBeenSet(false)
{
}

SubnetConfiguration::SubnetConfiguration(const XmlNode& xmlNode) : 
    m_subnetIdHasBeenSet(false),
    m_ipv4HasBeenSet(false),
    m_ipv6HasBeenSet(false)
{
  *this = xmlNode;
}

SubnetConfiguration& SubnetConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode subnetIdNode = resultNode.FirstChild("SubnetId");
    if(!subnetIdNode.IsNull())
    {
      m_subnetId = Aws::Utils::Xml::DecodeEscapedXmlText(subnetIdNode.GetText());
      m_subnetIdHasBeenSet = true;
    }
    XmlNode ipv4Node = resultNode.FirstChild("Ipv4");
    if(!ipv4Node.IsNull())
    {
      m_ipv4 = Aws::Utils::Xml::DecodeEscapedXmlText(ipv4Node.GetText());
      m_ipv4HasBeenSet = true;
    }
    XmlNode ipv6Node = resultNode.FirstChild("Ipv6");
    if(!ipv6Node.IsNull())
    {
      m_ipv6 = Aws::Utils::Xml::DecodeEscapedXmlText(ipv6Node.GetText());
      m_ipv6HasBeenSet = true;
    }
  }

  return *this;
}

void SubnetConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_subnetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }

  if(m_ipv4HasBeenSet)
  {
      oStream << location << index << locationValue << ".Ipv4=" << StringUtils::URLEncode(m_ipv4.c_str()) << "&";
  }

  if(m_ipv6HasBeenSet)
  {
      oStream << location << index << locationValue << ".Ipv6=" << StringUtils::URLEncode(m_ipv6.c_str()) << "&";
  }

}

void SubnetConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_subnetIdHasBeenSet)
  {
      oStream << location << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }
  if(m_ipv4HasBeenSet)
  {
      oStream << location << ".Ipv4=" << StringUtils::URLEncode(m_ipv4.c_str()) << "&";
  }
  if(m_ipv6HasBeenSet)
  {
      oStream << location << ".Ipv6=" << StringUtils::URLEncode(m_ipv6.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
