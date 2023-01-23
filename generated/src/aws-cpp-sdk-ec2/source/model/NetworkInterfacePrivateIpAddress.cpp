/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/NetworkInterfacePrivateIpAddress.h>
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

NetworkInterfacePrivateIpAddress::NetworkInterfacePrivateIpAddress() : 
    m_associationHasBeenSet(false),
    m_primary(false),
    m_primaryHasBeenSet(false),
    m_privateDnsNameHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false)
{
}

NetworkInterfacePrivateIpAddress::NetworkInterfacePrivateIpAddress(const XmlNode& xmlNode) : 
    m_associationHasBeenSet(false),
    m_primary(false),
    m_primaryHasBeenSet(false),
    m_privateDnsNameHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false)
{
  *this = xmlNode;
}

NetworkInterfacePrivateIpAddress& NetworkInterfacePrivateIpAddress::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode associationNode = resultNode.FirstChild("association");
    if(!associationNode.IsNull())
    {
      m_association = associationNode;
      m_associationHasBeenSet = true;
    }
    XmlNode primaryNode = resultNode.FirstChild("primary");
    if(!primaryNode.IsNull())
    {
      m_primary = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(primaryNode.GetText()).c_str()).c_str());
      m_primaryHasBeenSet = true;
    }
    XmlNode privateDnsNameNode = resultNode.FirstChild("privateDnsName");
    if(!privateDnsNameNode.IsNull())
    {
      m_privateDnsName = Aws::Utils::Xml::DecodeEscapedXmlText(privateDnsNameNode.GetText());
      m_privateDnsNameHasBeenSet = true;
    }
    XmlNode privateIpAddressNode = resultNode.FirstChild("privateIpAddress");
    if(!privateIpAddressNode.IsNull())
    {
      m_privateIpAddress = Aws::Utils::Xml::DecodeEscapedXmlText(privateIpAddressNode.GetText());
      m_privateIpAddressHasBeenSet = true;
    }
  }

  return *this;
}

void NetworkInterfacePrivateIpAddress::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_associationHasBeenSet)
  {
      Aws::StringStream associationLocationAndMemberSs;
      associationLocationAndMemberSs << location << index << locationValue << ".Association";
      m_association.OutputToStream(oStream, associationLocationAndMemberSs.str().c_str());
  }

  if(m_primaryHasBeenSet)
  {
      oStream << location << index << locationValue << ".Primary=" << std::boolalpha << m_primary << "&";
  }

  if(m_privateDnsNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".PrivateDnsName=" << StringUtils::URLEncode(m_privateDnsName.c_str()) << "&";
  }

  if(m_privateIpAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".PrivateIpAddress=" << StringUtils::URLEncode(m_privateIpAddress.c_str()) << "&";
  }

}

void NetworkInterfacePrivateIpAddress::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_associationHasBeenSet)
  {
      Aws::String associationLocationAndMember(location);
      associationLocationAndMember += ".Association";
      m_association.OutputToStream(oStream, associationLocationAndMember.c_str());
  }
  if(m_primaryHasBeenSet)
  {
      oStream << location << ".Primary=" << std::boolalpha << m_primary << "&";
  }
  if(m_privateDnsNameHasBeenSet)
  {
      oStream << location << ".PrivateDnsName=" << StringUtils::URLEncode(m_privateDnsName.c_str()) << "&";
  }
  if(m_privateIpAddressHasBeenSet)
  {
      oStream << location << ".PrivateIpAddress=" << StringUtils::URLEncode(m_privateIpAddress.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
