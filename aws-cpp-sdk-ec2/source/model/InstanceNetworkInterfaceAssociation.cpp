/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceNetworkInterfaceAssociation.h>
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

InstanceNetworkInterfaceAssociation::InstanceNetworkInterfaceAssociation() : 
    m_carrierIpHasBeenSet(false),
    m_ipOwnerIdHasBeenSet(false),
    m_publicDnsNameHasBeenSet(false),
    m_publicIpHasBeenSet(false)
{
}

InstanceNetworkInterfaceAssociation::InstanceNetworkInterfaceAssociation(const XmlNode& xmlNode) : 
    m_carrierIpHasBeenSet(false),
    m_ipOwnerIdHasBeenSet(false),
    m_publicDnsNameHasBeenSet(false),
    m_publicIpHasBeenSet(false)
{
  *this = xmlNode;
}

InstanceNetworkInterfaceAssociation& InstanceNetworkInterfaceAssociation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode carrierIpNode = resultNode.FirstChild("carrierIp");
    if(!carrierIpNode.IsNull())
    {
      m_carrierIp = Aws::Utils::Xml::DecodeEscapedXmlText(carrierIpNode.GetText());
      m_carrierIpHasBeenSet = true;
    }
    XmlNode ipOwnerIdNode = resultNode.FirstChild("ipOwnerId");
    if(!ipOwnerIdNode.IsNull())
    {
      m_ipOwnerId = Aws::Utils::Xml::DecodeEscapedXmlText(ipOwnerIdNode.GetText());
      m_ipOwnerIdHasBeenSet = true;
    }
    XmlNode publicDnsNameNode = resultNode.FirstChild("publicDnsName");
    if(!publicDnsNameNode.IsNull())
    {
      m_publicDnsName = Aws::Utils::Xml::DecodeEscapedXmlText(publicDnsNameNode.GetText());
      m_publicDnsNameHasBeenSet = true;
    }
    XmlNode publicIpNode = resultNode.FirstChild("publicIp");
    if(!publicIpNode.IsNull())
    {
      m_publicIp = Aws::Utils::Xml::DecodeEscapedXmlText(publicIpNode.GetText());
      m_publicIpHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceNetworkInterfaceAssociation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_carrierIpHasBeenSet)
  {
      oStream << location << index << locationValue << ".CarrierIp=" << StringUtils::URLEncode(m_carrierIp.c_str()) << "&";
  }

  if(m_ipOwnerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpOwnerId=" << StringUtils::URLEncode(m_ipOwnerId.c_str()) << "&";
  }

  if(m_publicDnsNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".PublicDnsName=" << StringUtils::URLEncode(m_publicDnsName.c_str()) << "&";
  }

  if(m_publicIpHasBeenSet)
  {
      oStream << location << index << locationValue << ".PublicIp=" << StringUtils::URLEncode(m_publicIp.c_str()) << "&";
  }

}

void InstanceNetworkInterfaceAssociation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_carrierIpHasBeenSet)
  {
      oStream << location << ".CarrierIp=" << StringUtils::URLEncode(m_carrierIp.c_str()) << "&";
  }
  if(m_ipOwnerIdHasBeenSet)
  {
      oStream << location << ".IpOwnerId=" << StringUtils::URLEncode(m_ipOwnerId.c_str()) << "&";
  }
  if(m_publicDnsNameHasBeenSet)
  {
      oStream << location << ".PublicDnsName=" << StringUtils::URLEncode(m_publicDnsName.c_str()) << "&";
  }
  if(m_publicIpHasBeenSet)
  {
      oStream << location << ".PublicIp=" << StringUtils::URLEncode(m_publicIp.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
