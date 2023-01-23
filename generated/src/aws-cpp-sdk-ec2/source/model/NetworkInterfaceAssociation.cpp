/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/NetworkInterfaceAssociation.h>
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

NetworkInterfaceAssociation::NetworkInterfaceAssociation() : 
    m_allocationIdHasBeenSet(false),
    m_associationIdHasBeenSet(false),
    m_ipOwnerIdHasBeenSet(false),
    m_publicDnsNameHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_customerOwnedIpHasBeenSet(false),
    m_carrierIpHasBeenSet(false)
{
}

NetworkInterfaceAssociation::NetworkInterfaceAssociation(const XmlNode& xmlNode) : 
    m_allocationIdHasBeenSet(false),
    m_associationIdHasBeenSet(false),
    m_ipOwnerIdHasBeenSet(false),
    m_publicDnsNameHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_customerOwnedIpHasBeenSet(false),
    m_carrierIpHasBeenSet(false)
{
  *this = xmlNode;
}

NetworkInterfaceAssociation& NetworkInterfaceAssociation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode allocationIdNode = resultNode.FirstChild("allocationId");
    if(!allocationIdNode.IsNull())
    {
      m_allocationId = Aws::Utils::Xml::DecodeEscapedXmlText(allocationIdNode.GetText());
      m_allocationIdHasBeenSet = true;
    }
    XmlNode associationIdNode = resultNode.FirstChild("associationId");
    if(!associationIdNode.IsNull())
    {
      m_associationId = Aws::Utils::Xml::DecodeEscapedXmlText(associationIdNode.GetText());
      m_associationIdHasBeenSet = true;
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
    XmlNode customerOwnedIpNode = resultNode.FirstChild("customerOwnedIp");
    if(!customerOwnedIpNode.IsNull())
    {
      m_customerOwnedIp = Aws::Utils::Xml::DecodeEscapedXmlText(customerOwnedIpNode.GetText());
      m_customerOwnedIpHasBeenSet = true;
    }
    XmlNode carrierIpNode = resultNode.FirstChild("carrierIp");
    if(!carrierIpNode.IsNull())
    {
      m_carrierIp = Aws::Utils::Xml::DecodeEscapedXmlText(carrierIpNode.GetText());
      m_carrierIpHasBeenSet = true;
    }
  }

  return *this;
}

void NetworkInterfaceAssociation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_allocationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllocationId=" << StringUtils::URLEncode(m_allocationId.c_str()) << "&";
  }

  if(m_associationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AssociationId=" << StringUtils::URLEncode(m_associationId.c_str()) << "&";
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

  if(m_customerOwnedIpHasBeenSet)
  {
      oStream << location << index << locationValue << ".CustomerOwnedIp=" << StringUtils::URLEncode(m_customerOwnedIp.c_str()) << "&";
  }

  if(m_carrierIpHasBeenSet)
  {
      oStream << location << index << locationValue << ".CarrierIp=" << StringUtils::URLEncode(m_carrierIp.c_str()) << "&";
  }

}

void NetworkInterfaceAssociation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_allocationIdHasBeenSet)
  {
      oStream << location << ".AllocationId=" << StringUtils::URLEncode(m_allocationId.c_str()) << "&";
  }
  if(m_associationIdHasBeenSet)
  {
      oStream << location << ".AssociationId=" << StringUtils::URLEncode(m_associationId.c_str()) << "&";
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
  if(m_customerOwnedIpHasBeenSet)
  {
      oStream << location << ".CustomerOwnedIp=" << StringUtils::URLEncode(m_customerOwnedIp.c_str()) << "&";
  }
  if(m_carrierIpHasBeenSet)
  {
      oStream << location << ".CarrierIp=" << StringUtils::URLEncode(m_carrierIp.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
